#!/usr/bin/env python3
"""
FPGA CNN Real-Time Detection with OpenCV Contour Detection
Automatically detects digits in frame, sends to ZedBoard FPGA
"""

import cv2
import numpy as np
import serial
import struct
import time
import sys

# ============================================================================
# CONFIGURATION
# ============================================================================

SERIAL_PORT = 'COM3'  # Change to your COM port
BAUD_RATE = 115200
START_MARKER = 0xAA
END_MARKER = 0x55

# MNIST normalization (from training)
MNIST_MEAN = 0.1307
MNIST_STD = 0.3081

# Detection parameters
MIN_CONTOUR_AREA = 2500  # Minimum area to consider as digit
THRESHOLD_VALUE = 80     # Binary threshold

# ============================================================================
# SERIAL CONNECTION
# ============================================================================

def init_serial():
    """Initialize serial connection to ZedBoard"""
    try:
        ser = serial.Serial(
            port=SERIAL_PORT,
            baudrate=BAUD_RATE,
            timeout=2,
            bytesize=serial.EIGHTBITS,
            parity=serial.PARITY_NONE,
            stopbits=serial.STOPBITS_ONE
        )
        print(f" Connected to {SERIAL_PORT} at {BAUD_RATE} baud")
        time.sleep(2)
        return ser
    except serial.SerialException as e:
        print(f" ERROR: Could not open {SERIAL_PORT}")
        print(f"   {e}")
        print(f"\n Check Device Manager for correct COM port")
        sys.exit(1)

# ============================================================================
# IMAGE PREPROCESSING (OpenCV Method)
# ============================================================================

def preprocess_for_mnist(roi):
    """
    Normalize to MNIST format
    Input: 28x28 grayscale (0-255)
    Output: normalized float array
    """
    normalized = roi.astype(np.float32) / 255.0
    normalized = (normalized - MNIST_MEAN) / MNIST_STD
    return normalized

def detect_and_extract_digit(frame):
    """
    Use OpenCV contour detection to find and extract digit
    Returns: (roi_28x28, bounding_box, preprocessed_roi) or (None, None, None)
    """
    # Convert to grayscale
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    
    # Apply Gaussian blur to reduce noise
    blurred = cv2.GaussianBlur(gray, (5, 5), 0)
    
    # Binary threshold (inverted - white digit on black background)
    _, thresh = cv2.threshold(blurred, THRESHOLD_VALUE, 255, cv2.THRESH_BINARY_INV)
    
    # Morphological dilation to connect broken parts
    kernel = np.ones((5, 5), np.uint8)
    dilated = cv2.dilate(thresh, kernel, iterations=1)
    
    # Edge detection
    edges = cv2.Canny(dilated, 50, 250)
    
    # Find contours
    contours, _ = cv2.findContours(edges, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    
    # If no contours found
    if len(contours) == 0:
        return None, None, None
    
    # Get largest contour
    largest_contour = max(contours, key=cv2.contourArea)
    
    # Check if contour is large enough
    if cv2.contourArea(largest_contour) < MIN_CONTOUR_AREA:
        return None, None, None
    
    # Get bounding box
    x, y, w, h = cv2.boundingRect(largest_contour)

    # ADD THIS: Add padding around digit
    padding = 10
    x = max(0, x - padding)
    y = max(0, y - padding)
    w = min(frame.shape[1] - x, w + 2*padding)
    h = min(frame.shape[0] - y, h + 2*padding)
    
    # Extract ROI
    roi = thresh[y:y+h, x:x+w]
    
    # ADD THIS: Make it square (MNIST is square)
    max_dim = max(w, h)
    square_roi = np.zeros((max_dim, max_dim), dtype=np.uint8)
    
    # Center the digit in square
    x_offset = (max_dim - w) // 2
    y_offset = (max_dim - h) // 2
    square_roi[y_offset:y_offset+h, x_offset:x_offset+w] = roi
    
    # Now resize to 28x28
    roi_resized = cv2.resize(square_roi, (28, 28), interpolation=cv2.INTER_AREA)
    
    # Extract ROI from thresholded image
    roi = thresh[y:y+h, x:x+w]
    
    # Resize to 28x28 (MNIST size)
    roi_resized = cv2.resize(roi, (28, 28), interpolation=cv2.INTER_AREA)
    
    # Preprocess for MNIST
    preprocessed = preprocess_for_mnist(roi_resized)
    
    return roi_resized, (x, y, w, h), preprocessed

# ============================================================================
# FPGA COMMUNICATION
# ============================================================================

def send_image_to_fpga(ser, image_array):
    """
    Send 28x28 image to ZedBoard
    Protocol: START_MARKER + 784 floats + END_MARKER
    """
    flat_image = image_array.flatten()
    data = struct.pack('<784f', *flat_image)
    
    ser.write(bytes([START_MARKER]))
    ser.write(data)
    ser.write(bytes([END_MARKER]))
    ser.flush()

def receive_prediction(ser):
    """
    Receive prediction from ZedBoard
    Protocol: START_MARKER + prediction byte + END_MARKER
    """
    try:
        # Wait for start marker
        while True:
            byte = ser.read(1)
            if len(byte) == 0:
                return None
            if byte[0] == START_MARKER:
                break
        
        # Read prediction
        pred_byte = ser.read(1)
        if len(pred_byte) == 0:
            return None
        
        # Read end marker
        end_byte = ser.read(1)
        if len(end_byte) == 0 or end_byte[0] != END_MARKER:
            return None
        
        return pred_byte[0]
    
    except Exception as e:
        print(f" Receive error: {e}")
        return None

# ============================================================================
# MAIN DETECTION LOOP
# ============================================================================

def main():
    print("=" * 70)
    print("FPGA CNN REAL-TIME DETECTION - OpenCV Contour Method")
    print("=" * 70)
    print()
    
    # Initialize
    ser = init_serial()
    cap = cv2.VideoCapture(0)
    
    if not cap.isOpened():
        print(" ERROR: Could not open webcam")
        sys.exit(1)
    
    print(" Webcam opened")
    print()
    print(" Instructions:")
    print("   - Draw WHITE digit on BLACK/DARK background")
    print("   - Or use white paper on dark surface")
    print("   - Digit will be detected automatically")
    print("   - Press 'q' to quit")
    print("   - Press 't' to adjust threshold")
    print("   - Press 's' to save frame")
    print()
    print("Starting in 3 seconds...")
    time.sleep(3)
    
    frame_count = 0
    prediction = None
    latency_ms = 0
    detection_active = False
    bbox = None
    
    # FPS tracking
    fps_start = time.time()
    fps_count = 0
    fps = 0
    
    print(" Detection started!\n")
    
    try:
        while True:
            ret, frame = cap.read()
            if not ret:
                print(" Failed to read frame")
                break
            
            # Detect digit using OpenCV
            roi_display, bbox, preprocessed = detect_and_extract_digit(frame)
            
            detection_active = (roi_display is not None)
            
            # If digit detected, send to FPGA (every 3rd frame to avoid overload)
            if detection_active and (frame_count % 3 == 0):
                start_time = time.time()
                
                send_image_to_fpga(ser, preprocessed)
                prediction = receive_prediction(ser)
                
                end_time = time.time()
                latency_ms = (end_time - start_time) * 1000
                
                if prediction is not None:
                    print(f"[{frame_count:04d}] Detected: {prediction} | "
                          f"Latency: {latency_ms:.1f}ms | "
                          f"Area: {bbox[2]*bbox[3]} px")
            
            # Calculate FPS
            fps_count += 1
            if fps_count >= 30:
                fps = 30 / (time.time() - fps_start)
                fps_start = time.time()
                fps_count = 0
            
            # ================================================================
            # VISUALIZATION
            # ================================================================
            
            display = frame.copy()
            h, w = display.shape[:2]
            
            # Draw bounding box if digit detected
            if detection_active and bbox is not None:
                x, y, w_box, h_box = bbox
                cv2.rectangle(display, (x, y), (x + w_box, y + h_box), 
                             (0, 255, 0), 3)
                
                # Show "DETECTED" label
                cv2.putText(display, "DIGIT DETECTED", 
                           (x, y - 10), cv2.FONT_HERSHEY_SIMPLEX, 
                           0.6, (0, 255, 0), 2)
            
            # Display prediction (large)
            if prediction is not None and detection_active:
                cv2.putText(display, f"Digit: {prediction}", 
                           (30, 80), cv2.FONT_HERSHEY_SIMPLEX, 
                           2.5, (0, 255, 0), 5)
            else:
                cv2.putText(display, "No digit detected", 
                           (30, 80), cv2.FONT_HERSHEY_SIMPLEX, 
                           1.0, (0, 0, 255), 2)
            
            # Display stats
            cv2.putText(display, f"Latency: {latency_ms:.0f}ms", 
                       (30, 130), cv2.FONT_HERSHEY_SIMPLEX, 
                       0.7, (255, 255, 0), 2)
            
            cv2.putText(display, f"FPS: {fps:.1f}", 
                       (30, 160), cv2.FONT_HERSHEY_SIMPLEX, 
                       0.7, (255, 255, 0), 2)
            
            cv2.putText(display, "FPGA Accelerated CNN", 
                       (30, 190), cv2.FONT_HERSHEY_SIMPLEX, 
                       0.7, (0, 200, 255), 2)
            
            cv2.putText(display, f"Frame: {frame_count}", 
                       (30, 220), cv2.FONT_HERSHEY_SIMPLEX, 
                       0.6, (255, 255, 255), 1)
            
            # Show processed ROI if detected
            if roi_display is not None:
                roi_large = cv2.resize(roi_display, (140, 140))
                roi_colored = cv2.cvtColor(roi_large, cv2.COLOR_GRAY2BGR)
                
                # Place in top-right corner
                display[10:150, w-150:w-10] = roi_colored
                
                cv2.putText(display, "Sent to FPGA", 
                           (w-145, 165), cv2.FONT_HERSHEY_SIMPLEX, 
                           0.5, (255, 255, 255), 1)
            
            # Show main window
            cv2.imshow('FPGA CNN Real-Time Detection', display)
            
            # Handle keyboard
            key = cv2.waitKey(1) & 0xFF
            
            if key == ord('q'):
                print("\n Quitting...")
                break
            
            elif key == ord('s'):
                filename = f"capture_{frame_count:04d}.png"
                cv2.imwrite(filename, display)
                print(f" Saved: {filename}")
            
            elif key == ord('t'):
                global THRESHOLD_VALUE
                THRESHOLD_VALUE = (THRESHOLD_VALUE + 10) % 150 + 50
                print(f"  Threshold adjusted to: {THRESHOLD_VALUE}")
            
            frame_count += 1
    
    except KeyboardInterrupt:
        print("\n\n Interrupted by user")
    
    finally:
        print("\n Cleaning up...")
        cap.release()
        cv2.destroyAllWindows()
        ser.close()
        
        print(f"\n Session Statistics:")
        print(f"   Frames processed: {frame_count}")
        print(f"   Average latency: {latency_ms:.1f}ms")
        print(" Done!")

# ============================================================================
# ENTRY POINT
# ============================================================================

if __name__ == "__main__":
    main()
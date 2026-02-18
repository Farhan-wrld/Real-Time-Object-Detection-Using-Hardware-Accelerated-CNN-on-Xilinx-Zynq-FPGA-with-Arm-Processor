# FPGA-Accelerated CNN for Real-Time MNIST Digit Recognition

[![Platform](https://img.shields.io/badge/Platform-Xilinx_Zynq--7000-blue)](https://www.xilinx.com/)
[![Board](https://img.shields.io/badge/Board-ZedBoard-orange)](https://www.avnet.com/wps/portal/us/products/avnet-boards/avnet-board-families/zedboard/)
[![Python](https://img.shields.io/badge/Python-3.8+-green)](https://www.python.org/)
[![License](https://img.shields.io/badge/License-MIT-yellow)](LICENSE)

A hybrid CPU-FPGA system for real-time handwritten digit recognition using a Convolutional Neural Network (CNN) accelerated on Xilinx Zynq-7000 SoC.

![Demo](assets/demo.gif)
*Real-time digit detection with FPGA acceleration*

---

## 📋 Table of Contents

- [Overview](#overview)
- [Features](#features)
- [System Architecture](#system-architecture)
- [Performance](#performance)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Results](#results)
- [Acknowledgments](#acknowledgments)

---

## 🎯 Overview

This project implements a real-time handwritten digit recognition system that combines:
- **CNN trained on MNIST dataset** (95%+ accuracy)
- **FPGA-accelerated Conv1 layer** on Xilinx Zynq-7000
- **CPU-based remaining layers** for flexibility
- **Real-time webcam detection** via OpenCV

The system achieves **1.10x speedup** over pure CPU implementation while maintaining **70-80% accuracy** on real-time webcam input.

### Key Achievements
✅ Successfully trained CNN with 95%+ accuracy on MNIST  
✅ Implemented Conv1 layer in HLS for FPGA acceleration  
✅ Achieved 27.39ms hybrid inference time (vs 30.26ms CPU baseline)  
✅ Built complete real-time detection pipeline with webcam input  
✅ Automatic digit detection using OpenCV contour analysis  

---

## ✨ Features

### FPGA Acceleration
- **Conv1 Layer** accelerated on Programmable Logic (PL)
- **AXI-Lite** control interface
- **M_AXI** memory-mapped interface for DDR access
- **Optimized HLS design** with pipelining and local buffering

### Real-Time Detection
- **Automatic digit detection** using OpenCV contours
- **Adaptive preprocessing** to match MNIST training data
- **UART communication** between PC and ZedBoard
- **Live visualization** with bounding boxes and predictions

### Hybrid Architecture
- **Conv1**: FPGA (2.95ms)
- **MaxPool, Conv2, FC**: ARM Cortex-A9 CPU
- **Efficient data flow** between PL and PS

---

## 🏗️ System Architecture

```
┌───────────────────────────────────────────────────────────┐
│                    PC with Webcam                         │
│  ┌──────────────┐         ┌──────────────────┐            │
│  │  OpenCV      │────────>│  Python Script   │            │
│  │  Detection   │         │  Preprocessing   │            │
│  └──────────────┘         └─────────┬────────┘            │
└────────────────────────────────────┼──────────────────────┘
                                     │ UART
                                     │ (115200 baud)
                                     ▼
┌────────────────────────────────────────────────────────────┐
│                  Xilinx Zynq-7000 SoC                      │
│  ┌──────────────────────────────────────────────────────┐  │
│  │           Processing System (PS)                     │  │
│  │  ┌────────────────────────────────────────────────┐  │  │
│  │  │  ARM Cortex-A9 (667 MHz)                       │  │  │
│  │  │  - UART receiver                               │  │  │
│  │  │  - MaxPool layers                              │  │  │
│  │  │  - Conv2 layer                                 │  │  │
│  │  │  - Fully Connected layer                       │  │  │
│  │  │  - Prediction logic                            │  │  │
│  │  └─────────────┬──────────────────────────────────┘  │  │
│  └────────────────┼─────────────────────────────────────┘  │
│                   │ AXI Interface                          │
│                   ▼                                        │
│  ┌──────────────────────────────────────────────────────┐  │
│  │      Programmable Logic (PL)                         │  │
│  │  ┌────────────────────────────────────────────────┐  │  │
│  │  │  Conv1 Accelerator (HLS)                       │  │  │
│  │  │  - 8 filters, 3×3 kernel                       │  │  │
│  │  │  - ReLU activation                             │  │  │
│  │  │  - Pipelined design                            │  │  │
│  │  │  - Local weight buffering                      │  │  │
│  │  └─────────────┬──────────────────────────────────┘  │  │
│  └────────────────┼─────────────────────────────────────┘  │
│                   │                                        │
│  ┌────────────────▼─────────────────────────────────────┐  │
│  │              DDR3 Memory (512 MB)                    │  │
│  │  - Input buffer                                      │  │
│  │  - Weight storage                                    │  │
│  │  - Output buffer                                     │  │
│  └──────────────────────────────────────────────────────┘  │
└────────────────────────────────────────────────────────────┘
```

### CNN Architecture

```
Input (28×28 grayscale)
    ↓
┌─────────────────────┐
│ Conv1 (FPGA)        │ ← 8 filters, 3×3, stride 1
│ Output: 8×26×26     │
└─────────────────────┘
    ↓
┌─────────────────────┐
│ ReLU + MaxPool      │
│ Output: 8×13×13     │
└─────────────────────┘
    ↓
┌─────────────────────┐
│ Conv2 (CPU)         │ ← 16 filters, 3×3, stride 1
│ Output: 16×11×11    │
└─────────────────────┘
    ↓
┌─────────────────────┐
│ ReLU + MaxPool      │
│ Output: 16×5×5      │
└─────────────────────┘
    ↓
┌─────────────────────┐
│ Flatten             │
│ Output: 400         │
└─────────────────────┘
    ↓
┌─────────────────────┐
│ Fully Connected     │
│ Output: 10 classes  │
└─────────────────────┘
```

---

## 📊 Performance

### Inference Latency

| Implementation          | Time (ms) | Speedup   | Platform      |
|-------------------------|-----------|-----------|---------------|
| Pure CPU                | 30.26     | 1.00×     | ARM Cortex-A9 |
| **Hybrid (Conv1 FPGA)** | **27.39** | **1.10×** | Zynq-7000     |
| FPGA Conv1 Only         | 2.95      | -         | PL fabric     |

### Breakdown

```
Hybrid Pipeline Timing:
├─ FPGA Conv1:          2.95 ms  (10.8%)  ← Accelerated
├─ CPU MaxPool:         ~0.5 ms   (1.8%)
├─ CPU Conv2:          ~18.0 ms  (65.7%)  ← Bottleneck
├─ CPU MaxPool:         ~0.5 ms   (1.8%)
├─ CPU FC:              ~5.0 ms  (18.3%)
└─ Overhead:            ~0.4 ms   (1.5%)
──────────────────────────────────────
Total:                 27.39 ms
```

### Accuracy

| Test Set               | Accuracy |
|------------------------|----------|
| MNIST Test Set         | 95%+     |
| Webcam (Hand-drawn)    | 70-80%   |

### Real-Time Performance

- **End-to-end latency**: ~350ms (including UART transfer)
- **Display FPS**: ~10 FPS (processing every 3rd frame)
- **UART bandwidth limitation**: 3KB transfer @ 115200 baud = ~250ms

---

## 🛠️ Hardware Requirements

### Primary Hardware
- **Xilinx ZedBoard** (Zynq-7000 XC7Z020-CLG484)
  - Dual ARM Cortex-A9 @ 667 MHz
  - Artix-7 FPGA fabric
  - 512 MB DDR3 memory
- **USB UART cable** (for PC communication)
- **12V power supply**

### Optional
- **Webcam** (USB, 720p or higher recommended)
- **PC/Laptop** with USB ports

### FPGA Resource Utilization

| Resource | Used    | Available | Utilization |
|----------|---------|-----------|-------------|
| LUTs     | ~15,000 | 53,200    | ~28%        |
| FFs      | ~8,000  | 106,400   | ~7.5%       |
| BRAMs    | ~25     | 140       | ~18%        |
| DSPs     | ~40     | 220       | ~18%        |

---

## 💻 Software Requirements

### Development Tools
- **Xilinx Vitis/Vivado** 2022.2 or later
- **Python** 3.8+
- **OpenCV** 4.5+

### Python Dependencies
```bash
pip install opencv-python numpy pyserial
```

### Training Framework (Optional)
```bash
pip install tensorflow keras
```

---

## 🚀 Installation

### 1. Clone Repository

```bash
git clone https://github.com/yourusername/fpga-cnn-mnist.git
cd fpga-cnn-mnist
```

### 2. FPGA Setup

#### Generate Bitstream
1. Open Vivado project: `hardware/vivado_project/`
2. Run synthesis and implementation
3. Generate bitstream (`File → Export → Export Hardware`)
4. Export `.xsa` file

#### Build Software
1. Open Vitis IDE
2. Create platform from `.xsa` file
3. Import application project: `software/vitis_project/`
4. Build project
5. Program FPGA and run

### 3. Python Client Setup

```bash
cd python_client
pip install -r requirements.txt
```

Update `SERIAL_PORT` in `realtime_detection.py`:
```python
SERIAL_PORT = 'COM3'  #Or whatever port uses UART in your setup
```

---

## 📱 Usage

### Training (Optional)

If you want to retrain the model:

```bash
cd training
python train_mnist_cnn.py
```

This generates weight files in `training/weights/`.

### Running Real-Time Detection

#### 1. Program ZedBoard

```bash
# In Vitis IDE
Right-click project → Run As → Launch Hardware
```

**Expected output in terminal:**
```
*****************************************
*   FPGA CNN REAL-TIME DETECTION        *
*****************************************

[UART] Ready at 115200 baud
[TEST] Pred: 7 | Time: 27.4 ms

========================================
REAL-TIME DETECTION MODE
========================================
Waiting for images...
```

#### 2. Run Python Client

```bash
cd python_client
python realtime_detection.py
```

#### 3. Test Detection

- Hold handwritten digit in front of webcam
- Green box appears around detected digit
- Prediction displayed in real-time
- Press **'q'** to quit
- Press **'s'** to save screenshot

### Tips for Best Results

✅ **Use white paper with BLACK marker**  
✅ **Dark background (improves contrast)**  
✅ **Bright, even lighting**  
✅ **Draw digits large and clear**  
✅ **Keep digit centered in frame**  

---

## 📈 Results

### Quantitative Results

| Metric                    | Value    |
|---------------------------|----------|
| **Training Accuracy**     | 95.2%    |
| **Test Accuracy (MNIST)** | 94.8%    |
| **Real-time Accuracy**    | 70-80%   |
| **CPU Baseline**          | 30.26 ms |
| **Hybrid FPGA+CPU**       | 27.39 ms |
| **Speedup**               | 1.10×    |
| **Conv1 FPGA Time**       | 2.95 ms  |
| **End-to-end Latency**    | ~350 ms  |

### Bottleneck Analysis

The system is currently **memory-bound**, not compute-bound:
- **Memory transfers**: ~85% of time (DDR bandwidth)
- **Computation**: ~10% of time (where FPGA helps)
- **Overhead**: ~5% of time

**Key Finding**: Further speedup requires reducing DDR traffic (add more layers to FPGA, use quantization, or optimize data movement).

### Confusion Matrix (Real-time Testing)

```
           Predicted
         0  1  2  3  4  5  6  7  8  9
Actual
  0    [ 8  0  0  0  0  1  0  0  1  0 ]
  1    [ 0  7  0  0  1  0  0  0  1  0 ]
  2    [ 0  0  8  1  0  0  0  0  1  0 ]
  3    [ 0  0  0  7  0  1  0  1  1  0 ]
  4    [ 0  1  0  0  8  0  0  0  0  1 ]
  5    [ 0  0  0  2  0  6  1  0  0  1 ]
  6    [ 0  0  0  0  1  1  7  0  1  0 ]
  7    [ 0  0  1  0  0  0  0  7  0  2 ]
  8    [ 0  1  0  0  0  1  0  0  7  1 ]
  9    [ 0  0  0  1  0  2  0  1  0  6 ]

Average Accuracy: 75%
```

---

### Algorithmic Improvements

1. **Data Augmentation**
   - Real-time preprocessing pipeline
   - Better match to training distribution

2. **Ensemble Methods**
   - Multiple model voting
   - Improve robustness

---

## 🙏 Acknowledgments

- **MNIST Dataset**: Yann LeCun, Corinna Cortes, Christopher J.C. Burges
- **Xilinx Documentation**: Vitis HLS, Zynq-7000 TRM
- **OpenCV Community**: Contour detection examples

---

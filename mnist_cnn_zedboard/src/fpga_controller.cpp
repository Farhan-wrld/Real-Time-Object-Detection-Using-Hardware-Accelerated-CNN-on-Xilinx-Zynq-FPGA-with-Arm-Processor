/*******************************************************************************
 * FPGA ACCELERATOR CONTROLLER - PERSON A
 *
 * Purpose: ARM-side control code for FPGA CNN accelerator
 * Role: Data movement, timing, validation
 *
 * WAITING FOR PERSON C TO PROVIDE:
 * - New system.xsa with FPGA accelerators
 * - DMA base addresses
 * - Accelerator control register offsets
 * - Memory map documentation
 *
 * Once received, fill in the PLACEHOLDER sections below.
 *******************************************************************************/

#include <stdio.h>
#include "xil_printf.h"
#include "xtime_l.h"
#include "xil_cache.h"
#include <math.h>

// ============================================================================
// HARDWARE CONFIGURATION - TO BE FILLED BY PERSON C
// ============================================================================

// PLACEHOLDER: Person C will provide these addresses
// #define FPGA_ACCEL_BASE_ADDR    0x????????  // Base address of accelerator
// #define FPGA_DMA_BASE_ADDR      0x????????  // DMA controller base
// #define DDR_INPUT_BUFFER        0x????????  // DDR location for input
// #define DDR_OUTPUT_BUFFER       0x????????  // DDR location for output
// #define DDR_WEIGHTS_BUFFER      0x????????  // DDR location for weights (if needed)

// Control register offsets (Person C provides)
// #define ACCEL_CONTROL_REG       0x00
// #define ACCEL_STATUS_REG        0x04
// #define ACCEL_START_BIT         0x01
// #define ACCEL_DONE_BIT          0x02

// ============================================================================
// MEMORY BUFFERS
// ============================================================================

// Input image buffer (28×28 = 784 floats)
static float fpga_input[28*28] __attribute__((aligned(32)));

// Output buffer (10 class scores)
static float fpga_output[10] __attribute__((aligned(32)));

// CPU reference output (for comparison)
static float cpu_output[10];

// ============================================================================
// DMA CONTROL FUNCTIONS - STUBS (Person C provides implementation details)
// ============================================================================

/**
 * Initialize DMA controller
 * Person C will provide: DMA device ID, configuration steps
 */
void init_dma() {
    xil_printf("[FPGA] Initializing DMA controller...\r\n");

    // PLACEHOLDER: Person C provides DMA initialization
    // Example:
    // XAxiDma_Config *dma_config;
    // dma_config = XAxiDma_LookupConfig(XPAR_AXIDMA_0_DEVICE_ID);
    // XAxiDma_CfgInitialize(&dma_instance, dma_config);

    xil_printf("[FPGA] DMA initialization - WAITING FOR PERSON C\r\n");
}

/**
 * Send data to FPGA via DMA
 * @param src_addr: Source buffer in DDR
 * @param size: Number of bytes to transfer
 */
void dma_send_to_fpga(u32 src_addr, u32 size) {
    xil_printf("[FPGA] DMA Send: 0x%08X, size=%d bytes\r\n", src_addr, size);

    // PLACEHOLDER: Person C provides DMA send implementation
    // Example:
    // Xil_DCacheFlushRange(src_addr, size);
    // XAxiDma_SimpleTransfer(&dma_instance, src_addr, size, XAXIDMA_DMA_TO_DEVICE);
    // while (XAxiDma_Busy(&dma_instance, XAXIDMA_DMA_TO_DEVICE));

    xil_printf("[FPGA] DMA Send - STUB (waiting for Person C)\r\n");
}

/**
 * Receive data from FPGA via DMA
 * @param dst_addr: Destination buffer in DDR
 * @param size: Number of bytes to receive
 */
void dma_receive_from_fpga(u32 dst_addr, u32 size) {
    xil_printf("[FPGA] DMA Receive: 0x%08X, size=%d bytes\r\n", dst_addr, size);

    // PLACEHOLDER: Person C provides DMA receive implementation
    // Example:
    // XAxiDma_SimpleTransfer(&dma_instance, dst_addr, size, XAXIDMA_DEVICE_TO_DMA);
    // while (XAxiDma_Busy(&dma_instance, XAXIDMA_DEVICE_TO_DMA));
    // Xil_DCacheInvalidateRange(dst_addr, size);

    xil_printf("[FPGA] DMA Receive - STUB (waiting for Person C)\r\n");
}

// ============================================================================
// FPGA ACCELERATOR CONTROL - STUBS
// ============================================================================

/**
 * Start FPGA accelerator
 * Person C provides: Register write sequence
 */
void start_fpga_accelerator() {
    xil_printf("[FPGA] Starting accelerator...\r\n");

    // PLACEHOLDER: Person C provides control register write
    // Example:
    // Xil_Out32(FPGA_ACCEL_BASE_ADDR + ACCEL_CONTROL_REG, ACCEL_START_BIT);

    xil_printf("[FPGA] Start command - STUB (waiting for Person C)\r\n");
}

/**
 * Wait for FPGA accelerator to complete
 * Person C provides: Status register polling method
 */
void wait_fpga_done() {
    xil_printf("[FPGA] Waiting for completion...\r\n");

    // PLACEHOLDER: Person C provides status polling
    // Example:
    // u32 status;
    // do {
    //     status = Xil_In32(FPGA_ACCEL_BASE_ADDR + ACCEL_STATUS_REG);
    // } while (!(status & ACCEL_DONE_BIT));

    xil_printf("[FPGA] Wait done - STUB (waiting for Person C)\r\n");
}

/**
 * Reset FPGA accelerator
 */
void reset_fpga_accelerator() {
    xil_printf("[FPGA] Resetting accelerator...\r\n");

    // PLACEHOLDER: Person C provides reset sequence

    xil_printf("[FPGA] Reset - STUB (waiting for Person C)\r\n");
}

// ============================================================================
// DATA PREPARATION
// ============================================================================

/**
 * Load input image into FPGA buffer
 * @param image: Source image (28×28)
 */
void load_input_to_fpga(float image[28][28]) {
    xil_printf("[FPGA] Loading input image...\r\n");

    // Flatten 28×28 image to 1D array
    int idx = 0;
    for (int i = 0; i < 28; i++) {
        for (int j = 0; j < 28; j++) {
            fpga_input[idx++] = image[i][j];
        }
    }

    // Flush cache to ensure data is in DDR
    Xil_DCacheFlushRange((u32)fpga_input, sizeof(fpga_input));

    xil_printf("[FPGA] Input loaded: %d values\r\n", idx);
}

/**
 * Load weights into FPGA memory (if needed)
 * Person C will specify if weights go to DDR or are in BRAM
 */
void load_weights_to_fpga() {
    xil_printf("[FPGA] Loading weights...\r\n");

    // PLACEHOLDER: Person C specifies weight loading strategy
    // Option 1: Weights already in BRAM (do nothing)
    // Option 2: DMA transfer weights to DDR
    // Option 3: AXI-Lite register writes

    xil_printf("[FPGA] Weight loading - STUB (waiting for Person C)\r\n");
}

// ============================================================================
// FPGA INFERENCE EXECUTION
// ============================================================================

/**
 * Run CNN inference on FPGA
 * @param input_image: 28×28 input image
 * @param output_scores: Output buffer for 10 class scores
 * @return: Inference time in milliseconds
 */
double run_fpga_inference(float input_image[28][28], float *output_scores) {
    XTime tStart, tEnd;

    xil_printf("\r\n========================================\r\n");
    xil_printf("FPGA INFERENCE EXECUTION\r\n");
    xil_printf("========================================\r\n");

    // Step 1: Load input data
    load_input_to_fpga(input_image);

    // Step 2: Start timing
    XTime_GetTime(&tStart);

    // Step 3: Transfer input to FPGA via DMA
    // PLACEHOLDER: Uncomment when Person C provides addresses
    // dma_send_to_fpga((u32)fpga_input, sizeof(fpga_input));

    // Step 4: Start FPGA accelerator
    start_fpga_accelerator();

    // Step 5: Wait for completion
    wait_fpga_done();

    // Step 6: Transfer results back via DMA
    // PLACEHOLDER: Uncomment when Person C provides addresses
    // dma_receive_from_fpga((u32)fpga_output, sizeof(fpga_output));

    // Step 7: Stop timing
    XTime_GetTime(&tEnd);

    // Step 8: Invalidate cache and copy results
    Xil_DCacheInvalidateRange((u32)fpga_output, sizeof(fpga_output));
    for (int i = 0; i < 10; i++) {
        output_scores[i] = fpga_output[i];
    }

    // Calculate execution time
    double elapsed_ms = 1000.0 * (double)(tEnd - tStart) /
                        (double)XPAR_CPU_CORTEXA9_0_CPU_CLK_FREQ_HZ;

    xil_printf("[FPGA] Inference complete: %.3f ms\r\n", (int)elapsed_ms,
               (int)((elapsed_ms - (int)elapsed_ms) * 1000));

    return elapsed_ms;
}

// ============================================================================
// VALIDATION & COMPARISON
// ============================================================================

/**
 * Find the predicted class from output scores
 */
int get_prediction(float *scores) {
    int pred = 0;
    float max_score = scores[0];

    for (int i = 1; i < 10; i++) {
        if (scores[i] > max_score) {
            max_score = scores[i];
            pred = i;
        }
    }

    return pred;
}

/**
 * Compare FPGA output with CPU reference
 * @param fpga_scores: FPGA output (10 values)
 * @param cpu_scores: CPU reference output (10 values)
 * @param tolerance: Maximum allowed difference
 * @return: true if outputs match within tolerance
 */
bool validate_fpga_output(float *fpga_scores, float *cpu_scores, float tolerance) {
    xil_printf("\r\n========================================\r\n");
    xil_printf("OUTPUT VALIDATION\r\n");
    xil_printf("========================================\r\n");

    bool all_match = true;
    float max_error = 0.0f;

    xil_printf("Class | FPGA Score | CPU Score  | Difference\r\n");
    xil_printf("------|------------|------------|------------\r\n");

    for (int i = 0; i < 10; i++) {
        float diff = fabs(fpga_scores[i] - cpu_scores[i]);

        xil_printf("  %d   | %6.3f     | %6.3f     | %6.3f\r\n",
                   i, fpga_scores[i], cpu_scores[i], diff);

        if (diff > tolerance) {
            all_match = false;
        }

        if (diff > max_error) {
            max_error = diff;
        }
    }

    xil_printf("\r\nMax error: %.6f\r\n", max_error);
    xil_printf("Tolerance: %.6f\r\n", tolerance);

    if (all_match) {
        xil_printf("\r\n VALIDATION PASSED - FPGA output matches CPU\r\n");
    } else {
        xil_printf("\r\n VALIDATION FAILED - Outputs differ beyond tolerance\r\n");
    }

    return all_match;
}

/**
 * Compare predictions from FPGA and CPU
 */
void compare_predictions(int fpga_pred, int cpu_pred, int actual_label) {
    xil_printf("\r\n========================================\r\n");
    xil_printf("PREDICTION COMPARISON\r\n");
    xil_printf("========================================\r\n");

    xil_printf("FPGA prediction:  %d\r\n", fpga_pred);
    xil_printf("CPU prediction:   %d\r\n", cpu_pred);
    xil_printf("Actual label:     %d\r\n", actual_label);

    if (fpga_pred == cpu_pred && fpga_pred == actual_label) {
        xil_printf("\r\n SUCCESS - All predictions correct and matching\r\n");
    } else if (fpga_pred == cpu_pred) {
        xil_printf("\r\n  FPGA matches CPU but both are wrong\r\n");
    } else if (fpga_pred == actual_label) {
        xil_printf("\r\n  FPGA correct but differs from CPU baseline\r\n");
    } else {
        xil_printf("\r\n FAILURE - FPGA prediction incorrect\r\n");
    }
}

/**
 * Display performance comparison
 */
void display_performance_comparison(double cpu_time_ms, double fpga_time_ms) {
    xil_printf("\r\n========================================\r\n");
    xil_printf("PERFORMANCE COMPARISON\r\n");
    xil_printf("========================================\r\n");

    double speedup = cpu_time_ms / fpga_time_ms;

    xil_printf("CPU time (baseline):  %.3f ms\r\n", cpu_time_ms);
    xil_printf("FPGA time:            %.3f ms\r\n", fpga_time_ms);
    xil_printf("Speedup:              %.2fx\r\n", speedup);

    if (speedup >= 5.0) {
        xil_printf("\r\n EXCELLENT - Target speedup achieved!\r\n");
    } else if (speedup >= 3.0) {
        xil_printf("\r\n GOOD - Significant speedup achieved\r\n");
    } else if (speedup >= 1.5) {
        xil_printf("\r\n  MODERATE - Some speedup, but below target\r\n");
    } else if (speedup > 1.0) {
        xil_printf("\r\n  MINIMAL - Very small speedup\r\n");
    } else {
        xil_printf("\r\n SLOWER - FPGA is slower than CPU\r\n");
    }
}

// ============================================================================
// MAIN TEST FUNCTION (to be called from main.cpp)
// ============================================================================

/**
 * Run complete FPGA vs CPU comparison test
 * This is the main entry point Person A will call
 */
void run_fpga_cpu_comparison_test(float test_image[28][28],
                                    float *cpu_reference_output,
                                    int actual_label,
                                    double cpu_baseline_time_ms) {
    xil_printf("\r\n");
    xil_printf("************************************************************************\r\n");
    xil_printf("*         FPGA vs CPU COMPARISON TEST - PERSON A                      *\r\n");
    xil_printf("************************************************************************\r\n");

    // Initialize hardware (when Person C provides details)
    init_dma();
    reset_fpga_accelerator();

    // Run FPGA inference
    float fpga_scores[10];
    double fpga_time = run_fpga_inference(test_image, fpga_scores);

    // Get predictions
    int fpga_pred = get_prediction(fpga_scores);
    int cpu_pred = get_prediction(cpu_reference_output);

    // Validation
    bool output_match = validate_fpga_output(fpga_scores, cpu_reference_output, 0.01f);

    // Comparison
    compare_predictions(fpga_pred, cpu_pred, actual_label);

    // Performance
    display_performance_comparison(cpu_baseline_time_ms, fpga_time);

    xil_printf("\r\n************************************************************************\r\n");

    // Final summary
    if (output_match && fpga_pred == actual_label) {
        xil_printf("*** FPGA INTEGRATION: SUCCESS ***\r\n");
    } else {
        xil_printf("*** FPGA INTEGRATION: NEEDS DEBUGGING ***\r\n");
    }

    xil_printf("************************************************************************\r\n\r\n");
}

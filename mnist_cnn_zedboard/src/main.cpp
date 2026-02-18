/*******************************************************************************
 * FPGA CNN ACCELERATOR - FULL INTEGRATION v2
 * Hardware: ZedBoard with Conv2D Accelerator (Fixed Version)
 * Person A - Final Integration Code with Debug
 *******************************************************************************/

#include <stdio.h>
#include <string.h>
#include "xil_printf.h"
#include "xtime_l.h"
#include "xil_cache.h"
#include "xaxidma.h"
#include "xparameters.h"
#include <math.h>
#include <stdlib.h>

// Include weight files
#include "conv1_weights.h"
#include "conv2_weights.h"
#include "fc_weights.h"
#include "test_image.h"

// ============================================================================
// HARDWARE ADDRESSES FROM PERSON C
// ============================================================================

// DMA Configuration
#define DMA_DEV_ID              XPAR_AXIDMA_0_DEVICE_ID
#define DMA_BASE_ADDR           0x41E00000

// CNN Accelerator
#define CNN_ACCEL_BASE_ADDR     0x43C00000

// Accelerator Registers (from Person C)
#define ACCEL_AP_CTRL           0x00
#define ACCEL_GIE               0x04
#define ACCEL_IER               0x08
#define ACCEL_ISR               0x0C
#define ACCEL_INPUT_ADDR        0x10
#define ACCEL_WEIGHTS_ADDR      0x1C
#define ACCEL_BIAS_ADDR         0x28
#define ACCEL_OUTPUT_ADDR       0x34

// Control bits
#define AP_START                0x01
#define AP_DONE                 0x02
#define AP_IDLE                 0x04
#define AP_READY                0x08

// DDR Memory buffers
#define DDR_BASE_ADDR           0x40000000
#define DDR_INPUT_BUFFER        0x10000000
#define DDR_WEIGHTS_BUFFER      0x10100000
#define DDR_BIAS_BUFFER         0x10200000
#define DDR_OUTPUT_BUFFER       0x10300000

// ============================================================================
// GLOBAL VARIABLES
// ============================================================================

XAxiDma AxiDma;

static float fpga_input[28*28] __attribute__((aligned(32)));
static float fpga_output[10] __attribute__((aligned(32)));

// ============================================================================
// DMA FUNCTIONS
// ============================================================================

int init_dma() {
    xil_printf("[DMA] Initializing AXI DMA...\r\n");

    XAxiDma_Config *CfgPtr;
    int Status;

    CfgPtr = XAxiDma_LookupConfig(DMA_DEV_ID);
    if (!CfgPtr) {
        xil_printf("[DMA] ERROR: No config found for DMA\r\n");
        return XST_FAILURE;
    }

    Status = XAxiDma_CfgInitialize(&AxiDma, CfgPtr);
    if (Status != XST_SUCCESS) {
        xil_printf("[DMA] ERROR: Initialization failed %d\r\n", Status);
        return XST_FAILURE;
    }

    if (XAxiDma_HasSg(&AxiDma)) {
        xil_printf("[DMA] ERROR: Device configured as SG mode\r\n");
        return XST_FAILURE;
    }

    XAxiDma_IntrDisable(&AxiDma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DEVICE_TO_DMA);
    XAxiDma_IntrDisable(&AxiDma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DMA_TO_DEVICE);

    xil_printf("[DMA] Initialization complete\r\n");
    xil_printf("[DMA] Base Address: 0x%08X\r\n", DMA_BASE_ADDR);

    return XST_SUCCESS;
}

int dma_send_to_accel(u32 src_addr, u32 length) {
    int Status;

    xil_printf("[DMA] MM2S Transfer: 0x%08X, length=%d bytes\r\n", src_addr, length);

    Xil_DCacheFlushRange(src_addr, length);

    Status = XAxiDma_SimpleTransfer(&AxiDma, src_addr, length, XAXIDMA_DMA_TO_DEVICE);
    if (Status != XST_SUCCESS) {
        xil_printf("[DMA] ERROR: MM2S transfer failed\r\n");
        return XST_FAILURE;
    }

    while (XAxiDma_Busy(&AxiDma, XAXIDMA_DMA_TO_DEVICE)) {
    }

    xil_printf("[DMA] MM2S Transfer complete\r\n");
    return XST_SUCCESS;
}

int dma_receive_from_accel(u32 dst_addr, u32 length) {
    int Status;

    xil_printf("[DMA] S2MM Transfer: 0x%08X, length=%d bytes\r\n", dst_addr, length);

    Status = XAxiDma_SimpleTransfer(&AxiDma, dst_addr, length, XAXIDMA_DEVICE_TO_DMA);
    if (Status != XST_SUCCESS) {
        xil_printf("[DMA] ERROR: S2MM transfer failed\r\n");
        return XST_FAILURE;
    }

    while (XAxiDma_Busy(&AxiDma, XAXIDMA_DEVICE_TO_DMA)) {
    }

    Xil_DCacheInvalidateRange(dst_addr, length);

    xil_printf("[DMA] S2MM Transfer complete\r\n");
    return XST_SUCCESS;
}

// ============================================================================
// ACCELERATOR CONTROL FUNCTIONS
// ============================================================================

void accel_write_reg(u32 offset, u32 value) {
    Xil_Out32(CNN_ACCEL_BASE_ADDR + offset, value);
}

u32 accel_read_reg(u32 offset) {
    return Xil_In32(CNN_ACCEL_BASE_ADDR + offset);
}

void accel_write_addr(u32 offset, u64 addr) {
    accel_write_reg(offset, (u32)(addr & 0xFFFFFFFF));
    accel_write_reg(offset + 4, (u32)((addr >> 32) & 0xFFFFFFFF));
}

void start_accelerator() {
    xil_printf("[ACCEL] Starting accelerator...\r\n");
    accel_write_reg(ACCEL_AP_CTRL, AP_START);
}

void wait_accelerator_done() {
    xil_printf("[ACCEL] Waiting for completion...\r\n");

    u32 status;
    int timeout = 1000000;

    while (timeout > 0) {
        status = accel_read_reg(ACCEL_AP_CTRL);
        if (status & AP_DONE) {
            xil_printf("[ACCEL] Done!\r\n");
            return;
        }
        timeout--;
    }

    xil_printf("[ACCEL] WARNING: Timeout waiting for done signal\r\n");
}

int is_accelerator_idle() {
    u32 status = accel_read_reg(ACCEL_AP_CTRL);
    return (status & AP_IDLE) != 0;
}

void reset_accelerator() {
    xil_printf("[ACCEL] Resetting accelerator...\r\n");
    accel_write_reg(ACCEL_AP_CTRL, 0x00);
    accel_write_reg(ACCEL_AP_CTRL, 0x00);
}

// ============================================================================
// FPGA INFERENCE
// ============================================================================

double run_fpga_inference(float input_image[28][28], float *output_scores) {
    XTime tStart, tEnd;

    xil_printf("\r\n========================================\r\n");
    xil_printf("FPGA INFERENCE EXECUTION\r\n");
    xil_printf("========================================\r\n");

    // Prepare input
    xil_printf("[FPGA] Preparing input data...\r\n");
    int idx = 0;
    for (int i = 0; i < 28; i++) {
        for (int j = 0; j < 28; j++) {
            fpga_input[idx++] = input_image[i][j];
        }
    }

    // DEBUG: Print first few input values
    xil_printf("[DEBUG] First 10 input values:\r\n");
    for (int i = 0; i < 10; i++) {
        int whole = (int)fpga_input[i];
        int frac = (int)(fabs(fpga_input[i] - whole) * 1000);
        if (fpga_input[i] < 0) xil_printf("-");
        xil_printf("%d.%03d ", abs(whole), frac);
    }
    xil_printf("\r\n");

    // Copy to DDR
    memcpy((void*)DDR_INPUT_BUFFER, fpga_input, sizeof(fpga_input));
    Xil_DCacheFlushRange(DDR_INPUT_BUFFER, sizeof(fpga_input));

    // Configure accelerator
    xil_printf("[FPGA] Configuring accelerator...\r\n");
    accel_write_addr(ACCEL_INPUT_ADDR, DDR_INPUT_BUFFER);
    accel_write_addr(ACCEL_OUTPUT_ADDR, DDR_OUTPUT_BUFFER);

    // DEBUG: Read back addresses
    u32 input_low = accel_read_reg(ACCEL_INPUT_ADDR);
    u32 input_high = accel_read_reg(ACCEL_INPUT_ADDR + 4);
    u32 output_low = accel_read_reg(ACCEL_OUTPUT_ADDR);
    u32 output_high = accel_read_reg(ACCEL_OUTPUT_ADDR + 4);

    xil_printf("[DEBUG] Register readback:\r\n");
    xil_printf("  Input addr:  0x%08X%08X\r\n", input_high, input_low);
    xil_printf("  Output addr: 0x%08X%08X\r\n", output_high, output_low);

    // Start timing
    xil_printf("[FPGA] Starting accelerator...\r\n");
    XTime tAccelStart, tAccelEnd;

    XTime_GetTime(&tStart);
    XTime_GetTime(&tAccelStart);

    start_accelerator();
    wait_accelerator_done();

    XTime_GetTime(&tAccelEnd);
    XTime_GetTime(&tEnd);

    double accel_time = 1000.0 * (double)(tAccelEnd - tAccelStart) /
                        (double)XPAR_CPU_CORTEXA9_0_CPU_CLK_FREQ_HZ;
    xil_printf("[DEBUG] Accelerator execution time: %d.%03d ms\r\n",
               (int)accel_time,
               (int)((accel_time - (int)accel_time) * 1000));

    // Read results
    xil_printf("[FPGA] Reading results...\r\n");
    Xil_DCacheInvalidateRange(DDR_OUTPUT_BUFFER, sizeof(fpga_output));

    // DEBUG: Check raw memory
    xil_printf("[DEBUG] Raw output buffer (first 40 bytes):\r\n");
    u32 *raw_ptr = (u32*)DDR_OUTPUT_BUFFER;
    for (int i = 0; i < 10; i++) {
        xil_printf("  [%d] = 0x%08X\r\n", i, raw_ptr[i]);
    }

    memcpy(fpga_output, (void*)DDR_OUTPUT_BUFFER, sizeof(fpga_output));

    for (int i = 0; i < 10; i++) {
        output_scores[i] = fpga_output[i];
    }

    double elapsed_ms = 1000.0 * (double)(tEnd - tStart) /
                        (double)XPAR_CPU_CORTEXA9_0_CPU_CLK_FREQ_HZ;

    xil_printf("[FPGA] Inference complete: %d.%03d ms\r\n",
               (int)elapsed_ms,
               (int)((elapsed_ms - (int)elapsed_ms) * 1000));

    return elapsed_ms;
}

// ============================================================================
// VALIDATION FUNCTIONS
// ============================================================================

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

void compare_results(float *fpga_scores, float *cpu_scores, int actual_label) {
    xil_printf("\r\n========================================\r\n");
    xil_printf("OUTPUT COMPARISON\r\n");
    xil_printf("========================================\r\n");

    int fpga_pred = get_prediction(fpga_scores);
    int cpu_pred = get_prediction(cpu_scores);

    xil_printf("FPGA Prediction: %d\r\n", fpga_pred);
    xil_printf("CPU Prediction:  %d\r\n", cpu_pred);
    xil_printf("Actual Label:    %d\r\n", actual_label);

    xil_printf("\r\nClass Scores:\r\n");
    xil_printf("Class | FPGA (raw)      | CPU (raw)\r\n");
    xil_printf("------|-----------------|------------------\r\n");

    for (int i = 0; i < 10; i++) {
        int fpga_whole = (int)fpga_scores[i];
        int fpga_frac = (int)(fabs(fpga_scores[i] - fpga_whole) * 1000);
        int cpu_whole = (int)cpu_scores[i];
        int cpu_frac = (int)(fabs(cpu_scores[i] - cpu_whole) * 1000);

        xil_printf("  %d   | ", i);
        if (fpga_scores[i] < 0) xil_printf("-");
        xil_printf("%d.%03d        | ", abs(fpga_whole), fpga_frac);
        if (cpu_scores[i] < 0) xil_printf("-");
        xil_printf("%d.%03d\r\n", abs(cpu_whole), cpu_frac);
    }

    xil_printf("\r\n");

    if (fpga_pred == cpu_pred && fpga_pred == actual_label) {
        xil_printf(" SUCCESS - FPGA matches CPU and both correct!\r\n");
    } else if (fpga_pred == cpu_pred) {
        xil_printf("  FPGA matches CPU but prediction wrong\r\n");
    } else {
        xil_printf(" MISMATCH - FPGA differs from CPU\r\n");
    }
}

// ============================================================================
// MAIN
// ============================================================================

int main() {
    int Status;

    xil_printf("\r\n\r\n");
    xil_printf("************************************************************************\r\n");
    xil_printf("*        FPGA CNN ACCELERATOR INTEGRATION TEST                        *\r\n");
    xil_printf("*                    Person A - Final Test                            *\r\n");
    xil_printf("************************************************************************\r\n");

    // Initialize
    xil_printf("\r\n[INIT] Initializing hardware...\r\n");

    Status = init_dma();
    if (Status != XST_SUCCESS) {
        xil_printf("[ERROR] DMA initialization failed\r\n");
        return XST_FAILURE;
    }

    reset_accelerator();

    xil_printf("[INIT] Hardware initialization complete\r\n");

    // Display config
    xil_printf("\r\n[CONFIG] System Configuration:\r\n");
    xil_printf("  DMA Base:        0x%08X\r\n", DMA_BASE_ADDR);
    xil_printf("  Accelerator Base: 0x%08X\r\n", CNN_ACCEL_BASE_ADDR);
    xil_printf("  Input Buffer:    0x%08X\r\n", DDR_INPUT_BUFFER);
    xil_printf("  Output Buffer:   0x%08X\r\n", DDR_OUTPUT_BUFFER);

    // Check status
    u32 status = accel_read_reg(ACCEL_AP_CTRL);
    xil_printf("\r\n[STATUS] Accelerator Control: 0x%08X\r\n", status);
    xil_printf("  Idle:  %s\r\n", (status & AP_IDLE) ? "YES" : "NO");
    xil_printf("  Ready: %s\r\n", (status & AP_READY) ? "YES" : "NO");

    // Run FPGA
    float fpga_scores[10];
    double fpga_time = run_fpga_inference(test_image, fpga_scores);

    // CPU reference scores (from frozen baseline)
    float cpu_scores[10];
    cpu_scores[0] = -4.716f;
    cpu_scores[1] = -6.920f;
    cpu_scores[2] = 1.416f;
    cpu_scores[3] = 0.899f;
    cpu_scores[4] = -12.468f;
    cpu_scores[5] = -8.900f;
    cpu_scores[6] = -21.813f;
    cpu_scores[7] = 13.353f;
    cpu_scores[8] = -4.345f;
    cpu_scores[9] = -1.484f;

    // Compare
    compare_results(fpga_scores, cpu_scores, test_label);

    // Performance
    double cpu_baseline = 30.26;
    double speedup = cpu_baseline / fpga_time;

    xil_printf("\r\n========================================\r\n");
    xil_printf("PERFORMANCE COMPARISON\r\n");
    xil_printf("========================================\r\n");
    xil_printf("CPU Baseline: %d.%02d ms\r\n", (int)cpu_baseline,
               (int)((cpu_baseline - (int)cpu_baseline) * 100));
    xil_printf("FPGA Time:    %d.%03d ms\r\n", (int)fpga_time,
               (int)((fpga_time - (int)fpga_time) * 1000));
    xil_printf("Speedup:      %d.%02dx\r\n", (int)speedup,
               (int)((speedup - (int)speedup) * 100));

    if (speedup >= 3.0) {
        xil_printf(" TARGET ACHIEVED - 3x+ speedup!\r\n");
    } else if (speedup > 1.0) {
        xil_printf(" FPGA is faster than CPU\r\n");
    } else {
        xil_printf("  FPGA slower than CPU - needs optimization\r\n");
    }

    xil_printf("\r\n************************************************************************\r\n");
    xil_printf("*                     INTEGRATION TEST COMPLETE                       *\r\n");
    xil_printf("************************************************************************\r\n\r\n");

    return 0;
}

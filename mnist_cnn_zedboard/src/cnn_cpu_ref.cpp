/*******************************************************************************
 * CPU BASELINE REFERENCE - FROZEN VERSION
 *
 * Date Frozen: January 28, 2026
 * Performance: 30.26 ms average inference time
 * Test Result: CORRECT (Prediction: 7, Actual: 7)
 *
 * ⚠️ DO NOT MODIFY THIS FILE ⚠️
 *
 * This is the ground truth reference for FPGA comparison.
 * All FPGA accelerator outputs must match this CPU baseline.
 *
 * Verified Configuration:
 * - Board: Xilinx ZedBoard (Zynq-7000)
 * - Processor: ARM Cortex-A9 @ 667 MHz
 * - Compiler Optimization: -O2
 * - Input: MNIST digit "7" (28×28 grayscale)
 * - Output: Class 7 with score 13.353
 *
 * Architecture:
 * - Conv1: 8 filters, 3×3 → ReLU → MaxPool
 * - Conv2: 16 filters, 3×3 → ReLU → MaxPool
 * - FC: 400 → 10 classes
 *
 *******************************************************************************/
#include "xuartps.h"  // ADD THIS
#include "xparameters.h"  // ADD THIS

#include <stdio.h>
#include <algorithm>
#include "xil_printf.h"
#include "xtime_l.h"

// Include weight files
#include "conv1_weights.h"
#include "conv2_weights.h"
#include "fc_weights.h"
#include "test_image.h"

// ============================================
// LAYER 1: CONVOLUTION (SINGLE INPUT CHANNEL)
// ============================================
void conv2d(
    float input[][28],
    float output[][26][26],
    float weights[8][1][3][3],
    float bias[8],
    int in_channels,
    int out_channels,
    int in_h,
    int in_w,
    int kernel_size
) {
    int out_h = in_h - kernel_size + 1;
    int out_w = in_w - kernel_size + 1;

    for (int oc = 0; oc < out_channels; oc++) {
        for (int i = 0; i < out_h; i++) {
            for (int j = 0; j < out_w; j++) {
                float sum = bias[oc];
                for (int ic = 0; ic < in_channels; ic++) {
                    for (int ki = 0; ki < kernel_size; ki++) {
                        for (int kj = 0; kj < kernel_size; kj++) {
                            sum += input[i + ki][j + kj] * weights[oc][ic][ki][kj];
                        }
                    }
                }
                output[oc][i][j] = sum;
            }
        }
    }
}

// ============================================
// LAYER 1b: CONVOLUTION (MULTI INPUT CHANNELS)
// ============================================
void conv2d_multi(
    float input[][13][13],
    float output[][11][11],
    float weights[16][8][3][3],
    float bias[16],
    int in_channels,
    int out_channels,
    int in_h,
    int in_w,
    int kernel_size
) {
    int out_h = in_h - kernel_size + 1;
    int out_w = in_w - kernel_size + 1;

    for (int oc = 0; oc < out_channels; oc++) {
        for (int i = 0; i < out_h; i++) {
            for (int j = 0; j < out_w; j++) {
                float sum = bias[oc];
                for (int ic = 0; ic < in_channels; ic++) {
                    for (int ki = 0; ki < kernel_size; ki++) {
                        for (int kj = 0; kj < kernel_size; kj++) {
                            sum += input[ic][i + ki][j + kj] * weights[oc][ic][ki][kj];
                        }
                    }
                }
                output[oc][i][j] = sum;
            }
        }
    }
}

// ============================================
// LAYER 2: ReLU ACTIVATION
// ============================================
template<int C, int H, int W>
void relu(float data[C][H][W]) {
    for (int c = 0; c < C; c++) {
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (data[c][i][j] < 0) {
                    data[c][i][j] = 0;
                }
            }
        }
    }
}

// ============================================
// LAYER 3: MAX POOLING
// ============================================
template<int C, int H_in, int W_in, int H_out, int W_out>
void maxpool2d(float input[C][H_in][W_in], float output[C][H_out][W_out]) {
    for (int c = 0; c < C; c++) {
        for (int i = 0; i < H_out; i++) {
            for (int j = 0; j < W_out; j++) {
                float max_val = input[c][i*2][j*2];
                max_val = std::max(max_val, input[c][i*2][j*2+1]);
                max_val = std::max(max_val, input[c][i*2+1][j*2]);
                max_val = std::max(max_val, input[c][i*2+1][j*2+1]);
                output[c][i][j] = max_val;
            }
        }
    }
}

// ============================================
// LAYER 4: FULLY CONNECTED
// ============================================
void fully_connected(
    float input[400],
    float output[10],
    float weights[10][400],
    float bias[10]
) {
    for (int i = 0; i < 10; i++) {
        float sum = bias[i];
        for (int j = 0; j < 400; j++) {
            sum += input[j] * weights[i][j];
        }
        output[i] = sum;
    }
}

// ============================================
// HELPER: FLATTEN
// ============================================
void flatten(float input[16][5][5], float output[400]) {
    int idx = 0;
    for (int c = 0; c < 16; c++) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                output[idx++] = input[c][i][j];
            }
        }
    }
}

// ============================================
// MAIN INFERENCE FUNCTION
// ============================================
int predict(float input_image[28][28]) {
    // Layer outputs
    static float conv1_out[8][26][26];
    static float pool1_out[8][13][13];
    static float conv2_out[16][11][11];
    static float pool2_out[16][5][5];
    static float fc_input[400];
    static float fc_output[10];

    // Conv1 + ReLU + Pool
    conv2d(input_image, conv1_out, conv1_w, conv1_b, 1, 8, 28, 28, 3);
    relu<8, 26, 26>(conv1_out);
    maxpool2d<8, 26, 26, 13, 13>(conv1_out, pool1_out);

    // Conv2 + ReLU + Pool
    conv2d_multi(pool1_out, conv2_out, conv2_w, conv2_b, 8, 16, 13, 13, 3);
    relu<16, 11, 11>(conv2_out);
    maxpool2d<16, 11, 11, 5, 5>(conv2_out, pool2_out);

    // FC
    flatten(pool2_out, fc_input);
    fully_connected(fc_input, fc_output, fc_w, fc_b);

    // Find max
    int pred = 0;
    float max_score = fc_output[0];
    for (int i = 1; i < 10; i++) {
        if (fc_output[i] > max_score) {
            max_score = fc_output[i];
            pred = i;
        }
    }

    // Print scores
    xil_printf("\r\nOutput scores:\r\n");
    for (int i = 0; i < 10; i++) {
        xil_printf("  Class %d: %d.%03d\r\n", i,
                   (int)fc_output[i],
                   (int)((fc_output[i] - (int)fc_output[i]) * 1000));
    }

    return pred;
}

void init_uart() {
    XUartPs_Config *Config;
    XUartPs UartInstance;

    Config = XUartPs_LookupConfig(XPAR_XUARTPS_0_DEVICE_ID);
    XUartPs_CfgInitialize(&UartInstance, Config, Config->BaseAddress);
    XUartPs_SetBaudRate(&UartInstance, 115200);  // Force 115200
}

// ============================================
// MAIN
// ============================================
int main() {

	init_uart();

    XTime tStart, tEnd;
    double elapsed_ms;

    xil_printf("========================================\r\n");
    xil_printf("MNIST CNN INFERENCE ON ZYNQ ARM\r\n");
    xil_printf("========================================\r\n\r\n");

    xil_printf("Architecture:\r\n");
    xil_printf("  Input: 1x28x28\r\n");
    xil_printf("  Conv1: 8 filters (3x3) + ReLU + MaxPool\r\n");
    xil_printf("  Conv2: 16 filters (3x3) + ReLU + MaxPool\r\n");
    xil_printf("  FC: 400 -> 10\r\n\r\n");

    xil_printf("Ground truth label: %d\r\n\r\n", test_label);

    // Warm-up run (to load cache)
    xil_printf("Running warm-up inference...\r\n");
    predict(test_image);

    // Timed runs
    xil_printf("\r\n========================================\r\n");
    xil_printf("RUNNING 10 TIMED INFERENCES\r\n");
    xil_printf("========================================\r\n");

    double total_time = 0.0;
    int prediction = 0;

    for (int run = 0; run < 10; run++) {
        XTime_GetTime(&tStart);
        prediction = predict(test_image);
        XTime_GetTime(&tEnd);

        elapsed_ms = 1000.0 * (double)(tEnd - tStart) / (double)COUNTS_PER_SECOND;
        total_time += elapsed_ms;

        xil_printf("\r\nRun %d: Prediction = %d, Time = %d.%03d ms\r\n",
                   run + 1, prediction,
                   (int)elapsed_ms,
                   (int)((elapsed_ms - (int)elapsed_ms) * 1000));
    }

    double avg_time = total_time / 10.0;

    xil_printf("\r\n========================================\r\n");
    xil_printf("FINAL RESULTS\r\n");
    xil_printf("========================================\r\n");
    xil_printf("Prediction:     %d\r\n", prediction);
    xil_printf("Actual:         %d\r\n", test_label);
    xil_printf("Average time:   %d.%03d ms\r\n",
               (int)avg_time,
               (int)((avg_time - (int)avg_time) * 1000));

    if (prediction == test_label) {
        xil_printf("Status:         CORRECT\r\n");
    } else {
        xil_printf("Status:         INCORRECT\r\n");
    }
    xil_printf("========================================\r\n");

    xil_printf("\r\n>>> CPU BASELINE WORKS <<<\r\n\r\n");

    return 0;
}

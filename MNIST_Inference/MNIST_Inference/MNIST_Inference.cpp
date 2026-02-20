#include <iostream>
#include <algorithm>
#include <cmath>

// Include weight files (copy these to your VS project folder)
#include "conv1_weights.h"
#include "conv2_weights.h"
#include "fc_weights.h"
#include "test_image.h"

using namespace std;

// ============================================
// LAYER 1: CONVOLUTION
// ============================================
void conv2d(
    float input[][28],      // Input: 1 x 28 x 28
    float output[][26][26], // Output: 8 x 26 x 26
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

void conv2d_multi(
    float input[][13][13],   // Input: 8 x 13 x 13
    float output[][11][11],  // Output: 16 x 11 x 11
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
                float max_val = input[c][i * 2][j * 2];
                max_val = max(max_val, input[c][i * 2][j * 2 + 1]);
                max_val = max(max_val, input[c][i * 2 + 1][j * 2]);
                max_val = max(max_val, input[c][i * 2 + 1][j * 2 + 1]);
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

    cout << "Running inference...\n";

    // Conv1 + ReLU + Pool
    cout << "  Layer 1: Conv2D(1->8, 3x3)\n";
    conv2d(input_image, conv1_out, conv1_w, conv1_b, 1, 8, 28, 28, 3);
    relu<8, 26, 26>(conv1_out);
    maxpool2d<8, 26, 26, 13, 13>(conv1_out, pool1_out);

    // Conv2 + ReLU + Pool
    cout << "  Layer 2: Conv2D(8->16, 3x3)\n";
    conv2d_multi(pool1_out, conv2_out, conv2_w, conv2_b, 8, 16, 13, 13, 3);
    relu<16, 11, 11>(conv2_out);
    maxpool2d<16, 11, 11, 5, 5>(conv2_out, pool2_out);

    // FC
    cout << "  Layer 3: Fully Connected(400->10)\n";
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
    cout << "\nOutput scores:\n";
    for (int i = 0; i < 10; i++) {
        cout << "  Class " << i << ": " << fc_output[i] << "\n";
    }

    return pred;
}

// ============================================
// MAIN
// ============================================
int main() {
    cout << "========================================\n";
    cout << "MNIST CNN INFERENCE (C++ CPU VERSION)\n";
    cout << "========================================\n\n";

    cout << "Architecture:\n";
    cout << "  Input: 1x28x28\n";
    cout << "  Conv1: 8 filters (3x3) + ReLU + MaxPool\n";
    cout << "  Conv2: 16 filters (3x3) + ReLU + MaxPool\n";
    cout << "  FC: 400 -> 10\n\n";

    cout << "Ground truth label: " << test_label << "\n\n";

    int prediction = predict(test_image);

    cout << "\n========================================\n";
    cout << "PREDICTION: " << prediction << "\n";
    cout << "ACTUAL:     " << test_label << "\n";

    if (prediction == test_label) {
        cout << "✅ CORRECT!\n";
    }
    else {
        cout << "❌ INCORRECT\n";
    }
    cout << "========================================\n";

    return 0;
}
#include <math.h>

void conv2d(
    float *input,
    float *weights,
    float *bias,
    float *output
) {
#pragma HLS INTERFACE m_axi port=input   bundle=gmem0 depth=784
#pragma HLS INTERFACE m_axi port=weights bundle=gmem1 depth=5224
#pragma HLS INTERFACE m_axi port=bias    bundle=gmem1 depth=34
#pragma HLS INTERFACE m_axi port=output  bundle=gmem2 depth=10

#pragma HLS INTERFACE s_axilite port=input
#pragma HLS INTERFACE s_axilite port=weights
#pragma HLS INTERFACE s_axilite port=bias
#pragma HLS INTERFACE s_axilite port=output
#pragma HLS INTERFACE s_axilite port=return

    // =====================================================
    // LAYER BUFFERS
    // =====================================================

    float conv1_out[8][26][26];
    float pool1_out[8][13][13];

    float conv2_out[16][11][11];
    float pool2_out[16][5][5];

    float fc_in[400];

    // =====================================================
    // CONV1
    // weights[0..71], bias[0..7]
    // =====================================================

    for (int oc = 0; oc < 8; oc++) {
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < 26; j++) {

                float sum = bias[oc];

                for (int ki = 0; ki < 3; ki++) {
                    for (int kj = 0; kj < 3; kj++) {
                        sum += input[(i+ki)*28 + (j+kj)]
                               * weights[oc*9 + ki*3 + kj];
                    }
                }

                if (sum < 0) sum = 0; // ReLU
                conv1_out[oc][i][j] = sum;
            }
        }
    }

    // =====================================================
    // MAXPOOL1 (2x2)
    // =====================================================

    for (int c = 0; c < 8; c++) {
        for (int i = 0; i < 13; i++) {
            for (int j = 0; j < 13; j++) {

                float m = conv1_out[c][2*i][2*j];

                for (int pi=0; pi<2; pi++)
                    for (int pj=0; pj<2; pj++)
                        if (conv1_out[c][2*i+pi][2*j+pj] > m)
                            m = conv1_out[c][2*i+pi][2*j+pj];

                pool1_out[c][i][j] = m;
            }
        }
    }

    // =====================================================
    // CONV2
    // weights offset = 72
    // bias offset = 8
    // =====================================================

    int conv2_w_off = 72;
    int conv2_b_off = 8;

    for (int oc = 0; oc < 16; oc++) {
        for (int i = 0; i < 11; i++) {
            for (int j = 0; j < 11; j++) {

                float sum = bias[conv2_b_off + oc];

                for (int ic = 0; ic < 8; ic++) {
                    for (int ki = 0; ki < 3; ki++) {
                        for (int kj = 0; kj < 3; kj++) {

                            int widx = conv2_w_off +
                                       oc*8*9 +
                                       ic*9 +
                                       ki*3 + kj;

                            sum += pool1_out[ic][i+ki][j+kj]
                                   * weights[widx];
                        }
                    }
                }

                if (sum < 0) sum = 0;
                conv2_out[oc][i][j] = sum;
            }
        }
    }

    // =====================================================
    // MAXPOOL2
    // =====================================================

    for (int c = 0; c < 16; c++) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {

                float m = conv2_out[c][2*i][2*j];

                for (int pi=0; pi<2; pi++)
                    for (int pj=0; pj<2; pj++)
                        if (conv2_out[c][2*i+pi][2*j+pj] > m)
                            m = conv2_out[c][2*i+pi][2*j+pj];

                pool2_out[c][i][j] = m;
            }
        }
    }

    // =====================================================
    // FLATTEN
    // =====================================================

    int idx = 0;
    for (int c=0;c<16;c++)
        for (int i=0;i<5;i++)
            for (int j=0;j<5;j++)
                fc_in[idx++] = pool2_out[c][i][j];

    // =====================================================
    // FC
    // weights offset = 72 + 1152
    // bias offset = 8 + 16
    // =====================================================

    int fc_w_off = 72 + 1152;
    int fc_b_off = 8 + 16;

    for (int o=0; o<10; o++) {

        float sum = bias[fc_b_off + o];

        for (int i=0;i<400;i++)
            sum += fc_in[i] * weights[fc_w_off + o*400 + i];

        output[o] = sum;
    }
}
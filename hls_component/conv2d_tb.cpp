#include <stdio.h>

void conv2d(float*, float*, float*, float*);

#include "C:/Users/Admin/Downloads/conv1_weights.h"
#include "C:/Users/Admin/Downloads/conv2_weights.h"
#include "C:/Users/Admin/Downloads/fc_weights.h"
#include "C:/Users/Admin/Downloads/test_image.h"

int main() {

    float input[784];
    float output[10];

    float weights[5224];
    float bias[34];

    int idx=0;

    for(int oc=0;oc<8;oc++)
        for(int ic=0;ic<1;ic++)
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                    weights[idx++] = conv1_w[oc][ic][i][j];

    for(int oc=0;oc<16;oc++)
        for(int ic=0;ic<8;ic++)
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                    weights[idx++] = conv2_w[oc][ic][i][j];

    for(int o=0;o<10;o++)
        for(int i=0;i<400;i++)
            weights[idx++] = fc_w[o][i];

    idx=0;
    for(int i=0;i<8;i++) bias[idx++]=conv1_b[i];
    for(int i=0;i<16;i++) bias[idx++]=conv2_b[i];
    for(int i=0;i<10;i++) bias[idx++]=fc_b[i];

    for(int i=0;i<28;i++)
        for(int j=0;j<28;j++)
            input[i*28+j] = test_image[i][j];

    conv2d(input, weights, bias, output);

    for(int i=0;i<10;i++)
        printf("%f\n",output[i]);

    return 0;
}
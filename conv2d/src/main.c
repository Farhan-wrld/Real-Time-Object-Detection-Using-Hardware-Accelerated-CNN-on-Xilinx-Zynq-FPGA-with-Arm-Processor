#include "xconv2d.h"
#include "xil_printf.h"
#define INPUT_ADDR   0x10000000
#define WEIGHT_ADDR  0x10100000
#define BIAS_ADDR    0x10200000
#define OUTPUT_ADDR  0x10300000
int main()
{
    xil_printf("Starting Conv2D test...\n");
    XConv2d conv;
    XConv2d_Initialize(&conv, XPAR_CONV2D_0_DEVICE_ID);
    XConv2d_Set_input_r(&conv, INPUT_ADDR);
    XConv2d_Set_weights(&conv, WEIGHT_ADDR);
    XConv2d_Set_bias(&conv, BIAS_ADDR);
    XConv2d_Set_output_r(&conv, OUTPUT_ADDR);
    xil_printf("Starting accelerator...\n");
    XConv2d_Start(&conv);
    while (!XConv2d_IsDone(&conv));
    xil_printf("Accelerator finished!\n");
    return 0;
}

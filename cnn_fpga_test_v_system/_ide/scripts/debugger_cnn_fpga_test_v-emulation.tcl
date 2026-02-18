# Usage with Vitis IDE:
# In Vitis IDE create a Single Application Debug launch configuration,
# change the debug type to 'Attach to running target' and provide this 
# tcl script in 'Execute Script' option.
# Path of this script: C:\MNIST_Project\cnn_fpga_test_v_system\_ide\scripts\debugger_cnn_fpga_test_v-emulation.tcl
# 
# 
# Usage with xsct:
# To debug using xsct, launch xsct and run below command
# source C:\MNIST_Project\cnn_fpga_test_v_system\_ide\scripts\debugger_cnn_fpga_test_v-emulation.tcl
# 
connect -url tcp:localhost:4353
targets 3
dow C:/MNIST_Project/cnn_fpga_test_v/Debug/cnn_fpga_test_v.elf
targets 3
con

# Usage with Vitis IDE:
# In Vitis IDE create a Single Application Debug launch configuration,
# change the debug type to 'Attach to running target' and provide this 
# tcl script in 'Execute Script' option.
# Path of this script: C:\MNIST_Project\cnn_fpga_test_v3_system\_ide\scripts\systemdebugger_cnn_fpga_test_v3_system_standalone.tcl
# 
# 
# Usage with xsct:
# To debug using xsct, launch xsct and run below command
# source C:\MNIST_Project\cnn_fpga_test_v3_system\_ide\scripts\systemdebugger_cnn_fpga_test_v3_system_standalone.tcl
# 
connect -url tcp:127.0.0.1:3121
targets -set -nocase -filter {name =~"APU*"}
rst -system
after 3000
targets -set -filter {jtag_cable_name =~ "Digilent Zed 210248650087" && level==0 && jtag_device_ctx=="jsn-Zed-210248650087-23727093-0"}
fpga -file C:/MNIST_Project/cnn_fpga_test_v3/_ide/bitstream/system_wrapper.bit
targets -set -nocase -filter {name =~"APU*"}
loadhw -hw C:/MNIST_Project/zedboard_fpga_platform_v3/export/zedboard_fpga_platform_v3/hw/system_wrapper4.xsa -mem-ranges [list {0x40000000 0xbfffffff}] -regs
configparams force-mem-access 1
targets -set -nocase -filter {name =~"APU*"}
source C:/MNIST_Project/cnn_fpga_test_v3/_ide/psinit/ps7_init.tcl
ps7_init
ps7_post_config
targets -set -nocase -filter {name =~ "*A9*#0"}
dow C:/MNIST_Project/cnn_fpga_test_v3/Debug/cnn_fpga_test_v3.elf
configparams force-mem-access 0
targets -set -nocase -filter {name =~ "*A9*#0"}
con

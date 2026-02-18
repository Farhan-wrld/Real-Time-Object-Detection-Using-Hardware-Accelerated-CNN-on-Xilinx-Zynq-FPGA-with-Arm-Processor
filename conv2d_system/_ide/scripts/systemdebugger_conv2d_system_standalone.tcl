# Usage with Vitis IDE:
# In Vitis IDE create a Single Application Debug launch configuration,
# change the debug type to 'Attach to running target' and provide this 
# tcl script in 'Execute Script' option.
# Path of this script: C:\MNIST_Project\conv2d_system\_ide\scripts\systemdebugger_conv2d_system_standalone.tcl
# 
# 
# Usage with xsct:
# To debug using xsct, launch xsct and run below command
# source C:\MNIST_Project\conv2d_system\_ide\scripts\systemdebugger_conv2d_system_standalone.tcl
# 
connect -url tcp:127.0.0.1:3121
targets -set -nocase -filter {name =~"APU*"}
rst -system
after 3000
targets -set -filter {jtag_cable_name =~ "Digilent Zed 210248650087" && level==0 && jtag_device_ctx=="jsn-Zed-210248650087-23727093-0"}
fpga -file C:/MNIST_Project/conv2d/_ide/bitstream/system_wrapper.bit
targets -set -nocase -filter {name =~"APU*"}
loadhw -hw C:/MNIST_Project/conv2dtest/export/conv2dtest/hw/system_wrapper3.xsa -mem-ranges [list {0x40000000 0xbfffffff}] -regs
configparams force-mem-access 1
targets -set -nocase -filter {name =~"APU*"}
source C:/MNIST_Project/conv2d/_ide/psinit/ps7_init.tcl
ps7_init
ps7_post_config
targets -set -nocase -filter {name =~ "*A9*#0"}
dow C:/MNIST_Project/conv2d/Debug/conv2d.elf
configparams force-mem-access 0
targets -set -nocase -filter {name =~ "*A9*#0"}
con

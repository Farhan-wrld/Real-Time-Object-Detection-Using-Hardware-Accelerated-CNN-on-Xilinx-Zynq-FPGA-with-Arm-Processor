# 
# Usage: To re-create this platform project launch xsct with below options.
# xsct C:\MNIST_Project\zedboard_fpga_platform_v3\platform.tcl
# 
# OR launch xsct and run below command.
# source C:\MNIST_Project\zedboard_fpga_platform_v3\platform.tcl
# 
# To create the platform in a different location, modify the -out option of "platform create" command.
# -out option specifies the output directory of the platform project.

platform create -name {zedboard_fpga_platform_v3}\
-hw {C:\Users\Farhan Alam\Downloads\system_wrapper4.xsa}\
-proc {ps7_cortexa9_0} -os {standalone} -fsbl-target {psu_cortexa53_0} -out {C:/MNIST_Project}

platform write
platform generate -domains 
platform active {zedboard_fpga_platform_v3}
platform generate

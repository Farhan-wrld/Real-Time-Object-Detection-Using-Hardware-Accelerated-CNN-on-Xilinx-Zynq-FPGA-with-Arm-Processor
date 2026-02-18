# 
# Usage: To re-create this platform project launch xsct with below options.
# xsct C:\MNIST_Project\zedboard_platform\platform.tcl
# 
# OR launch xsct and run below command.
# source C:\MNIST_Project\zedboard_platform\platform.tcl
# 
# To create the platform in a different location, modify the -out option of "platform create" command.
# -out option specifies the output directory of the platform project.

platform create -name {zedboard_platform}\
-hw {C:\Xilinx\Vitis\2020.2\data\embeddedsw\lib\fixed_hwplatforms\zed.xsa}\
-proc {ps7_cortexa9_0} -os {standalone} -fsbl-target {psu_cortexa53_0} -out {C:/MNIST_Project}

platform write
platform generate -domains 
platform active {zedboard_platform}
platform generate
platform active {zedboard_platform}
catch {platform remove zynq_platform}

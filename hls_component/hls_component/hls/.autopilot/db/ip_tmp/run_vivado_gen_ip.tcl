create_project prj -part xc7z020-clg484-1 -force
set_property target_language verilog [current_project]
set vivado_ver [version -short]
set COE_DIR "../../syn/verilog"
source "C:/Users/Admin/Desktop/Bharat_ARM_Challenge/hls_component/hls_component/hls/syn/verilog/conv2d_fadd_32ns_32ns_32_5_full_dsp_1_ip.tcl"
source "C:/Users/Admin/Desktop/Bharat_ARM_Challenge/hls_component/hls_component/hls/syn/verilog/conv2d_fcmp_32ns_32ns_1_2_no_dsp_1_ip.tcl"
source "C:/Users/Admin/Desktop/Bharat_ARM_Challenge/hls_component/hls_component/hls/syn/verilog/conv2d_fmul_32ns_32ns_32_4_max_dsp_1_ip.tcl"

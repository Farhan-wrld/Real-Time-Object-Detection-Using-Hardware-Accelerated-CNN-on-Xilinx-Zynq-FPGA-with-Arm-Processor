vlib questa_lib/work
vlib questa_lib/msim

vlib questa_lib/msim/xilinx_vip
vlib questa_lib/msim/xpm
vlib questa_lib/msim/axi_infrastructure_v1_1_0
vlib questa_lib/msim/axi_vip_v1_1_22
vlib questa_lib/msim/processing_system7_vip_v1_0_24
vlib questa_lib/msim/xil_defaultlib
vlib questa_lib/msim/xbip_utils_v3_0_15
vlib questa_lib/msim/axi_utils_v2_0_11
vlib questa_lib/msim/xbip_pipe_v3_0_11
vlib questa_lib/msim/xbip_dsp48_wrapper_v3_0_7
vlib questa_lib/msim/mult_gen_v12_0_24
vlib questa_lib/msim/floating_point_v7_1_21
vlib questa_lib/msim/proc_sys_reset_v5_0_17
vlib questa_lib/msim/smartconnect_v1_0
vlib questa_lib/msim/axi_register_slice_v2_1_36
vlib questa_lib/msim/generic_baseblocks_v2_1_2
vlib questa_lib/msim/fifo_generator_v13_2_14
vlib questa_lib/msim/axi_data_fifo_v2_1_36
vlib questa_lib/msim/axi_crossbar_v2_1_38
vlib questa_lib/msim/axi_protocol_converter_v2_1_37
vlib questa_lib/msim/axi_clock_converter_v2_1_35
vlib questa_lib/msim/blk_mem_gen_v8_4_12
vlib questa_lib/msim/axi_dwidth_converter_v2_1_37

vmap xilinx_vip questa_lib/msim/xilinx_vip
vmap xpm questa_lib/msim/xpm
vmap axi_infrastructure_v1_1_0 questa_lib/msim/axi_infrastructure_v1_1_0
vmap axi_vip_v1_1_22 questa_lib/msim/axi_vip_v1_1_22
vmap processing_system7_vip_v1_0_24 questa_lib/msim/processing_system7_vip_v1_0_24
vmap xil_defaultlib questa_lib/msim/xil_defaultlib
vmap xbip_utils_v3_0_15 questa_lib/msim/xbip_utils_v3_0_15
vmap axi_utils_v2_0_11 questa_lib/msim/axi_utils_v2_0_11
vmap xbip_pipe_v3_0_11 questa_lib/msim/xbip_pipe_v3_0_11
vmap xbip_dsp48_wrapper_v3_0_7 questa_lib/msim/xbip_dsp48_wrapper_v3_0_7
vmap mult_gen_v12_0_24 questa_lib/msim/mult_gen_v12_0_24
vmap floating_point_v7_1_21 questa_lib/msim/floating_point_v7_1_21
vmap proc_sys_reset_v5_0_17 questa_lib/msim/proc_sys_reset_v5_0_17
vmap smartconnect_v1_0 questa_lib/msim/smartconnect_v1_0
vmap axi_register_slice_v2_1_36 questa_lib/msim/axi_register_slice_v2_1_36
vmap generic_baseblocks_v2_1_2 questa_lib/msim/generic_baseblocks_v2_1_2
vmap fifo_generator_v13_2_14 questa_lib/msim/fifo_generator_v13_2_14
vmap axi_data_fifo_v2_1_36 questa_lib/msim/axi_data_fifo_v2_1_36
vmap axi_crossbar_v2_1_38 questa_lib/msim/axi_crossbar_v2_1_38
vmap axi_protocol_converter_v2_1_37 questa_lib/msim/axi_protocol_converter_v2_1_37
vmap axi_clock_converter_v2_1_35 questa_lib/msim/axi_clock_converter_v2_1_35
vmap blk_mem_gen_v8_4_12 questa_lib/msim/blk_mem_gen_v8_4_12
vmap axi_dwidth_converter_v2_1_37 questa_lib/msim/axi_dwidth_converter_v2_1_37

vlog -work xilinx_vip  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/hdl/axi4stream_vip_axi4streampc.sv" \
"C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/hdl/axi_vip_axi4pc.sv" \
"C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/hdl/xil_common_vip_pkg.sv" \
"C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/hdl/axi4stream_vip_pkg.sv" \
"C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/hdl/axi_vip_pkg.sv" \
"C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/hdl/axi4stream_vip_if.sv" \
"C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/hdl/axi_vip_if.sv" \
"C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/hdl/clk_vip_if.sv" \
"C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/hdl/rst_vip_if.sv" \

vlog -work xpm  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"C:/AMDDesignTools/2025.2/Vivado/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"C:/AMDDesignTools/2025.2/Vivado/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv" \
"C:/AMDDesignTools/2025.2/Vivado/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm  -93  \
"C:/AMDDesignTools/2025.2/Vivado/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work axi_infrastructure_v1_1_0  -incr -mfcu  "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work axi_vip_v1_1_22  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/b16a/hdl/axi_vip_v1_1_vl_rfs.sv" \

vlog -work processing_system7_vip_v1_0_24  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl/processing_system7_vip_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -incr -mfcu  "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../bd/system/ip/system_processing_system7_0_2/sim/system_processing_system7_0_2.v" \

vcom -work xbip_utils_v3_0_15  -93  \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/hdl/ip/conv2d_fadd_32ns_32ns_32_5_full_dsp_1_ip/hdl/xbip_utils_v3_0_vh_rfs.vhd" \

vcom -work axi_utils_v2_0_11  -93  \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/hdl/ip/conv2d_fadd_32ns_32ns_32_5_full_dsp_1_ip/hdl/axi_utils_v2_0_vh_rfs.vhd" \

vcom -work xbip_pipe_v3_0_11  -93  \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/hdl/ip/conv2d_fadd_32ns_32ns_32_5_full_dsp_1_ip/hdl/xbip_pipe_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_wrapper_v3_0_7  -93  \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/hdl/ip/conv2d_fadd_32ns_32ns_32_5_full_dsp_1_ip/hdl/xbip_dsp48_wrapper_v3_0_vh_rfs.vhd" \

vcom -work mult_gen_v12_0_24  -93  \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/hdl/ip/conv2d_fadd_32ns_32ns_32_5_full_dsp_1_ip/hdl/mult_gen_v12_0_vh_rfs.vhd" \

vcom -work floating_point_v7_1_21  -93  \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/hdl/ip/conv2d_fadd_32ns_32ns_32_5_full_dsp_1_ip/hdl/floating_point_v7_1_vh_rfs.vhd" \

vcom -work xil_defaultlib  -93  \
"../../../bd/system/ip/system_conv2d_0_5/hdl/ip/conv2d_fadd_32ns_32ns_32_5_full_dsp_1_ip/sim/conv2d_fadd_32ns_32ns_32_5_full_dsp_1_ip.vhd" \
"../../../bd/system/ip/system_conv2d_0_5/hdl/ip/conv2d_fmul_32ns_32ns_32_4_max_dsp_1_ip/sim/conv2d_fmul_32ns_32ns_32_4_max_dsp_1_ip.vhd" \

vlog -work xil_defaultlib  -incr -mfcu  "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f876/hdl/verilog/conv2d_control_s_axi.v" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f876/hdl/verilog/conv2d_conv2d_Pipeline_VITIS_LOOP_24_2_VITIS_LOOP_25_3.v" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f876/hdl/verilog/conv2d_conv2d_Pipeline_VITIS_LOOP_35_5.v" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f876/hdl/verilog/conv2d_conv2d_Pipeline_VITIS_LOOP_43_6.v" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f876/hdl/verilog/conv2d_fadd_32ns_32ns_32_5_full_dsp_1.v" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f876/hdl/verilog/conv2d_flow_control_loop_pipe_sequential_init.v" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f876/hdl/verilog/conv2d_fmul_32ns_32ns_32_4_max_dsp_1.v" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f876/hdl/verilog/conv2d_gmem0_m_axi.v" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f876/hdl/verilog/conv2d_gmem1_m_axi.v" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f876/hdl/verilog/conv2d_gmem2_m_axi.v" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f876/hdl/verilog/conv2d_linebuf_RAM_1WNR_AUTO_1R1W.v" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f876/hdl/verilog/conv2d.v" \
"../../../bd/system/ip/system_conv2d_0_5/sim/system_conv2d_0_5.v" \
"../../../bd/system/ip/system_axi_smc_3/bd_0/sim/bd_45a3.v" \

vcom -work proc_sys_reset_v5_0_17  -93  \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9438/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib  -93  \
"../../../bd/system/ip/system_axi_smc_3/bd_0/ip/ip_1/sim/bd_45a3_psr_aclk_0.vhd" \

vlog -work smartconnect_v1_0  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/sc_util_v1_0_vl_rfs.sv" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/3d9a/hdl/sc_mmu_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../bd/system/ip/system_axi_smc_3/bd_0/ip/ip_2/sim/bd_45a3_s00mmu_0.sv" \

vlog -work smartconnect_v1_0  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/7785/hdl/sc_transaction_regulator_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../bd/system/ip/system_axi_smc_3/bd_0/ip/ip_3/sim/bd_45a3_s00tr_0.sv" \

vlog -work smartconnect_v1_0  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/3051/hdl/sc_si_converter_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../bd/system/ip/system_axi_smc_3/bd_0/ip/ip_4/sim/bd_45a3_s00sic_0.sv" \

vlog -work smartconnect_v1_0  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/852f/hdl/sc_axi2sc_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../bd/system/ip/system_axi_smc_3/bd_0/ip/ip_5/sim/bd_45a3_s00a2s_0.sv" \

vlog -work smartconnect_v1_0  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/sc_node_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../bd/system/ip/system_axi_smc_3/bd_0/ip/ip_6/sim/bd_45a3_sarn_0.sv" \
"../../../bd/system/ip/system_axi_smc_3/bd_0/ip/ip_7/sim/bd_45a3_srn_0.sv" \
"../../../bd/system/ip/system_axi_smc_3/bd_0/ip/ip_8/sim/bd_45a3_sawn_0.sv" \
"../../../bd/system/ip/system_axi_smc_3/bd_0/ip/ip_9/sim/bd_45a3_swn_0.sv" \
"../../../bd/system/ip/system_axi_smc_3/bd_0/ip/ip_10/sim/bd_45a3_sbn_0.sv" \

vlog -work smartconnect_v1_0  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/fca9/hdl/sc_sc2axi_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../bd/system/ip/system_axi_smc_3/bd_0/ip/ip_11/sim/bd_45a3_m00s2a_0.sv" \

vlog -work smartconnect_v1_0  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/e44a/hdl/sc_exit_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../bd/system/ip/system_axi_smc_3/bd_0/ip/ip_12/sim/bd_45a3_m00e_0.sv" \

vcom -work smartconnect_v1_0  -93  \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/cb42/hdl/sc_ultralite_v1_0_rfs.vhd" \

vlog -work smartconnect_v1_0  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/cb42/hdl/sc_ultralite_v1_0_rfs.sv" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/0848/hdl/sc_switchboard_v1_0_vl_rfs.sv" \

vlog -work axi_register_slice_v2_1_36  -incr -mfcu  "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/bc4b/hdl/axi_register_slice_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -incr -mfcu  -sv -L smartconnect_v1_0 -L axi_vip_v1_1_22 -L processing_system7_vip_v1_0_24 -L xilinx_vip "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../bd/system/ip/system_axi_smc_3/sim/system_axi_smc_3.sv" \

vcom -work xil_defaultlib  -93  \
"../../../bd/system/ip/system_rst_ps7_0_100M_3/sim/system_rst_ps7_0_100M_3.vhd" \

vlog -work generic_baseblocks_v2_1_2  -incr -mfcu  "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/0c28/hdl/generic_baseblocks_v2_1_vl_rfs.v" \

vlog -work fifo_generator_v13_2_14  -incr -mfcu  "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/d654/simulation/fifo_generator_vlog_beh.v" \

vcom -work fifo_generator_v13_2_14  -93  \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/d654/hdl/fifo_generator_v13_2_rfs.vhd" \

vlog -work fifo_generator_v13_2_14  -incr -mfcu  "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/d654/hdl/fifo_generator_v13_2_rfs.v" \

vlog -work axi_data_fifo_v2_1_36  -incr -mfcu  "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/fb46/hdl/axi_data_fifo_v2_1_vl_rfs.v" \

vlog -work axi_crossbar_v2_1_38  -incr -mfcu  "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f084/hdl/axi_crossbar_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -incr -mfcu  "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../bd/system/ip/system_axi_mem_intercon_imp_xbar_2/sim/system_axi_mem_intercon_imp_xbar_2.v" \
"../../../bd/system/sim/system.v" \

vlog -work axi_protocol_converter_v2_1_37  -incr -mfcu  "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/d98a/hdl/axi_protocol_converter_v2_1_vl_rfs.v" \

vlog -work axi_clock_converter_v2_1_35  -incr -mfcu  "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/e059/hdl/axi_clock_converter_v2_1_vl_rfs.v" \

vlog -work blk_mem_gen_v8_4_12  -incr -mfcu  "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/42f3/simulation/blk_mem_gen_v8_4.v" \

vlog -work axi_dwidth_converter_v2_1_37  -incr -mfcu  "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/21f8/hdl/axi_dwidth_converter_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -incr -mfcu  "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/9a25/hdl" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/f0b6/hdl/verilog" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ipshared/00fe/hdl/verilog" "+incdir+../../../../../../../../../AMDDesignTools/2025.2/Vivado/data/rsb/busdef" "+incdir+../../../../zynq_cnn_basek.gen/sources_1/bd/system/ip/system_conv2d_0_5/drivers/conv2d_v1_0/src" "+incdir+C:/AMDDesignTools/2025.2/Vivado/data/xilinx_vip/include" \
"../../../bd/system/ip/system_axi_mem_intercon_imp_auto_us_0/sim/system_axi_mem_intercon_imp_auto_us_0.v" \
"../../../bd/system/ip/system_axi_mem_intercon_imp_auto_us_1/sim/system_axi_mem_intercon_imp_auto_us_1.v" \
"../../../bd/system/ip/system_axi_mem_intercon_imp_auto_us_2/sim/system_axi_mem_intercon_imp_auto_us_2.v" \
"../../../bd/system/ip/system_axi_mem_intercon_imp_auto_pc_0/sim/system_axi_mem_intercon_imp_auto_pc_0.v" \

vlog -work xil_defaultlib \
"glbl.v"


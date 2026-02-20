set SynModuleInfo {
  {SRCNAME conv2d_Pipeline_VITIS_LOOP_38_2_VITIS_LOOP_39_3 MODELNAME conv2d_Pipeline_VITIS_LOOP_38_2_VITIS_LOOP_39_3 RTLNAME conv2d_conv2d_Pipeline_VITIS_LOOP_38_2_VITIS_LOOP_39_3
    SUBMODULES {
      {MODELNAME conv2d_mac_muladd_8ns_4ns_4ns_12_4_1 RTLNAME conv2d_mac_muladd_8ns_4ns_4ns_12_4_1 BINDTYPE op TYPE all IMPL dsp_slice LATENCY 3}
      {MODELNAME conv2d_flow_control_loop_pipe_sequential_init RTLNAME conv2d_flow_control_loop_pipe_sequential_init BINDTYPE interface TYPE internal_upc_flow_control INSTNAME conv2d_flow_control_loop_pipe_sequential_init_U}
    }
  }
  {SRCNAME conv2d_Pipeline_VITIS_LOOP_60_6_VITIS_LOOP_61_7_VITIS_LOOP_62_8 MODELNAME conv2d_Pipeline_VITIS_LOOP_60_6_VITIS_LOOP_61_7_VITIS_LOOP_62_8 RTLNAME conv2d_conv2d_Pipeline_VITIS_LOOP_60_6_VITIS_LOOP_61_7_VITIS_LOOP_62_8
    SUBMODULES {
      {MODELNAME conv2d_mul_4ns_6ns_9_1_1 RTLNAME conv2d_mul_4ns_6ns_9_1_1 BINDTYPE op TYPE mul IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME conv2d_mac_muladd_4ns_4ns_4ns_8_4_1 RTLNAME conv2d_mac_muladd_4ns_4ns_4ns_8_4_1 BINDTYPE op TYPE all IMPL dsp_slice LATENCY 3}
      {MODELNAME conv2d_mac_muladd_9ns_4ns_4ns_12_4_1 RTLNAME conv2d_mac_muladd_9ns_4ns_4ns_12_4_1 BINDTYPE op TYPE all IMPL dsp_slice LATENCY 3}
      {MODELNAME conv2d_mac_muladd_8ns_4ns_4ns_11_4_1 RTLNAME conv2d_mac_muladd_8ns_4ns_4ns_11_4_1 BINDTYPE op TYPE all IMPL dsp_slice LATENCY 3}
    }
  }
  {SRCNAME conv2d_Pipeline_VITIS_LOOP_86_12_VITIS_LOOP_87_13_VITIS_LOOP_91_14_VITIS_LOOP_92 MODELNAME conv2d_Pipeline_VITIS_LOOP_86_12_VITIS_LOOP_87_13_VITIS_LOOP_91_14_VITIS_LOOP_92 RTLNAME conv2d_conv2d_Pipeline_VITIS_LOOP_86_12_VITIS_LOOP_87_13_VITIS_LOOP_91_14_VITIS_LOOP_92}
  {SRCNAME conv2d_Pipeline_VITIS_LOOP_116_17_VITIS_LOOP_117_18_VITIS_LOOP_118_19 MODELNAME conv2d_Pipeline_VITIS_LOOP_116_17_VITIS_LOOP_117_18_VITIS_LOOP_118_19 RTLNAME conv2d_conv2d_Pipeline_VITIS_LOOP_116_17_VITIS_LOOP_117_18_VITIS_LOOP_118_19
    SUBMODULES {
      {MODELNAME conv2d_mul_5ns_5ns_9_1_1 RTLNAME conv2d_mul_5ns_5ns_9_1_1 BINDTYPE op TYPE mul IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME conv2d_Pipeline_VITIS_LOOP_137_22_VITIS_LOOP_138_23_VITIS_LOOP_139_24 MODELNAME conv2d_Pipeline_VITIS_LOOP_137_22_VITIS_LOOP_138_23_VITIS_LOOP_139_24 RTLNAME conv2d_conv2d_Pipeline_VITIS_LOOP_137_22_VITIS_LOOP_138_23_VITIS_LOOP_139_24}
  {SRCNAME conv2d_Pipeline_VITIS_LOOP_155_26 MODELNAME conv2d_Pipeline_VITIS_LOOP_155_26 RTLNAME conv2d_conv2d_Pipeline_VITIS_LOOP_155_26}
  {SRCNAME conv2d MODELNAME conv2d RTLNAME conv2d IS_TOP 1
    SUBMODULES {
      {MODELNAME conv2d_fadd_32ns_32ns_32_5_full_dsp_1 RTLNAME conv2d_fadd_32ns_32ns_32_5_full_dsp_1 BINDTYPE op TYPE fadd IMPL fulldsp LATENCY 4 ALLOW_PRAGMA 1}
      {MODELNAME conv2d_fmul_32ns_32ns_32_4_max_dsp_1 RTLNAME conv2d_fmul_32ns_32ns_32_4_max_dsp_1 BINDTYPE op TYPE fmul IMPL maxdsp LATENCY 3 ALLOW_PRAGMA 1}
      {MODELNAME conv2d_fcmp_32ns_32ns_1_2_no_dsp_1 RTLNAME conv2d_fcmp_32ns_32ns_1_2_no_dsp_1 BINDTYPE op TYPE fcmp IMPL auto LATENCY 1 ALLOW_PRAGMA 1}
      {MODELNAME conv2d_conv1_out_RAM_AUTO_1R1W RTLNAME conv2d_conv1_out_RAM_AUTO_1R1W BINDTYPE storage TYPE ram IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME conv2d_pool1_out_RAM_AUTO_1R1W RTLNAME conv2d_pool1_out_RAM_AUTO_1R1W BINDTYPE storage TYPE ram IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME conv2d_conv2_out_RAM_AUTO_1R1W RTLNAME conv2d_conv2_out_RAM_AUTO_1R1W BINDTYPE storage TYPE ram IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME conv2d_pool2_out_RAM_AUTO_1R1W RTLNAME conv2d_pool2_out_RAM_AUTO_1R1W BINDTYPE storage TYPE ram IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME conv2d_gmem0_m_axi RTLNAME conv2d_gmem0_m_axi BINDTYPE interface TYPE adapter IMPL m_axi}
      {MODELNAME conv2d_gmem1_m_axi RTLNAME conv2d_gmem1_m_axi BINDTYPE interface TYPE adapter IMPL m_axi}
      {MODELNAME conv2d_gmem2_m_axi RTLNAME conv2d_gmem2_m_axi BINDTYPE interface TYPE adapter IMPL m_axi}
      {MODELNAME conv2d_control_s_axi RTLNAME conv2d_control_s_axi BINDTYPE interface TYPE interface_s_axilite}
    }
  }
}

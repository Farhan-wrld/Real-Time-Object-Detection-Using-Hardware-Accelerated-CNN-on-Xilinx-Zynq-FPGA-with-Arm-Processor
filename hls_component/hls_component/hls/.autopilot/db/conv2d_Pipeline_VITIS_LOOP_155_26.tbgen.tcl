set moduleName conv2d_Pipeline_VITIS_LOOP_155_26
set isTopModule 0
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set isPipelined_legacy 1
set pipeline_type loop_auto_rewind
set FunctionProtocol ap_ctrl_hs
set restart_counter_num 0
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set hasInterrupt 0
set DLRegFirstOffset 0
set DLRegItemOffset 0
set svuvm_can_support 1
set cdfgNum 9
set C_modelName {conv2d_Pipeline_VITIS_LOOP_155_26}
set C_modelType { void 0 }
set ap_memory_interface_dict [dict create]
dict set ap_memory_interface_dict fc_in { MEM_WIDTH 32 MEM_SIZE 1600 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 1 }
set C_modelArgList {
	{ sum_19 float 32 regular  }
	{ gmem1 int 32 regular {axi_master 0}  }
	{ fc_in float 32 regular {array 400 { 1 3 } 1 1 }  }
	{ sext_ln151 int 62 regular  }
	{ zext_ln153 int 12 regular  }
	{ sum_15_out float 32 regular {pointer 1}  }
}
set hasAXIMCache 0
set l_AXIML2Cache [list]
set AXIMCacheInstDict [dict create]
set C_modelArgMapList {[ 
	{ "Name" : "sum_19", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "gmem1", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READONLY", "id_num" : 0, "bitSlice":[ {"cElement": [{"cName": "weights","offset": { "type": "dynamic","port_name": "weights","bundle": "control"},"direction": "READONLY"},{"cName": "bias","offset": { "type": "dynamic","port_name": "bias","bundle": "control"},"direction": "READONLY"}]}]} , 
 	{ "Name" : "fc_in", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "sext_ln151", "interface" : "wire", "bitwidth" : 62, "direction" : "READONLY"} , 
 	{ "Name" : "zext_ln153", "interface" : "wire", "bitwidth" : 12, "direction" : "READONLY"} , 
 	{ "Name" : "sum_15_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 69
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ sum_19 sc_in sc_lv 32 signal 0 } 
	{ m_axi_gmem1_0_AWVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_gmem1_0_AWREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_gmem1_0_AWADDR sc_out sc_lv 64 signal 1 } 
	{ m_axi_gmem1_0_AWID sc_out sc_lv 1 signal 1 } 
	{ m_axi_gmem1_0_AWLEN sc_out sc_lv 32 signal 1 } 
	{ m_axi_gmem1_0_AWSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_gmem1_0_AWBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_gmem1_0_AWLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_gmem1_0_AWCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_gmem1_0_AWPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_gmem1_0_AWQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_gmem1_0_AWREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_gmem1_0_AWUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_gmem1_0_WVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_gmem1_0_WREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_gmem1_0_WDATA sc_out sc_lv 32 signal 1 } 
	{ m_axi_gmem1_0_WSTRB sc_out sc_lv 4 signal 1 } 
	{ m_axi_gmem1_0_WLAST sc_out sc_logic 1 signal 1 } 
	{ m_axi_gmem1_0_WID sc_out sc_lv 1 signal 1 } 
	{ m_axi_gmem1_0_WUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_gmem1_0_ARVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_gmem1_0_ARREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_gmem1_0_ARADDR sc_out sc_lv 64 signal 1 } 
	{ m_axi_gmem1_0_ARID sc_out sc_lv 1 signal 1 } 
	{ m_axi_gmem1_0_ARLEN sc_out sc_lv 32 signal 1 } 
	{ m_axi_gmem1_0_ARSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_gmem1_0_ARBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_gmem1_0_ARLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_gmem1_0_ARCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_gmem1_0_ARPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_gmem1_0_ARQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_gmem1_0_ARREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_gmem1_0_ARUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_gmem1_0_RVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_gmem1_0_RREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_gmem1_0_RDATA sc_in sc_lv 32 signal 1 } 
	{ m_axi_gmem1_0_RLAST sc_in sc_logic 1 signal 1 } 
	{ m_axi_gmem1_0_RID sc_in sc_lv 1 signal 1 } 
	{ m_axi_gmem1_0_RFIFONUM sc_in sc_lv 9 signal 1 } 
	{ m_axi_gmem1_0_RUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_gmem1_0_RRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_gmem1_0_BVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_gmem1_0_BREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_gmem1_0_BRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_gmem1_0_BID sc_in sc_lv 1 signal 1 } 
	{ m_axi_gmem1_0_BUSER sc_in sc_lv 1 signal 1 } 
	{ fc_in_address0 sc_out sc_lv 9 signal 2 } 
	{ fc_in_ce0 sc_out sc_logic 1 signal 2 } 
	{ fc_in_q0 sc_in sc_lv 32 signal 2 } 
	{ sext_ln151 sc_in sc_lv 62 signal 3 } 
	{ zext_ln153 sc_in sc_lv 12 signal 4 } 
	{ sum_15_out sc_out sc_lv 32 signal 5 } 
	{ sum_15_out_ap_vld sc_out sc_logic 1 outvld 5 } 
	{ grp_fu_1035_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_1035_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_1035_p_opcode sc_out sc_lv 2 signal -1 } 
	{ grp_fu_1035_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_1035_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_1039_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_1039_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_1039_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_1039_p_ce sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "sum_19", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sum_19", "role": "default" }} , 
 	{ "name": "m_axi_gmem1_0_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_AWVALID" }} , 
 	{ "name": "m_axi_gmem1_0_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_AWREADY" }} , 
 	{ "name": "m_axi_gmem1_0_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "gmem1", "role": "0_AWADDR" }} , 
 	{ "name": "m_axi_gmem1_0_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_AWID" }} , 
 	{ "name": "m_axi_gmem1_0_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "gmem1", "role": "0_AWLEN" }} , 
 	{ "name": "m_axi_gmem1_0_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem1", "role": "0_AWSIZE" }} , 
 	{ "name": "m_axi_gmem1_0_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem1", "role": "0_AWBURST" }} , 
 	{ "name": "m_axi_gmem1_0_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem1", "role": "0_AWLOCK" }} , 
 	{ "name": "m_axi_gmem1_0_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem1", "role": "0_AWCACHE" }} , 
 	{ "name": "m_axi_gmem1_0_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem1", "role": "0_AWPROT" }} , 
 	{ "name": "m_axi_gmem1_0_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem1", "role": "0_AWQOS" }} , 
 	{ "name": "m_axi_gmem1_0_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem1", "role": "0_AWREGION" }} , 
 	{ "name": "m_axi_gmem1_0_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_AWUSER" }} , 
 	{ "name": "m_axi_gmem1_0_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_WVALID" }} , 
 	{ "name": "m_axi_gmem1_0_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_WREADY" }} , 
 	{ "name": "m_axi_gmem1_0_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "gmem1", "role": "0_WDATA" }} , 
 	{ "name": "m_axi_gmem1_0_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem1", "role": "0_WSTRB" }} , 
 	{ "name": "m_axi_gmem1_0_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_WLAST" }} , 
 	{ "name": "m_axi_gmem1_0_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_WID" }} , 
 	{ "name": "m_axi_gmem1_0_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_WUSER" }} , 
 	{ "name": "m_axi_gmem1_0_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_ARVALID" }} , 
 	{ "name": "m_axi_gmem1_0_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_ARREADY" }} , 
 	{ "name": "m_axi_gmem1_0_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "gmem1", "role": "0_ARADDR" }} , 
 	{ "name": "m_axi_gmem1_0_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_ARID" }} , 
 	{ "name": "m_axi_gmem1_0_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "gmem1", "role": "0_ARLEN" }} , 
 	{ "name": "m_axi_gmem1_0_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem1", "role": "0_ARSIZE" }} , 
 	{ "name": "m_axi_gmem1_0_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem1", "role": "0_ARBURST" }} , 
 	{ "name": "m_axi_gmem1_0_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem1", "role": "0_ARLOCK" }} , 
 	{ "name": "m_axi_gmem1_0_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem1", "role": "0_ARCACHE" }} , 
 	{ "name": "m_axi_gmem1_0_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem1", "role": "0_ARPROT" }} , 
 	{ "name": "m_axi_gmem1_0_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem1", "role": "0_ARQOS" }} , 
 	{ "name": "m_axi_gmem1_0_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem1", "role": "0_ARREGION" }} , 
 	{ "name": "m_axi_gmem1_0_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_ARUSER" }} , 
 	{ "name": "m_axi_gmem1_0_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_RVALID" }} , 
 	{ "name": "m_axi_gmem1_0_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_RREADY" }} , 
 	{ "name": "m_axi_gmem1_0_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "gmem1", "role": "0_RDATA" }} , 
 	{ "name": "m_axi_gmem1_0_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_RLAST" }} , 
 	{ "name": "m_axi_gmem1_0_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_RID" }} , 
 	{ "name": "m_axi_gmem1_0_RFIFONUM", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "gmem1", "role": "0_RFIFONUM" }} , 
 	{ "name": "m_axi_gmem1_0_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_RUSER" }} , 
 	{ "name": "m_axi_gmem1_0_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem1", "role": "0_RRESP" }} , 
 	{ "name": "m_axi_gmem1_0_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_BVALID" }} , 
 	{ "name": "m_axi_gmem1_0_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_BREADY" }} , 
 	{ "name": "m_axi_gmem1_0_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem1", "role": "0_BRESP" }} , 
 	{ "name": "m_axi_gmem1_0_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_BID" }} , 
 	{ "name": "m_axi_gmem1_0_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem1", "role": "0_BUSER" }} , 
 	{ "name": "fc_in_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "fc_in", "role": "address0" }} , 
 	{ "name": "fc_in_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_in", "role": "ce0" }} , 
 	{ "name": "fc_in_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fc_in", "role": "q0" }} , 
 	{ "name": "sext_ln151", "direction": "in", "datatype": "sc_lv", "bitwidth":62, "type": "signal", "bundle":{"name": "sext_ln151", "role": "default" }} , 
 	{ "name": "zext_ln153", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "zext_ln153", "role": "default" }} , 
 	{ "name": "sum_15_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sum_15_out", "role": "default" }} , 
 	{ "name": "sum_15_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "sum_15_out", "role": "ap_vld" }} , 
 	{ "name": "grp_fu_1035_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_1035_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_1035_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_1035_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_1035_p_opcode", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "grp_fu_1035_p_opcode", "role": "default" }} , 
 	{ "name": "grp_fu_1035_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_1035_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_1035_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_1035_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_1039_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_1039_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_1039_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_1039_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_1039_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_1039_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_1039_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_1039_p_ce", "role": "default" }}  ]}

set ArgLastReadFirstWriteLatency {
	conv2d_Pipeline_VITIS_LOOP_155_26 {
		sum_19 {Type I LastRead 0 FirstWrite -1}
		gmem1 {Type I LastRead 9 FirstWrite -1}
		fc_in {Type I LastRead 6 FirstWrite -1}
		sext_ln151 {Type I LastRead 0 FirstWrite -1}
		zext_ln153 {Type I LastRead 0 FirstWrite -1}
		sum_15_out {Type O LastRead -1 FirstWrite 13}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2415", "Max" : "2415"}
	, {"Name" : "Interval", "Min" : "2406", "Max" : "2406"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	sum_19 { ap_none {  { sum_19 in_data 0 32 } } }
	 { m_axi {  { m_axi_gmem1_0_AWVALID VALID 1 1 }  { m_axi_gmem1_0_AWREADY READY 0 1 }  { m_axi_gmem1_0_AWADDR ADDR 1 64 }  { m_axi_gmem1_0_AWID ID 1 1 }  { m_axi_gmem1_0_AWLEN SIZE 1 32 }  { m_axi_gmem1_0_AWSIZE BURST 1 3 }  { m_axi_gmem1_0_AWBURST LOCK 1 2 }  { m_axi_gmem1_0_AWLOCK CACHE 1 2 }  { m_axi_gmem1_0_AWCACHE PROT 1 4 }  { m_axi_gmem1_0_AWPROT QOS 1 3 }  { m_axi_gmem1_0_AWQOS REGION 1 4 }  { m_axi_gmem1_0_AWREGION USER 1 4 }  { m_axi_gmem1_0_AWUSER DATA 1 1 }  { m_axi_gmem1_0_WVALID VALID 1 1 }  { m_axi_gmem1_0_WREADY READY 0 1 }  { m_axi_gmem1_0_WDATA FIFONUM 1 32 }  { m_axi_gmem1_0_WSTRB STRB 1 4 }  { m_axi_gmem1_0_WLAST LAST 1 1 }  { m_axi_gmem1_0_WID ID 1 1 }  { m_axi_gmem1_0_WUSER DATA 1 1 }  { m_axi_gmem1_0_ARVALID VALID 1 1 }  { m_axi_gmem1_0_ARREADY READY 0 1 }  { m_axi_gmem1_0_ARADDR ADDR 1 64 }  { m_axi_gmem1_0_ARID ID 1 1 }  { m_axi_gmem1_0_ARLEN SIZE 1 32 }  { m_axi_gmem1_0_ARSIZE BURST 1 3 }  { m_axi_gmem1_0_ARBURST LOCK 1 2 }  { m_axi_gmem1_0_ARLOCK CACHE 1 2 }  { m_axi_gmem1_0_ARCACHE PROT 1 4 }  { m_axi_gmem1_0_ARPROT QOS 1 3 }  { m_axi_gmem1_0_ARQOS REGION 1 4 }  { m_axi_gmem1_0_ARREGION USER 1 4 }  { m_axi_gmem1_0_ARUSER DATA 1 1 }  { m_axi_gmem1_0_RVALID VALID 0 1 }  { m_axi_gmem1_0_RREADY READY 1 1 }  { m_axi_gmem1_0_RDATA FIFONUM 0 32 }  { m_axi_gmem1_0_RLAST LAST 0 1 }  { m_axi_gmem1_0_RID ID 0 1 }  { m_axi_gmem1_0_RFIFONUM LEN 0 9 }  { m_axi_gmem1_0_RUSER DATA 0 1 }  { m_axi_gmem1_0_RRESP RESP 0 2 }  { m_axi_gmem1_0_BVALID VALID 0 1 }  { m_axi_gmem1_0_BREADY READY 1 1 }  { m_axi_gmem1_0_BRESP RESP 0 2 }  { m_axi_gmem1_0_BID ID 0 1 }  { m_axi_gmem1_0_BUSER DATA 0 1 } } }
	fc_in { ap_memory {  { fc_in_address0 mem_address 1 9 }  { fc_in_ce0 mem_ce 1 1 }  { fc_in_q0 mem_dout 0 32 } } }
	sext_ln151 { ap_none {  { sext_ln151 in_data 0 62 } } }
	zext_ln153 { ap_none {  { zext_ln153 in_data 0 12 } } }
	sum_15_out { ap_vld {  { sum_15_out out_data 1 32 }  { sum_15_out_ap_vld out_vld 1 1 } } }
}

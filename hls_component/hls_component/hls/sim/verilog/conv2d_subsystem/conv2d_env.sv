//==============================================================
//Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2025.2 (64-bit)
//Tool Version Limit: 2025.11
//Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
//Copyright 2022-2025 Advanced Micro Devices, Inc. All Rights Reserved.
//
//==============================================================
`ifndef CONV2D_ENV__SV                                                                                   
    `define CONV2D_ENV__SV                                                                               
                                                                                                                    
                                                                                                                    
    class conv2d_env extends uvm_env;                                                                          
                                                                                                                    
        conv2d_virtual_sequencer conv2d_virtual_sqr;                                                      
        conv2d_config conv2d_cfg;                                                                         
                                                                                                                    
        axi_pkg::axi_env#(64,4,8,3,1) axi_master_gmem0;
        axi_pkg::axi_env#(64,4,8,3,1) axi_master_gmem1;
        axi_pkg::axi_env#(64,4,8,3,1) axi_master_gmem2;
        axi_pkg::axi_env#(6,4,4,3,1) axi_lite_control;
                                                                                                                    
        conv2d_reference_model   refm;                                                                         
                                                                                                                    
        conv2d_subsystem_monitor subsys_mon;                                                                   
                                                                                                                    
        `uvm_component_utils_begin(conv2d_env)                                                                 
        `uvm_field_object (refm, UVM_DEFAULT | UVM_REFERENCE)                                                       
        `uvm_field_object (conv2d_virtual_sqr, UVM_DEFAULT | UVM_REFERENCE)                                    
        `uvm_field_object (conv2d_cfg        , UVM_DEFAULT)                                                    
        `uvm_component_utils_end                                                                                    
                                                                                                                    
        function new (string name = "conv2d_env", uvm_component parent = null);                              
            super.new(name, parent);                                                                                
        endfunction                                                                                                 
                                                                                                                    
        extern virtual function void build_phase(uvm_phase phase);                                                  
        extern virtual function void connect_phase(uvm_phase phase);                                                
        extern virtual task          run_phase(uvm_phase phase);                                                    
                                                                                                                    
    endclass                                                                                                        
                                                                                                                    
    function void conv2d_env::build_phase(uvm_phase phase);                                                    
        super.build_phase(phase);                                                                                   
        conv2d_cfg = conv2d_config::type_id::create("conv2d_cfg", this);                           
                                                                                                                    

        conv2d_cfg.gmem0_cfg.set_default();
        conv2d_cfg.gmem0_cfg.drv_type = axi_pkg::SLAVE;
        conv2d_cfg.gmem0_cfg.reset_level = axi_pkg::RESET_LEVEL_LOW;
        conv2d_cfg.gmem0_cfg.write_latency_mode = TRANSACTION_FIRST;
        conv2d_cfg.gmem0_cfg.read_latency_mode = TRANSACTION_FIRST;
        uvm_config_db#(axi_pkg::axi_cfg)::set(this, "axi_master_gmem0*", "cfg", conv2d_cfg.gmem0_cfg);
        axi_master_gmem0 = axi_pkg::axi_env#(64,4,8,3,1)::type_id::create("axi_master_gmem0", this);

        conv2d_cfg.gmem1_cfg.set_default();
        conv2d_cfg.gmem1_cfg.drv_type = axi_pkg::SLAVE;
        conv2d_cfg.gmem1_cfg.reset_level = axi_pkg::RESET_LEVEL_LOW;
        conv2d_cfg.gmem1_cfg.write_latency_mode = TRANSACTION_FIRST;
        conv2d_cfg.gmem1_cfg.read_latency_mode = TRANSACTION_FIRST;
        uvm_config_db#(axi_pkg::axi_cfg)::set(this, "axi_master_gmem1*", "cfg", conv2d_cfg.gmem1_cfg);
        axi_master_gmem1 = axi_pkg::axi_env#(64,4,8,3,1)::type_id::create("axi_master_gmem1", this);

        conv2d_cfg.gmem2_cfg.set_default();
        conv2d_cfg.gmem2_cfg.drv_type = axi_pkg::SLAVE;
        conv2d_cfg.gmem2_cfg.reset_level = axi_pkg::RESET_LEVEL_LOW;
        conv2d_cfg.gmem2_cfg.write_latency_mode = TRANSACTION_FIRST;
        conv2d_cfg.gmem2_cfg.read_latency_mode = TRANSACTION_FIRST;
        uvm_config_db#(axi_pkg::axi_cfg)::set(this, "axi_master_gmem2*", "cfg", conv2d_cfg.gmem2_cfg);
        axi_master_gmem2 = axi_pkg::axi_env#(64,4,8,3,1)::type_id::create("axi_master_gmem2", this);

        conv2d_cfg.control_cfg.set_default();
        conv2d_cfg.control_cfg.drv_type = axi_pkg::MASTER;
        conv2d_cfg.control_cfg.reset_level = axi_pkg::RESET_LEVEL_LOW;
        uvm_config_db#(axi_pkg::axi_cfg)::set(this, "axi_lite_control*", "cfg", conv2d_cfg.control_cfg);
        axi_lite_control = axi_pkg::axi_env#(6,4,4,3,1)::type_id::create("axi_lite_control", this);



        refm = conv2d_reference_model::type_id::create("refm", this);


        uvm_config_db#(conv2d_reference_model)::set(this, "*", "refm", refm);


        `uvm_info(this.get_full_name(), "set reference model by uvm_config_db", UVM_LOW)


        subsys_mon = conv2d_subsystem_monitor::type_id::create("subsys_mon", this);


        conv2d_virtual_sqr = conv2d_virtual_sequencer::type_id::create("conv2d_virtual_sqr", this);
        `uvm_info(this.get_full_name(), "build_phase done", UVM_LOW)
    endfunction


    function void conv2d_env::connect_phase(uvm_phase phase);
        super.connect_phase(phase);


        if(conv2d_cfg.gmem0_cfg.drv_type==axi_pkg::MASTER ||conv2d_cfg.gmem0_cfg.drv_type==axi_pkg::SLAVE)
            conv2d_virtual_sqr.gmem0_sqr = axi_master_gmem0.vsqr;
        axi_master_gmem0.item_wtr_port.connect(subsys_mon.gmem0_wtr_imp);
        axi_master_gmem0.item_rtr_port.connect(subsys_mon.gmem0_rtr_imp);
        uvm_callbacks#(axi_pkg::axi_state, axi_pkg::axi_state_cbs)::add(axi_master_gmem0.state, refm.axi_memaccess_cb_gmem0);
        if(conv2d_cfg.gmem1_cfg.drv_type==axi_pkg::MASTER ||conv2d_cfg.gmem1_cfg.drv_type==axi_pkg::SLAVE)
            conv2d_virtual_sqr.gmem1_sqr = axi_master_gmem1.vsqr;
        axi_master_gmem1.item_wtr_port.connect(subsys_mon.gmem1_wtr_imp);
        axi_master_gmem1.item_rtr_port.connect(subsys_mon.gmem1_rtr_imp);
        uvm_callbacks#(axi_pkg::axi_state, axi_pkg::axi_state_cbs)::add(axi_master_gmem1.state, refm.axi_memaccess_cb_gmem1);
        if(conv2d_cfg.gmem2_cfg.drv_type==axi_pkg::MASTER ||conv2d_cfg.gmem2_cfg.drv_type==axi_pkg::SLAVE)
            conv2d_virtual_sqr.gmem2_sqr = axi_master_gmem2.vsqr;
        axi_master_gmem2.item_wtr_port.connect(subsys_mon.gmem2_wtr_imp);
        axi_master_gmem2.item_rtr_port.connect(subsys_mon.gmem2_rtr_imp);
        uvm_callbacks#(axi_pkg::axi_state, axi_pkg::axi_state_cbs)::add(axi_master_gmem2.state, refm.axi_memaccess_cb_gmem2);
        if(conv2d_cfg.control_cfg.drv_type==axi_pkg::MASTER ||conv2d_cfg.control_cfg.drv_type==axi_pkg::SLAVE)
            conv2d_virtual_sqr.control_sqr = axi_lite_control.vsqr;
        axi_lite_control.item_wtr_port.connect(subsys_mon.control_wtr_imp);
        axi_lite_control.item_rtr_port.connect(subsys_mon.control_rtr_imp);
        refm.conv2d_cfg = conv2d_cfg;
        `uvm_info(this.get_full_name(), "connect phase done", UVM_LOW)
    endfunction


    task conv2d_env::run_phase(uvm_phase phase);
        `uvm_info(this.get_full_name(), "conv2d_env is running", UVM_LOW)
    endtask


`endif

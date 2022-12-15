// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _product_1_HH_
#define _product_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct product_1 : public sc_module {
    // Port declarations 4
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<6> > a_V;
    sc_in< sc_lv<6> > w_V;
    sc_out< sc_lv<10> > ap_return;


    // Module declarations
    product_1(sc_module_name name);
    SC_HAS_PROCESS(product_1);

    ~product_1();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<6> > r_V_2_fu_32_p0;
    sc_signal< sc_lv<6> > r_V_2_fu_32_p1;
    sc_signal< sc_lv<12> > r_V_2_fu_32_p2;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_ready();
    void thread_ap_return();
    void thread_r_V_2_fu_32_p0();
    void thread_r_V_2_fu_32_p1();
    void thread_r_V_2_fu_32_p2();
};

}

using namespace ap_rtl;

#endif

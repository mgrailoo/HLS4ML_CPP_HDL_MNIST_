// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _reduce_2_HH_
#define _reduce_2_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "reduce.h"

namespace ap_rtl {

struct reduce_2 : public sc_module {
    // Port declarations 17
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<12> > x_0_V_read;
    sc_in< sc_lv<12> > x_1_V_read;
    sc_in< sc_lv<12> > x_2_V_read;
    sc_in< sc_lv<12> > x_3_V_read;
    sc_in< sc_lv<12> > x_4_V_read;
    sc_in< sc_lv<12> > x_5_V_read;
    sc_in< sc_lv<12> > x_6_V_read;
    sc_in< sc_lv<12> > x_7_V_read;
    sc_in< sc_lv<12> > x_8_V_read;
    sc_in< sc_lv<12> > x_9_V_read;
    sc_out< sc_lv<12> > ap_return;


    // Module declarations
    reduce_2(sc_module_name name);
    SC_HAS_PROCESS(reduce_2);

    ~reduce_2();

    sc_trace_file* mVcdFile;

    reduce* grp_reduce_fu_230;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<4> > i_fu_248_p2;
    sc_signal< sc_lv<4> > i_reg_473;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<2> > i_1_fu_304_p2;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<12> > right_0_V_fu_314_p3;
    sc_signal< sc_lv<1> > icmp_ln77_fu_298_p2;
    sc_signal< sc_lv<12> > right_0_V_1_fu_321_p3;
    sc_signal< sc_logic > grp_reduce_fu_230_ap_start;
    sc_signal< sc_logic > grp_reduce_fu_230_ap_done;
    sc_signal< sc_logic > grp_reduce_fu_230_ap_idle;
    sc_signal< sc_logic > grp_reduce_fu_230_ap_ready;
    sc_signal< sc_lv<12> > grp_reduce_fu_230_ap_return;
    sc_signal< sc_lv<4> > ap_phi_mux_i_0_phi_fu_166_p4;
    sc_signal< sc_lv<4> > i_0_reg_162;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<12> > left_0_V_reg_174;
    sc_signal< sc_lv<1> > icmp_ln74_fu_242_p2;
    sc_signal< sc_lv<12> > p_Val2_2_reg_195;
    sc_signal< sc_lv<12> > p_Val2_s_reg_207;
    sc_signal< sc_lv<2> > i2_0_reg_219;
    sc_signal< sc_logic > grp_reduce_fu_230_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<12> > left_7_V_fu_70;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<3> > trunc_ln203_1_fu_254_p1;
    sc_signal< sc_lv<12> > left_7_V_1_fu_74;
    sc_signal< sc_lv<12> > left_7_V_2_fu_78;
    sc_signal< sc_lv<12> > left_7_V_3_fu_82;
    sc_signal< sc_lv<12> > left_7_V_4_fu_86;
    sc_signal< sc_lv<12> > left_7_V_5_fu_90;
    sc_signal< sc_lv<12> > left_7_V_6_fu_94;
    sc_signal< sc_lv<12> > left_7_V_7_fu_98;
    sc_signal< sc_lv<1> > trunc_ln203_fu_310_p1;
    sc_signal< sc_lv<12> > add_ln703_1_fu_360_p2;
    sc_signal< sc_lv<12> > add_ln703_fu_366_p2;
    sc_signal< sc_lv<12> > ap_return_preg;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    sc_signal< bool > ap_condition_299;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_state3;
    static const sc_lv<6> ap_ST_fsm_state4;
    static const sc_lv<6> ap_ST_fsm_state5;
    static const sc_lv<6> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_2;
    static const sc_lv<4> ap_const_lv4_3;
    static const sc_lv<4> ap_const_lv4_4;
    static const sc_lv<4> ap_const_lv4_5;
    static const sc_lv<4> ap_const_lv4_6;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_2;
    static const sc_lv<3> ap_const_lv3_3;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_6;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<12> ap_const_lv12_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln703_1_fu_360_p2();
    void thread_add_ln703_fu_366_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_condition_299();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_i_0_phi_fu_166_p4();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_grp_reduce_fu_230_ap_start();
    void thread_i_1_fu_304_p2();
    void thread_i_fu_248_p2();
    void thread_icmp_ln74_fu_242_p2();
    void thread_icmp_ln77_fu_298_p2();
    void thread_right_0_V_1_fu_321_p3();
    void thread_right_0_V_fu_314_p3();
    void thread_trunc_ln203_1_fu_254_p1();
    void thread_trunc_ln203_fu_310_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

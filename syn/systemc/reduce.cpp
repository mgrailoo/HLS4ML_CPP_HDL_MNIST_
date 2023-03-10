// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "reduce.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic reduce::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic reduce::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<6> reduce::ap_ST_fsm_state1 = "1";
const sc_lv<6> reduce::ap_ST_fsm_state2 = "10";
const sc_lv<6> reduce::ap_ST_fsm_state3 = "100";
const sc_lv<6> reduce::ap_ST_fsm_state4 = "1000";
const sc_lv<6> reduce::ap_ST_fsm_state5 = "10000";
const sc_lv<6> reduce::ap_ST_fsm_state6 = "100000";
const sc_lv<32> reduce::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> reduce::ap_const_lv32_1 = "1";
const sc_lv<1> reduce::ap_const_lv1_0 = "0";
const sc_lv<32> reduce::ap_const_lv32_3 = "11";
const sc_lv<1> reduce::ap_const_lv1_1 = "1";
const sc_lv<3> reduce::ap_const_lv3_0 = "000";
const sc_lv<32> reduce::ap_const_lv32_2 = "10";
const sc_lv<3> reduce::ap_const_lv3_1 = "1";
const sc_lv<3> reduce::ap_const_lv3_2 = "10";
const sc_lv<32> reduce::ap_const_lv32_4 = "100";
const sc_lv<3> reduce::ap_const_lv3_5 = "101";
const sc_lv<3> reduce::ap_const_lv3_6 = "110";
const sc_lv<3> reduce::ap_const_lv3_4 = "100";
const sc_lv<32> reduce::ap_const_lv32_5 = "101";
const sc_lv<2> reduce::ap_const_lv2_0 = "00";
const sc_lv<2> reduce::ap_const_lv2_1 = "1";
const sc_lv<2> reduce::ap_const_lv2_2 = "10";
const sc_lv<2> reduce::ap_const_lv2_3 = "11";
const sc_lv<12> reduce::ap_const_lv12_0 = "000000000000";
const bool reduce::ap_const_boolean_0 = false;
const bool reduce::ap_const_boolean_1 = true;

reduce::reduce(sc_module_name name) : sc_module(name), mVcdFile(0) {
    grp_reduce_1_fu_172 = new reduce_1("grp_reduce_1_fu_172");
    grp_reduce_1_fu_172->ap_clk(ap_clk);
    grp_reduce_1_fu_172->ap_rst(ap_rst);
    grp_reduce_1_fu_172->ap_start(grp_reduce_1_fu_172_ap_start);
    grp_reduce_1_fu_172->ap_done(grp_reduce_1_fu_172_ap_done);
    grp_reduce_1_fu_172->ap_idle(grp_reduce_1_fu_172_ap_idle);
    grp_reduce_1_fu_172->ap_ready(grp_reduce_1_fu_172_ap_ready);
    grp_reduce_1_fu_172->x_0_V_read(left_3_V_fu_44);
    grp_reduce_1_fu_172->x_1_V_read(left_3_V_1_fu_48);
    grp_reduce_1_fu_172->x_2_V_read(left_3_V_2_fu_52);
    grp_reduce_1_fu_172->x_3_V_read(left_3_V_3_fu_56);
    grp_reduce_1_fu_172->ap_return(grp_reduce_1_fu_172_ap_return);
    grp_reduce_1_fu_180 = new reduce_1("grp_reduce_1_fu_180");
    grp_reduce_1_fu_180->ap_clk(ap_clk);
    grp_reduce_1_fu_180->ap_rst(ap_rst);
    grp_reduce_1_fu_180->ap_start(grp_reduce_1_fu_180_ap_start);
    grp_reduce_1_fu_180->ap_done(grp_reduce_1_fu_180_ap_done);
    grp_reduce_1_fu_180->ap_idle(grp_reduce_1_fu_180_ap_idle);
    grp_reduce_1_fu_180->ap_ready(grp_reduce_1_fu_180_ap_ready);
    grp_reduce_1_fu_180->x_0_V_read(right_3_V_fu_60);
    grp_reduce_1_fu_180->x_1_V_read(right_3_V_1_fu_64);
    grp_reduce_1_fu_180->x_2_V_read(right_3_V_2_fu_68);
    grp_reduce_1_fu_180->x_3_V_read(right_3_V_3_fu_72);
    grp_reduce_1_fu_180->ap_return(grp_reduce_1_fu_180_ap_return);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln703_fu_298_p2);
    sensitive << ( grp_reduce_1_fu_172_ap_return );
    sensitive << ( grp_reduce_1_fu_180_ap_return );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_state6_on_subcall_done);
    sensitive << ( grp_reduce_1_fu_172_ap_done );
    sensitive << ( grp_reduce_1_fu_180_ap_done );

    SC_METHOD(thread_ap_condition_278);
    sensitive << ( ap_phi_mux_i_0_phi_fu_128_p4 );

    SC_METHOD(thread_ap_condition_283);
    sensitive << ( xor_ln203_fu_236_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_block_state6_on_subcall_done );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_phi_mux_i_0_phi_fu_128_p4);
    sensitive << ( i_0_reg_124 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_block_state6_on_subcall_done );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( add_ln703_fu_298_p2 );
    sensitive << ( ap_return_preg );
    sensitive << ( ap_block_state6_on_subcall_done );

    SC_METHOD(thread_grp_reduce_1_fu_172_ap_start);
    sensitive << ( grp_reduce_1_fu_172_ap_start_reg );

    SC_METHOD(thread_grp_reduce_1_fu_180_ap_start);
    sensitive << ( grp_reduce_1_fu_180_ap_start_reg );

    SC_METHOD(thread_i_3_fu_230_p2);
    sensitive << ( i2_0_reg_148 );

    SC_METHOD(thread_i_fu_194_p2);
    sensitive << ( i_0_reg_124 );

    SC_METHOD(thread_icmp_ln74_fu_188_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_0_reg_124 );

    SC_METHOD(thread_icmp_ln77_fu_224_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( i2_0_reg_148 );

    SC_METHOD(thread_trunc_ln203_3_fu_242_p1);
    sensitive << ( i2_0_reg_148 );

    SC_METHOD(thread_trunc_ln203_fu_200_p1);
    sensitive << ( i_0_reg_124 );

    SC_METHOD(thread_xor_ln203_fu_236_p2);
    sensitive << ( i2_0_reg_148 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln74_fu_188_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln77_fu_224_p2 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_block_state6_on_subcall_done );

    ap_CS_fsm = "000001";
    grp_reduce_1_fu_172_ap_start_reg = SC_LOGIC_0;
    grp_reduce_1_fu_180_ap_start_reg = SC_LOGIC_0;
    ap_return_preg = "000000000000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "reduce_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, x_0_V_read, "(port)x_0_V_read");
    sc_trace(mVcdFile, x_1_V_read, "(port)x_1_V_read");
    sc_trace(mVcdFile, x_2_V_read, "(port)x_2_V_read");
    sc_trace(mVcdFile, x_3_V_read, "(port)x_3_V_read");
    sc_trace(mVcdFile, x_4_V_read, "(port)x_4_V_read");
    sc_trace(mVcdFile, x_5_V_read, "(port)x_5_V_read");
    sc_trace(mVcdFile, x_6_V_read, "(port)x_6_V_read");
    sc_trace(mVcdFile, x_7_V_read, "(port)x_7_V_read");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_fu_194_p2, "i_fu_194_p2");
    sc_trace(mVcdFile, i_reg_371, "i_reg_371");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, trunc_ln203_fu_200_p1, "trunc_ln203_fu_200_p1");
    sc_trace(mVcdFile, trunc_ln203_reg_376, "trunc_ln203_reg_376");
    sc_trace(mVcdFile, icmp_ln74_fu_188_p2, "icmp_ln74_fu_188_p2");
    sc_trace(mVcdFile, i_3_fu_230_p2, "i_3_fu_230_p2");
    sc_trace(mVcdFile, i_3_reg_407, "i_3_reg_407");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, trunc_ln203_3_fu_242_p1, "trunc_ln203_3_fu_242_p1");
    sc_trace(mVcdFile, trunc_ln203_3_reg_415, "trunc_ln203_3_reg_415");
    sc_trace(mVcdFile, icmp_ln77_fu_224_p2, "icmp_ln77_fu_224_p2");
    sc_trace(mVcdFile, grp_reduce_1_fu_172_ap_start, "grp_reduce_1_fu_172_ap_start");
    sc_trace(mVcdFile, grp_reduce_1_fu_172_ap_done, "grp_reduce_1_fu_172_ap_done");
    sc_trace(mVcdFile, grp_reduce_1_fu_172_ap_idle, "grp_reduce_1_fu_172_ap_idle");
    sc_trace(mVcdFile, grp_reduce_1_fu_172_ap_ready, "grp_reduce_1_fu_172_ap_ready");
    sc_trace(mVcdFile, grp_reduce_1_fu_172_ap_return, "grp_reduce_1_fu_172_ap_return");
    sc_trace(mVcdFile, grp_reduce_1_fu_180_ap_start, "grp_reduce_1_fu_180_ap_start");
    sc_trace(mVcdFile, grp_reduce_1_fu_180_ap_done, "grp_reduce_1_fu_180_ap_done");
    sc_trace(mVcdFile, grp_reduce_1_fu_180_ap_idle, "grp_reduce_1_fu_180_ap_idle");
    sc_trace(mVcdFile, grp_reduce_1_fu_180_ap_ready, "grp_reduce_1_fu_180_ap_ready");
    sc_trace(mVcdFile, grp_reduce_1_fu_180_ap_return, "grp_reduce_1_fu_180_ap_return");
    sc_trace(mVcdFile, ap_phi_mux_i_0_phi_fu_128_p4, "ap_phi_mux_i_0_phi_fu_128_p4");
    sc_trace(mVcdFile, i_0_reg_124, "i_0_reg_124");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, left_0_V_reg_135, "left_0_V_reg_135");
    sc_trace(mVcdFile, i2_0_reg_148, "i2_0_reg_148");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, right_0_V_reg_159, "right_0_V_reg_159");
    sc_trace(mVcdFile, xor_ln203_fu_236_p2, "xor_ln203_fu_236_p2");
    sc_trace(mVcdFile, grp_reduce_1_fu_172_ap_start_reg, "grp_reduce_1_fu_172_ap_start_reg");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, grp_reduce_1_fu_180_ap_start_reg, "grp_reduce_1_fu_180_ap_start_reg");
    sc_trace(mVcdFile, left_3_V_fu_44, "left_3_V_fu_44");
    sc_trace(mVcdFile, left_3_V_1_fu_48, "left_3_V_1_fu_48");
    sc_trace(mVcdFile, left_3_V_2_fu_52, "left_3_V_2_fu_52");
    sc_trace(mVcdFile, left_3_V_3_fu_56, "left_3_V_3_fu_56");
    sc_trace(mVcdFile, right_3_V_fu_60, "right_3_V_fu_60");
    sc_trace(mVcdFile, right_3_V_1_fu_64, "right_3_V_1_fu_64");
    sc_trace(mVcdFile, right_3_V_2_fu_68, "right_3_V_2_fu_68");
    sc_trace(mVcdFile, right_3_V_3_fu_72, "right_3_V_3_fu_72");
    sc_trace(mVcdFile, add_ln703_fu_298_p2, "add_ln703_fu_298_p2");
    sc_trace(mVcdFile, ap_return_preg, "ap_return_preg");
    sc_trace(mVcdFile, ap_block_state6_on_subcall_done, "ap_block_state6_on_subcall_done");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_condition_278, "ap_condition_278");
    sc_trace(mVcdFile, ap_condition_283, "ap_condition_283");
#endif

    }
}

reduce::~reduce() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete grp_reduce_1_fu_172;
    delete grp_reduce_1_fu_180;
}

void reduce::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_preg = ap_const_lv12_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
             esl_seteq<1,1,1>(ap_block_state6_on_subcall_done.read(), ap_const_boolean_0))) {
            ap_return_preg = add_ln703_fu_298_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_reduce_1_fu_172_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
             esl_seteq<1,1,1>(icmp_ln77_fu_224_p2.read(), ap_const_lv1_1))) {
            grp_reduce_1_fu_172_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_reduce_1_fu_172_ap_ready.read())) {
            grp_reduce_1_fu_172_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_reduce_1_fu_180_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
             esl_seteq<1,1,1>(icmp_ln77_fu_224_p2.read(), ap_const_lv1_1))) {
            grp_reduce_1_fu_180_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_reduce_1_fu_180_ap_ready.read())) {
            grp_reduce_1_fu_180_ap_start_reg = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        i2_0_reg_148 = i_3_reg_407.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln74_fu_188_p2.read(), ap_const_lv1_1))) {
        i2_0_reg_148 = ap_const_lv3_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        i_0_reg_124 = i_reg_371.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_124 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln74_fu_188_p2.read(), ap_const_lv1_0))) {
        if (esl_seteq<1,3,3>(ap_const_lv3_0, ap_phi_mux_i_0_phi_fu_128_p4.read())) {
            left_0_V_reg_135 = x_0_V_read.read();
        } else if (esl_seteq<1,1,1>(ap_condition_278.read(), ap_const_boolean_1)) {
            left_0_V_reg_135 = x_3_V_read.read();
        } else if (esl_seteq<1,3,3>(ap_phi_mux_i_0_phi_fu_128_p4.read(), ap_const_lv3_2)) {
            left_0_V_reg_135 = x_2_V_read.read();
        } else if (esl_seteq<1,3,3>(ap_phi_mux_i_0_phi_fu_128_p4.read(), ap_const_lv3_1)) {
            left_0_V_reg_135 = x_1_V_read.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln77_fu_224_p2.read()))) {
        if (esl_seteq<1,3,3>(xor_ln203_fu_236_p2.read(), ap_const_lv3_4)) {
            right_0_V_reg_159 = x_4_V_read.read();
        } else if (esl_seteq<1,1,1>(ap_condition_283.read(), ap_const_boolean_1)) {
            right_0_V_reg_159 = x_7_V_read.read();
        } else if (esl_seteq<1,3,3>(xor_ln203_fu_236_p2.read(), ap_const_lv3_6)) {
            right_0_V_reg_159 = x_6_V_read.read();
        } else if (esl_seteq<1,3,3>(xor_ln203_fu_236_p2.read(), ap_const_lv3_5)) {
            right_0_V_reg_159 = x_5_V_read.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        i_3_reg_407 = i_3_fu_230_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_reg_371 = i_fu_194_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,2,2>(trunc_ln203_reg_376.read(), ap_const_lv2_1))) {
        left_3_V_1_fu_48 = left_0_V_reg_135.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,2,2>(trunc_ln203_reg_376.read(), ap_const_lv2_2))) {
        left_3_V_2_fu_52 = left_0_V_reg_135.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,2,2>(trunc_ln203_reg_376.read(), ap_const_lv2_3))) {
        left_3_V_3_fu_56 = left_0_V_reg_135.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,2,2>(trunc_ln203_reg_376.read(), ap_const_lv2_0))) {
        left_3_V_fu_44 = left_0_V_reg_135.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,2,2>(trunc_ln203_3_reg_415.read(), ap_const_lv2_1))) {
        right_3_V_1_fu_64 = right_0_V_reg_159.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,2,2>(trunc_ln203_3_reg_415.read(), ap_const_lv2_2))) {
        right_3_V_2_fu_68 = right_0_V_reg_159.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,2,2>(trunc_ln203_3_reg_415.read(), ap_const_lv2_3))) {
        right_3_V_3_fu_72 = right_0_V_reg_159.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,2,2>(trunc_ln203_3_reg_415.read(), ap_const_lv2_0))) {
        right_3_V_fu_60 = right_0_V_reg_159.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln77_fu_224_p2.read()))) {
        trunc_ln203_3_reg_415 = trunc_ln203_3_fu_242_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln74_fu_188_p2.read(), ap_const_lv1_0))) {
        trunc_ln203_reg_376 = trunc_ln203_fu_200_p1.read();
    }
}

void reduce::thread_add_ln703_fu_298_p2() {
    add_ln703_fu_298_p2 = (!grp_reduce_1_fu_180_ap_return.read().is_01() || !grp_reduce_1_fu_172_ap_return.read().is_01())? sc_lv<12>(): (sc_biguint<12>(grp_reduce_1_fu_180_ap_return.read()) + sc_biguint<12>(grp_reduce_1_fu_172_ap_return.read()));
}

void reduce::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void reduce::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void reduce::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void reduce::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void reduce::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void reduce::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void reduce::thread_ap_block_state6_on_subcall_done() {
    ap_block_state6_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_reduce_1_fu_172_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_reduce_1_fu_180_ap_done.read()));
}

void reduce::thread_ap_condition_278() {
    ap_condition_278 = (!esl_seteq<1,3,3>(ap_const_lv3_0, ap_phi_mux_i_0_phi_fu_128_p4.read()) && !esl_seteq<1,3,3>(ap_phi_mux_i_0_phi_fu_128_p4.read(), ap_const_lv3_1) && !esl_seteq<1,3,3>(ap_phi_mux_i_0_phi_fu_128_p4.read(), ap_const_lv3_2));
}

void reduce::thread_ap_condition_283() {
    ap_condition_283 = (!esl_seteq<1,3,3>(xor_ln203_fu_236_p2.read(), ap_const_lv3_4) && !esl_seteq<1,3,3>(xor_ln203_fu_236_p2.read(), ap_const_lv3_5) && !esl_seteq<1,3,3>(xor_ln203_fu_236_p2.read(), ap_const_lv3_6));
}

void reduce::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,1,1>(ap_block_state6_on_subcall_done.read(), ap_const_boolean_0)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void reduce::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void reduce::thread_ap_phi_mux_i_0_phi_fu_128_p4() {
    ap_phi_mux_i_0_phi_fu_128_p4 = i_0_reg_124.read();
}

void reduce::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(ap_block_state6_on_subcall_done.read(), ap_const_boolean_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void reduce::thread_ap_return() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(ap_block_state6_on_subcall_done.read(), ap_const_boolean_0))) {
        ap_return = add_ln703_fu_298_p2.read();
    } else {
        ap_return = ap_return_preg.read();
    }
}

void reduce::thread_grp_reduce_1_fu_172_ap_start() {
    grp_reduce_1_fu_172_ap_start = grp_reduce_1_fu_172_ap_start_reg.read();
}

void reduce::thread_grp_reduce_1_fu_180_ap_start() {
    grp_reduce_1_fu_180_ap_start = grp_reduce_1_fu_180_ap_start_reg.read();
}

void reduce::thread_i_3_fu_230_p2() {
    i_3_fu_230_p2 = (!i2_0_reg_148.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i2_0_reg_148.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void reduce::thread_i_fu_194_p2() {
    i_fu_194_p2 = (!i_0_reg_124.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_reg_124.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void reduce::thread_icmp_ln74_fu_188_p2() {
    icmp_ln74_fu_188_p2 = (!i_0_reg_124.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_124.read() == ap_const_lv3_4);
}

void reduce::thread_icmp_ln77_fu_224_p2() {
    icmp_ln77_fu_224_p2 = (!i2_0_reg_148.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i2_0_reg_148.read() == ap_const_lv3_4);
}

void reduce::thread_trunc_ln203_3_fu_242_p1() {
    trunc_ln203_3_fu_242_p1 = i2_0_reg_148.read().range(2-1, 0);
}

void reduce::thread_trunc_ln203_fu_200_p1() {
    trunc_ln203_fu_200_p1 = i_0_reg_124.read().range(2-1, 0);
}

void reduce::thread_xor_ln203_fu_236_p2() {
    xor_ln203_fu_236_p2 = (i2_0_reg_148.read() ^ ap_const_lv3_4);
}

void reduce::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln74_fu_188_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln77_fu_224_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_block_state6_on_subcall_done.read(), ap_const_boolean_0))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        default : 
            ap_NS_fsm = "XXXXXX";
            break;
    }
}

}


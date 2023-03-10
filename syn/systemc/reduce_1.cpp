// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "reduce_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic reduce_1::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic reduce_1::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> reduce_1::ap_ST_fsm_state1 = "1";
const sc_lv<3> reduce_1::ap_ST_fsm_state2 = "10";
const sc_lv<3> reduce_1::ap_ST_fsm_state3 = "100";
const sc_lv<32> reduce_1::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> reduce_1::ap_const_lv32_1 = "1";
const sc_lv<1> reduce_1::ap_const_lv1_0 = "0";
const sc_lv<32> reduce_1::ap_const_lv32_2 = "10";
const sc_lv<2> reduce_1::ap_const_lv2_0 = "00";
const sc_lv<1> reduce_1::ap_const_lv1_1 = "1";
const sc_lv<2> reduce_1::ap_const_lv2_2 = "10";
const sc_lv<2> reduce_1::ap_const_lv2_1 = "1";
const sc_lv<12> reduce_1::ap_const_lv12_0 = "000000000000";
const bool reduce_1::ap_const_boolean_1 = true;

reduce_1::reduce_1(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln703_1_fu_174_p2);
    sensitive << ( p_Val2_6_reg_81 );
    sensitive << ( p_Val2_5_reg_92 );

    SC_METHOD(thread_add_ln703_2_fu_180_p2);
    sensitive << ( p_Val2_4_reg_46 );
    sensitive << ( p_Val2_s_reg_58 );

    SC_METHOD(thread_add_ln703_fu_186_p2);
    sensitive << ( add_ln703_2_fu_180_p2 );
    sensitive << ( add_ln703_1_fu_174_p2 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln77_fu_144_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln77_fu_144_p2 );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln77_fu_144_p2 );
    sensitive << ( add_ln703_fu_186_p2 );
    sensitive << ( ap_return_preg );

    SC_METHOD(thread_i_2_fu_150_p2);
    sensitive << ( i2_0_reg_103 );

    SC_METHOD(thread_i_fu_120_p2);
    sensitive << ( i_0_reg_70 );

    SC_METHOD(thread_icmp_ln74_fu_114_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_0_reg_70 );

    SC_METHOD(thread_icmp_ln77_fu_144_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( i2_0_reg_103 );

    SC_METHOD(thread_left_0_V_1_fu_137_p3);
    sensitive << ( x_0_V_read );
    sensitive << ( p_Val2_s_reg_58 );
    sensitive << ( trunc_ln203_fu_126_p1 );

    SC_METHOD(thread_left_0_V_fu_130_p3);
    sensitive << ( x_1_V_read );
    sensitive << ( p_Val2_4_reg_46 );
    sensitive << ( trunc_ln203_fu_126_p1 );

    SC_METHOD(thread_right_0_V_2_fu_167_p3);
    sensitive << ( x_2_V_read );
    sensitive << ( p_Val2_5_reg_92 );
    sensitive << ( trunc_ln203_2_fu_156_p1 );

    SC_METHOD(thread_right_0_V_fu_160_p3);
    sensitive << ( x_3_V_read );
    sensitive << ( p_Val2_6_reg_81 );
    sensitive << ( trunc_ln203_2_fu_156_p1 );

    SC_METHOD(thread_trunc_ln203_2_fu_156_p1);
    sensitive << ( i2_0_reg_103 );

    SC_METHOD(thread_trunc_ln203_fu_126_p1);
    sensitive << ( i_0_reg_70 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln74_fu_114_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln77_fu_144_p2 );

    ap_CS_fsm = "001";
    ap_return_preg = "000000000000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "reduce_1_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_fu_120_p2, "i_fu_120_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, left_0_V_fu_130_p3, "left_0_V_fu_130_p3");
    sc_trace(mVcdFile, icmp_ln74_fu_114_p2, "icmp_ln74_fu_114_p2");
    sc_trace(mVcdFile, left_0_V_1_fu_137_p3, "left_0_V_1_fu_137_p3");
    sc_trace(mVcdFile, i_2_fu_150_p2, "i_2_fu_150_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, right_0_V_fu_160_p3, "right_0_V_fu_160_p3");
    sc_trace(mVcdFile, icmp_ln77_fu_144_p2, "icmp_ln77_fu_144_p2");
    sc_trace(mVcdFile, right_0_V_2_fu_167_p3, "right_0_V_2_fu_167_p3");
    sc_trace(mVcdFile, p_Val2_4_reg_46, "p_Val2_4_reg_46");
    sc_trace(mVcdFile, p_Val2_s_reg_58, "p_Val2_s_reg_58");
    sc_trace(mVcdFile, i_0_reg_70, "i_0_reg_70");
    sc_trace(mVcdFile, p_Val2_6_reg_81, "p_Val2_6_reg_81");
    sc_trace(mVcdFile, p_Val2_5_reg_92, "p_Val2_5_reg_92");
    sc_trace(mVcdFile, i2_0_reg_103, "i2_0_reg_103");
    sc_trace(mVcdFile, trunc_ln203_fu_126_p1, "trunc_ln203_fu_126_p1");
    sc_trace(mVcdFile, trunc_ln203_2_fu_156_p1, "trunc_ln203_2_fu_156_p1");
    sc_trace(mVcdFile, add_ln703_2_fu_180_p2, "add_ln703_2_fu_180_p2");
    sc_trace(mVcdFile, add_ln703_1_fu_174_p2, "add_ln703_1_fu_174_p2");
    sc_trace(mVcdFile, add_ln703_fu_186_p2, "add_ln703_fu_186_p2");
    sc_trace(mVcdFile, ap_return_preg, "ap_return_preg");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

reduce_1::~reduce_1() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void reduce_1::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_preg = ap_const_lv12_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
             esl_seteq<1,1,1>(icmp_ln77_fu_144_p2.read(), ap_const_lv1_1))) {
            ap_return_preg = add_ln703_fu_186_p2.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln74_fu_114_p2.read(), ap_const_lv1_1))) {
        i2_0_reg_103 = ap_const_lv2_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln77_fu_144_p2.read()))) {
        i2_0_reg_103 = i_2_fu_150_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln74_fu_114_p2.read(), ap_const_lv1_0))) {
        i_0_reg_70 = i_fu_120_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_70 = ap_const_lv2_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln74_fu_114_p2.read(), ap_const_lv1_0))) {
        p_Val2_4_reg_46 = left_0_V_fu_130_p3.read();
        p_Val2_s_reg_58 = left_0_V_1_fu_137_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln77_fu_144_p2.read()))) {
        p_Val2_5_reg_92 = right_0_V_2_fu_167_p3.read();
        p_Val2_6_reg_81 = right_0_V_fu_160_p3.read();
    }
}

void reduce_1::thread_add_ln703_1_fu_174_p2() {
    add_ln703_1_fu_174_p2 = (!p_Val2_6_reg_81.read().is_01() || !p_Val2_5_reg_92.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_Val2_6_reg_81.read()) + sc_biguint<12>(p_Val2_5_reg_92.read()));
}

void reduce_1::thread_add_ln703_2_fu_180_p2() {
    add_ln703_2_fu_180_p2 = (!p_Val2_s_reg_58.read().is_01() || !p_Val2_4_reg_46.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_Val2_s_reg_58.read()) + sc_biguint<12>(p_Val2_4_reg_46.read()));
}

void reduce_1::thread_add_ln703_fu_186_p2() {
    add_ln703_fu_186_p2 = (!add_ln703_2_fu_180_p2.read().is_01() || !add_ln703_1_fu_174_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2_fu_180_p2.read()) + sc_biguint<12>(add_ln703_1_fu_174_p2.read()));
}

void reduce_1::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void reduce_1::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void reduce_1::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void reduce_1::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(icmp_ln77_fu_144_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void reduce_1::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void reduce_1::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln77_fu_144_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void reduce_1::thread_ap_return() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln77_fu_144_p2.read(), ap_const_lv1_1))) {
        ap_return = add_ln703_fu_186_p2.read();
    } else {
        ap_return = ap_return_preg.read();
    }
}

void reduce_1::thread_i_2_fu_150_p2() {
    i_2_fu_150_p2 = (!i2_0_reg_103.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i2_0_reg_103.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void reduce_1::thread_i_fu_120_p2() {
    i_fu_120_p2 = (!i_0_reg_70.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i_0_reg_70.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void reduce_1::thread_icmp_ln74_fu_114_p2() {
    icmp_ln74_fu_114_p2 = (!i_0_reg_70.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_70.read() == ap_const_lv2_2);
}

void reduce_1::thread_icmp_ln77_fu_144_p2() {
    icmp_ln77_fu_144_p2 = (!i2_0_reg_103.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i2_0_reg_103.read() == ap_const_lv2_2);
}

void reduce_1::thread_left_0_V_1_fu_137_p3() {
    left_0_V_1_fu_137_p3 = (!trunc_ln203_fu_126_p1.read()[0].is_01())? sc_lv<12>(): ((trunc_ln203_fu_126_p1.read()[0].to_bool())? p_Val2_s_reg_58.read(): x_0_V_read.read());
}

void reduce_1::thread_left_0_V_fu_130_p3() {
    left_0_V_fu_130_p3 = (!trunc_ln203_fu_126_p1.read()[0].is_01())? sc_lv<12>(): ((trunc_ln203_fu_126_p1.read()[0].to_bool())? x_1_V_read.read(): p_Val2_4_reg_46.read());
}

void reduce_1::thread_right_0_V_2_fu_167_p3() {
    right_0_V_2_fu_167_p3 = (!trunc_ln203_2_fu_156_p1.read()[0].is_01())? sc_lv<12>(): ((trunc_ln203_2_fu_156_p1.read()[0].to_bool())? p_Val2_5_reg_92.read(): x_2_V_read.read());
}

void reduce_1::thread_right_0_V_fu_160_p3() {
    right_0_V_fu_160_p3 = (!trunc_ln203_2_fu_156_p1.read()[0].is_01())? sc_lv<12>(): ((trunc_ln203_2_fu_156_p1.read()[0].to_bool())? x_3_V_read.read(): p_Val2_6_reg_81.read());
}

void reduce_1::thread_trunc_ln203_2_fu_156_p1() {
    trunc_ln203_2_fu_156_p1 = i2_0_reg_103.read().range(1-1, 0);
}

void reduce_1::thread_trunc_ln203_fu_126_p1() {
    trunc_ln203_fu_126_p1 = i_0_reg_70.read().range(1-1, 0);
}

void reduce_1::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln74_fu_114_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln77_fu_144_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}


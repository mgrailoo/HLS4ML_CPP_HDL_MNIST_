// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module product_1 (
        ap_ready,
        a_V,
        w_V,
        ap_return
);


output   ap_ready;
input  [5:0] a_V;
input  [5:0] w_V;
output  [9:0] ap_return;

wire  signed [5:0] r_V_2_fu_32_p0;
wire  signed [5:0] r_V_2_fu_32_p1;
wire   [11:0] r_V_2_fu_32_p2;

assign ap_ready = 1'b1;

assign ap_return = {{r_V_2_fu_32_p2[11:2]}};

assign r_V_2_fu_32_p0 = a_V;

assign r_V_2_fu_32_p1 = w_V;

assign r_V_2_fu_32_p2 = ($signed(r_V_2_fu_32_p0) * $signed(r_V_2_fu_32_p1));

endmodule //product_1

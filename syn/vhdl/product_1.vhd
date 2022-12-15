-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2020.1.1
-- Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity product_1 is
port (
    ap_ready : OUT STD_LOGIC;
    a_V : IN STD_LOGIC_VECTOR (5 downto 0);
    w_V : IN STD_LOGIC_VECTOR (5 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (9 downto 0) );
end;


architecture behav of product_1 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal r_V_2_fu_32_p0 : STD_LOGIC_VECTOR (5 downto 0);
    signal r_V_2_fu_32_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal r_V_2_fu_32_p2 : STD_LOGIC_VECTOR (11 downto 0);


begin



    ap_ready <= ap_const_logic_1;
    ap_return <= r_V_2_fu_32_p2(11 downto 2);
    r_V_2_fu_32_p0 <= a_V;
    r_V_2_fu_32_p1 <= w_V;
    r_V_2_fu_32_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(std_logic_vector(signed(r_V_2_fu_32_p0) * signed(r_V_2_fu_32_p1))), 12));
end behav;

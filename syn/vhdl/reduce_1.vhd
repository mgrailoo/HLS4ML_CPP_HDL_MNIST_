-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2020.1.1
-- Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity reduce_1 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    x_0_V_read : IN STD_LOGIC_VECTOR (11 downto 0);
    x_1_V_read : IN STD_LOGIC_VECTOR (11 downto 0);
    x_2_V_read : IN STD_LOGIC_VECTOR (11 downto 0);
    x_3_V_read : IN STD_LOGIC_VECTOR (11 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (11 downto 0) );
end;


architecture behav of reduce_1 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv2_2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv12_0 : STD_LOGIC_VECTOR (11 downto 0) := "000000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (2 downto 0) := "001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal i_fu_120_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal left_0_V_fu_130_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal icmp_ln74_fu_114_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal left_0_V_1_fu_137_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal i_2_fu_150_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal right_0_V_fu_160_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal icmp_ln77_fu_144_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal right_0_V_2_fu_167_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal p_Val2_4_reg_46 : STD_LOGIC_VECTOR (11 downto 0);
    signal p_Val2_s_reg_58 : STD_LOGIC_VECTOR (11 downto 0);
    signal i_0_reg_70 : STD_LOGIC_VECTOR (1 downto 0);
    signal p_Val2_6_reg_81 : STD_LOGIC_VECTOR (11 downto 0);
    signal p_Val2_5_reg_92 : STD_LOGIC_VECTOR (11 downto 0);
    signal i2_0_reg_103 : STD_LOGIC_VECTOR (1 downto 0);
    signal trunc_ln203_fu_126_p1 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln203_2_fu_156_p1 : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln703_2_fu_180_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln703_1_fu_174_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln703_fu_186_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal ap_return_preg : STD_LOGIC_VECTOR (11 downto 0) := "000000000000";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (2 downto 0);


begin




    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_return_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_preg <= ap_const_lv12_0;
            else
                if (((icmp_ln77_fu_144_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                    ap_return_preg <= add_ln703_fu_186_p2;
                end if; 
            end if;
        end if;
    end process;


    i2_0_reg_103_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln74_fu_114_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                i2_0_reg_103 <= ap_const_lv2_0;
            elsif (((icmp_ln77_fu_144_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                i2_0_reg_103 <= i_2_fu_150_p2;
            end if; 
        end if;
    end process;

    i_0_reg_70_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln74_fu_114_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                i_0_reg_70 <= i_fu_120_p2;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                i_0_reg_70 <= ap_const_lv2_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln74_fu_114_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                p_Val2_4_reg_46 <= left_0_V_fu_130_p3;
                p_Val2_s_reg_58 <= left_0_V_1_fu_137_p3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln77_fu_144_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                p_Val2_5_reg_92 <= right_0_V_2_fu_167_p3;
                p_Val2_6_reg_81 <= right_0_V_fu_160_p3;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln74_fu_114_p2, ap_CS_fsm_state3, icmp_ln77_fu_144_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((icmp_ln74_fu_114_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state2;
                end if;
            when ap_ST_fsm_state3 => 
                if (((icmp_ln77_fu_144_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when others =>  
                ap_NS_fsm <= "XXX";
        end case;
    end process;
    add_ln703_1_fu_174_p2 <= std_logic_vector(unsigned(p_Val2_6_reg_81) + unsigned(p_Val2_5_reg_92));
    add_ln703_2_fu_180_p2 <= std_logic_vector(unsigned(p_Val2_s_reg_58) + unsigned(p_Val2_4_reg_46));
    add_ln703_fu_186_p2 <= std_logic_vector(unsigned(add_ln703_2_fu_180_p2) + unsigned(add_ln703_1_fu_174_p2));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state3, icmp_ln77_fu_144_p2)
    begin
        if ((((icmp_ln77_fu_144_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state3, icmp_ln77_fu_144_p2)
    begin
        if (((icmp_ln77_fu_144_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_return_assign_proc : process(ap_CS_fsm_state3, icmp_ln77_fu_144_p2, add_ln703_fu_186_p2, ap_return_preg)
    begin
        if (((icmp_ln77_fu_144_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            ap_return <= add_ln703_fu_186_p2;
        else 
            ap_return <= ap_return_preg;
        end if; 
    end process;

    i_2_fu_150_p2 <= std_logic_vector(unsigned(i2_0_reg_103) + unsigned(ap_const_lv2_1));
    i_fu_120_p2 <= std_logic_vector(unsigned(i_0_reg_70) + unsigned(ap_const_lv2_1));
    icmp_ln74_fu_114_p2 <= "1" when (i_0_reg_70 = ap_const_lv2_2) else "0";
    icmp_ln77_fu_144_p2 <= "1" when (i2_0_reg_103 = ap_const_lv2_2) else "0";
    left_0_V_1_fu_137_p3 <= 
        p_Val2_s_reg_58 when (trunc_ln203_fu_126_p1(0) = '1') else 
        x_0_V_read;
    left_0_V_fu_130_p3 <= 
        x_1_V_read when (trunc_ln203_fu_126_p1(0) = '1') else 
        p_Val2_4_reg_46;
    right_0_V_2_fu_167_p3 <= 
        p_Val2_5_reg_92 when (trunc_ln203_2_fu_156_p1(0) = '1') else 
        x_2_V_read;
    right_0_V_fu_160_p3 <= 
        x_3_V_read when (trunc_ln203_2_fu_156_p1(0) = '1') else 
        p_Val2_6_reg_81;
    trunc_ln203_2_fu_156_p1 <= i2_0_reg_103(1 - 1 downto 0);
    trunc_ln203_fu_126_p1 <= i_0_reg_70(1 - 1 downto 0);
end behav;

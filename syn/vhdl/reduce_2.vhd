-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2020.1.1
-- Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity reduce_2 is
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
    x_4_V_read : IN STD_LOGIC_VECTOR (11 downto 0);
    x_5_V_read : IN STD_LOGIC_VECTOR (11 downto 0);
    x_6_V_read : IN STD_LOGIC_VECTOR (11 downto 0);
    x_7_V_read : IN STD_LOGIC_VECTOR (11 downto 0);
    x_8_V_read : IN STD_LOGIC_VECTOR (11 downto 0);
    x_9_V_read : IN STD_LOGIC_VECTOR (11 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (11 downto 0) );
end;


architecture behav of reduce_2 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (5 downto 0) := "000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (5 downto 0) := "000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (5 downto 0) := "001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (5 downto 0) := "010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (5 downto 0) := "100000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv4_2 : STD_LOGIC_VECTOR (3 downto 0) := "0010";
    constant ap_const_lv4_3 : STD_LOGIC_VECTOR (3 downto 0) := "0011";
    constant ap_const_lv4_4 : STD_LOGIC_VECTOR (3 downto 0) := "0100";
    constant ap_const_lv4_5 : STD_LOGIC_VECTOR (3 downto 0) := "0101";
    constant ap_const_lv4_6 : STD_LOGIC_VECTOR (3 downto 0) := "0110";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv3_1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_const_lv3_2 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_const_lv3_3 : STD_LOGIC_VECTOR (2 downto 0) := "011";
    constant ap_const_lv3_4 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv3_5 : STD_LOGIC_VECTOR (2 downto 0) := "101";
    constant ap_const_lv3_6 : STD_LOGIC_VECTOR (2 downto 0) := "110";
    constant ap_const_lv3_7 : STD_LOGIC_VECTOR (2 downto 0) := "111";
    constant ap_const_lv4_8 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_lv2_2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv12_0 : STD_LOGIC_VECTOR (11 downto 0) := "000000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal i_fu_248_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_reg_473 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal i_1_fu_304_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal right_0_V_fu_314_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal icmp_ln77_fu_298_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal right_0_V_1_fu_321_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal grp_reduce_fu_230_ap_start : STD_LOGIC;
    signal grp_reduce_fu_230_ap_done : STD_LOGIC;
    signal grp_reduce_fu_230_ap_idle : STD_LOGIC;
    signal grp_reduce_fu_230_ap_ready : STD_LOGIC;
    signal grp_reduce_fu_230_ap_return : STD_LOGIC_VECTOR (11 downto 0);
    signal ap_phi_mux_i_0_phi_fu_166_p4 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_0_reg_162 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal left_0_V_reg_174 : STD_LOGIC_VECTOR (11 downto 0);
    signal icmp_ln74_fu_242_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_Val2_2_reg_195 : STD_LOGIC_VECTOR (11 downto 0);
    signal p_Val2_s_reg_207 : STD_LOGIC_VECTOR (11 downto 0);
    signal i2_0_reg_219 : STD_LOGIC_VECTOR (1 downto 0);
    signal grp_reduce_fu_230_ap_start_reg : STD_LOGIC := '0';
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal left_7_V_fu_70 : STD_LOGIC_VECTOR (11 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal trunc_ln203_1_fu_254_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal left_7_V_1_fu_74 : STD_LOGIC_VECTOR (11 downto 0);
    signal left_7_V_2_fu_78 : STD_LOGIC_VECTOR (11 downto 0);
    signal left_7_V_3_fu_82 : STD_LOGIC_VECTOR (11 downto 0);
    signal left_7_V_4_fu_86 : STD_LOGIC_VECTOR (11 downto 0);
    signal left_7_V_5_fu_90 : STD_LOGIC_VECTOR (11 downto 0);
    signal left_7_V_6_fu_94 : STD_LOGIC_VECTOR (11 downto 0);
    signal left_7_V_7_fu_98 : STD_LOGIC_VECTOR (11 downto 0);
    signal trunc_ln203_fu_310_p1 : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln703_1_fu_360_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln703_fu_366_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal ap_return_preg : STD_LOGIC_VECTOR (11 downto 0) := "000000000000";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_condition_299 : BOOLEAN;

    component reduce IS
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
        x_4_V_read : IN STD_LOGIC_VECTOR (11 downto 0);
        x_5_V_read : IN STD_LOGIC_VECTOR (11 downto 0);
        x_6_V_read : IN STD_LOGIC_VECTOR (11 downto 0);
        x_7_V_read : IN STD_LOGIC_VECTOR (11 downto 0);
        ap_return : OUT STD_LOGIC_VECTOR (11 downto 0) );
    end component;



begin
    grp_reduce_fu_230 : component reduce
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_reduce_fu_230_ap_start,
        ap_done => grp_reduce_fu_230_ap_done,
        ap_idle => grp_reduce_fu_230_ap_idle,
        ap_ready => grp_reduce_fu_230_ap_ready,
        x_0_V_read => left_7_V_fu_70,
        x_1_V_read => left_7_V_1_fu_74,
        x_2_V_read => left_7_V_2_fu_78,
        x_3_V_read => left_7_V_3_fu_82,
        x_4_V_read => left_7_V_4_fu_86,
        x_5_V_read => left_7_V_5_fu_90,
        x_6_V_read => left_7_V_6_fu_94,
        x_7_V_read => left_7_V_7_fu_98,
        ap_return => grp_reduce_fu_230_ap_return);





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
                if (((ap_const_logic_1 = ap_CS_fsm_state6) and (grp_reduce_fu_230_ap_done = ap_const_logic_1))) then 
                    ap_return_preg <= add_ln703_fu_366_p2;
                end if; 
            end if;
        end if;
    end process;


    grp_reduce_fu_230_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_reduce_fu_230_ap_start_reg <= ap_const_logic_0;
            else
                if (((icmp_ln77_fu_298_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
                    grp_reduce_fu_230_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_reduce_fu_230_ap_ready = ap_const_logic_1)) then 
                    grp_reduce_fu_230_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    i2_0_reg_219_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln74_fu_242_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                i2_0_reg_219 <= ap_const_lv2_0;
            elsif (((icmp_ln77_fu_298_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
                i2_0_reg_219 <= i_1_fu_304_p2;
            end if; 
        end if;
    end process;

    i_0_reg_162_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
                i_0_reg_162 <= i_reg_473;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_0_reg_162 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    left_0_V_reg_174_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln74_fu_242_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                if ((ap_phi_mux_i_0_phi_fu_166_p4 = ap_const_lv4_0)) then 
                    left_0_V_reg_174 <= x_0_V_read;
                elsif ((ap_const_boolean_1 = ap_condition_299)) then 
                    left_0_V_reg_174 <= x_7_V_read;
                elsif ((ap_phi_mux_i_0_phi_fu_166_p4 = ap_const_lv4_6)) then 
                    left_0_V_reg_174 <= x_6_V_read;
                elsif ((ap_phi_mux_i_0_phi_fu_166_p4 = ap_const_lv4_5)) then 
                    left_0_V_reg_174 <= x_5_V_read;
                elsif ((ap_phi_mux_i_0_phi_fu_166_p4 = ap_const_lv4_4)) then 
                    left_0_V_reg_174 <= x_4_V_read;
                elsif ((ap_phi_mux_i_0_phi_fu_166_p4 = ap_const_lv4_3)) then 
                    left_0_V_reg_174 <= x_3_V_read;
                elsif ((ap_phi_mux_i_0_phi_fu_166_p4 = ap_const_lv4_2)) then 
                    left_0_V_reg_174 <= x_2_V_read;
                elsif ((ap_phi_mux_i_0_phi_fu_166_p4 = ap_const_lv4_1)) then 
                    left_0_V_reg_174 <= x_1_V_read;
                end if;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_reg_473 <= i_fu_248_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (trunc_ln203_1_fu_254_p1 = ap_const_lv3_1))) then
                left_7_V_1_fu_74 <= left_0_V_reg_174;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (trunc_ln203_1_fu_254_p1 = ap_const_lv3_2))) then
                left_7_V_2_fu_78 <= left_0_V_reg_174;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (trunc_ln203_1_fu_254_p1 = ap_const_lv3_3))) then
                left_7_V_3_fu_82 <= left_0_V_reg_174;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (trunc_ln203_1_fu_254_p1 = ap_const_lv3_4))) then
                left_7_V_4_fu_86 <= left_0_V_reg_174;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (trunc_ln203_1_fu_254_p1 = ap_const_lv3_5))) then
                left_7_V_5_fu_90 <= left_0_V_reg_174;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (trunc_ln203_1_fu_254_p1 = ap_const_lv3_6))) then
                left_7_V_6_fu_94 <= left_0_V_reg_174;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (trunc_ln203_1_fu_254_p1 = ap_const_lv3_7))) then
                left_7_V_7_fu_98 <= left_0_V_reg_174;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (trunc_ln203_1_fu_254_p1 = ap_const_lv3_0))) then
                left_7_V_fu_70 <= left_0_V_reg_174;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln77_fu_298_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5))) then
                p_Val2_2_reg_195 <= right_0_V_fu_314_p3;
                p_Val2_s_reg_207 <= right_0_V_1_fu_321_p3;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, ap_CS_fsm_state5, icmp_ln77_fu_298_p2, grp_reduce_fu_230_ap_done, icmp_ln74_fu_242_p2, ap_CS_fsm_state6)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((icmp_ln74_fu_242_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when ap_ST_fsm_state5 => 
                if (((icmp_ln77_fu_298_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
            when ap_ST_fsm_state6 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state6) and (grp_reduce_fu_230_ap_done = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
            when others =>  
                ap_NS_fsm <= "XXXXXX";
        end case;
    end process;
    add_ln703_1_fu_360_p2 <= std_logic_vector(unsigned(p_Val2_s_reg_207) + unsigned(grp_reduce_fu_230_ap_return));
    add_ln703_fu_366_p2 <= std_logic_vector(unsigned(add_ln703_1_fu_360_p2) + unsigned(p_Val2_2_reg_195));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);

    ap_condition_299_assign_proc : process(ap_phi_mux_i_0_phi_fu_166_p4)
    begin
                ap_condition_299 <= (not((ap_phi_mux_i_0_phi_fu_166_p4 = ap_const_lv4_0)) and not((ap_phi_mux_i_0_phi_fu_166_p4 = ap_const_lv4_6)) and not((ap_phi_mux_i_0_phi_fu_166_p4 = ap_const_lv4_5)) and not((ap_phi_mux_i_0_phi_fu_166_p4 = ap_const_lv4_4)) and not((ap_phi_mux_i_0_phi_fu_166_p4 = ap_const_lv4_3)) and not((ap_phi_mux_i_0_phi_fu_166_p4 = ap_const_lv4_2)) and not((ap_phi_mux_i_0_phi_fu_166_p4 = ap_const_lv4_1)));
    end process;


    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, grp_reduce_fu_230_ap_done, ap_CS_fsm_state6)
    begin
        if ((((ap_const_logic_1 = ap_CS_fsm_state6) and (grp_reduce_fu_230_ap_done = ap_const_logic_1)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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

    ap_phi_mux_i_0_phi_fu_166_p4 <= i_0_reg_162;

    ap_ready_assign_proc : process(grp_reduce_fu_230_ap_done, ap_CS_fsm_state6)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) and (grp_reduce_fu_230_ap_done = ap_const_logic_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_return_assign_proc : process(grp_reduce_fu_230_ap_done, ap_CS_fsm_state6, add_ln703_fu_366_p2, ap_return_preg)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) and (grp_reduce_fu_230_ap_done = ap_const_logic_1))) then 
            ap_return <= add_ln703_fu_366_p2;
        else 
            ap_return <= ap_return_preg;
        end if; 
    end process;

    grp_reduce_fu_230_ap_start <= grp_reduce_fu_230_ap_start_reg;
    i_1_fu_304_p2 <= std_logic_vector(unsigned(i2_0_reg_219) + unsigned(ap_const_lv2_1));
    i_fu_248_p2 <= std_logic_vector(unsigned(i_0_reg_162) + unsigned(ap_const_lv4_1));
    icmp_ln74_fu_242_p2 <= "1" when (i_0_reg_162 = ap_const_lv4_8) else "0";
    icmp_ln77_fu_298_p2 <= "1" when (i2_0_reg_219 = ap_const_lv2_2) else "0";
    right_0_V_1_fu_321_p3 <= 
        p_Val2_s_reg_207 when (trunc_ln203_fu_310_p1(0) = '1') else 
        x_8_V_read;
    right_0_V_fu_314_p3 <= 
        x_9_V_read when (trunc_ln203_fu_310_p1(0) = '1') else 
        p_Val2_2_reg_195;
    trunc_ln203_1_fu_254_p1 <= i_0_reg_162(3 - 1 downto 0);
    trunc_ln203_fu_310_p1 <= i2_0_reg_219(1 - 1 downto 0);
end behav;

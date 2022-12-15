// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __softmax_invert_tag8j_H__
#define __softmax_invert_tag8j_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct softmax_invert_tag8j_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
  static const unsigned AddressRange = 64;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(softmax_invert_tag8j_ram) {
        ram[0] = "0b00000000";
        ram[1] = "0b01000000";
        ram[2] = "0b00100000";
        ram[3] = "0b00010101";
        ram[4] = "0b00010000";
        ram[5] = "0b00001100";
        ram[6] = "0b00001010";
        ram[7] = "0b00001001";
        ram[8] = "0b00001000";
        ram[9] = "0b00000111";
        ram[10] = "0b00000110";
        ram[11] = "0b00000101";
        ram[12] = "0b00000101";
        ram[13] = "0b00000100";
        ram[14] = "0b00000100";
        ram[15] = "0b00000100";
        ram[16] = "0b00000100";
        for (unsigned i = 17; i < 22 ; i = i + 1) {
            ram[i] = "0b00000011";
        }
        for (unsigned i = 22; i < 32 ; i = i + 1) {
            ram[i] = "0b00000010";
        }
        ram[32] = "0b11111110";
        for (unsigned i = 33; i < 43 ; i = i + 1) {
            ram[i] = "0b11111101";
        }
        for (unsigned i = 43; i < 49 ; i = i + 1) {
            ram[i] = "0b11111100";
        }
        ram[49] = "0b11111011";
        ram[50] = "0b11111011";
        ram[51] = "0b11111011";
        ram[52] = "0b11111010";
        ram[53] = "0b11111010";
        ram[54] = "0b11111001";
        ram[55] = "0b11111000";
        ram[56] = "0b11111000";
        ram[57] = "0b11110110";
        ram[58] = "0b11110101";
        ram[59] = "0b11110011";
        ram[60] = "0b11110000";
        ram[61] = "0b11101010";
        ram[62] = "0b11100000";
        ram[63] = "0b11000000";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(softmax_invert_tag8j) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


softmax_invert_tag8j_ram* meminst;


SC_CTOR(softmax_invert_tag8j) {
meminst = new softmax_invert_tag8j_ram("softmax_invert_tag8j_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~softmax_invert_tag8j() {
    delete meminst;
}


};//endmodule
#endif

// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_large_outidx3_H__
#define __dense_large_outidx3_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_large_outidx3_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 4;
  static const unsigned AddressRange = 7840;
  static const unsigned AddressWidth = 13;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_large_outidx3_ram) {
        for (unsigned i = 0; i < 784 ; i = i + 1) {
            ram[i] = "0b0000";
        }
        for (unsigned i = 784; i < 1568 ; i = i + 1) {
            ram[i] = "0b0001";
        }
        for (unsigned i = 1568; i < 2352 ; i = i + 1) {
            ram[i] = "0b0010";
        }
        for (unsigned i = 2352; i < 3136 ; i = i + 1) {
            ram[i] = "0b0011";
        }
        for (unsigned i = 3136; i < 3920 ; i = i + 1) {
            ram[i] = "0b0100";
        }
        for (unsigned i = 3920; i < 4704 ; i = i + 1) {
            ram[i] = "0b0101";
        }
        for (unsigned i = 4704; i < 5488 ; i = i + 1) {
            ram[i] = "0b0110";
        }
        for (unsigned i = 5488; i < 6272 ; i = i + 1) {
            ram[i] = "0b0111";
        }
        for (unsigned i = 6272; i < 7056 ; i = i + 1) {
            ram[i] = "0b1000";
        }
        for (unsigned i = 7056; i < 7840 ; i = i + 1) {
            ram[i] = "0b1001";
        }


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


SC_MODULE(dense_large_outidx3) {


static const unsigned DataWidth = 4;
static const unsigned AddressRange = 7840;
static const unsigned AddressWidth = 13;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_large_outidx3_ram* meminst;


SC_CTOR(dense_large_outidx3) {
meminst = new dense_large_outidx3_ram("dense_large_outidx3_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_large_outidx3() {
    delete meminst;
}


};//endmodule
#endif

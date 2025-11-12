// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB___024ROOT_H_
#define VERILATED_VTOP_TB___024ROOT_H_  // guard

#include "verilated.h"


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(rst_n,0,0);
    VL_IN8(clk,0,0);
    CData/*7:0*/ top_tb__DOT____Vlvbound_h1b49a4b7__0;
    CData/*1:0*/ top_tb__DOT__DUT__DOT__ALUOp;
    CData/*1:0*/ top_tb__DOT__DUT__DOT__RegSrc;
    CData/*0:0*/ top_tb__DOT__DUT__DOT__ALUSrc;
    CData/*0:0*/ top_tb__DOT__DUT__DOT__RegWrite;
    CData/*0:0*/ top_tb__DOT__DUT__DOT__MemRead;
    CData/*0:0*/ top_tb__DOT__DUT__DOT__MemWrite;
    CData/*0:0*/ top_tb__DOT__DUT__DOT__Branch;
    CData/*3:0*/ top_tb__DOT__DUT__DOT__field;
    CData/*0:0*/ top_tb__DOT__DUT__DOT__branch_taken;
    CData/*7:0*/ top_tb__DOT__DUT__DOT____Vlvbound_h57455b87__0;
    CData/*7:0*/ top_tb__DOT__DUT__DOT____Vlvbound_hbfcd3fcb__0;
    CData/*7:0*/ top_tb__DOT__DUT__DOT____Vlvbound_h57455b87__1;
    CData/*7:0*/ top_tb__DOT__DUT__DOT____Vlvbound_hbfbaa4a8__0;
    CData/*7:0*/ top_tb__DOT__DUT__DOT____Vlvbound_hbfbb11d5__0;
    CData/*7:0*/ top_tb__DOT__DUT__DOT____Vlvbound_hbfcd3fcb__1;
    CData/*7:0*/ top_tb__DOT__DUT__DOT____Vlvbound_h57455b87__2;
    CData/*6:0*/ top_tb__DOT__DUT__DOT__INST3__DOT__opcode;
    CData/*2:0*/ top_tb__DOT__DUT__DOT__INST3__DOT__funct3;
    CData/*0:0*/ top_tb__DOT__DUT__DOT__INST5__DOT__overflow;
    CData/*0:0*/ top_tb__DOT__DUT__DOT__INST5__DOT__intcarry;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    SData/*11:0*/ top_tb__DOT__DUT__DOT__INST3__DOT__intimm1;
    VlWide<250>/*7999:0*/ top_tb__DOT__program_file;
    IData/*31:0*/ top_tb__DOT__RVMODEL_DATA_BEGIN;
    IData/*31:0*/ top_tb__DOT__RVMODEL_DATA_END;
    IData/*31:0*/ top_tb__DOT__tohost;
    IData/*31:0*/ top_tb__DOT__i;
    IData/*31:0*/ top_tb__DOT__fd;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__pc;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__next_pc;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__instruction;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__rd_write_data;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__eximm;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__result;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__INST2__DOT__rs1_data;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__INST2__DOT__rs2_data;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__INST2__DOT__i;
    IData/*19:0*/ top_tb__DOT__DUT__DOT__INST3__DOT__intimm2;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__INST3__DOT__eximm1;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__INST3__DOT__eximm2;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__INST3__DOT__eximm3;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__INST3__DOT__eximm4;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__INST5__DOT__op1;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__INST5__DOT__op2;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 2424832> top_tb__DOT__DUT__DOT__mem;
    VlUnpacked<IData/*31:0*/, 32> top_tb__DOT__DUT__DOT__INST2__DOT__reg_file;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb___024root(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb___024root();
    VL_UNCOPYABLE(Vtop_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

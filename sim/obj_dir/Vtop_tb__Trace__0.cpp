// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0\n"); );
    // Body
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN),32);
        bufp->chgIData(oldp+1,(vlSelfRef.top_tb__DOT__RVMODEL_DATA_END),32);
        bufp->chgIData(oldp+2,(vlSelfRef.top_tb__DOT__tohost),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgIData(oldp+3,(vlSelfRef.top_tb__DOT__DUT__DOT__next_pc),32);
        bufp->chgBit(oldp+4,(vlSelfRef.top_tb__DOT__DUT__DOT__zero));
        bufp->chgBit(oldp+5,(vlSelfRef.top_tb__DOT__DUT__DOT__sign));
        bufp->chgBit(oldp+6,(vlSelfRef.top_tb__DOT__DUT__DOT__overflow));
        bufp->chgBit(oldp+7,(vlSelfRef.top_tb__DOT__DUT__DOT__branch_taken));
        bufp->chgIData(oldp+8,(vlSelfRef.top_tb__DOT__DUT__DOT__rd_write_data),32);
        bufp->chgIData(oldp+9,(vlSelfRef.top_tb__DOT__DUT__DOT__ALU_result),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+10,(vlSelfRef.top_tb__DOT__i),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top_tb__DOT__fd),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[8]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[9]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[10]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[11]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[12]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[13]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[14]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[15]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[16]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[17]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[18]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[19]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[20]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[21]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[22]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[23]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[24]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[25]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[26]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[27]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[28]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[29]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[30]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+44,(vlSelfRef.top_tb__DOT__DUT__DOT__pc),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top_tb__DOT__DUT__DOT__instruction),32);
        bufp->chgCData(oldp+46,((0x0000007fU & vlSelfRef.top_tb__DOT__DUT__DOT__instruction)),7);
        bufp->chgCData(oldp+47,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                                >> 7U))),5);
        bufp->chgCData(oldp+48,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+49,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+50,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+51,((vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                 >> 0x00000019U)),7);
        bufp->chgCData(oldp+52,(vlSelfRef.top_tb__DOT__DUT__DOT__ALUOp),2);
        bufp->chgCData(oldp+53,(vlSelfRef.top_tb__DOT__DUT__DOT__RegSrc),2);
        bufp->chgBit(oldp+54,(vlSelfRef.top_tb__DOT__DUT__DOT__ALUSrc));
        bufp->chgBit(oldp+55,(vlSelfRef.top_tb__DOT__DUT__DOT__RegWrite));
        bufp->chgBit(oldp+56,(vlSelfRef.top_tb__DOT__DUT__DOT__MemRead));
        bufp->chgBit(oldp+57,(vlSelfRef.top_tb__DOT__DUT__DOT__MemWrite));
        bufp->chgBit(oldp+58,(vlSelfRef.top_tb__DOT__DUT__DOT__Branch));
        bufp->chgBit(oldp+59,(vlSelfRef.top_tb__DOT__DUT__DOT__Jump));
        bufp->chgCData(oldp+60,(vlSelfRef.top_tb__DOT__DUT__DOT__field),4);
        bufp->chgIData(oldp+61,(vlSelfRef.top_tb__DOT__DUT__DOT__eximm),32);
        bufp->chgCData(oldp+62,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode),7);
        bufp->chgCData(oldp+63,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__funct3),3);
        bufp->chgSData(oldp+64,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1),12);
        bufp->chgIData(oldp+65,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2),20);
        bufp->chgIData(oldp+66,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm1),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm2),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm3),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm4),32);
        bufp->chgBit(oldp+70,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                     >> 5U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+71,(vlSelfRef.top_tb__DOT__DUT__DOT__carry));
        bufp->chgIData(oldp+72,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__rs1_data),32);
        bufp->chgIData(oldp+73,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__rs2_data),32);
        bufp->chgIData(oldp+74,(vlSelfRef.top_tb__DOT__DUT__DOT__INST5__DOT__op1),32);
        bufp->chgIData(oldp+75,(vlSelfRef.top_tb__DOT__DUT__DOT__INST5__DOT__op2),32);
    }
    bufp->chgBit(oldp+76,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+77,(vlSelfRef.clk));
    bufp->chgBit(oldp+78,((1U & vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file
                           [(0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                            >> 7U))])));
}

void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_cleanup\n"); );
    // Body
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}

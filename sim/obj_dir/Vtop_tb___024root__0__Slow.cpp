// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_static__TOP(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_static(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_static__TOP(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static__TOP\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_tb__DOT__DUT__DOT__pc = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__next_pc = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__instruction = 0U;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_initial(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_tb__DOT__i = 0U;
    while ((0x00065000U > vlSelfRef.top_tb__DOT__i)) {
        vlSelfRef.top_tb__DOT____Vlvbound_h1b49a4b7__0 = 0U;
        if (VL_LIKELY(((0x0024ffffU >= (0x003fffffU 
                                        & vlSelfRef.top_tb__DOT__i))))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__mem[(0x003fffffU 
                                                  & vlSelfRef.top_tb__DOT__i)] 
                = vlSelfRef.top_tb__DOT____Vlvbound_h1b49a4b7__0;
        }
        vlSelfRef.top_tb__DOT__i = ((IData)(1U) + vlSelfRef.top_tb__DOT__i);
    }
    if (VL_UNLIKELY(((! VL_VALUEPLUSARGS_INW(8000, "PROGRAM=%s"s, 
                                             vlSelfRef.top_tb__DOT__program_file))))) {
        VL_WRITEF_NX("ERROR: No PROGRAM file specified! Use +PROGRAM=<path>\n",0);
        VL_FINISH_MT("../tb/pipe/top_tb.sv", 35, "");
    }
    VL_WRITEF_NX("Loading program from %s\n",0,8000,
                 vlSelfRef.top_tb__DOT__program_file.data());
    VL_READMEM_N(true, 8, 2424832, 0, VL_CVT_PACK_STR_NW(250, vlSelfRef.top_tb__DOT__program_file)
                 ,  &(vlSelfRef.top_tb__DOT__DUT__DOT__mem)
                 , 0U, ~0ULL);
    if (VL_UNLIKELY(((! VL_VALUEPLUSARGS_INI(32, "begin_signature=%h"s, 
                                             vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN))))) {
        VL_WRITEF_NX("No RVMODEL_DATA_BEGIN address specified! Using default address 0x00005000\n",0);
        vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN = 0x00005000U;
    }
    VL_WRITEF_NX("RVMODEL_DATA_BEGIN: %x\n",0,32,vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN);
    if (VL_UNLIKELY(((! VL_VALUEPLUSARGS_INI(32, "end_signature=%h"s, 
                                             vlSelfRef.top_tb__DOT__RVMODEL_DATA_END))))) {
        VL_WRITEF_NX("No RVMODEL_DATA_END address specified! Using default address 0x00008000\n",0);
        vlSelfRef.top_tb__DOT__RVMODEL_DATA_END = 0x00008000U;
    }
    VL_WRITEF_NX("RVMODEL_DATA_END: %x\n",0,32,vlSelfRef.top_tb__DOT__RVMODEL_DATA_END);
    if (VL_UNLIKELY(((! VL_VALUEPLUSARGS_INI(32, "tohost=%h"s, 
                                             vlSelfRef.top_tb__DOT__tohost))))) {
        VL_WRITEF_NX("No tohost address specified! Using default address 0x00005000\n",0);
        vlSelfRef.top_tb__DOT__tohost = 0x00005000U;
    }
    VL_WRITEF_NX("tohost: %x\n",0,32,vlSelfRef.top_tb__DOT__tohost);
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[1U] = 1U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[2U] = 2U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[3U] = 3U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[4U] = 4U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[5U] = 5U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[6U] = 6U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[7U] = 7U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[8U] = 8U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[9U] = 9U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x0aU] = 0x0000000aU;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x0bU] = 0x0000000bU;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x0cU] = 0x0000000cU;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x0dU] = 0x0000000dU;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x0eU] = 0x0000000eU;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x0fU] = 0x0000000fU;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x10U] = 0x00000010U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x11U] = 0x00000011U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x12U] = 0x00000012U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x13U] = 0x00000013U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x14U] = 0x00000014U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x15U] = 0x00000015U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x16U] = 0x00000016U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x17U] = 0x00000017U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x18U] = 0x00000018U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x19U] = 0x00000019U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x1aU] = 0x0000001aU;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x1bU] = 0x0000001bU;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x1cU] = 0x0000001cU;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x1dU] = 0x0000001dU;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x1eU] = 0x0000001eU;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[0x1fU] = 0x0000001fU;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_final(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_final\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_settle(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_settle\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../tb/pipe/top_tb.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop_tb___024root___eval_triggers__stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtop_tb__ConstPool__TABLE_h8d504d8e_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop_tb__ConstPool__TABLE_hd3b3fa0a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hed3d3de8_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hb72fa93f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hc64fce2b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hf4dbd913_0;

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ top_tb__DOT__DUT__DOT__ALUOp;
    top_tb__DOT__DUT__DOT__ALUOp = 0;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__rs1_data;
    top_tb__DOT__DUT__DOT__rs1_data = 0;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__op2;
    top_tb__DOT__DUT__DOT__op2 = 0;
    CData/*6:0*/ top_tb__DOT__DUT__DOT__INST3__DOT__opcode;
    top_tb__DOT__DUT__DOT__INST3__DOT__opcode = 0;
    CData/*2:0*/ top_tb__DOT__DUT__DOT__INST3__DOT__funct3;
    top_tb__DOT__DUT__DOT__INST3__DOT__funct3 = 0;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__INST3__DOT__eximm1;
    top_tb__DOT__DUT__DOT__INST3__DOT__eximm1 = 0;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__INST3__DOT__eximm2;
    top_tb__DOT__DUT__DOT__INST3__DOT__eximm2 = 0;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__INST3__DOT__eximm3;
    top_tb__DOT__DUT__DOT__INST3__DOT__eximm3 = 0;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__INST3__DOT__eximm4;
    top_tb__DOT__DUT__DOT__INST3__DOT__eximm4 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.top_tb__DOT__DUT__DOT__old_mem_byte = 
        vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file
        [(0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                         >> 0x00000014U))];
    top_tb__DOT__DUT__DOT__rs1_data = vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file
        [(0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                         >> 0x0000000fU))];
    top_tb__DOT__DUT__DOT__INST3__DOT__opcode = (0x0000007fU 
                                                 & vlSelfRef.top_tb__DOT__DUT__DOT__instruction);
    top_tb__DOT__DUT__DOT__INST3__DOT__funct3 = (7U 
                                                 & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                                    >> 0x0cU));
    if ((0x00000040U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
        if ((0x00000020U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            if ((0x00000010U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
            } else if ((8U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                if ((4U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                    if ((2U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                        if ((1U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 
                                = ((0x00080000U & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                                   >> 0x0000000cU)) 
                                   | ((0x0007f800U 
                                       & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                          >> 1U)) | 
                                      ((0x00000400U 
                                        & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                           >> 0x0000000aU)) 
                                       | (0x000003ffU 
                                          & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                             >> 0x15U)))));
                        } else {
                            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
                        }
                    } else {
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
                    }
                } else {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
                }
            } else if ((4U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                if ((2U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                    if ((1U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 
                            = (0x00000fffU & (((1U 
                                                == (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__funct3)) 
                                               | (5U 
                                                  == (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__funct3)))
                                               ? (0x0000001fU 
                                                  & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                                     >> 0x14U))
                                               : (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                                  >> 0x14U)));
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
                    } else {
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
                    }
                } else {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
                }
            } else if ((2U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                if ((1U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 
                        = ((((2U & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                    >> 0x0000001eU)) 
                             | (1U & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                      >> 7U))) << 0x0000000aU) 
                           | ((0x000003f0U & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                              >> 0x00000015U)) 
                              | (0x0000000fU & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                                >> 8U))));
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
                } else {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
                }
            } else {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
            }
        } else {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
        }
    } else if ((0x00000020U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
        if ((0x00000010U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            if ((8U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
            } else if ((4U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                if ((2U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                    if ((1U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 
                            = (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                               >> 0x0cU);
                    } else {
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
                    }
                } else {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
                }
            } else {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
            }
        } else if ((8U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
        } else if ((4U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
        } else if ((2U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            if ((1U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 
                    = ((0x00000fe0U & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                       >> 0x00000014U)) 
                       | (0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                         >> 7U)));
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
            } else {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
            }
        } else {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
        }
    } else if ((0x00000010U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
        if ((8U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
        } else if ((4U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            if ((2U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                if ((1U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 
                        = (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                           >> 0x0cU);
                } else {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
                }
            } else {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
            }
        } else if ((2U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            if ((1U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 
                    = (0x00000fffU & (((1U == (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__funct3)) 
                                       | (5U == (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__funct3)))
                                       ? (0x0000001fU 
                                          & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                             >> 0x14U))
                                       : (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                          >> 0x14U)));
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
            } else {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
            }
        } else {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
        }
    } else if ((8U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
        if ((4U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            if ((2U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                if ((1U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 
                        = (0x00000fffU & (((1U == (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__funct3)) 
                                           | (5U == (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__funct3)))
                                           ? (0x0000001fU 
                                              & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                                 >> 0x14U))
                                           : (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                              >> 0x14U)));
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
                } else {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
                }
            } else {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
            }
        } else {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
        }
    } else if ((4U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
    } else if ((2U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
        if ((1U & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 
                = (0x00000fffU & (((1U == (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__funct3)) 
                                   | (5U == (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__funct3)))
                                   ? (0x0000001fU & 
                                      (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                       >> 0x14U)) : 
                                  (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                   >> 0x14U)));
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
        } else {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
        }
    } else {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
    }
    top_tb__DOT__DUT__DOT__INST3__DOT__eximm1 = (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1) 
                                                                 >> 0x0bU)))) 
                                                  << 0x0000000cU) 
                                                 | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1));
    top_tb__DOT__DUT__DOT__INST3__DOT__eximm2 = (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 
                                                                 >> 0x13U)))) 
                                                  << 0x00000015U) 
                                                 | (vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 
                                                    << 1U));
    top_tb__DOT__DUT__DOT__INST3__DOT__eximm3 = (vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 
                                                 << 0x0000000cU);
    top_tb__DOT__DUT__DOT__INST3__DOT__eximm4 = (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1) 
                                                                 >> 0x0bU)))) 
                                                  << 0x0000000dU) 
                                                 | ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1) 
                                                    << 1U));
    vlSelfRef.top_tb__DOT__DUT__DOT__eximm = ((0x00000040U 
                                               & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                               ? ((0x00000020U 
                                                   & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                   ? 
                                                  ((0x00000010U 
                                                    & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                    ? top_tb__DOT__DUT__DOT__INST3__DOT__eximm1
                                                    : 
                                                   ((8U 
                                                     & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                        ? top_tb__DOT__DUT__DOT__INST3__DOT__eximm2
                                                        : top_tb__DOT__DUT__DOT__INST3__DOT__eximm1)
                                                       : top_tb__DOT__DUT__DOT__INST3__DOT__eximm1)
                                                      : top_tb__DOT__DUT__DOT__INST3__DOT__eximm1)
                                                     : 
                                                    ((4U 
                                                      & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                      ? top_tb__DOT__DUT__DOT__INST3__DOT__eximm1
                                                      : 
                                                     ((2U 
                                                       & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                        ? top_tb__DOT__DUT__DOT__INST3__DOT__eximm4
                                                        : top_tb__DOT__DUT__DOT__INST3__DOT__eximm1)
                                                       : top_tb__DOT__DUT__DOT__INST3__DOT__eximm1))))
                                                   : top_tb__DOT__DUT__DOT__INST3__DOT__eximm1)
                                               : ((0x00000010U 
                                                   & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                    ? top_tb__DOT__DUT__DOT__INST3__DOT__eximm1
                                                    : 
                                                   ((4U 
                                                     & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                       ? top_tb__DOT__DUT__DOT__INST3__DOT__eximm3
                                                       : top_tb__DOT__DUT__DOT__INST3__DOT__eximm1)
                                                      : top_tb__DOT__DUT__DOT__INST3__DOT__eximm1)
                                                     : top_tb__DOT__DUT__DOT__INST3__DOT__eximm1))
                                                   : top_tb__DOT__DUT__DOT__INST3__DOT__eximm1));
    __Vtableidx1 = (0x0000007fU & vlSelfRef.top_tb__DOT__DUT__DOT__instruction);
    top_tb__DOT__DUT__DOT__ALUOp = Vtop_tb__ConstPool__TABLE_h8d504d8e_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__RegSrc = Vtop_tb__ConstPool__TABLE_hd3b3fa0a_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__ALUSrc = Vtop_tb__ConstPool__TABLE_hed3d3de8_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__RegWrite = Vtop_tb__ConstPool__TABLE_hb72fa93f_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__MemWrite = Vtop_tb__ConstPool__TABLE_hc64fce2b_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__Branch = Vtop_tb__ConstPool__TABLE_hf4dbd913_0
        [__Vtableidx1];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (vlSelfRef.top_tb__DOT__DUT__DOT__eximm 
                                                + vlSelfRef.top_tb__DOT__DUT__DOT__pc);
    if ((0U == (IData)(top_tb__DOT__DUT__DOT__ALUOp))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__field = ((
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                                        >> 0x0000000cU))) 
                                                   | (5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                                          >> 0x0000000cU))))
                                                   ? 
                                                  ((8U 
                                                    & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                                       >> 0x0000001bU)) 
                                                   | (7U 
                                                      & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                                         >> 0x0000000cU)))
                                                   : 
                                                  (7U 
                                                   & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                                      >> 0x0000000cU)));
    } else if ((1U == (IData)(top_tb__DOT__DUT__DOT__ALUOp))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__field = 0U;
    } else if ((2U == (IData)(top_tb__DOT__DUT__DOT__ALUOp))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__field = 8U;
    }
    top_tb__DOT__DUT__DOT__op2 = ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ALUSrc)
                                   ? vlSelfRef.top_tb__DOT__DUT__DOT__eximm
                                   : vlSelfRef.top_tb__DOT__DUT__DOT__old_mem_byte);
    if (((((((((0U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field)) 
               | (8U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))) 
              | (7U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))) 
             | (6U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))) 
            | (4U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))) 
           | (1U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))) 
          | (5U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))) 
         | (0x0dU == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field)))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__result = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))
                                                    ? 
                                                   (top_tb__DOT__DUT__DOT__rs1_data 
                                                    + top_tb__DOT__DUT__DOT__op2)
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))
                                                     ? 
                                                    (top_tb__DOT__DUT__DOT__rs1_data 
                                                     - top_tb__DOT__DUT__DOT__op2)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))
                                                      ? 
                                                     (top_tb__DOT__DUT__DOT__rs1_data 
                                                      & top_tb__DOT__DUT__DOT__op2)
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))
                                                       ? 
                                                      (top_tb__DOT__DUT__DOT__rs1_data 
                                                       | top_tb__DOT__DUT__DOT__op2)
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))
                                                        ? 
                                                       (top_tb__DOT__DUT__DOT__rs1_data 
                                                        ^ top_tb__DOT__DUT__DOT__op2)
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))
                                                         ? 
                                                        (top_tb__DOT__DUT__DOT__rs1_data 
                                                         << 
                                                         (0x0000001fU 
                                                          & top_tb__DOT__DUT__DOT__op2))
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))
                                                          ? 
                                                         (top_tb__DOT__DUT__DOT__rs1_data 
                                                          >> 
                                                          (0x0000001fU 
                                                           & top_tb__DOT__DUT__DOT__op2))
                                                          : 
                                                         VL_SHIFTRS_III(32,32,5, top_tb__DOT__DUT__DOT__rs1_data, 
                                                                        (0x0000001fU 
                                                                         & top_tb__DOT__DUT__DOT__op2)))))))));
    } else if ((2U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__result = VL_LTS_III(32, top_tb__DOT__DUT__DOT__rs1_data, top_tb__DOT__DUT__DOT__op2);
    } else if ((3U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__result = (top_tb__DOT__DUT__DOT__rs1_data 
                                                   < top_tb__DOT__DUT__DOT__op2);
    }
    if ((0U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__RegSrc))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__rd_write_data 
            = vlSelfRef.top_tb__DOT__DUT__DOT__result;
    } else if ((1U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__RegSrc))) {
        if (((0x00200000U <= vlSelfRef.top_tb__DOT__DUT__DOT__result) 
             & (0x00250000U > vlSelfRef.top_tb__DOT__DUT__DOT__result))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__rd_write_data 
                = (((((0x0024ffffU >= (0x003fffffU 
                                       & ((IData)(3U) 
                                          + vlSelfRef.top_tb__DOT__DUT__DOT__result)))
                       ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
                      [(0x003fffffU & ((IData)(3U) 
                                       + vlSelfRef.top_tb__DOT__DUT__DOT__result))]
                       : 0U) << 0x00000018U) | (((0x0024ffffU 
                                                  >= 
                                                  (0x003fffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.top_tb__DOT__DUT__DOT__result)))
                                                  ? 
                                                 vlSelfRef.top_tb__DOT__DUT__DOT__mem
                                                 [(0x003fffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.top_tb__DOT__DUT__DOT__result))]
                                                  : 0U) 
                                                << 0x00000010U)) 
                   | ((((0x0024ffffU >= (0x003fffffU 
                                         & ((IData)(1U) 
                                            + vlSelfRef.top_tb__DOT__DUT__DOT__result)))
                         ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
                        [(0x003fffffU & ((IData)(1U) 
                                         + vlSelfRef.top_tb__DOT__DUT__DOT__result))]
                         : 0U) << 8U) | ((0x0024ffffU 
                                          >= (0x003fffffU 
                                              & vlSelfRef.top_tb__DOT__DUT__DOT__result))
                                          ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
                                         [(0x003fffffU 
                                           & vlSelfRef.top_tb__DOT__DUT__DOT__result)]
                                          : 0U)));
        }
    } else {
        vlSelfRef.top_tb__DOT__DUT__DOT__rd_write_data 
            = ((2U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__RegSrc))
                ? (vlSelfRef.top_tb__DOT__DUT__DOT__pc 
                   + vlSelfRef.top_tb__DOT__DUT__DOT__eximm)
                : ((3U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__RegSrc))
                    ? (0x001fffffU & ((IData)(4U) + vlSelfRef.top_tb__DOT__DUT__DOT__pc))
                    : 0U));
    }
    vlSelfRef.top_tb__DOT__DUT__DOT__next_pc = (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__Branch) 
                                                 & (0U 
                                                    == vlSelfRef.top_tb__DOT__DUT__DOT__result))
                                                 ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__RegSrc))
                                                  ? 
                                                 ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ALUSrc)
                                                   ? 
                                                  (0xfffffffeU 
                                                   & (top_tb__DOT__DUT__DOT__rs1_data 
                                                      + vlSelfRef.top_tb__DOT__DUT__DOT__eximm))
                                                   : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.top_tb__DOT__DUT__DOT__pc)));
}

VL_ATTR_COLD void Vtop_tb___024root___eval_stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___ctor_var_reset(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___ctor_var_reset\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    VL_SCOPED_RAND_RESET_W(8000, vlSelf->top_tb__DOT__program_file, __VscopeHash, 1101078386483316854ull);
    vlSelf->top_tb__DOT__RVMODEL_DATA_BEGIN = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2635610246748856821ull);
    vlSelf->top_tb__DOT__RVMODEL_DATA_END = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9466641019508248057ull);
    vlSelf->top_tb__DOT__tohost = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1030470667926345800ull);
    vlSelf->top_tb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6651770975129235105ull);
    vlSelf->top_tb__DOT__fd = 0;
    vlSelf->top_tb__DOT____Vlvbound_h1b49a4b7__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10121113027223546143ull);
    vlSelf->top_tb__DOT__DUT__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8019344024860462899ull);
    vlSelf->top_tb__DOT__DUT__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11981342139059141082ull);
    for (int __Vi0 = 0; __Vi0 < 2424832; ++__Vi0) {
        vlSelf->top_tb__DOT__DUT__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6158807867235346066ull);
    }
    vlSelf->top_tb__DOT__DUT__DOT__old_mem_byte = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2388134260240524381ull);
    vlSelf->top_tb__DOT__DUT__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1272351634718359589ull);
    vlSelf->top_tb__DOT__DUT__DOT__RegSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6114483580102873250ull);
    vlSelf->top_tb__DOT__DUT__DOT__ALUSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1740347295364380756ull);
    vlSelf->top_tb__DOT__DUT__DOT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11870573049459910414ull);
    vlSelf->top_tb__DOT__DUT__DOT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9490143691049424217ull);
    vlSelf->top_tb__DOT__DUT__DOT__Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14523592105317667194ull);
    vlSelf->top_tb__DOT__DUT__DOT__field = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7544327739732328ull);
    vlSelf->top_tb__DOT__DUT__DOT__rd_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10199384962691396095ull);
    vlSelf->top_tb__DOT__DUT__DOT__eximm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14227501013455540611ull);
    vlSelf->top_tb__DOT__DUT__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4802722974358306990ull);
    vlSelf->top_tb__DOT__DUT__DOT____Vlvbound_hbfbaa4a8__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8137921025480993796ull);
    vlSelf->top_tb__DOT__DUT__DOT____Vlvbound_hbfbb11d5__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12944520467055442645ull);
    vlSelf->top_tb__DOT__DUT__DOT____Vlvbound_hbfcd3fcb__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 428439217811314150ull);
    vlSelf->top_tb__DOT__DUT__DOT____Vlvbound_h57455b87__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4235840218033017740ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7817916749728868629ull);
    }
    vlSelf->top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3667886095232139621ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 308647026660608871ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5614032309088458142ull);
    vlSelf->__VdlyVal__top_tb__DOT__DUT__DOT__mem__v0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12391178822187623311ull);
    vlSelf->__VdlyDim0__top_tb__DOT__DUT__DOT__mem__v0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1422866416864307833ull);
    vlSelf->__VdlySet__top_tb__DOT__DUT__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__top_tb__DOT__DUT__DOT__mem__v1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4174379618097377844ull);
    vlSelf->__VdlyDim0__top_tb__DOT__DUT__DOT__mem__v1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14749387707286471576ull);
    vlSelf->__VdlySet__top_tb__DOT__DUT__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__top_tb__DOT__DUT__DOT__mem__v2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11553567601200172006ull);
    vlSelf->__VdlyDim0__top_tb__DOT__DUT__DOT__mem__v2 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 8984115844520449697ull);
    vlSelf->__VdlySet__top_tb__DOT__DUT__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__top_tb__DOT__DUT__DOT__mem__v3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12627568343773730387ull);
    vlSelf->__VdlyDim0__top_tb__DOT__DUT__DOT__mem__v3 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7139656052220897785ull);
    vlSelf->__VdlySet__top_tb__DOT__DUT__DOT__mem__v3 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14803524876191471008ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}

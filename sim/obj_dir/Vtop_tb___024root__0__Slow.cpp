// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_static__TOP(Vtop_tb___024root* vlSelf);
VL_ATTR_COLD void Vtop_tb___024root____Vm_traceActivitySetAll(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_static(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root___eval_static__TOP(vlSelf);
    Vtop_tb___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__DUT__DOT__ALU_result__0 
        = vlSelfRef.top_tb__DOT__DUT__DOT__ALU_result;
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__DUT__DOT__ALU_result__1 
        = vlSelfRef.top_tb__DOT__DUT__DOT__ALU_result;
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
    Vtop_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_tb__DOT__i = 0U;
    while ((0x00250000U > vlSelfRef.top_tb__DOT__i)) {
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
}

VL_ATTR_COLD void Vtop_tb___024root___eval_final(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_final\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
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
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [1U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
    vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                    (vlSelfRef.top_tb__DOT__DUT__DOT__ALU_result 
                                                     != vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__DUT__DOT__ALU_result__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__DUT__DOT__ALU_result__0 
        = vlSelfRef.top_tb__DOT__DUT__DOT__ALU_result;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] top_tb.DUT.ALU_result)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
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
    } while ((2U > n));
    return (0U);
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtop_tb__ConstPool__TABLE_hf391fe1a_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop_tb__ConstPool__TABLE_hc8bbad6f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hed3d3de8_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hb72fa93f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_h07b8af5e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hc64fce2b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hf4dbd913_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_haff683e6_0;

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.top_tb__DOT__DUT__DOT__instruction = 
        (((((0x0024ffffU >= (0x003fffffU & ((IData)(3U) 
                                            + vlSelfRef.top_tb__DOT__DUT__DOT__pc)))
             ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
            [(0x003fffffU & ((IData)(3U) + vlSelfRef.top_tb__DOT__DUT__DOT__pc))]
             : 0U) << 0x00000018U) | (((0x0024ffffU 
                                        >= (0x003fffffU 
                                            & ((IData)(2U) 
                                               + vlSelfRef.top_tb__DOT__DUT__DOT__pc)))
                                        ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
                                       [(0x003fffffU 
                                         & ((IData)(2U) 
                                            + vlSelfRef.top_tb__DOT__DUT__DOT__pc))]
                                        : 0U) << 0x00000010U)) 
         | ((((0x0024ffffU >= (0x003fffffU & ((IData)(1U) 
                                              + vlSelfRef.top_tb__DOT__DUT__DOT__pc)))
               ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
              [(0x003fffffU & ((IData)(1U) + vlSelfRef.top_tb__DOT__DUT__DOT__pc))]
               : 0U) << 8U) | ((0x0024ffffU >= (0x003fffffU 
                                                & vlSelfRef.top_tb__DOT__DUT__DOT__pc))
                                ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
                               [(0x003fffffU & vlSelfRef.top_tb__DOT__DUT__DOT__pc)]
                                : 0U)));
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__rs2_data 
        = vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file
        [(0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                         >> 0x00000014U))];
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__rs1_data 
        = vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file
        [(0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                         >> 0x0000000fU))];
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode 
        = (0x0000007fU & vlSelfRef.top_tb__DOT__DUT__DOT__instruction);
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__funct3 
        = (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                 >> 0x0cU));
    if ((0x00000040U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
        if ((0x00000020U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            if ((0x00000010U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
            } else if ((8U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
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
            } else if ((4U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 
                            = (0x00000fffU & (((0x13U 
                                                == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode)) 
                                               & ((1U 
                                                   == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__funct3)) 
                                                  | (5U 
                                                     == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__funct3))))
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
            } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
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
    } else if ((0x00000020U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
        if ((0x00000010U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            if ((8U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
            } else if ((4U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
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
        } else if ((8U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
        } else if ((4U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
        } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
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
    } else if ((0x00000010U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
        if ((8U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
        } else if ((4U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
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
        } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 
                    = (0x00000fffU & (((0x13U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode)) 
                                       & ((1U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__funct3)) 
                                          | (5U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__funct3))))
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
    } else if ((8U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
        if ((4U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 
                        = (0x00000fffU & (((0x13U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode)) 
                                           & ((1U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__funct3)) 
                                              | (5U 
                                                 == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__funct3))))
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
    } else if ((4U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = 0U;
    } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
        if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 
                = (0x00000fffU & (((0x13U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode)) 
                                   & ((1U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__funct3)) 
                                      | (5U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__funct3))))
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
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm1 
        = (((- (IData)((1U & ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1) 
                              >> 0x0bU)))) << 0x0000000cU) 
           | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1));
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm2 
        = (((- (IData)((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 
                              >> 0x13U)))) << 0x00000015U) 
           | (vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 
              << 1U));
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm3 
        = (vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 
           << 0x0000000cU);
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm4 
        = (((- (IData)((1U & ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1) 
                              >> 0x0bU)))) << 0x0000000dU) 
           | ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__intimm1) 
              << 1U));
    vlSelfRef.top_tb__DOT__DUT__DOT__eximm = ((0x00000040U 
                                               & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                               ? ((0x00000020U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                   ? 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                    ? vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm1
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                        ? vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm2
                                                        : vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm1)
                                                       : vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm1)
                                                      : vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm1)
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                      ? vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm1
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                        ? vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm4
                                                        : vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm1)
                                                       : vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm1))))
                                                   : vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm1)
                                               : ((0x00000010U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                    ? vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm1
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__opcode))
                                                       ? vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm3
                                                       : vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm1)
                                                      : vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm1)
                                                     : vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm1))
                                                   : vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__eximm1));
    __Vtableidx1 = (0x0000007fU & vlSelfRef.top_tb__DOT__DUT__DOT__instruction);
    vlSelfRef.top_tb__DOT__DUT__DOT__ALUOp = Vtop_tb__ConstPool__TABLE_hf391fe1a_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__RegSrc = Vtop_tb__ConstPool__TABLE_hc8bbad6f_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__ALUSrc = Vtop_tb__ConstPool__TABLE_hed3d3de8_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__RegWrite = Vtop_tb__ConstPool__TABLE_hb72fa93f_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__MemRead = Vtop_tb__ConstPool__TABLE_h07b8af5e_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__MemWrite = Vtop_tb__ConstPool__TABLE_hc64fce2b_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__Branch = Vtop_tb__ConstPool__TABLE_hf4dbd913_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__Jump = Vtop_tb__ConstPool__TABLE_haff683e6_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__INST5__DOT__op1 
        = ((0x37U == (0x0000007fU & vlSelfRef.top_tb__DOT__DUT__DOT__instruction))
            ? 0U : vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__rs1_data);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (vlSelfRef.top_tb__DOT__DUT__DOT__eximm 
                                                + vlSelfRef.top_tb__DOT__DUT__DOT__pc);
    if ((0U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ALUOp))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__field = ((0x00000020U 
                                                   & vlSelfRef.top_tb__DOT__DUT__DOT__instruction)
                                                   ? 
                                                  ((8U 
                                                    & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                                       >> 0x0000001bU)) 
                                                   | (7U 
                                                      & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                                                         >> 0x0000000cU)))
                                                   : 
                                                  (((1U 
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
                                                       >> 0x0000000cU))));
    } else if ((1U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ALUOp))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__field = 0U;
    } else if ((2U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ALUOp))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__field = 8U;
    }
    vlSelfRef.top_tb__DOT__DUT__DOT__INST5__DOT__op2 
        = ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ALUSrc)
            ? vlSelfRef.top_tb__DOT__DUT__DOT__eximm
            : vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__rs2_data);
    if (((((((((0U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field)) 
               | (8U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))) 
              | (7U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))) 
             | (6U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))) 
            | (4U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))) 
           | (1U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))) 
          | (5U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))) 
         | (0x0dU == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field)))) {
        if ((0U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__carry 
                = (1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST5__DOT__op1)) 
                                          + (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST5__DOT__op2))) 
                                         >> 0x00000020U))));
        } else if ((8U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__field))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__carry 
                = (1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST5__DOT__op1)) 
                                          - (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST5__DOT__op2))) 
                                         >> 0x00000020U))));
        }
    }
}

void Vtop_tb___024root___act_sequent__TOP__0(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vtop_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((1ULL & (vlSelfRef.__VstlTriggered[1U] | vlSelfRef.__VstlTriggered
                 [0U]))) {
        Vtop_tb___024root___act_sequent__TOP__0(vlSelf);
        Vtop_tb___024root____Vm_traceActivitySetAll(vlSelf);
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] top_tb.DUT.ALU_result)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root____Vm_traceActivitySetAll(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root____Vm_traceActivitySetAll\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

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
    vlSelf->top_tb__DOT__DUT__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1272351634718359589ull);
    vlSelf->top_tb__DOT__DUT__DOT__ALUOp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12111200863420160936ull);
    vlSelf->top_tb__DOT__DUT__DOT__RegSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6114483580102873250ull);
    vlSelf->top_tb__DOT__DUT__DOT__ALUSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1740347295364380756ull);
    vlSelf->top_tb__DOT__DUT__DOT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11870573049459910414ull);
    vlSelf->top_tb__DOT__DUT__DOT__MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7487435531016487207ull);
    vlSelf->top_tb__DOT__DUT__DOT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9490143691049424217ull);
    vlSelf->top_tb__DOT__DUT__DOT__Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14523592105317667194ull);
    vlSelf->top_tb__DOT__DUT__DOT__Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9116439571793351947ull);
    vlSelf->top_tb__DOT__DUT__DOT__field = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7544327739732328ull);
    vlSelf->top_tb__DOT__DUT__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6572766454201916544ull);
    vlSelf->top_tb__DOT__DUT__DOT__sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2171959371083783881ull);
    vlSelf->top_tb__DOT__DUT__DOT__overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7600323937384184509ull);
    vlSelf->top_tb__DOT__DUT__DOT__carry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6876650101487519317ull);
    vlSelf->top_tb__DOT__DUT__DOT__branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15929583112748482286ull);
    vlSelf->top_tb__DOT__DUT__DOT__rd_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10199384962691396095ull);
    vlSelf->top_tb__DOT__DUT__DOT__eximm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14227501013455540611ull);
    vlSelf->top_tb__DOT__DUT__DOT__ALU_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17069436049196068261ull);
    vlSelf->top_tb__DOT__DUT__DOT____Vlvbound_hff872503__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13466709273369775499ull);
    vlSelf->top_tb__DOT__DUT__DOT____Vlvbound_h918d8a4f__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8527454587470559935ull);
    vlSelf->top_tb__DOT__DUT__DOT____Vlvbound_hff872503__1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5672761439827598781ull);
    vlSelf->top_tb__DOT__DUT__DOT____Vlvbound_h918ce71c__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14422746928473082288ull);
    vlSelf->top_tb__DOT__DUT__DOT____Vlvbound_h918d5949__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15794703624098721284ull);
    vlSelf->top_tb__DOT__DUT__DOT____Vlvbound_h918d8a4f__1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15301524501922451366ull);
    vlSelf->top_tb__DOT__DUT__DOT____Vlvbound_hff872503__2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4897768661659716711ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST2__DOT__rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11744449090358159409ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST2__DOT__rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13739498383569194844ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7817916749728868629ull);
    }
    vlSelf->top_tb__DOT__DUT__DOT__INST3__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1975106212380071973ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST3__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14186146357230612966ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST3__DOT__intimm1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3667886095232139621ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST3__DOT__intimm2 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 308647026660608871ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST3__DOT__eximm1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9027868157088726458ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST3__DOT__eximm2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10433529503566160964ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST3__DOT__eximm3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15340260824281823179ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST3__DOT__eximm4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10862983951815204516ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST5__DOT__op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14003117640234167814ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST5__DOT__op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2189904814558055196ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5614032309088458142ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__DUT__DOT__ALU_result__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5955732875054692742ull);
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__DUT__DOT__ALU_result__1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16536227055770609490ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14803524876191471008ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

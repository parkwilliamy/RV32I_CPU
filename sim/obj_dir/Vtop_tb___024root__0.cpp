// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__act\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.rst_n)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___trigger_anySet__act\n"); );
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

void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__top_tb__DOT__DUT__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__top_tb__DOT__DUT__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__top_tb__DOT__DUT__DOT__mem__v2 = 0U;
    vlSelfRef.__VdlySet__top_tb__DOT__DUT__DOT__mem__v3 = 0U;
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.top_tb__DOT__DUT__DOT__MemWrite) {
            vlSelfRef.top_tb__DOT__DUT__DOT____Vlvbound_hbfbaa4a8__0 
                = (vlSelfRef.top_tb__DOT__DUT__DOT__old_mem_byte 
                   >> 0x18U);
            if ((0x0024ffffU >= (0x003fffffU & ((IData)(3U) 
                                                + vlSelfRef.top_tb__DOT__DUT__DOT__result)))) {
                vlSelfRef.__VdlyVal__top_tb__DOT__DUT__DOT__mem__v0 
                    = vlSelfRef.top_tb__DOT__DUT__DOT____Vlvbound_hbfbaa4a8__0;
                vlSelfRef.__VdlyDim0__top_tb__DOT__DUT__DOT__mem__v0 
                    = (0x003fffffU & ((IData)(3U) + vlSelfRef.top_tb__DOT__DUT__DOT__result));
                vlSelfRef.__VdlySet__top_tb__DOT__DUT__DOT__mem__v0 = 1U;
            }
            vlSelfRef.top_tb__DOT__DUT__DOT____Vlvbound_hbfbb11d5__0 
                = (0x000000ffU & (vlSelfRef.top_tb__DOT__DUT__DOT__old_mem_byte 
                                  >> 0x10U));
            if ((0x0024ffffU >= (0x003fffffU & ((IData)(2U) 
                                                + vlSelfRef.top_tb__DOT__DUT__DOT__result)))) {
                vlSelfRef.__VdlyVal__top_tb__DOT__DUT__DOT__mem__v1 
                    = vlSelfRef.top_tb__DOT__DUT__DOT____Vlvbound_hbfbb11d5__0;
                vlSelfRef.__VdlyDim0__top_tb__DOT__DUT__DOT__mem__v1 
                    = (0x003fffffU & ((IData)(2U) + vlSelfRef.top_tb__DOT__DUT__DOT__result));
                vlSelfRef.__VdlySet__top_tb__DOT__DUT__DOT__mem__v1 = 1U;
            }
            vlSelfRef.top_tb__DOT__DUT__DOT____Vlvbound_hbfcd3fcb__0 
                = (0x000000ffU & (vlSelfRef.top_tb__DOT__DUT__DOT__old_mem_byte 
                                  >> 8U));
            if ((0x0024ffffU >= (0x003fffffU & ((IData)(1U) 
                                                + vlSelfRef.top_tb__DOT__DUT__DOT__result)))) {
                vlSelfRef.__VdlyVal__top_tb__DOT__DUT__DOT__mem__v2 
                    = vlSelfRef.top_tb__DOT__DUT__DOT____Vlvbound_hbfcd3fcb__0;
                vlSelfRef.__VdlyDim0__top_tb__DOT__DUT__DOT__mem__v2 
                    = (0x003fffffU & ((IData)(1U) + vlSelfRef.top_tb__DOT__DUT__DOT__result));
                vlSelfRef.__VdlySet__top_tb__DOT__DUT__DOT__mem__v2 = 1U;
            }
            vlSelfRef.top_tb__DOT__DUT__DOT____Vlvbound_h57455b87__0 
                = (0x000000ffU & vlSelfRef.top_tb__DOT__DUT__DOT__old_mem_byte);
            if ((0x0024ffffU >= (0x003fffffU & vlSelfRef.top_tb__DOT__DUT__DOT__result))) {
                vlSelfRef.__VdlyVal__top_tb__DOT__DUT__DOT__mem__v3 
                    = vlSelfRef.top_tb__DOT__DUT__DOT____Vlvbound_h57455b87__0;
                vlSelfRef.__VdlyDim0__top_tb__DOT__DUT__DOT__mem__v3 
                    = (0x003fffffU & vlSelfRef.top_tb__DOT__DUT__DOT__result);
                vlSelfRef.__VdlySet__top_tb__DOT__DUT__DOT__mem__v3 = 1U;
            }
        }
    }
}

void Vtop_tb___024root___nba_sequent__TOP__1(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__1\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__top_tb__DOT__DUT__DOT__INST2__DOT__reg_file__v0;
    __VdlyVal__top_tb__DOT__DUT__DOT__INST2__DOT__reg_file__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top_tb__DOT__DUT__DOT__INST2__DOT__reg_file__v0;
    __VdlyDim0__top_tb__DOT__DUT__DOT__INST2__DOT__reg_file__v0 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__DUT__DOT__INST2__DOT__reg_file__v0;
    __VdlySet__top_tb__DOT__DUT__DOT__INST2__DOT__reg_file__v0 = 0;
    // Body
    __VdlySet__top_tb__DOT__DUT__DOT__INST2__DOT__reg_file__v0 = 0U;
    if (VL_UNLIKELY(((1U == ((0x0024ffffU >= (0x003fffffU 
                                              & vlSelfRef.top_tb__DOT__tohost))
                              ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
                             [(0x003fffffU & vlSelfRef.top_tb__DOT__tohost)]
                              : 0U))))) {
        vlSelfRef.top_tb__DOT__fd = VL_FOPEN_NN("DUT-RV32I_test.signature"s
                                                , "w"s);
        ;
        vlSelfRef.top_tb__DOT__i = vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN;
        while ((vlSelfRef.top_tb__DOT__i < (vlSelfRef.top_tb__DOT__RVMODEL_DATA_END 
                                            - (IData)(4U)))) {
            VL_FWRITEF_NX(vlSelfRef.top_tb__DOT__fd,"%08x\n",0,
                          32,(((((0x0024ffffU >= (0x003fffffU 
                                                  & ((IData)(3U) 
                                                     + vlSelfRef.top_tb__DOT__i)))
                                  ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
                                 [(0x003fffffU & ((IData)(3U) 
                                                  + vlSelfRef.top_tb__DOT__i))]
                                  : 0U) << 0x00000018U) 
                               | (((0x0024ffffU >= 
                                    (0x003fffffU & 
                                     ((IData)(2U) + vlSelfRef.top_tb__DOT__i)))
                                    ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
                                   [(0x003fffffU & 
                                     ((IData)(2U) + vlSelfRef.top_tb__DOT__i))]
                                    : 0U) << 0x00000010U)) 
                              | ((((0x0024ffffU >= 
                                    (0x003fffffU & 
                                     ((IData)(1U) + vlSelfRef.top_tb__DOT__i)))
                                    ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
                                   [(0x003fffffU & 
                                     ((IData)(1U) + vlSelfRef.top_tb__DOT__i))]
                                    : 0U) << 8U) | 
                                 ((0x0024ffffU >= (0x003fffffU 
                                                   & vlSelfRef.top_tb__DOT__i))
                                   ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
                                  [(0x003fffffU & vlSelfRef.top_tb__DOT__i)]
                                   : 0U))));
            vlSelfRef.top_tb__DOT__i = ((IData)(4U) 
                                        + vlSelfRef.top_tb__DOT__i);
        }
        VL_FCLOSE_I(vlSelfRef.top_tb__DOT__fd); VL_FINISH_MT("../tb/pipe/top_tb.sv", 75, "");
    }
    if (((0U < (0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                               >> 7U))) & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__RegWrite))) {
        __VdlyVal__top_tb__DOT__DUT__DOT__INST2__DOT__reg_file__v0 
            = vlSelfRef.top_tb__DOT__DUT__DOT__rd_write_data;
        __VdlyDim0__top_tb__DOT__DUT__DOT__INST2__DOT__reg_file__v0 
            = (0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                              >> 7U));
        __VdlySet__top_tb__DOT__DUT__DOT__INST2__DOT__reg_file__v0 = 1U;
    }
    if (__VdlySet__top_tb__DOT__DUT__DOT__INST2__DOT__reg_file__v0) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file[__VdlyDim0__top_tb__DOT__DUT__DOT__INST2__DOT__reg_file__v0] 
            = __VdlyVal__top_tb__DOT__DUT__DOT__INST2__DOT__reg_file__v0;
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtop_tb__ConstPool__TABLE_h8d504d8e_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop_tb__ConstPool__TABLE_hd3b3fa0a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hed3d3de8_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hb72fa93f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hc64fce2b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hf4dbd913_0;

void Vtop_tb___024root___nba_sequent__TOP__2(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__2\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ top_tb__DOT__DUT__DOT__ALUOp;
    top_tb__DOT__DUT__DOT__ALUOp = 0;
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
    if (vlSelfRef.rst_n) {
        vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
            = (((((0x0024ffffU >= (0x003fffffU & ((IData)(3U) 
                                                  + vlSelfRef.top_tb__DOT__DUT__DOT__next_pc)))
                   ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
                  [(0x003fffffU & ((IData)(3U) + vlSelfRef.top_tb__DOT__DUT__DOT__next_pc))]
                   : 0U) << 0x00000018U) | (((0x0024ffffU 
                                              >= (0x003fffffU 
                                                  & ((IData)(2U) 
                                                     + vlSelfRef.top_tb__DOT__DUT__DOT__next_pc)))
                                              ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
                                             [(0x003fffffU 
                                               & ((IData)(2U) 
                                                  + vlSelfRef.top_tb__DOT__DUT__DOT__next_pc))]
                                              : 0U) 
                                            << 0x00000010U)) 
               | ((((0x0024ffffU >= (0x003fffffU & 
                                     ((IData)(1U) + vlSelfRef.top_tb__DOT__DUT__DOT__next_pc)))
                     ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
                    [(0x003fffffU & ((IData)(1U) + vlSelfRef.top_tb__DOT__DUT__DOT__next_pc))]
                     : 0U) << 8U) | ((0x0024ffffU >= 
                                      (0x003fffffU 
                                       & vlSelfRef.top_tb__DOT__DUT__DOT__next_pc))
                                      ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
                                     [(0x003fffffU 
                                       & vlSelfRef.top_tb__DOT__DUT__DOT__next_pc)]
                                      : 0U)));
        vlSelfRef.top_tb__DOT__DUT__DOT__pc = vlSelfRef.top_tb__DOT__DUT__DOT__next_pc;
    } else {
        vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
            = (((((0x0024ffffU >= (0x003fffffU & ((IData)(3U) 
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
                                              : 0U) 
                                            << 0x00000010U)) 
               | ((((0x0024ffffU >= (0x003fffffU & 
                                     ((IData)(1U) + vlSelfRef.top_tb__DOT__DUT__DOT__pc)))
                     ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
                    [(0x003fffffU & ((IData)(1U) + vlSelfRef.top_tb__DOT__DUT__DOT__pc))]
                     : 0U) << 8U) | ((0x0024ffffU >= 
                                      (0x003fffffU 
                                       & vlSelfRef.top_tb__DOT__DUT__DOT__pc))
                                      ? vlSelfRef.top_tb__DOT__DUT__DOT__mem
                                     [(0x003fffffU 
                                       & vlSelfRef.top_tb__DOT__DUT__DOT__pc)]
                                      : 0U)));
        vlSelfRef.top_tb__DOT__DUT__DOT__pc = 0U;
    }
    if (vlSelfRef.__VdlySet__top_tb__DOT__DUT__DOT__mem__v0) {
        vlSelfRef.top_tb__DOT__DUT__DOT__mem[vlSelfRef.__VdlyDim0__top_tb__DOT__DUT__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__top_tb__DOT__DUT__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__top_tb__DOT__DUT__DOT__mem__v1) {
        vlSelfRef.top_tb__DOT__DUT__DOT__mem[vlSelfRef.__VdlyDim0__top_tb__DOT__DUT__DOT__mem__v1] 
            = vlSelfRef.__VdlyVal__top_tb__DOT__DUT__DOT__mem__v1;
    }
    if (vlSelfRef.__VdlySet__top_tb__DOT__DUT__DOT__mem__v2) {
        vlSelfRef.top_tb__DOT__DUT__DOT__mem[vlSelfRef.__VdlyDim0__top_tb__DOT__DUT__DOT__mem__v2] 
            = vlSelfRef.__VdlyVal__top_tb__DOT__DUT__DOT__mem__v2;
    }
    if (vlSelfRef.__VdlySet__top_tb__DOT__DUT__DOT__mem__v3) {
        vlSelfRef.top_tb__DOT__DUT__DOT__mem[vlSelfRef.__VdlyDim0__top_tb__DOT__DUT__DOT__mem__v3] 
            = vlSelfRef.__VdlyVal__top_tb__DOT__DUT__DOT__mem__v3;
    }
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (vlSelfRef.top_tb__DOT__DUT__DOT__eximm 
                                                + vlSelfRef.top_tb__DOT__DUT__DOT__pc);
}

void Vtop_tb___024root___nba_comb__TOP__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_comb__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ top_tb__DOT__DUT__DOT__rs1_data;
    top_tb__DOT__DUT__DOT__rs1_data = 0;
    IData/*31:0*/ top_tb__DOT__DUT__DOT__op2;
    top_tb__DOT__DUT__DOT__op2 = 0;
    // Body
    vlSelfRef.top_tb__DOT__DUT__DOT__old_mem_byte = 
        vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file
        [(0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                         >> 0x00000014U))];
    top_tb__DOT__DUT__DOT__rs1_data = vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__reg_file
        [(0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__instruction 
                         >> 0x0000000fU))];
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

void Vtop_tb___024root___eval_nba(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_nba\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop_tb___024root___eval_phase__act(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__act\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root___eval_triggers__act(vlSelf);
    Vtop_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop_tb___024root___eval_phase__nba(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__nba\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop_tb___024root___eval_nba(vlSelf);
        Vtop_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop_tb___024root___eval(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../tb/pipe/top_tb.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../tb/pipe/top_tb.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop_tb___024root___eval_phase__act(vlSelf));
    } while (Vtop_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop_tb___024root___eval_debug_assertions(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_debug_assertions\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
}
#endif  // VL_DEBUG

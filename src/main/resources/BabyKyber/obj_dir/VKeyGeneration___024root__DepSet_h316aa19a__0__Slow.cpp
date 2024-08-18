// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VKeyGeneration.h for the primary calling header

#include "VKeyGeneration__pch.h"
#include "VKeyGeneration___024root.h"

VL_ATTR_COLD void VKeyGeneration___024root___eval_static(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___eval_static\n"); );
}

VL_ATTR_COLD void VKeyGeneration___024root___eval_initial(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void VKeyGeneration___024root___eval_final(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VKeyGeneration___024root___dump_triggers__stl(VKeyGeneration___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VKeyGeneration___024root___eval_phase__stl(VKeyGeneration___024root* vlSelf);

VL_ATTR_COLD void VKeyGeneration___024root___eval_settle(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VKeyGeneration___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/hamna/Baby-Kyber-Accelerator/KeyGeneration.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VKeyGeneration___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VKeyGeneration___024root___dump_triggers__stl(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VKeyGeneration___024root___stl_sequent__TOP__0(VKeyGeneration___024root* vlSelf);

VL_ATTR_COLD void VKeyGeneration___024root___eval_stl(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VKeyGeneration___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VKeyGeneration___024root___stl_sequent__TOP__0(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[3U] 
        = vlSelf->secretkey[0U][3U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[2U] 
        = vlSelf->secretkey[0U][2U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[1U] 
        = vlSelf->secretkey[0U][1U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[0U] 
        = vlSelf->secretkey[0U][0U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[3U] 
        = vlSelf->A[0U][3U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[2U] 
        = vlSelf->A[0U][2U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[1U] 
        = vlSelf->A[0U][1U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[0U] 
        = vlSelf->A[0U][0U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[3U] 
        = vlSelf->secretkey[1U][3U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[2U] 
        = vlSelf->secretkey[1U][2U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[1U] 
        = vlSelf->secretkey[1U][1U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[0U] 
        = vlSelf->secretkey[1U][0U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[3U] 
        = vlSelf->A[1U][3U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[2U] 
        = vlSelf->A[1U][2U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[1U] 
        = vlSelf->A[1U][1U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[0U] 
        = vlSelf->A[1U][0U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[3U] 
        = vlSelf->secretkey[0U][3U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[2U] 
        = vlSelf->secretkey[0U][2U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[1U] 
        = vlSelf->secretkey[0U][1U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[0U] 
        = vlSelf->secretkey[0U][0U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[3U] 
        = vlSelf->A[2U][3U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[2U] 
        = vlSelf->A[2U][2U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[1U] 
        = vlSelf->A[2U][1U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[0U] 
        = vlSelf->A[2U][0U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[3U] 
        = vlSelf->secretkey[1U][3U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[2U] 
        = vlSelf->secretkey[1U][2U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[1U] 
        = vlSelf->secretkey[1U][1U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[0U] 
        = vlSelf->secretkey[1U][0U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[3U] 
        = vlSelf->A[3U][3U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[2U] 
        = vlSelf->A[3U][2U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[1U] 
        = vlSelf->A[3U][1U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[0U] 
        = vlSelf->A[3U][0U];
    vlSelf->KeyGeneration__DOT__added[0U] = 0U;
    vlSelf->KeyGeneration__DOT__added1[0U] = 0U;
    vlSelf->result[0U][0U] = 0U;
    vlSelf->result[1U][0U] = 0U;
    vlSelf->KeyGeneration__DOT__added[1U] = 0U;
    vlSelf->KeyGeneration__DOT__added1[1U] = 0U;
    vlSelf->result[0U][1U] = 0U;
    vlSelf->result[1U][1U] = 0U;
    vlSelf->KeyGeneration__DOT__added[2U] = 0U;
    vlSelf->KeyGeneration__DOT__added1[2U] = 0U;
    vlSelf->result[0U][2U] = 0U;
    vlSelf->result[1U][2U] = 0U;
    vlSelf->KeyGeneration__DOT__added[3U] = 0U;
    vlSelf->KeyGeneration__DOT__added1[3U] = 0U;
    vlSelf->result[0U][3U] = 0U;
    vlSelf->result[1U][3U] = 0U;
    if (vlSelf->enable) {
        vlSelf->KeyGeneration__DOT__unnamedblk4__DOT__i = 4U;
        vlSelf->KeyGeneration__DOT__unnamedblk5__DOT__i = 4U;
        vlSelf->KeyGeneration__DOT__added[0U] = (vlSelf->KeyGeneration__DOT__poly_out0
                                                 [0U] 
                                                 + 
                                                 vlSelf->KeyGeneration__DOT__poly_out1
                                                 [0U]);
        vlSelf->KeyGeneration__DOT__added1[0U] = (vlSelf->KeyGeneration__DOT__poly_out2
                                                  [0U] 
                                                  + 
                                                  vlSelf->KeyGeneration__DOT__poly_out3
                                                  [0U]);
        vlSelf->KeyGeneration__DOT__added[0U] = (VL_GTS_III(32, 0U, 
                                                            vlSelf->KeyGeneration__DOT__added
                                                            [0U])
                                                  ? 
                                                 vlSelf->KeyGeneration__DOT__added
                                                 [0U]
                                                  : 
                                                 VL_MODDIVS_III(32, 
                                                                vlSelf->KeyGeneration__DOT__added
                                                                [0U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added1[0U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration__DOT__added1
                                                             [0U])
                                                   ? 
                                                  vlSelf->KeyGeneration__DOT__added1
                                                  [0U]
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__added1
                                                                 [0U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added[1U] = (vlSelf->KeyGeneration__DOT__poly_out0
                                                 [1U] 
                                                 + 
                                                 vlSelf->KeyGeneration__DOT__poly_out1
                                                 [1U]);
        vlSelf->KeyGeneration__DOT__added1[1U] = (vlSelf->KeyGeneration__DOT__poly_out2
                                                  [1U] 
                                                  + 
                                                  vlSelf->KeyGeneration__DOT__poly_out3
                                                  [1U]);
        vlSelf->KeyGeneration__DOT__added[1U] = (VL_GTS_III(32, 0U, 
                                                            vlSelf->KeyGeneration__DOT__added
                                                            [1U])
                                                  ? 
                                                 vlSelf->KeyGeneration__DOT__added
                                                 [1U]
                                                  : 
                                                 VL_MODDIVS_III(32, 
                                                                vlSelf->KeyGeneration__DOT__added
                                                                [1U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added1[1U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration__DOT__added1
                                                             [1U])
                                                   ? 
                                                  vlSelf->KeyGeneration__DOT__added1
                                                  [1U]
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__added1
                                                                 [1U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added[2U] = (vlSelf->KeyGeneration__DOT__poly_out0
                                                 [2U] 
                                                 + 
                                                 vlSelf->KeyGeneration__DOT__poly_out1
                                                 [2U]);
        vlSelf->KeyGeneration__DOT__added1[2U] = (vlSelf->KeyGeneration__DOT__poly_out2
                                                  [2U] 
                                                  + 
                                                  vlSelf->KeyGeneration__DOT__poly_out3
                                                  [2U]);
        vlSelf->KeyGeneration__DOT__added[2U] = (VL_GTS_III(32, 0U, 
                                                            vlSelf->KeyGeneration__DOT__added
                                                            [2U])
                                                  ? 
                                                 vlSelf->KeyGeneration__DOT__added
                                                 [2U]
                                                  : 
                                                 VL_MODDIVS_III(32, 
                                                                vlSelf->KeyGeneration__DOT__added
                                                                [2U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added1[2U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration__DOT__added1
                                                             [2U])
                                                   ? 
                                                  vlSelf->KeyGeneration__DOT__added1
                                                  [2U]
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__added1
                                                                 [2U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added[3U] = (vlSelf->KeyGeneration__DOT__poly_out0
                                                 [3U] 
                                                 + 
                                                 vlSelf->KeyGeneration__DOT__poly_out1
                                                 [3U]);
        vlSelf->KeyGeneration__DOT__added1[3U] = (vlSelf->KeyGeneration__DOT__poly_out2
                                                  [3U] 
                                                  + 
                                                  vlSelf->KeyGeneration__DOT__poly_out3
                                                  [3U]);
        vlSelf->KeyGeneration__DOT__added[3U] = (VL_GTS_III(32, 0U, 
                                                            vlSelf->KeyGeneration__DOT__added
                                                            [3U])
                                                  ? 
                                                 vlSelf->KeyGeneration__DOT__added
                                                 [3U]
                                                  : 
                                                 VL_MODDIVS_III(32, 
                                                                vlSelf->KeyGeneration__DOT__added
                                                                [3U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added1[3U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration__DOT__added1
                                                             [3U])
                                                   ? 
                                                  vlSelf->KeyGeneration__DOT__added1
                                                  [3U]
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__added1
                                                                 [3U], (IData)(0x11U)));
        vlSelf->result[0U][0U] = (vlSelf->KeyGeneration__DOT__added
                                  [0U] + vlSelf->e[0U]
                                  [0U]);
        vlSelf->result[1U][0U] = (vlSelf->KeyGeneration__DOT__added1
                                  [0U] + vlSelf->e[1U]
                                  [0U]);
        vlSelf->result[0U][0U] = (VL_GTS_III(32, 0U, 
                                             vlSelf->result
                                             [0U][0U])
                                   ? vlSelf->result
                                  [0U][0U] : VL_MODDIVS_III(32, 
                                                            vlSelf->result
                                                            [0U]
                                                            [0U], (IData)(0x11U)));
        vlSelf->result[1U][0U] = (VL_GTS_III(32, 0U, 
                                             vlSelf->result
                                             [1U][0U])
                                   ? vlSelf->result
                                  [1U][0U] : VL_MODDIVS_III(32, 
                                                            vlSelf->result
                                                            [1U]
                                                            [0U], (IData)(0x11U)));
        vlSelf->result[0U][1U] = (vlSelf->KeyGeneration__DOT__added
                                  [1U] + vlSelf->e[0U]
                                  [1U]);
        vlSelf->result[1U][1U] = (vlSelf->KeyGeneration__DOT__added1
                                  [1U] + vlSelf->e[1U]
                                  [1U]);
        vlSelf->result[0U][1U] = (VL_GTS_III(32, 0U, 
                                             vlSelf->result
                                             [0U][1U])
                                   ? vlSelf->result
                                  [0U][1U] : VL_MODDIVS_III(32, 
                                                            vlSelf->result
                                                            [0U]
                                                            [1U], (IData)(0x11U)));
        vlSelf->result[1U][1U] = (VL_GTS_III(32, 0U, 
                                             vlSelf->result
                                             [1U][1U])
                                   ? vlSelf->result
                                  [1U][1U] : VL_MODDIVS_III(32, 
                                                            vlSelf->result
                                                            [1U]
                                                            [1U], (IData)(0x11U)));
        vlSelf->result[0U][2U] = (vlSelf->KeyGeneration__DOT__added
                                  [2U] + vlSelf->e[0U]
                                  [2U]);
        vlSelf->result[1U][2U] = (vlSelf->KeyGeneration__DOT__added1
                                  [2U] + vlSelf->e[1U]
                                  [2U]);
        vlSelf->result[0U][2U] = (VL_GTS_III(32, 0U, 
                                             vlSelf->result
                                             [0U][2U])
                                   ? vlSelf->result
                                  [0U][2U] : VL_MODDIVS_III(32, 
                                                            vlSelf->result
                                                            [0U]
                                                            [2U], (IData)(0x11U)));
        vlSelf->result[1U][2U] = (VL_GTS_III(32, 0U, 
                                             vlSelf->result
                                             [1U][2U])
                                   ? vlSelf->result
                                  [1U][2U] : VL_MODDIVS_III(32, 
                                                            vlSelf->result
                                                            [1U]
                                                            [2U], (IData)(0x11U)));
        vlSelf->result[0U][3U] = (vlSelf->KeyGeneration__DOT__added
                                  [3U] + vlSelf->e[0U]
                                  [3U]);
        vlSelf->result[1U][3U] = (vlSelf->KeyGeneration__DOT__added1
                                  [3U] + vlSelf->e[1U]
                                  [3U]);
        vlSelf->result[0U][3U] = (VL_GTS_III(32, 0U, 
                                             vlSelf->result
                                             [0U][3U])
                                   ? vlSelf->result
                                  [0U][3U] : VL_MODDIVS_III(32, 
                                                            vlSelf->result
                                                            [0U]
                                                            [3U], (IData)(0x11U)));
        vlSelf->result[1U][3U] = (VL_GTS_III(32, 0U, 
                                             vlSelf->result
                                             [1U][3U])
                                   ? vlSelf->result
                                  [1U][3U] : VL_MODDIVS_III(32, 
                                                            vlSelf->result
                                                            [1U]
                                                            [3U], (IData)(0x11U)));
    }
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[0U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[1U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[2U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[3U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[0U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[1U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[2U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[3U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[0U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[1U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[2U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[3U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[0U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[1U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[2U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[3U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                             [3U], (IData)(0x11U)));
}

VL_ATTR_COLD void VKeyGeneration___024root___eval_triggers__stl(VKeyGeneration___024root* vlSelf);

VL_ATTR_COLD bool VKeyGeneration___024root___eval_phase__stl(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VKeyGeneration___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VKeyGeneration___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VKeyGeneration___024root___dump_triggers__ico(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VKeyGeneration___024root___dump_triggers__act(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VKeyGeneration___024root___dump_triggers__nba(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VKeyGeneration___024root___ctor_var_reset(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___ctor_var_reset\n"); );
    // Body
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->A[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->e[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->secret_key[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->secretkey[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->result[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
                vlSelf->combined_output[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT__poly_out0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT__poly_out1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT__poly_out2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT__poly_out3[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT__added[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT__added1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->KeyGeneration__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->KeyGeneration__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->KeyGeneration__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->KeyGeneration__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->KeyGeneration__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->KeyGeneration__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0;
    vlSelf->KeyGeneration__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->KeyGeneration__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0;
    vlSelf->KeyGeneration__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->KeyGeneration__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j = 0;
    vlSelf->KeyGeneration__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__k = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

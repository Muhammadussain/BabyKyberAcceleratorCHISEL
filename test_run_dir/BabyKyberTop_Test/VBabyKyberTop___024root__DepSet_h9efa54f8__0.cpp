// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBabyKyberTop.h for the primary calling header

#include "VBabyKyberTop__pch.h"
#include "VBabyKyberTop___024root.h"

void VBabyKyberTop___024root___ico_sequent__TOP__0(VBabyKyberTop___024root* vlSelf);

void VBabyKyberTop___024root___eval_ico(VBabyKyberTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBabyKyberTop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VBabyKyberTop___024root___ico_sequent__TOP__0(VBabyKyberTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->BabyKyberTop__DOT__bkyber_wen_Req = ((IData)(vlSelf->io_req_bits_isWrite) 
                                                 & (IData)(vlSelf->io_req_valid));
}

void VBabyKyberTop___024root___eval_triggers__ico(VBabyKyberTop___024root* vlSelf);

bool VBabyKyberTop___024root___eval_phase__ico(VBabyKyberTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VBabyKyberTop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VBabyKyberTop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VBabyKyberTop___024root___eval_act(VBabyKyberTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___eval_act\n"); );
}

void VBabyKyberTop___024root___nba_sequent__TOP__0(VBabyKyberTop___024root* vlSelf);
void VBabyKyberTop___024root___nba_sequent__TOP__1(VBabyKyberTop___024root* vlSelf);
void VBabyKyberTop___024root___nba_sequent__TOP__2(VBabyKyberTop___024root* vlSelf);

void VBabyKyberTop___024root___eval_nba(VBabyKyberTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VBabyKyberTop___024root___nba_sequent__TOP__0(vlSelf);
        VBabyKyberTop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VBabyKyberTop___024root___nba_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void VBabyKyberTop___024root___nba_sequent__TOP__0(VBabyKyberTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v4;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v4 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v5;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v5 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v6;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v6 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v7;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v7 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v8;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v8 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v9;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v9 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v10;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v10 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v11;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v11 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e2__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e2__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e2__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e2__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e2__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e2__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e2__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e2__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v4;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v4 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v5;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v5 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v6;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v6 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v7;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v7 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v4;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v4 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v5;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v5 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v6;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v6 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v7;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v7 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v8;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v8 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v9;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v9 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v10;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v10 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v11;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v11 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v12;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v12 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v13;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v13 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v14;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v14 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v15;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v15 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v4;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v4 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v5;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v5 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v6;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v6 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v7;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v7 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v8;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v8 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v9;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v9 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v10;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v10 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v11;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v11 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v12;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v12 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v13;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v13 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v14;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v14 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v15;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v15 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v4;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v4 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v5;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v5 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v6;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v6 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v7;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v7 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v4;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v4 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v5;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v5 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v6;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v6 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v7;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v7 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v4;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v4 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v5;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v5 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v6;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v6 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v7;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v7 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v16;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v16 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v17;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v17 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v18;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v18 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v19;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v19 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v20;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v20 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v21;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v21 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v22;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v22 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v23;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v23 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v3 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v1;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v1 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v2;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v2 = 0;
    IData/*31:0*/ __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v3;
    __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v3 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e2__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e2__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e2__v4;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e2__v4 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e1__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e1__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e1__v8;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e1__v8 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__A_reg__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__A_reg__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__A_reg__v16;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__A_reg__v16 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__s_reg__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__s_reg__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__s_reg__v16;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__s_reg__v16 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e_reg__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e_reg__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e_reg__v8;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e_reg__v8 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__r__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__r__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__r__v8;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__r__v8 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v8;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v8 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__result__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__result__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v16;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v16 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v24;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v24 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v4;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v4 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v4;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v4 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v4;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v4 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v4;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v4 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v4;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v4 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v4;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v4 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v4;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v4 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v4;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v4 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v4;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v4 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v4;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v4 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v4;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v4 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0 = 0;
    CData/*0:0*/ __VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v4;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v4 = 0;
    // Body
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__result__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v4 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v4 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v4 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v4 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v4 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v4 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v4 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v4 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v4 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v4 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v4 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v4 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v16 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v24 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v8 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e2__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e2__v4 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e_reg__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e_reg__v8 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__s_reg__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__s_reg__v16 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e1__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e1__v8 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__r__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__r__v8 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__A_reg__v0 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__A_reg__v16 = 0U;
    vlSelf->__VdlySet__BabyKyberTop__DOT__bkyber__DOT__public_key__v56 = 0U;
    vlSelf->__VdlySet__BabyKyberTop__DOT__bkyber__DOT__public_key__v80 = 0U;
    __VdlySet__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v0 = 0U;
    vlSelf->__VdlySet__BabyKyberTop__DOT__bkyber__DOT__public_key__v0 = 0U;
    vlSelf->__VdlySet__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v12 = 0U;
    vlSelf->__VdlySet__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v13 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__result__v0 = 1U;
    }
    if (vlSelf->reset) {
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
            [0U];
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0 = 1U;
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v1 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
            [1U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v2 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
            [2U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v3 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
            [3U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
            [0U];
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0 = 1U;
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v1 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
            [1U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v2 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
            [2U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v3 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
            [3U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
            [0U];
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0 = 1U;
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v1 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
            [1U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v2 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
            [2U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v3 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
            [3U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
            [0U];
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0 = 1U;
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v1 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
            [1U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v2 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
            [2U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v3 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
            [3U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
            [0U];
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0 = 1U;
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v1 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
            [1U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v2 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
            [2U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v3 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
            [3U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
            [0U];
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0 = 1U;
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v1 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
            [1U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v2 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
            [2U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v3 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
            [3U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
            [0U];
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0 = 1U;
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v1 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
            [1U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v2 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
            [2U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v3 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
            [3U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
            [0U];
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0 = 1U;
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v1 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
            [1U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v2 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
            [2U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v3 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
            [3U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
            [0U];
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0 = 1U;
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v1 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
            [1U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v2 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
            [2U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v3 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
            [3U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
            [0U];
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0 = 1U;
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v1 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
            [1U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v2 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
            [2U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v3 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
            [3U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
            [0U];
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0 = 1U;
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v1 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
            [1U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v2 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
            [2U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v3 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
            [3U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
            [0U];
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0 = 1U;
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v1 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
            [1U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v2 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
            [2U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v3 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
            [3U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v16 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
            [0U][0U];
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v16 = 1U;
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v17 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
            [0U][1U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v18 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
            [0U][2U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v19 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
            [0U][3U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v20 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
            [1U][0U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v21 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
            [1U][1U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v22 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
            [1U][2U];
        __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v23 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
            [1U][3U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v56 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
            [0U][0U];
        vlSelf->__VdlySet__BabyKyberTop__DOT__bkyber__DOT__public_key__v56 = 1U;
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v57 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
            [0U][1U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v58 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
            [0U][2U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v59 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
            [0U][3U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v60 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
            [1U][0U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v61 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
            [1U][1U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v62 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
            [1U][2U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v63 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
            [1U][3U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v64 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
            [2U][0U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v65 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
            [2U][1U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v66 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
            [2U][2U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v67 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
            [2U][3U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v68 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
            [3U][0U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v69 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
            [3U][1U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v70 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
            [3U][2U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v71 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
            [3U][3U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v72 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
            [0U][0U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v73 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
            [0U][1U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v74 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
            [0U][2U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v75 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
            [0U][3U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v76 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
            [1U][0U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v77 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
            [1U][1U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v78 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
            [1U][2U];
        vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v79 
            = vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
            [1U][3U];
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients 
            = (0xfU & vlSelf->BabyKyberTop__DOT__bkyber__DOT__message);
        if (vlSelf->BabyKyberTop__DOT__bkyber_wen_Req) {
            if ((0x40007000U != vlSelf->io_req_bits_addrRequest)) {
                if ((0x40007004U != vlSelf->io_req_bits_addrRequest)) {
                    if ((0x40007008U != vlSelf->io_req_bits_addrRequest)) {
                        if ((0x40007012U != vlSelf->io_req_bits_addrRequest)) {
                            if ((0x40007016U != vlSelf->io_req_bits_addrRequest)) {
                                if ((0x40007020U != vlSelf->io_req_bits_addrRequest)) {
                                    if ((0x40007024U 
                                         != vlSelf->io_req_bits_addrRequest)) {
                                        if ((0x40007028U 
                                             != vlSelf->io_req_bits_addrRequest)) {
                                            if ((0x40007032U 
                                                 != vlSelf->io_req_bits_addrRequest)) {
                                                if (
                                                    (0x40007036U 
                                                     != vlSelf->io_req_bits_addrRequest)) {
                                                    if (
                                                        (0x40007040U 
                                                         != vlSelf->io_req_bits_addrRequest)) {
                                                        if (
                                                            (0x40007044U 
                                                             != vlSelf->io_req_bits_addrRequest)) {
                                                            if (
                                                                (0x40007048U 
                                                                 != vlSelf->io_req_bits_addrRequest)) {
                                                                if (
                                                                    (0x40007052U 
                                                                     != vlSelf->io_req_bits_addrRequest)) {
                                                                    if (
                                                                        (0x40007056U 
                                                                         != vlSelf->io_req_bits_addrRequest)) {
                                                                        if (
                                                                            (0x40007060U 
                                                                             != vlSelf->io_req_bits_addrRequest)) {
                                                                            if (
                                                                                (0x40007064U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007068U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007072U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007076U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007080U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007084U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007088U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007092U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007096U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007100U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007104U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007108U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007112U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007116U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007120U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007124U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007128U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007132U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007136U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007140U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007144U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007148U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007152U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007156U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007160U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007164U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007168U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007172U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007176U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007180U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007184U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007188U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007192U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007196U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007200U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007204U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007208U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007212U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007216U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007220U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007224U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007228U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007232U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007236U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007240U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007244U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007248U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007252U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007256U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007260U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007264U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007268U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007272U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007276U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007280U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007284U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007288U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007292U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007296U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007300U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007304U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007308U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007312U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007316U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007320U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007324U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007328U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007332U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007336U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007340U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007344U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007348U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007352U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007356U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007360U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007364U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v0 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
                                                                                [1U]
                                                                                [3U];
                                                                                __VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v0 = 1U;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v1 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
                                                                                [1U]
                                                                                [2U];
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v2 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
                                                                                [1U]
                                                                                [1U];
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v3 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
                                                                                [1U]
                                                                                [0U];
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v4 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
                                                                                [0U]
                                                                                [3U];
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v5 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
                                                                                [0U]
                                                                                [2U];
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v6 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
                                                                                [0U]
                                                                                [1U];
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v7 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
                                                                                [0U]
                                                                                [0U];
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007360U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e2__v0 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_0;
                                                                                __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e2__v0 = 1U;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e2__v1 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_1;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e2__v2 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_2;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e2__v3 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_3;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v0 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_00;
                                                                                __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e1__v0 = 1U;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v1 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_01;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v2 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_02;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v3 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_03;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v4 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_10;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v5 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_11;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v6 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_12;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v7 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_13;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v0 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_00;
                                                                                __VdlySet__BabyKyberTop__DOT__bkyber__DOT__r__v0 = 1U;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v1 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_01;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v2 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_02;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v3 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_03;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v4 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_10;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v5 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_11;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v6 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_12;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v7 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_13;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v0 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key000;
                                                                                vlSelf->__VdlySet__BabyKyberTop__DOT__bkyber__DOT__public_key__v0 = 1U;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v1 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key001;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v2 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key002;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v3 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key003;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v4 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key010;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v5 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key011;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v6 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key012;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v7 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key013;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v8 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key020;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v9 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key021;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v10 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key022;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v11 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key023;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v12 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key030;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v13 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key031;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v14 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key032;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v15 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key033;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v16 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key100;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v17 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key101;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v18 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key102;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v19 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key103;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v20 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key110;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v21 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key111;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v22 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key112;
                                                                                vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v23 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key113;
                                                                                } else if (
                                                                                (0x40007364U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v0 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext000;
                                                                                __VdlySet__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v0 = 1U;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v1 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext001;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v2 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext002;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v3 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext003;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v4 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext010;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v5 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext011;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v6 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext012;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v7 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext013;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v8 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext100;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v9 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext101;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v10 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext102;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v11 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext103;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007356U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v0 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_00;
                                                                                __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e_reg__v0 = 1U;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v1 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_01;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v2 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_02;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v3 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_03;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v4 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_10;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v5 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_11;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v6 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_12;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v7 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_13;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v0 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_00;
                                                                                __VdlySet__BabyKyberTop__DOT__bkyber__DOT__s_reg__v0 = 1U;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v1 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_01;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v2 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_02;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v3 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_03;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v4 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_10;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v5 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_11;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v6 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_12;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v7 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_13;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v8 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
                                                                                [1U]
                                                                                [3U];
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v9 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
                                                                                [1U]
                                                                                [2U];
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v10 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
                                                                                [1U]
                                                                                [1U];
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v11 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
                                                                                [1U]
                                                                                [0U];
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v12 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
                                                                                [0U]
                                                                                [3U];
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v13 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
                                                                                [0U]
                                                                                [2U];
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v14 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
                                                                                [0U]
                                                                                [1U];
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v15 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
                                                                                [0U]
                                                                                [0U];
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v0 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t000;
                                                                                __VdlySet__BabyKyberTop__DOT__bkyber__DOT__A_reg__v0 = 1U;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v1 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t001;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v2 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t002;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v3 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t003;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v4 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t010;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v5 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t011;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v6 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t012;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v7 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t013;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v8 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t020;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v9 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t021;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v10 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t022;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v11 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t023;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v12 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t030;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v13 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t031;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v14 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t032;
                                                                                __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v15 
                                                                                = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t033;
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007308U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext000 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007312U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext001 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007316U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext002 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007320U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext003 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007324U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext010 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007328U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext011 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007332U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext012 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007336U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext013 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007340U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext100 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007344U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext101 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007348U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext102 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007352U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext103 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007356U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007360U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext000 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                                                                                [0U]
                                                                                [0U]
                                                                                [0U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext001 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                                                                                [0U]
                                                                                [0U]
                                                                                [1U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext002 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                                                                                [0U]
                                                                                [0U]
                                                                                [2U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext003 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                                                                                [0U]
                                                                                [0U]
                                                                                [3U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext010 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                                                                                [0U]
                                                                                [1U]
                                                                                [0U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext011 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                                                                                [0U]
                                                                                [1U]
                                                                                [1U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext012 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                                                                                [0U]
                                                                                [1U]
                                                                                [2U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext013 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                                                                                [0U]
                                                                                [1U]
                                                                                [3U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext100 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                                                                                [1U]
                                                                                [0U]
                                                                                [0U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext101 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                                                                                [1U]
                                                                                [0U]
                                                                                [1U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext102 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                                                                                [1U]
                                                                                [0U]
                                                                                [2U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext103 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                                                                                [1U]
                                                                                [0U]
                                                                                [3U];
                                                                                }
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007304U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_3 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007300U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_2 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007296U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_1 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007292U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_0 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007288U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_13 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007284U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_12 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007280U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_11 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007276U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_10 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007272U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_03 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007268U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_02 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007264U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_01 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007260U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_00 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007256U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_13 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007252U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_12 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007248U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_11 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007244U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_10 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007240U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_03 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007236U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_02 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007232U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_01 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007228U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_00 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007132U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key000 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007136U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key001 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007140U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key002 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007144U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key003 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007148U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key010 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007152U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key011 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007156U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key012 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007160U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key013 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007164U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key020 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007168U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key021 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007172U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key022 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007176U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key023 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007180U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key030 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007184U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key031 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007188U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key032 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007192U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key033 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007196U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key100 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007200U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key101 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007204U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key102 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007208U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key103 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007212U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key110 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007216U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key111 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007220U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key112 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007224U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key113 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007228U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007232U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007236U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007240U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007244U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007248U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007252U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007256U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007260U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007264U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007268U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007272U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007276U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007280U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007284U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007288U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007292U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007296U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007300U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007304U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007308U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007312U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007316U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007320U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007324U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007328U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007332U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007336U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007340U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007344U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007348U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007352U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007356U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key000 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [0U]
                                                                                [0U]
                                                                                [0U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key001 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [0U]
                                                                                [0U]
                                                                                [1U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key002 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [0U]
                                                                                [0U]
                                                                                [2U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key003 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [0U]
                                                                                [0U]
                                                                                [3U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key010 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [0U]
                                                                                [1U]
                                                                                [0U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key011 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [0U]
                                                                                [1U]
                                                                                [1U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key012 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [0U]
                                                                                [1U]
                                                                                [2U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key013 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [0U]
                                                                                [1U]
                                                                                [3U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key020 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [0U]
                                                                                [2U]
                                                                                [0U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key021 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [0U]
                                                                                [2U]
                                                                                [1U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key022 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [0U]
                                                                                [2U]
                                                                                [2U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key023 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [0U]
                                                                                [2U]
                                                                                [3U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key030 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [0U]
                                                                                [3U]
                                                                                [0U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key031 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [0U]
                                                                                [3U]
                                                                                [1U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key032 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [0U]
                                                                                [3U]
                                                                                [2U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key033 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [0U]
                                                                                [3U]
                                                                                [3U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key100 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [1U]
                                                                                [0U]
                                                                                [0U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key101 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [1U]
                                                                                [0U]
                                                                                [1U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key102 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [1U]
                                                                                [0U]
                                                                                [2U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key103 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [1U]
                                                                                [0U]
                                                                                [3U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key110 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [1U]
                                                                                [1U]
                                                                                [0U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key111 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [1U]
                                                                                [1U]
                                                                                [1U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key112 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [1U]
                                                                                [1U]
                                                                                [2U];
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key113 
                                                                                = 
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                                                                                [1U]
                                                                                [1U]
                                                                                [3U];
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007128U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__message 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007132U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007136U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007140U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007144U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007148U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007152U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007156U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007160U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007164U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007168U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007172U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007176U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007180U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007184U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007188U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007192U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007196U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007200U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007204U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007208U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007212U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007216U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007220U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007224U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007228U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007232U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007236U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007240U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007244U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007248U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007252U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007256U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007260U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007264U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007268U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007272U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007276U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007280U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007284U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007288U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007292U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007296U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007300U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007304U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007308U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007312U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007316U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007320U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007324U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007328U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007332U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007336U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007340U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007344U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007348U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007352U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007356U 
                                                                                != vlSelf->io_req_bits_addrRequest)) {
                                                                                if (
                                                                                (0x40007360U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__message 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                } else if (
                                                                                (0x40007364U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__message 
                                                                                = 
                                                                                VL_EXTENDS_II(32,4, (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decimal_value));
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007124U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_13 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007120U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_12 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007116U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_11 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007112U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_10 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007108U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_03 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007104U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_02 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007100U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_01 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007096U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_00 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007092U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_13 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007088U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_12 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007084U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_11 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007080U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_10 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007076U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_03 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007072U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_02 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40007068U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_01 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                                }
                                                                            }
                                                                            if (
                                                                                (0x40007064U 
                                                                                == vlSelf->io_req_bits_addrRequest)) {
                                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_00 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                            }
                                                                        }
                                                                        if (
                                                                            (0x40007060U 
                                                                             == vlSelf->io_req_bits_addrRequest)) {
                                                                            vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t033 
                                                                                = vlSelf->io_req_bits_dataRequest;
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x40007056U 
                                                                         == vlSelf->io_req_bits_addrRequest)) {
                                                                        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t032 
                                                                            = vlSelf->io_req_bits_dataRequest;
                                                                    }
                                                                }
                                                                if (
                                                                    (0x40007052U 
                                                                     == vlSelf->io_req_bits_addrRequest)) {
                                                                    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t031 
                                                                        = vlSelf->io_req_bits_dataRequest;
                                                                }
                                                            }
                                                            if (
                                                                (0x40007048U 
                                                                 == vlSelf->io_req_bits_addrRequest)) {
                                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t030 
                                                                    = vlSelf->io_req_bits_dataRequest;
                                                            }
                                                        }
                                                        if (
                                                            (0x40007044U 
                                                             == vlSelf->io_req_bits_addrRequest)) {
                                                            vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t023 
                                                                = vlSelf->io_req_bits_dataRequest;
                                                        }
                                                    }
                                                    if (
                                                        (0x40007040U 
                                                         == vlSelf->io_req_bits_addrRequest)) {
                                                        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t022 
                                                            = vlSelf->io_req_bits_dataRequest;
                                                    }
                                                }
                                                if (
                                                    (0x40007036U 
                                                     == vlSelf->io_req_bits_addrRequest)) {
                                                    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t021 
                                                        = vlSelf->io_req_bits_dataRequest;
                                                }
                                            }
                                            if ((0x40007032U 
                                                 == vlSelf->io_req_bits_addrRequest)) {
                                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t020 
                                                    = vlSelf->io_req_bits_dataRequest;
                                            }
                                        }
                                        if ((0x40007028U 
                                             == vlSelf->io_req_bits_addrRequest)) {
                                            vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t013 
                                                = vlSelf->io_req_bits_dataRequest;
                                        }
                                    }
                                    if ((0x40007024U 
                                         == vlSelf->io_req_bits_addrRequest)) {
                                        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t012 
                                            = vlSelf->io_req_bits_dataRequest;
                                    }
                                }
                                if ((0x40007020U == vlSelf->io_req_bits_addrRequest)) {
                                    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t011 
                                        = vlSelf->io_req_bits_dataRequest;
                                }
                            }
                            if ((0x40007016U == vlSelf->io_req_bits_addrRequest)) {
                                vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t010 
                                    = vlSelf->io_req_bits_dataRequest;
                            }
                        }
                        if ((0x40007012U == vlSelf->io_req_bits_addrRequest)) {
                            vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t003 
                                = vlSelf->io_req_bits_dataRequest;
                        }
                    }
                    if ((0x40007008U == vlSelf->io_req_bits_addrRequest)) {
                        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t002 
                            = vlSelf->io_req_bits_dataRequest;
                    }
                }
                if ((0x40007004U == vlSelf->io_req_bits_addrRequest)) {
                    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t001 
                        = vlSelf->io_req_bits_dataRequest;
                }
            }
            vlSelf->BabyKyberTop__DOT__bkyber_data_Resp = 1U;
            if ((0x40007000U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t000 
                    = vlSelf->io_req_bits_dataRequest;
            }
        } else if ((1U & (~ (IData)(vlSelf->BabyKyberTop__DOT__bkyber_wen_Req)))) {
            if ((0x40007000U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key000;
            } else if ((0x40007004U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key001;
            } else if ((0x40007008U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key002;
            } else if ((0x40007012U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key003;
            } else if ((0x40007016U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key010;
            } else if ((0x40007020U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key011;
            } else if ((0x40007024U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key012;
            } else if ((0x40007028U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key013;
            } else if ((0x40007032U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key020;
            } else if ((0x40007036U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key021;
            } else if ((0x40007040U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key022;
            } else if ((0x40007044U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key023;
            } else if ((0x40007048U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key030;
            } else if ((0x40007052U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key031;
            } else if ((0x40007056U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key032;
            } else if ((0x40007060U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key033;
            } else if ((0x40007064U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key100;
            } else if ((0x40007068U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key101;
            } else if ((0x40007072U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key102;
            } else if ((0x40007076U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key103;
            } else if ((0x40007080U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key110;
            } else if ((0x40007084U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key111;
            } else if ((0x40007088U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key112;
            } else if ((0x40007092U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key113;
            } else if ((0x40007096U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext000;
            } else if ((0x40007100U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext001;
            } else if ((0x40007104U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext002;
            } else if ((0x40007108U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext003;
            } else if ((0x40007112U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext010;
            } else if ((0x40007116U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext011;
            } else if ((0x40007120U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext012;
            } else if ((0x40007124U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext013;
            } else if ((0x40007128U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext100;
            } else if ((0x40007132U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext101;
            } else if ((0x40007136U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext102;
            } else if ((0x40007140U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext103;
            } else if ((0x40007144U == vlSelf->io_req_bits_addrRequest)) {
                vlSelf->BabyKyberTop__DOT__bkyber_data_Resp 
                    = vlSelf->BabyKyberTop__DOT__bkyber__DOT__message;
            }
        }
    } else {
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v4 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v4 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v4 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v4 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v4 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v4 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v4 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v4 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v4 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v4 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v4 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v4 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v24 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v8 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e2__v4 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e_reg__v8 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__s_reg__v16 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__e1__v8 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__r__v8 = 1U;
        __VdlySet__BabyKyberTop__DOT__bkyber__DOT__A_reg__v16 = 1U;
        vlSelf->__VdlySet__BabyKyberTop__DOT__bkyber__DOT__public_key__v80 = 1U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients = 0U;
        vlSelf->__VdlySet__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v12 = 1U;
        vlSelf->BabyKyberTop__DOT__bkyber_data_Resp = 0U;
        vlSelf->__VdlySet__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v13 = 1U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_0 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_1 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_2 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_3 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_00 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_01 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_02 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_03 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_10 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_11 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_12 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_13 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_00 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_01 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_02 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_03 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_10 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_11 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_12 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_13 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_00 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_01 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_02 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_03 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_10 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_11 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_12 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_13 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_00 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_01 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_02 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_03 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_10 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_11 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_12 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_13 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t000 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t001 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t002 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t003 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t010 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t011 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t012 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t013 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t020 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t021 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t022 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t023 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t030 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t031 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t032 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t033 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext000 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext001 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext002 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext003 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext010 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext011 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext012 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext013 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext100 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext101 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext102 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext103 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key000 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key001 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key002 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key003 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key010 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key011 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key012 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key013 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key020 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key021 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key022 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key023 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key030 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key031 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key032 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key033 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key100 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key101 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key102 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key103 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key110 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key111 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key112 = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key113 = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1[0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1[1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1[2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1[3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v3;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1__v4) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1[0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1[1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1[2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1[3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0[0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0[1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0[2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0[3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v3;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0__v4) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0[0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0[1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0[2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0[3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3[0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3[1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3[2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3[3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v3;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3__v4) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3[0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3[1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3[2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3[3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2[0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2[1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2[2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2[3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v3;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2__v4) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2[0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2[1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2[2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2[3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1[0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1[1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1[2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1[3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v3;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1__v4) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1[0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1[1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1[2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1[3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0[0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0[1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0[2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0[3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v3;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0__v4) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0[0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0[1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0[2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0[3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5[0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5[1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5[2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5[3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v3;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5__v4) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5[0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5[1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5[2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5[3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4[0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4[1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4[2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4[3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v3;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4__v4) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4[0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4[1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4[2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4[3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3[0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3[1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3[2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3[3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v3;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3__v4) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3[0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3[1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3[2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3[3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2[0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2[1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2[2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2[3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v3;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2__v4) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2[0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2[1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2[2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2[3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1[0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1[1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1[2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1[3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v3;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1__v4) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1[0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1[1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1[2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1[3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0[0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0[1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0[2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0[3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v3;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0__v4) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0[0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0[1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0[2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0[3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__e2__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2[0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e2__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2[1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e2__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2[2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e2__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2[3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e2__v3;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__e2__v4) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2[0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2[1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2[2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2[3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__e_reg__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg[0U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg[0U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg[0U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg[0U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v3;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg[1U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v4;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg[1U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v5;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg[1U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v6;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg[1U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e_reg__v7;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__e_reg__v8) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg[0U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg[0U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg[0U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg[0U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg[1U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg[1U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg[1U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg[1U][3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__s_reg__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[0U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[0U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[0U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[0U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v3;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[1U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v4;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[1U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v5;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[1U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v6;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[1U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v7;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[1U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v8;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[1U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v9;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[1U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v10;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[1U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v11;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[0U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v12;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[0U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v13;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[0U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v14;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[0U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__s_reg__v15;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__s_reg__v16) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[0U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[0U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[0U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[0U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[1U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[1U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[1U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[1U][3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v3;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v4;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v5;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v6;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v7;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v8) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v16) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v16;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v17;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v18;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v19;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v20;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v21;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v22;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__secretkey__v23;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__secretkey__v24) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__e1__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1[0U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1[0U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1[0U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1[0U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v3;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1[1U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v4;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1[1U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v5;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1[1U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v6;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1[1U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__e1__v7;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__e1__v8) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1[0U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1[0U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1[0U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1[0U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1[1U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1[1U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1[1U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1[1U][3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__r__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r[0U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r[0U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r[0U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r[0U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v3;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r[1U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v4;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r[1U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v5;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r[1U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v6;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r[1U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__r__v7;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__r__v8) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r[0U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r[0U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r[0U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r[0U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r[1U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r[1U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r[1U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__r[1U][3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__result__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[0U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[0U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[0U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[0U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[1U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[1U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[1U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[1U][3U] = 0U;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__A_reg__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[0U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[0U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[0U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[0U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v3;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[1U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v4;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[1U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v5;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[1U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v6;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[1U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v7;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[2U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v8;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[2U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v9;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[2U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v10;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[2U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v11;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[3U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v12;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[3U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v13;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[3U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v14;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[3U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__A_reg__v15;
    }
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__A_reg__v16) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[0U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[0U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[0U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[0U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[1U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[1U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[1U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[1U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[2U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[2U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[2U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[2U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[3U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[3U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[3U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[3U][3U] = 0U;
    }
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4
           [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5
           [0U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
                      [0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
           [0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
                                 [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4
           [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5
           [1U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
                      [1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
           [1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
                                 [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4
           [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5
           [2U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
                      [2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
           [2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
                                 [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4
           [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5
           [3U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
                      [3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
           [3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
                                 [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[0U][0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[1U][0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[0U][1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[1U][1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[0U][2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[1U][2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[0U][3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[1U][3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0
           [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1
           [0U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2
           [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3
           [0U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
                      [0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
           [0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
                                 [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
                      [0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
           [0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
                                 [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0
           [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1
           [1U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2
           [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3
           [1U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
                      [1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
           [1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
                                 [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
                      [1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
           [1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
                                 [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0
           [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1
           [2U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2
           [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3
           [2U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
                      [2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
           [2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
                                 [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
                      [2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
           [2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
                                 [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0
           [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1
           [3U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2
           [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3
           [3U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
                      [3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
           [3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
                                 [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
                      [3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
           [3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
                                 [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[0U][0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
           [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
           [0U][0U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[1U][0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
           [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
           [1U][0U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[0U][0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                      [0U][0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
           [0U][0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                                     [0U][0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[1U][0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                      [1U][0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
           [1U][0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                                     [1U][0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[0U][1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
           [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
           [0U][1U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[1U][1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
           [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
           [1U][1U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[0U][1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                      [0U][1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
           [0U][1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                                     [0U][1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[1U][1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                      [1U][1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
           [1U][1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                                     [1U][1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[0U][2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
           [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
           [0U][2U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[1U][2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
           [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
           [1U][2U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[0U][2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                      [0U][2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
           [0U][2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                                     [0U][2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[1U][2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                      [1U][2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
           [1U][2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                                     [1U][2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[0U][3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
           [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
           [0U][3U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[1U][3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
           [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
           [1U][3U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[0U][3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                      [0U][3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
           [0U][3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                                     [0U][3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__result[1U][3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                      [1U][3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
           [1U][3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                                     [1U][3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0
           [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1
           [0U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2
           [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3
           [0U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
                      [0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
           [0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
                                 [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
                      [0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
           [0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
                                 [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0
           [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1
           [1U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2
           [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3
           [1U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
                      [1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
           [1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
                                 [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
                      [1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
           [1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
                                 [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0
           [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1
           [2U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2
           [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3
           [2U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
                      [2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
           [2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
                                 [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
                      [2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
           [2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
                                 [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0
           [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1
           [3U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2
           [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3
           [3U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
                      [3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
           [3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
                                 [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
                      [3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
           [3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
                                 [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
           [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
           [0U][0U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
           [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
           [1U][0U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                      [0U][0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
           [0U][0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                                     [0U][0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                      [1U][0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
           [1U][0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                                     [1U][0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
           [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
           [0U][1U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
           [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
           [1U][1U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                      [0U][1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
           [0U][1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                                     [0U][1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                      [1U][1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
           [1U][1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                                     [1U][1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
           [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
           [0U][2U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
           [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
           [1U][2U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                      [0U][2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
           [0U][2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                                     [0U][2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                      [1U][2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
           [1U][2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                                     [1U][2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
           [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
           [0U][3U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
           [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
           [1U][3U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                      [0U][3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
           [0U][3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                                     [0U][3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                      [1U][3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
           [1U][3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                                     [1U][3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [2U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [2U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [2U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [2U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [3U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [3U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [3U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [3U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[0U] 
        = ((1U & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[1U] 
        = ((2U & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[2U] 
        = ((4U & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[3U] 
        = ((8U & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelf->io_rsp_bits_dataResponse = vlSelf->BabyKyberTop__DOT__bkyber_data_Resp;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[0U] 
        = ((vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
            [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2
            [0U]) - vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled
           [3U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                      [0U]) ? ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                               [0U]) : VL_MODDIVS_III(32, 
                                                      vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                                                      [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[1U] 
        = ((vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
            [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2
            [1U]) - vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled
           [2U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                      [1U]) ? ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                               [1U]) : VL_MODDIVS_III(32, 
                                                      vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                                                      [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[2U] 
        = ((vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
            [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2
            [2U]) - vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled
           [1U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                      [2U]) ? ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                               [2U]) : VL_MODDIVS_III(32, 
                                                      vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                                                      [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[3U] 
        = ((vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
            [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2
            [3U]) - vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled
           [0U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                      [3U]) ? ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                               [3U]) : VL_MODDIVS_III(32, 
                                                      vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                                                      [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
        [0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
        [1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
        [2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
        [3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
        [0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
        [1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
        [2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
        [3U];
    if (__VdlySet__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][0U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][0U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][0U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][0U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v3;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][1U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v4;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][1U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v5;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][1U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v6;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][1U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v7;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][0U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v8;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][1U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v9;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][2U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v10;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][3U] 
            = __VdlyVal__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v11;
    }
}

VL_INLINE_OPT void VBabyKyberTop___024root___nba_sequent__TOP__1(VBabyKyberTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__VdlySet__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v12) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][0U][0U] = 0U;
    }
    if (vlSelf->__VdlySet__BabyKyberTop__DOT__bkyber__DOT__public_key__v0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][0U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v0;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][1U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v1;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][2U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v2;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][3U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v3;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][0U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v4;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][1U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v5;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][2U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v6;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][3U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v7;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][0U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v8;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][1U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v9;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][2U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v10;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][3U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v11;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][0U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v12;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][1U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v13;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][2U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v14;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][3U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v15;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][0U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v16;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][1U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v17;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][2U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v18;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][3U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v19;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][0U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v20;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][1U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v21;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][2U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v22;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][3U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v23;
    }
    if (vlSelf->__VdlySet__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v12) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][0U] = 0U;
    }
    if (vlSelf->__VdlySet__BabyKyberTop__DOT__bkyber__DOT__ciphertext__v13) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][0U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][0U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][0U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][1U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][1U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][1U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][1U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][1U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][1U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][1U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][1U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][2U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][2U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][2U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][2U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][3U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][3U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][3U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][3U][3U] = 0U;
    }
    if (vlSelf->__VdlySet__BabyKyberTop__DOT__bkyber__DOT__public_key__v56) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][0U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v56;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][1U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v57;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][2U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v58;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][3U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v59;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][0U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v60;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][1U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v61;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][2U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v62;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][3U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v63;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][0U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v64;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][1U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v65;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][2U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v66;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][3U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v67;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][0U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v68;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][1U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v69;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][2U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v70;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][3U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v71;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][0U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v72;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][1U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v73;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][2U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v74;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][3U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v75;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][0U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v76;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][1U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v77;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][2U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v78;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][3U] 
            = vlSelf->__VdlyVal__BabyKyberTop__DOT__bkyber__DOT__public_key__v79;
    }
    if (vlSelf->__VdlySet__BabyKyberTop__DOT__bkyber__DOT__public_key__v80) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][2U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][2U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][2U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][2U][3U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][3U][0U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][3U][1U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][3U][2U] = 0U;
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][3U][3U] = 0U;
    }
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
           [1U][0U][0U] - (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0
                           [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1
                           [0U]));
    if (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [0U])) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
            = ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [0U]);
        if (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                       [0U])) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
                = ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [0U]);
        }
    } else {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
            = VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                             [0U], (IData)(0x11U));
    }
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
           [1U][0U][1U] - (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0
                           [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1
                           [1U]));
    if (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [1U])) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
            = ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [1U]);
        if (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                       [1U])) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
                = ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [1U]);
        }
    } else {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
            = VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                             [1U], (IData)(0x11U));
    }
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
           [1U][0U][2U] - (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0
                           [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1
                           [2U]));
    if (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [2U])) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
            = ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [2U]);
        if (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                       [2U])) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
                = ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [2U]);
        }
    } else {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
            = VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                             [2U], (IData)(0x11U));
    }
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
           [1U][0U][3U] - (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0
                           [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1
                           [3U]));
    if (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [3U])) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
            = ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [3U]);
        if (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                       [3U])) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
                = ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [3U]);
        }
    } else {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
            = VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                             [3U], (IData)(0x11U));
    }
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
        = (VL_GTS_III(32, 5U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                      [0U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                               [0U])
                                     ? 9U : 0U));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
        = (VL_GTS_III(32, 5U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                      [1U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                               [1U])
                                     ? 9U : 0U));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
        = (VL_GTS_III(32, 5U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                      [2U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                               [2U])
                                     ? 9U : 0U));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
        = (VL_GTS_III(32, 5U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                      [3U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                               [3U])
                                     ? 9U : 0U));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b = (
                                                   (0xeU 
                                                    & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b)) 
                                                   | ((9U 
                                                       == 
                                                       vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                                       [0U])
                                                       ? 1U
                                                       : 0U));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b = (
                                                   (0xdU 
                                                    & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b)) 
                                                   | (((9U 
                                                        == 
                                                        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                                        [1U])
                                                        ? 1U
                                                        : 0U) 
                                                      << 1U));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b = (
                                                   (0xbU 
                                                    & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b)) 
                                                   | (((9U 
                                                        == 
                                                        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                                        [2U])
                                                        ? 1U
                                                        : 0U) 
                                                      << 2U));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b = (
                                                   (7U 
                                                    & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b)) 
                                                   | (((9U 
                                                        == 
                                                        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                                        [3U])
                                                        ? 1U
                                                        : 0U) 
                                                      << 3U));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decimal_value 
        = (0xfU & (((((1U & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b))
                       ? 8U : 0U) | ((2U & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b))
                                      ? 4U : 0U)) | 
                    ((4U & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b))
                      ? 2U : 0U)) | ((8U & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b))
                                      ? 1U : 0U)));
    VL_WRITEF_NX("decimal_value = %0#\n",0,4,vlSelf->BabyKyberTop__DOT__bkyber__DOT__decimal_value);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [0U][0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [0U][0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [0U][0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [0U][0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [0U][1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [0U][1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [0U][1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [0U][1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][3U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][3U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][3U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][3U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][2U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][2U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][2U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][2U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[2U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[2U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[2U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[2U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[3U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[3U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[3U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[3U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [2U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [2U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [2U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [2U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [3U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [3U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [3U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [3U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [3U], (IData)(0x11U)));
}

VL_INLINE_OPT void VBabyKyberTop___024root___nba_sequent__TOP__2(VBabyKyberTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->BabyKyberTop__DOT__validReg = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->io_req_valid) 
                         & (IData)(vlSelf->io_req_bits_isWrite))))) {
        vlSelf->BabyKyberTop__DOT__validReg = ((~ (IData)(vlSelf->io_req_bits_isWrite)) 
                                               & (IData)(vlSelf->io_req_valid));
    }
    vlSelf->io_rsp_valid = vlSelf->BabyKyberTop__DOT__validReg;
}

void VBabyKyberTop___024root___eval_triggers__act(VBabyKyberTop___024root* vlSelf);

bool VBabyKyberTop___024root___eval_phase__act(VBabyKyberTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VBabyKyberTop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VBabyKyberTop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VBabyKyberTop___024root___eval_phase__nba(VBabyKyberTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VBabyKyberTop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBabyKyberTop___024root___dump_triggers__ico(VBabyKyberTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VBabyKyberTop___024root___dump_triggers__nba(VBabyKyberTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VBabyKyberTop___024root___dump_triggers__act(VBabyKyberTop___024root* vlSelf);
#endif  // VL_DEBUG

void VBabyKyberTop___024root___eval(VBabyKyberTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VBabyKyberTop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("BabyKyberTop.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VBabyKyberTop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VBabyKyberTop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("BabyKyberTop.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VBabyKyberTop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("BabyKyberTop.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VBabyKyberTop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VBabyKyberTop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VBabyKyberTop___024root___eval_debug_assertions(VBabyKyberTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_req_valid & 0xfeU))) {
        Verilated::overWidthError("io_req_valid");}
    if (VL_UNLIKELY((vlSelf->io_req_bits_activeByteLane 
                     & 0xf0U))) {
        Verilated::overWidthError("io_req_bits_activeByteLane");}
    if (VL_UNLIKELY((vlSelf->io_req_bits_isWrite & 0xfeU))) {
        Verilated::overWidthError("io_req_bits_isWrite");}
    if (VL_UNLIKELY((vlSelf->io_rsp_ready & 0xfeU))) {
        Verilated::overWidthError("io_rsp_ready");}
}
#endif  // VL_DEBUG

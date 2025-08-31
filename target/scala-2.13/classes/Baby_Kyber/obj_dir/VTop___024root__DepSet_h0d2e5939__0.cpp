// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop___024root.h"

VL_INLINE_OPT void VTop___024root___combo__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___combo__TOP__0\n"); );
    // Body
    if (vlSelf->enable) {
        vlSelf->Top__DOT__keygen__DOT__unnamedblk4__DOT__i = 4U;
        vlSelf->Top__DOT__keygen__DOT__unnamedblk5__DOT__i = 4U;
        vlSelf->Top__DOT__encryption__DOT__unnamedblk4__DOT__i = 4U;
        vlSelf->Top__DOT__encryption__DOT__unnamedblk5__DOT__i = 4U;
    }
}

VL_INLINE_OPT void VTop___024root___sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__Top__DOT__A_t000;
    IData/*31:0*/ __Vdly__Top__DOT__A_t001;
    IData/*31:0*/ __Vdly__Top__DOT__A_t002;
    IData/*31:0*/ __Vdly__Top__DOT__A_t003;
    IData/*31:0*/ __Vdly__Top__DOT__A_t010;
    IData/*31:0*/ __Vdly__Top__DOT__A_t011;
    IData/*31:0*/ __Vdly__Top__DOT__A_t012;
    IData/*31:0*/ __Vdly__Top__DOT__A_t013;
    IData/*31:0*/ __Vdly__Top__DOT__A_t020;
    IData/*31:0*/ __Vdly__Top__DOT__A_t021;
    IData/*31:0*/ __Vdly__Top__DOT__A_t022;
    IData/*31:0*/ __Vdly__Top__DOT__A_t023;
    IData/*31:0*/ __Vdly__Top__DOT__A_t030;
    IData/*31:0*/ __Vdly__Top__DOT__A_t031;
    IData/*31:0*/ __Vdly__Top__DOT__A_t032;
    IData/*31:0*/ __Vdly__Top__DOT__A_t033;
    IData/*31:0*/ __Vdly__Top__DOT__s_00;
    IData/*31:0*/ __Vdly__Top__DOT__s_01;
    IData/*31:0*/ __Vdly__Top__DOT__s_02;
    IData/*31:0*/ __Vdly__Top__DOT__s_03;
    IData/*31:0*/ __Vdly__Top__DOT__s_10;
    IData/*31:0*/ __Vdly__Top__DOT__s_11;
    IData/*31:0*/ __Vdly__Top__DOT__s_12;
    IData/*31:0*/ __Vdly__Top__DOT__s_13;
    IData/*31:0*/ __Vdly__Top__DOT__e_00;
    IData/*31:0*/ __Vdly__Top__DOT__e_01;
    IData/*31:0*/ __Vdly__Top__DOT__e_02;
    IData/*31:0*/ __Vdly__Top__DOT__e_03;
    IData/*31:0*/ __Vdly__Top__DOT__e_10;
    IData/*31:0*/ __Vdly__Top__DOT__e_11;
    IData/*31:0*/ __Vdly__Top__DOT__e_12;
    IData/*31:0*/ __Vdly__Top__DOT__e_13;
    IData/*31:0*/ __Vdly__Top__DOT__message;
    IData/*31:0*/ __Vdly__Top__DOT__public_key000;
    IData/*31:0*/ __Vdly__Top__DOT__public_key001;
    IData/*31:0*/ __Vdly__Top__DOT__public_key002;
    IData/*31:0*/ __Vdly__Top__DOT__public_key003;
    IData/*31:0*/ __Vdly__Top__DOT__public_key010;
    IData/*31:0*/ __Vdly__Top__DOT__public_key011;
    IData/*31:0*/ __Vdly__Top__DOT__public_key012;
    IData/*31:0*/ __Vdly__Top__DOT__public_key013;
    IData/*31:0*/ __Vdly__Top__DOT__public_key020;
    IData/*31:0*/ __Vdly__Top__DOT__public_key021;
    IData/*31:0*/ __Vdly__Top__DOT__public_key022;
    IData/*31:0*/ __Vdly__Top__DOT__public_key023;
    IData/*31:0*/ __Vdly__Top__DOT__public_key030;
    IData/*31:0*/ __Vdly__Top__DOT__public_key031;
    IData/*31:0*/ __Vdly__Top__DOT__public_key032;
    IData/*31:0*/ __Vdly__Top__DOT__public_key033;
    IData/*31:0*/ __Vdly__Top__DOT__public_key100;
    IData/*31:0*/ __Vdly__Top__DOT__public_key101;
    IData/*31:0*/ __Vdly__Top__DOT__public_key102;
    IData/*31:0*/ __Vdly__Top__DOT__public_key103;
    IData/*31:0*/ __Vdly__Top__DOT__public_key110;
    IData/*31:0*/ __Vdly__Top__DOT__public_key111;
    IData/*31:0*/ __Vdly__Top__DOT__public_key112;
    IData/*31:0*/ __Vdly__Top__DOT__public_key113;
    IData/*31:0*/ __Vdly__Top__DOT__r_00;
    IData/*31:0*/ __Vdly__Top__DOT__r_01;
    IData/*31:0*/ __Vdly__Top__DOT__r_02;
    IData/*31:0*/ __Vdly__Top__DOT__r_03;
    IData/*31:0*/ __Vdly__Top__DOT__r_10;
    IData/*31:0*/ __Vdly__Top__DOT__r_11;
    IData/*31:0*/ __Vdly__Top__DOT__r_12;
    IData/*31:0*/ __Vdly__Top__DOT__r_13;
    IData/*31:0*/ __Vdly__Top__DOT__e1_00;
    IData/*31:0*/ __Vdly__Top__DOT__e1_01;
    IData/*31:0*/ __Vdly__Top__DOT__e1_02;
    IData/*31:0*/ __Vdly__Top__DOT__e1_03;
    IData/*31:0*/ __Vdly__Top__DOT__e1_10;
    IData/*31:0*/ __Vdly__Top__DOT__e1_11;
    IData/*31:0*/ __Vdly__Top__DOT__e1_12;
    IData/*31:0*/ __Vdly__Top__DOT__e1_13;
    IData/*31:0*/ __Vdly__Top__DOT__e2_0;
    IData/*31:0*/ __Vdly__Top__DOT__e2_1;
    IData/*31:0*/ __Vdly__Top__DOT__e2_2;
    IData/*31:0*/ __Vdly__Top__DOT__e2_3;
    IData/*31:0*/ __Vdly__Top__DOT__ciphertext000;
    IData/*31:0*/ __Vdly__Top__DOT__ciphertext001;
    IData/*31:0*/ __Vdly__Top__DOT__ciphertext002;
    IData/*31:0*/ __Vdly__Top__DOT__ciphertext003;
    IData/*31:0*/ __Vdly__Top__DOT__ciphertext010;
    IData/*31:0*/ __Vdly__Top__DOT__ciphertext011;
    IData/*31:0*/ __Vdly__Top__DOT__ciphertext012;
    IData/*31:0*/ __Vdly__Top__DOT__ciphertext013;
    IData/*31:0*/ __Vdly__Top__DOT__ciphertext100;
    IData/*31:0*/ __Vdly__Top__DOT__ciphertext101;
    IData/*31:0*/ __Vdly__Top__DOT__ciphertext102;
    IData/*31:0*/ __Vdly__Top__DOT__ciphertext103;
    IData/*31:0*/ __Vdlyvval__Top__DOT__A_reg__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__A_reg__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__s_reg__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e_reg__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__A_reg__v1;
    CData/*0:0*/ __Vdlyvset__Top__DOT__A_reg__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__s_reg__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e_reg__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__A_reg__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__s_reg__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e_reg__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__A_reg__v3;
    IData/*31:0*/ __Vdlyvval__Top__DOT__s_reg__v3;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e_reg__v3;
    IData/*31:0*/ __Vdlyvval__Top__DOT__A_reg__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__s_reg__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e_reg__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__A_reg__v5;
    IData/*31:0*/ __Vdlyvval__Top__DOT__s_reg__v5;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e_reg__v5;
    IData/*31:0*/ __Vdlyvval__Top__DOT__A_reg__v6;
    IData/*31:0*/ __Vdlyvval__Top__DOT__s_reg__v6;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e_reg__v6;
    IData/*31:0*/ __Vdlyvval__Top__DOT__A_reg__v7;
    IData/*31:0*/ __Vdlyvval__Top__DOT__s_reg__v7;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e_reg__v7;
    IData/*31:0*/ __Vdlyvval__Top__DOT__A_reg__v8;
    IData/*31:0*/ __Vdlyvval__Top__DOT__s_reg__v8;
    IData/*31:0*/ __Vdlyvval__Top__DOT__A_reg__v9;
    IData/*31:0*/ __Vdlyvval__Top__DOT__s_reg__v9;
    IData/*31:0*/ __Vdlyvval__Top__DOT__A_reg__v10;
    IData/*31:0*/ __Vdlyvval__Top__DOT__s_reg__v10;
    IData/*31:0*/ __Vdlyvval__Top__DOT__A_reg__v11;
    IData/*31:0*/ __Vdlyvval__Top__DOT__s_reg__v11;
    IData/*31:0*/ __Vdlyvval__Top__DOT__A_reg__v12;
    IData/*31:0*/ __Vdlyvval__Top__DOT__s_reg__v12;
    IData/*31:0*/ __Vdlyvval__Top__DOT__A_reg__v13;
    IData/*31:0*/ __Vdlyvval__Top__DOT__s_reg__v13;
    IData/*31:0*/ __Vdlyvval__Top__DOT__A_reg__v14;
    IData/*31:0*/ __Vdlyvval__Top__DOT__s_reg__v14;
    IData/*31:0*/ __Vdlyvval__Top__DOT__A_reg__v15;
    IData/*31:0*/ __Vdlyvval__Top__DOT__s_reg__v15;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__public_key__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__r__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e1__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e2__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v1;
    CData/*0:0*/ __Vdlyvset__Top__DOT__public_key__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__r__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e1__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e2__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__r__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e1__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e2__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v3;
    IData/*31:0*/ __Vdlyvval__Top__DOT__r__v3;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e1__v3;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e2__v3;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__r__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e1__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v5;
    IData/*31:0*/ __Vdlyvval__Top__DOT__r__v5;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e1__v5;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v6;
    IData/*31:0*/ __Vdlyvval__Top__DOT__r__v6;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e1__v6;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v7;
    IData/*31:0*/ __Vdlyvval__Top__DOT__r__v7;
    IData/*31:0*/ __Vdlyvval__Top__DOT__e1__v7;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v8;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v9;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v10;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v11;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v12;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v13;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v14;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v15;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v16;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v17;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v18;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v19;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v20;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v21;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v22;
    IData/*31:0*/ __Vdlyvval__Top__DOT__public_key__v23;
    IData/*31:0*/ __Vdlyvval__Top__DOT__ciphertext__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__ciphertext__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__secretkey__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__ciphertext__v1;
    CData/*0:0*/ __Vdlyvset__Top__DOT__ciphertext__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__secretkey__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__ciphertext__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__secretkey__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__ciphertext__v3;
    IData/*31:0*/ __Vdlyvval__Top__DOT__secretkey__v3;
    IData/*31:0*/ __Vdlyvval__Top__DOT__ciphertext__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__secretkey__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__ciphertext__v5;
    IData/*31:0*/ __Vdlyvval__Top__DOT__secretkey__v5;
    IData/*31:0*/ __Vdlyvval__Top__DOT__ciphertext__v6;
    IData/*31:0*/ __Vdlyvval__Top__DOT__secretkey__v6;
    IData/*31:0*/ __Vdlyvval__Top__DOT__ciphertext__v7;
    IData/*31:0*/ __Vdlyvval__Top__DOT__secretkey__v7;
    IData/*31:0*/ __Vdlyvval__Top__DOT__ciphertext__v8;
    IData/*31:0*/ __Vdlyvval__Top__DOT__ciphertext__v9;
    IData/*31:0*/ __Vdlyvval__Top__DOT__ciphertext__v10;
    IData/*31:0*/ __Vdlyvval__Top__DOT__ciphertext__v11;
    CData/*0:0*/ __Vdlyvset__Top__DOT__secretkey__v8;
    CData/*0:0*/ __Vdlyvset__Top__DOT__ciphertext__v13;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT____Vcellout__keygen__secretkey__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v3;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v5;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v6;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v7;
    CData/*0:0*/ __Vdlyvset__Top__DOT____Vcellout__keygen__secretkey__v8;
    // Body
    __Vdlyvset__Top__DOT____Vcellout__keygen__secretkey__v0 = 0U;
    __Vdlyvset__Top__DOT____Vcellout__keygen__secretkey__v8 = 0U;
    __Vdly__Top__DOT__ciphertext103 = vlSelf->Top__DOT__ciphertext103;
    __Vdly__Top__DOT__ciphertext102 = vlSelf->Top__DOT__ciphertext102;
    __Vdly__Top__DOT__ciphertext101 = vlSelf->Top__DOT__ciphertext101;
    __Vdly__Top__DOT__ciphertext100 = vlSelf->Top__DOT__ciphertext100;
    __Vdly__Top__DOT__ciphertext013 = vlSelf->Top__DOT__ciphertext013;
    __Vdly__Top__DOT__ciphertext012 = vlSelf->Top__DOT__ciphertext012;
    __Vdly__Top__DOT__ciphertext011 = vlSelf->Top__DOT__ciphertext011;
    __Vdly__Top__DOT__ciphertext010 = vlSelf->Top__DOT__ciphertext010;
    __Vdly__Top__DOT__ciphertext003 = vlSelf->Top__DOT__ciphertext003;
    __Vdly__Top__DOT__ciphertext002 = vlSelf->Top__DOT__ciphertext002;
    __Vdly__Top__DOT__ciphertext001 = vlSelf->Top__DOT__ciphertext001;
    __Vdly__Top__DOT__ciphertext000 = vlSelf->Top__DOT__ciphertext000;
    __Vdly__Top__DOT__e2_3 = vlSelf->Top__DOT__e2_3;
    __Vdly__Top__DOT__e2_2 = vlSelf->Top__DOT__e2_2;
    __Vdly__Top__DOT__e2_1 = vlSelf->Top__DOT__e2_1;
    __Vdly__Top__DOT__e2_0 = vlSelf->Top__DOT__e2_0;
    __Vdly__Top__DOT__e1_13 = vlSelf->Top__DOT__e1_13;
    __Vdly__Top__DOT__e1_12 = vlSelf->Top__DOT__e1_12;
    __Vdly__Top__DOT__e1_11 = vlSelf->Top__DOT__e1_11;
    __Vdly__Top__DOT__e1_10 = vlSelf->Top__DOT__e1_10;
    __Vdly__Top__DOT__e1_03 = vlSelf->Top__DOT__e1_03;
    __Vdly__Top__DOT__e1_02 = vlSelf->Top__DOT__e1_02;
    __Vdly__Top__DOT__e1_01 = vlSelf->Top__DOT__e1_01;
    __Vdly__Top__DOT__e1_00 = vlSelf->Top__DOT__e1_00;
    __Vdly__Top__DOT__r_13 = vlSelf->Top__DOT__r_13;
    __Vdly__Top__DOT__r_12 = vlSelf->Top__DOT__r_12;
    __Vdly__Top__DOT__r_11 = vlSelf->Top__DOT__r_11;
    __Vdly__Top__DOT__r_10 = vlSelf->Top__DOT__r_10;
    __Vdly__Top__DOT__r_03 = vlSelf->Top__DOT__r_03;
    __Vdly__Top__DOT__r_02 = vlSelf->Top__DOT__r_02;
    __Vdly__Top__DOT__r_01 = vlSelf->Top__DOT__r_01;
    __Vdly__Top__DOT__r_00 = vlSelf->Top__DOT__r_00;
    __Vdly__Top__DOT__public_key113 = vlSelf->Top__DOT__public_key113;
    __Vdly__Top__DOT__public_key112 = vlSelf->Top__DOT__public_key112;
    __Vdly__Top__DOT__public_key111 = vlSelf->Top__DOT__public_key111;
    __Vdly__Top__DOT__public_key110 = vlSelf->Top__DOT__public_key110;
    __Vdly__Top__DOT__public_key103 = vlSelf->Top__DOT__public_key103;
    __Vdly__Top__DOT__public_key102 = vlSelf->Top__DOT__public_key102;
    __Vdly__Top__DOT__public_key101 = vlSelf->Top__DOT__public_key101;
    __Vdly__Top__DOT__public_key100 = vlSelf->Top__DOT__public_key100;
    __Vdly__Top__DOT__public_key033 = vlSelf->Top__DOT__public_key033;
    __Vdly__Top__DOT__public_key032 = vlSelf->Top__DOT__public_key032;
    __Vdly__Top__DOT__public_key031 = vlSelf->Top__DOT__public_key031;
    __Vdly__Top__DOT__public_key030 = vlSelf->Top__DOT__public_key030;
    __Vdly__Top__DOT__public_key023 = vlSelf->Top__DOT__public_key023;
    __Vdly__Top__DOT__public_key022 = vlSelf->Top__DOT__public_key022;
    __Vdly__Top__DOT__public_key021 = vlSelf->Top__DOT__public_key021;
    __Vdly__Top__DOT__public_key020 = vlSelf->Top__DOT__public_key020;
    __Vdly__Top__DOT__public_key013 = vlSelf->Top__DOT__public_key013;
    __Vdly__Top__DOT__public_key012 = vlSelf->Top__DOT__public_key012;
    __Vdly__Top__DOT__public_key011 = vlSelf->Top__DOT__public_key011;
    __Vdly__Top__DOT__public_key010 = vlSelf->Top__DOT__public_key010;
    __Vdly__Top__DOT__public_key003 = vlSelf->Top__DOT__public_key003;
    __Vdly__Top__DOT__public_key002 = vlSelf->Top__DOT__public_key002;
    __Vdly__Top__DOT__public_key001 = vlSelf->Top__DOT__public_key001;
    __Vdly__Top__DOT__public_key000 = vlSelf->Top__DOT__public_key000;
    __Vdly__Top__DOT__message = vlSelf->Top__DOT__message;
    __Vdly__Top__DOT__e_13 = vlSelf->Top__DOT__e_13;
    __Vdly__Top__DOT__e_12 = vlSelf->Top__DOT__e_12;
    __Vdly__Top__DOT__e_11 = vlSelf->Top__DOT__e_11;
    __Vdly__Top__DOT__e_10 = vlSelf->Top__DOT__e_10;
    __Vdly__Top__DOT__e_03 = vlSelf->Top__DOT__e_03;
    __Vdly__Top__DOT__e_02 = vlSelf->Top__DOT__e_02;
    __Vdly__Top__DOT__e_01 = vlSelf->Top__DOT__e_01;
    __Vdly__Top__DOT__e_00 = vlSelf->Top__DOT__e_00;
    __Vdly__Top__DOT__s_13 = vlSelf->Top__DOT__s_13;
    __Vdly__Top__DOT__s_12 = vlSelf->Top__DOT__s_12;
    __Vdly__Top__DOT__s_11 = vlSelf->Top__DOT__s_11;
    __Vdly__Top__DOT__s_10 = vlSelf->Top__DOT__s_10;
    __Vdly__Top__DOT__s_03 = vlSelf->Top__DOT__s_03;
    __Vdly__Top__DOT__s_02 = vlSelf->Top__DOT__s_02;
    __Vdly__Top__DOT__s_01 = vlSelf->Top__DOT__s_01;
    __Vdly__Top__DOT__s_00 = vlSelf->Top__DOT__s_00;
    __Vdly__Top__DOT__A_t033 = vlSelf->Top__DOT__A_t033;
    __Vdly__Top__DOT__A_t032 = vlSelf->Top__DOT__A_t032;
    __Vdly__Top__DOT__A_t031 = vlSelf->Top__DOT__A_t031;
    __Vdly__Top__DOT__A_t030 = vlSelf->Top__DOT__A_t030;
    __Vdly__Top__DOT__A_t023 = vlSelf->Top__DOT__A_t023;
    __Vdly__Top__DOT__A_t022 = vlSelf->Top__DOT__A_t022;
    __Vdly__Top__DOT__A_t021 = vlSelf->Top__DOT__A_t021;
    __Vdly__Top__DOT__A_t020 = vlSelf->Top__DOT__A_t020;
    __Vdly__Top__DOT__A_t013 = vlSelf->Top__DOT__A_t013;
    __Vdly__Top__DOT__A_t012 = vlSelf->Top__DOT__A_t012;
    __Vdly__Top__DOT__A_t011 = vlSelf->Top__DOT__A_t011;
    __Vdly__Top__DOT__A_t010 = vlSelf->Top__DOT__A_t010;
    __Vdly__Top__DOT__A_t003 = vlSelf->Top__DOT__A_t003;
    __Vdly__Top__DOT__A_t002 = vlSelf->Top__DOT__A_t002;
    __Vdly__Top__DOT__A_t001 = vlSelf->Top__DOT__A_t001;
    __Vdly__Top__DOT__A_t000 = vlSelf->Top__DOT__A_t000;
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->Top__DOT__keygen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        vlSelf->Top__DOT__keygen__DOT__unnamedblk1__DOT__i = 2U;
        vlSelf->Top__DOT__encryption__DOT__unnamedblk1__DOT__j = 4U;
    }
    __Vdlyvset__Top__DOT__secretkey__v8 = 0U;
    __Vdlyvset__Top__DOT__A_reg__v0 = 0U;
    __Vdlyvset__Top__DOT__A_reg__v1 = 0U;
    __Vdlyvset__Top__DOT__public_key__v0 = 0U;
    __Vdlyvset__Top__DOT__public_key__v1 = 0U;
    __Vdlyvset__Top__DOT__ciphertext__v0 = 0U;
    __Vdlyvset__Top__DOT__ciphertext__v1 = 0U;
    __Vdlyvset__Top__DOT__ciphertext__v13 = 0U;
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            vlSelf->Top__DOT__encryption__DOT__unnamedblk2__DOT__i = 4U;
            __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v0 
                = vlSelf->Top__DOT____Vcellinp__keygen__secret_key
                [0U][0U];
            __Vdlyvset__Top__DOT____Vcellout__keygen__secretkey__v0 = 1U;
            __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v1 
                = vlSelf->Top__DOT____Vcellinp__keygen__secret_key
                [0U][1U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v2 
                = vlSelf->Top__DOT____Vcellinp__keygen__secret_key
                [0U][2U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v3 
                = vlSelf->Top__DOT____Vcellinp__keygen__secret_key
                [0U][3U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v4 
                = vlSelf->Top__DOT____Vcellinp__keygen__secret_key
                [1U][0U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v5 
                = vlSelf->Top__DOT____Vcellinp__keygen__secret_key
                [1U][1U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v6 
                = vlSelf->Top__DOT____Vcellinp__keygen__secret_key
                [1U][2U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v7 
                = vlSelf->Top__DOT____Vcellinp__keygen__secret_key
                [1U][3U];
            vlSelf->Top__DOT__encryption__DOT__coefficients 
                = (0xfU & vlSelf->Top__DOT__message);
        }
    } else {
        __Vdlyvset__Top__DOT____Vcellout__keygen__secretkey__v8 = 1U;
        vlSelf->Top__DOT__encryption__DOT__coefficients = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            if (VL_UNLIKELY(vlSelf->wen_Req)) {
                VL_WRITEF("checking\n");
                vlSelf->data_Resp = 1U;
                if ((0x40007000U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__A_t000 = vlSelf->data_Req;
                } else if ((0x40007004U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__A_t001 = vlSelf->data_Req;
                } else if ((0x40007008U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__A_t002 = vlSelf->data_Req;
                } else if ((0x40007012U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__A_t003 = vlSelf->data_Req;
                } else if ((0x40007016U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__A_t010 = vlSelf->data_Req;
                } else if ((0x40007020U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__A_t011 = vlSelf->data_Req;
                } else if ((0x40007024U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__A_t012 = vlSelf->data_Req;
                } else if ((0x40007028U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__A_t013 = vlSelf->data_Req;
                } else if ((0x40007032U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__A_t020 = vlSelf->data_Req;
                } else if ((0x40007036U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__A_t021 = vlSelf->data_Req;
                } else if ((0x40007040U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__A_t022 = vlSelf->data_Req;
                } else if ((0x40007044U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__A_t023 = vlSelf->data_Req;
                } else if ((0x40007048U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__A_t030 = vlSelf->data_Req;
                } else if ((0x40007052U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__A_t031 = vlSelf->data_Req;
                } else if ((0x40007056U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__A_t032 = vlSelf->data_Req;
                } else if ((0x40007060U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__A_t033 = vlSelf->data_Req;
                } else if ((0x40007064U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__s_00 = vlSelf->data_Req;
                } else if ((0x40007068U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__s_01 = vlSelf->data_Req;
                } else if ((0x40007072U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__s_02 = vlSelf->data_Req;
                } else if ((0x40007076U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__s_03 = vlSelf->data_Req;
                } else if ((0x40007080U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__s_10 = vlSelf->data_Req;
                } else if ((0x40007084U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__s_11 = vlSelf->data_Req;
                } else if ((0x40007088U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__s_12 = vlSelf->data_Req;
                } else if ((0x40007092U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__s_13 = vlSelf->data_Req;
                } else if ((0x40007096U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e_00 = vlSelf->data_Req;
                } else if ((0x40007100U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e_01 = vlSelf->data_Req;
                } else if ((0x40007104U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e_02 = vlSelf->data_Req;
                } else if ((0x40007108U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e_03 = vlSelf->data_Req;
                } else if ((0x40007112U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e_10 = vlSelf->data_Req;
                } else if ((0x40007116U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e_11 = vlSelf->data_Req;
                } else if ((0x40007120U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e_12 = vlSelf->data_Req;
                } else if ((0x40007124U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e_13 = vlSelf->data_Req;
                } else if ((0x40007128U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__message = vlSelf->data_Req;
                } else if ((0x40007132U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key000 
                        = vlSelf->data_Req;
                } else if ((0x40007136U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key001 
                        = vlSelf->data_Req;
                } else if ((0x40007140U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key002 
                        = vlSelf->data_Req;
                } else if ((0x40007144U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key003 
                        = vlSelf->data_Req;
                } else if ((0x40007148U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key010 
                        = vlSelf->data_Req;
                } else if ((0x40007152U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key011 
                        = vlSelf->data_Req;
                } else if ((0x40007156U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key012 
                        = vlSelf->data_Req;
                } else if ((0x40007160U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key013 
                        = vlSelf->data_Req;
                } else if ((0x40007164U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key020 
                        = vlSelf->data_Req;
                } else if ((0x40007168U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key021 
                        = vlSelf->data_Req;
                } else if ((0x40007172U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key022 
                        = vlSelf->data_Req;
                } else if ((0x40007176U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key023 
                        = vlSelf->data_Req;
                } else if ((0x40007180U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key030 
                        = vlSelf->data_Req;
                } else if ((0x40007184U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key031 
                        = vlSelf->data_Req;
                } else if ((0x40007188U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key032 
                        = vlSelf->data_Req;
                } else if ((0x40007192U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key033 
                        = vlSelf->data_Req;
                } else if ((0x40007196U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key100 
                        = vlSelf->data_Req;
                } else if ((0x40007200U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key101 
                        = vlSelf->data_Req;
                } else if ((0x40007204U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key102 
                        = vlSelf->data_Req;
                } else if ((0x40007208U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key103 
                        = vlSelf->data_Req;
                } else if ((0x40007212U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key110 
                        = vlSelf->data_Req;
                } else if ((0x40007216U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key111 
                        = vlSelf->data_Req;
                } else if ((0x40007220U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key112 
                        = vlSelf->data_Req;
                } else if ((0x40007224U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__public_key113 
                        = vlSelf->data_Req;
                } else if ((0x40007228U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__r_00 = vlSelf->data_Req;
                } else if ((0x40007232U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__r_01 = vlSelf->data_Req;
                } else if ((0x40007236U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__r_02 = vlSelf->data_Req;
                } else if ((0x40007240U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__r_03 = vlSelf->data_Req;
                } else if ((0x40007244U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__r_10 = vlSelf->data_Req;
                } else if ((0x40007248U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__r_11 = vlSelf->data_Req;
                } else if ((0x40007252U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__r_12 = vlSelf->data_Req;
                } else if ((0x40007256U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__r_13 = vlSelf->data_Req;
                } else if ((0x40007260U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e1_00 = vlSelf->data_Req;
                } else if ((0x40007264U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e1_01 = vlSelf->data_Req;
                } else if ((0x40007268U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e1_02 = vlSelf->data_Req;
                } else if ((0x40007272U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e1_03 = vlSelf->data_Req;
                } else if ((0x40007276U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e1_10 = vlSelf->data_Req;
                } else if ((0x40007280U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e1_11 = vlSelf->data_Req;
                } else if ((0x40007284U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e1_12 = vlSelf->data_Req;
                } else if ((0x40007288U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e1_13 = vlSelf->data_Req;
                } else if ((0x40007292U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e2_0 = vlSelf->data_Req;
                } else if ((0x40007296U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e2_1 = vlSelf->data_Req;
                } else if ((0x40007300U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e2_2 = vlSelf->data_Req;
                } else if ((0x40007304U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__e2_3 = vlSelf->data_Req;
                } else if ((0x40007308U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__ciphertext000 
                        = vlSelf->data_Req;
                } else if ((0x40007312U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__ciphertext001 
                        = vlSelf->data_Req;
                } else if ((0x40007316U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__ciphertext002 
                        = vlSelf->data_Req;
                } else if ((0x40007320U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__ciphertext003 
                        = vlSelf->data_Req;
                } else if ((0x40007324U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__ciphertext010 
                        = vlSelf->data_Req;
                } else if ((0x40007328U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__ciphertext011 
                        = vlSelf->data_Req;
                } else if ((0x40007332U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__ciphertext012 
                        = vlSelf->data_Req;
                } else if ((0x40007336U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__ciphertext013 
                        = vlSelf->data_Req;
                } else if ((0x40007340U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__ciphertext100 
                        = vlSelf->data_Req;
                } else if ((0x40007344U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__ciphertext101 
                        = vlSelf->data_Req;
                } else if ((0x40007348U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__ciphertext102 
                        = vlSelf->data_Req;
                } else if ((0x40007352U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__ciphertext103 
                        = vlSelf->data_Req;
                } else if ((0x40007356U == vlSelf->addr_Req)) {
                    __Vdlyvval__Top__DOT__A_reg__v0 
                        = vlSelf->Top__DOT__A_t000;
                    __Vdlyvset__Top__DOT__A_reg__v0 = 1U;
                    __Vdlyvval__Top__DOT__s_reg__v0 
                        = vlSelf->Top__DOT__s_00;
                    __Vdlyvval__Top__DOT__e_reg__v0 
                        = vlSelf->Top__DOT__e_00;
                    __Vdly__Top__DOT__public_key000 
                        = vlSelf->Top__DOT__public_key
                        [0U][0U][0U];
                    __Vdly__Top__DOT__public_key001 
                        = vlSelf->Top__DOT__public_key
                        [0U][0U][1U];
                    __Vdly__Top__DOT__public_key002 
                        = vlSelf->Top__DOT__public_key
                        [0U][0U][2U];
                    __Vdly__Top__DOT__public_key003 
                        = vlSelf->Top__DOT__public_key
                        [0U][0U][3U];
                    __Vdly__Top__DOT__public_key010 
                        = vlSelf->Top__DOT__public_key
                        [0U][1U][0U];
                    __Vdly__Top__DOT__public_key011 
                        = vlSelf->Top__DOT__public_key
                        [0U][1U][1U];
                    __Vdly__Top__DOT__public_key012 
                        = vlSelf->Top__DOT__public_key
                        [0U][1U][2U];
                    __Vdly__Top__DOT__public_key013 
                        = vlSelf->Top__DOT__public_key
                        [0U][1U][3U];
                    __Vdly__Top__DOT__public_key020 
                        = vlSelf->Top__DOT__public_key
                        [0U][2U][0U];
                    __Vdly__Top__DOT__public_key021 
                        = vlSelf->Top__DOT__public_key
                        [0U][2U][1U];
                    __Vdly__Top__DOT__public_key022 
                        = vlSelf->Top__DOT__public_key
                        [0U][2U][2U];
                    __Vdly__Top__DOT__public_key023 
                        = vlSelf->Top__DOT__public_key
                        [0U][2U][3U];
                    __Vdly__Top__DOT__public_key030 
                        = vlSelf->Top__DOT__public_key
                        [0U][3U][0U];
                    __Vdly__Top__DOT__public_key031 
                        = vlSelf->Top__DOT__public_key
                        [0U][3U][1U];
                    __Vdly__Top__DOT__public_key032 
                        = vlSelf->Top__DOT__public_key
                        [0U][3U][2U];
                    __Vdly__Top__DOT__public_key033 
                        = vlSelf->Top__DOT__public_key
                        [0U][3U][3U];
                    __Vdly__Top__DOT__public_key100 
                        = vlSelf->Top__DOT__public_key
                        [1U][0U][0U];
                    __Vdly__Top__DOT__public_key101 
                        = vlSelf->Top__DOT__public_key
                        [1U][0U][1U];
                    __Vdly__Top__DOT__public_key102 
                        = vlSelf->Top__DOT__public_key
                        [1U][0U][2U];
                    __Vdly__Top__DOT__public_key103 
                        = vlSelf->Top__DOT__public_key
                        [1U][0U][3U];
                    __Vdly__Top__DOT__public_key110 
                        = vlSelf->Top__DOT__public_key
                        [1U][1U][0U];
                    __Vdly__Top__DOT__public_key111 
                        = vlSelf->Top__DOT__public_key
                        [1U][1U][1U];
                    __Vdly__Top__DOT__public_key112 
                        = vlSelf->Top__DOT__public_key
                        [1U][1U][2U];
                    __Vdly__Top__DOT__public_key113 
                        = vlSelf->Top__DOT__public_key
                        [1U][1U][3U];
                    __Vdlyvval__Top__DOT__A_reg__v1 
                        = vlSelf->Top__DOT__A_t001;
                    __Vdlyvset__Top__DOT__A_reg__v1 = 1U;
                    __Vdlyvval__Top__DOT__s_reg__v1 
                        = vlSelf->Top__DOT__s_01;
                    __Vdlyvval__Top__DOT__e_reg__v1 
                        = vlSelf->Top__DOT__e_01;
                    __Vdlyvval__Top__DOT__A_reg__v2 
                        = vlSelf->Top__DOT__A_t002;
                    __Vdlyvval__Top__DOT__s_reg__v2 
                        = vlSelf->Top__DOT__s_02;
                    __Vdlyvval__Top__DOT__e_reg__v2 
                        = vlSelf->Top__DOT__e_02;
                    __Vdlyvval__Top__DOT__A_reg__v3 
                        = vlSelf->Top__DOT__A_t003;
                    __Vdlyvval__Top__DOT__s_reg__v3 
                        = vlSelf->Top__DOT__s_03;
                    __Vdlyvval__Top__DOT__e_reg__v3 
                        = vlSelf->Top__DOT__e_03;
                    __Vdlyvval__Top__DOT__A_reg__v4 
                        = vlSelf->Top__DOT__A_t010;
                    __Vdlyvval__Top__DOT__s_reg__v4 
                        = vlSelf->Top__DOT__s_10;
                    __Vdlyvval__Top__DOT__e_reg__v4 
                        = vlSelf->Top__DOT__e_10;
                    __Vdlyvval__Top__DOT__A_reg__v5 
                        = vlSelf->Top__DOT__A_t011;
                    __Vdlyvval__Top__DOT__s_reg__v5 
                        = vlSelf->Top__DOT__s_11;
                    __Vdlyvval__Top__DOT__e_reg__v5 
                        = vlSelf->Top__DOT__e_11;
                    __Vdlyvval__Top__DOT__A_reg__v6 
                        = vlSelf->Top__DOT__A_t012;
                    __Vdlyvval__Top__DOT__s_reg__v6 
                        = vlSelf->Top__DOT__s_12;
                    __Vdlyvval__Top__DOT__e_reg__v6 
                        = vlSelf->Top__DOT__e_12;
                    __Vdlyvval__Top__DOT__A_reg__v7 
                        = vlSelf->Top__DOT__A_t013;
                    __Vdlyvval__Top__DOT__s_reg__v7 
                        = vlSelf->Top__DOT__s_13;
                    __Vdlyvval__Top__DOT__e_reg__v7 
                        = vlSelf->Top__DOT__e_13;
                    __Vdlyvval__Top__DOT__A_reg__v8 
                        = vlSelf->Top__DOT__A_t020;
                    __Vdlyvval__Top__DOT__s_reg__v8 
                        = vlSelf->Top__DOT__secretkey
                        [1U][3U];
                    __Vdlyvval__Top__DOT__A_reg__v9 
                        = vlSelf->Top__DOT__A_t021;
                    __Vdlyvval__Top__DOT__s_reg__v9 
                        = vlSelf->Top__DOT__secretkey
                        [1U][2U];
                    __Vdlyvval__Top__DOT__A_reg__v10 
                        = vlSelf->Top__DOT__A_t022;
                    __Vdlyvval__Top__DOT__s_reg__v10 
                        = vlSelf->Top__DOT__secretkey
                        [1U][1U];
                    __Vdlyvval__Top__DOT__A_reg__v11 
                        = vlSelf->Top__DOT__A_t023;
                    __Vdlyvval__Top__DOT__s_reg__v11 
                        = vlSelf->Top__DOT__secretkey
                        [1U][0U];
                    __Vdlyvval__Top__DOT__A_reg__v12 
                        = vlSelf->Top__DOT__A_t030;
                    __Vdlyvval__Top__DOT__s_reg__v12 
                        = vlSelf->Top__DOT__secretkey
                        [0U][3U];
                    __Vdlyvval__Top__DOT__A_reg__v13 
                        = vlSelf->Top__DOT__A_t031;
                    __Vdlyvval__Top__DOT__s_reg__v13 
                        = vlSelf->Top__DOT__secretkey
                        [0U][2U];
                    __Vdlyvval__Top__DOT__A_reg__v14 
                        = vlSelf->Top__DOT__A_t032;
                    __Vdlyvval__Top__DOT__s_reg__v14 
                        = vlSelf->Top__DOT__secretkey
                        [0U][1U];
                    __Vdlyvval__Top__DOT__A_reg__v15 
                        = vlSelf->Top__DOT__A_t033;
                    __Vdlyvval__Top__DOT__s_reg__v15 
                        = vlSelf->Top__DOT__secretkey
                        [0U][0U];
                } else if ((0x40007360U == vlSelf->addr_Req)) {
                    __Vdly__Top__DOT__message = vlSelf->data_Req;
                    __Vdlyvval__Top__DOT__public_key__v0 
                        = vlSelf->Top__DOT__public_key000;
                    __Vdlyvset__Top__DOT__public_key__v0 = 1U;
                    __Vdlyvval__Top__DOT__r__v0 = vlSelf->Top__DOT__r_00;
                    __Vdlyvval__Top__DOT__e1__v0 = vlSelf->Top__DOT__e1_00;
                    __Vdlyvval__Top__DOT__e2__v0 = vlSelf->Top__DOT__e2_0;
                    __Vdly__Top__DOT__ciphertext000 
                        = vlSelf->Top__DOT__ciphertext
                        [0U][0U][0U];
                    __Vdly__Top__DOT__ciphertext001 
                        = vlSelf->Top__DOT__ciphertext
                        [0U][0U][1U];
                    __Vdly__Top__DOT__ciphertext002 
                        = vlSelf->Top__DOT__ciphertext
                        [0U][0U][2U];
                    __Vdly__Top__DOT__ciphertext003 
                        = vlSelf->Top__DOT__ciphertext
                        [0U][0U][3U];
                    __Vdly__Top__DOT__ciphertext010 
                        = vlSelf->Top__DOT__ciphertext
                        [0U][1U][0U];
                    __Vdly__Top__DOT__ciphertext011 
                        = vlSelf->Top__DOT__ciphertext
                        [0U][1U][1U];
                    __Vdly__Top__DOT__ciphertext012 
                        = vlSelf->Top__DOT__ciphertext
                        [0U][1U][2U];
                    __Vdly__Top__DOT__ciphertext013 
                        = vlSelf->Top__DOT__ciphertext
                        [0U][1U][3U];
                    __Vdly__Top__DOT__ciphertext100 
                        = vlSelf->Top__DOT__ciphertext
                        [1U][0U][0U];
                    __Vdly__Top__DOT__ciphertext101 
                        = vlSelf->Top__DOT__ciphertext
                        [1U][0U][1U];
                    __Vdly__Top__DOT__ciphertext102 
                        = vlSelf->Top__DOT__ciphertext
                        [1U][0U][2U];
                    __Vdly__Top__DOT__ciphertext103 
                        = vlSelf->Top__DOT__ciphertext
                        [1U][0U][3U];
                    __Vdlyvval__Top__DOT__public_key__v1 
                        = vlSelf->Top__DOT__public_key001;
                    __Vdlyvset__Top__DOT__public_key__v1 = 1U;
                    __Vdlyvval__Top__DOT__r__v1 = vlSelf->Top__DOT__r_01;
                    __Vdlyvval__Top__DOT__e1__v1 = vlSelf->Top__DOT__e1_01;
                    __Vdlyvval__Top__DOT__e2__v1 = vlSelf->Top__DOT__e2_1;
                    __Vdlyvval__Top__DOT__public_key__v2 
                        = vlSelf->Top__DOT__public_key002;
                    __Vdlyvval__Top__DOT__r__v2 = vlSelf->Top__DOT__r_02;
                    __Vdlyvval__Top__DOT__e1__v2 = vlSelf->Top__DOT__e1_02;
                    __Vdlyvval__Top__DOT__e2__v2 = vlSelf->Top__DOT__e2_2;
                    __Vdlyvval__Top__DOT__public_key__v3 
                        = vlSelf->Top__DOT__public_key003;
                    __Vdlyvval__Top__DOT__r__v3 = vlSelf->Top__DOT__r_03;
                    __Vdlyvval__Top__DOT__e1__v3 = vlSelf->Top__DOT__e1_03;
                    __Vdlyvval__Top__DOT__e2__v3 = vlSelf->Top__DOT__e2_3;
                    __Vdlyvval__Top__DOT__public_key__v4 
                        = vlSelf->Top__DOT__public_key010;
                    __Vdlyvval__Top__DOT__r__v4 = vlSelf->Top__DOT__r_10;
                    __Vdlyvval__Top__DOT__e1__v4 = vlSelf->Top__DOT__e1_10;
                    __Vdlyvval__Top__DOT__public_key__v5 
                        = vlSelf->Top__DOT__public_key011;
                    __Vdlyvval__Top__DOT__r__v5 = vlSelf->Top__DOT__r_11;
                    __Vdlyvval__Top__DOT__e1__v5 = vlSelf->Top__DOT__e1_11;
                    __Vdlyvval__Top__DOT__public_key__v6 
                        = vlSelf->Top__DOT__public_key012;
                    __Vdlyvval__Top__DOT__r__v6 = vlSelf->Top__DOT__r_12;
                    __Vdlyvval__Top__DOT__e1__v6 = vlSelf->Top__DOT__e1_12;
                    __Vdlyvval__Top__DOT__public_key__v7 
                        = vlSelf->Top__DOT__public_key013;
                    __Vdlyvval__Top__DOT__r__v7 = vlSelf->Top__DOT__r_13;
                    __Vdlyvval__Top__DOT__e1__v7 = vlSelf->Top__DOT__e1_13;
                    __Vdlyvval__Top__DOT__public_key__v8 
                        = vlSelf->Top__DOT__public_key020;
                    __Vdlyvval__Top__DOT__public_key__v9 
                        = vlSelf->Top__DOT__public_key021;
                    __Vdlyvval__Top__DOT__public_key__v10 
                        = vlSelf->Top__DOT__public_key022;
                    __Vdlyvval__Top__DOT__public_key__v11 
                        = vlSelf->Top__DOT__public_key023;
                    __Vdlyvval__Top__DOT__public_key__v12 
                        = vlSelf->Top__DOT__public_key030;
                    __Vdlyvval__Top__DOT__public_key__v13 
                        = vlSelf->Top__DOT__public_key031;
                    __Vdlyvval__Top__DOT__public_key__v14 
                        = vlSelf->Top__DOT__public_key032;
                    __Vdlyvval__Top__DOT__public_key__v15 
                        = vlSelf->Top__DOT__public_key033;
                    __Vdlyvval__Top__DOT__public_key__v16 
                        = vlSelf->Top__DOT__public_key100;
                    __Vdlyvval__Top__DOT__public_key__v17 
                        = vlSelf->Top__DOT__public_key101;
                    __Vdlyvval__Top__DOT__public_key__v18 
                        = vlSelf->Top__DOT__public_key102;
                    __Vdlyvval__Top__DOT__public_key__v19 
                        = vlSelf->Top__DOT__public_key103;
                    __Vdlyvval__Top__DOT__public_key__v20 
                        = vlSelf->Top__DOT__public_key110;
                    __Vdlyvval__Top__DOT__public_key__v21 
                        = vlSelf->Top__DOT__public_key111;
                    __Vdlyvval__Top__DOT__public_key__v22 
                        = vlSelf->Top__DOT__public_key112;
                    __Vdlyvval__Top__DOT__public_key__v23 
                        = vlSelf->Top__DOT__public_key113;
                } else if ((0x40007364U == vlSelf->addr_Req)) {
                    __Vdlyvval__Top__DOT__ciphertext__v0 
                        = vlSelf->Top__DOT__ciphertext000;
                    __Vdlyvset__Top__DOT__ciphertext__v0 = 1U;
                    __Vdlyvval__Top__DOT__secretkey__v0 
                        = vlSelf->Top__DOT__s_reg[1U]
                        [3U];
                    __Vdly__Top__DOT__message = vlSelf->Top__DOT__decimal_value;
                    __Vdlyvval__Top__DOT__ciphertext__v1 
                        = vlSelf->Top__DOT__ciphertext001;
                    __Vdlyvset__Top__DOT__ciphertext__v1 = 1U;
                    __Vdlyvval__Top__DOT__secretkey__v1 
                        = vlSelf->Top__DOT__s_reg[1U]
                        [2U];
                    __Vdlyvval__Top__DOT__ciphertext__v2 
                        = vlSelf->Top__DOT__ciphertext002;
                    __Vdlyvval__Top__DOT__secretkey__v2 
                        = vlSelf->Top__DOT__s_reg[1U]
                        [1U];
                    __Vdlyvval__Top__DOT__ciphertext__v3 
                        = vlSelf->Top__DOT__ciphertext003;
                    __Vdlyvval__Top__DOT__secretkey__v3 
                        = vlSelf->Top__DOT__s_reg[1U]
                        [0U];
                    __Vdlyvval__Top__DOT__ciphertext__v4 
                        = vlSelf->Top__DOT__ciphertext010;
                    __Vdlyvval__Top__DOT__secretkey__v4 
                        = vlSelf->Top__DOT__s_reg[0U]
                        [3U];
                    __Vdlyvval__Top__DOT__ciphertext__v5 
                        = vlSelf->Top__DOT__ciphertext011;
                    __Vdlyvval__Top__DOT__secretkey__v5 
                        = vlSelf->Top__DOT__s_reg[0U]
                        [2U];
                    __Vdlyvval__Top__DOT__ciphertext__v6 
                        = vlSelf->Top__DOT__ciphertext012;
                    __Vdlyvval__Top__DOT__secretkey__v6 
                        = vlSelf->Top__DOT__s_reg[0U]
                        [1U];
                    __Vdlyvval__Top__DOT__ciphertext__v7 
                        = vlSelf->Top__DOT__ciphertext013;
                    __Vdlyvval__Top__DOT__secretkey__v7 
                        = vlSelf->Top__DOT__s_reg[0U]
                        [0U];
                    __Vdlyvval__Top__DOT__ciphertext__v8 
                        = vlSelf->Top__DOT__ciphertext100;
                    __Vdlyvval__Top__DOT__ciphertext__v9 
                        = vlSelf->Top__DOT__ciphertext101;
                    __Vdlyvval__Top__DOT__ciphertext__v10 
                        = vlSelf->Top__DOT__ciphertext102;
                    __Vdlyvval__Top__DOT__ciphertext__v11 
                        = vlSelf->Top__DOT__ciphertext103;
                }
            } else if ((1U & (~ (IData)(vlSelf->wen_Req)))) {
                if ((0x40007000U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key000;
                } else if ((0x40007004U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key001;
                } else if ((0x40007008U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key002;
                } else if ((0x40007012U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key003;
                } else if ((0x40007016U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key010;
                } else if ((0x40007020U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key011;
                } else if ((0x40007024U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key012;
                } else if ((0x40007028U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key013;
                } else if ((0x40007032U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key020;
                } else if ((0x40007036U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key021;
                } else if ((0x40007040U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key022;
                } else if ((0x40007044U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key023;
                } else if ((0x40007048U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key030;
                } else if ((0x40007052U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key031;
                } else if ((0x40007056U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key032;
                } else if ((0x40007060U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key033;
                } else if ((0x40007064U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key100;
                } else if ((0x40007068U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key101;
                } else if ((0x40007072U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key102;
                } else if ((0x40007076U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key103;
                } else if ((0x40007080U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key110;
                } else if ((0x40007084U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key111;
                } else if ((0x40007088U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key112;
                } else if ((0x40007092U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__public_key113;
                } else if ((0x40007096U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__ciphertext000;
                } else if ((0x40007100U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__ciphertext001;
                } else if ((0x40007104U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__ciphertext002;
                } else if ((0x40007108U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__ciphertext003;
                } else if ((0x40007112U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__ciphertext010;
                } else if ((0x40007116U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__ciphertext011;
                } else if ((0x40007120U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__ciphertext012;
                } else if ((0x40007124U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__ciphertext013;
                } else if ((0x40007128U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__ciphertext100;
                } else if ((0x40007132U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__ciphertext101;
                } else if ((0x40007136U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__ciphertext102;
                } else if ((0x40007140U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__ciphertext103;
                } else if ((0x40007144U == vlSelf->addr_Req)) {
                    vlSelf->data_Resp = vlSelf->Top__DOT__message;
                }
            }
        }
    } else {
        vlSelf->Top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        vlSelf->Top__DOT__unnamedblk1__DOT__i = 2U;
        vlSelf->Top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
        vlSelf->Top__DOT__unnamedblk3__DOT__i = 4U;
        vlSelf->Top__DOT__unnamedblk5__DOT__i = 4U;
        __Vdlyvset__Top__DOT__secretkey__v8 = 1U;
        vlSelf->data_Resp = 0U;
        __Vdly__Top__DOT__A_t000 = 0U;
        __Vdly__Top__DOT__A_t001 = 0U;
        __Vdly__Top__DOT__A_t002 = 0U;
        __Vdly__Top__DOT__A_t003 = 0U;
        __Vdly__Top__DOT__A_t010 = 0U;
        __Vdly__Top__DOT__A_t011 = 0U;
        __Vdly__Top__DOT__A_t012 = 0U;
        __Vdly__Top__DOT__A_t013 = 0U;
        __Vdly__Top__DOT__A_t020 = 0U;
        __Vdly__Top__DOT__A_t021 = 0U;
        __Vdly__Top__DOT__A_t022 = 0U;
        __Vdly__Top__DOT__A_t023 = 0U;
        __Vdly__Top__DOT__A_t030 = 0U;
        __Vdly__Top__DOT__A_t031 = 0U;
        __Vdly__Top__DOT__A_t032 = 0U;
        __Vdly__Top__DOT__A_t033 = 0U;
        __Vdly__Top__DOT__s_00 = 0U;
        __Vdly__Top__DOT__s_01 = 0U;
        __Vdly__Top__DOT__s_02 = 0U;
        __Vdly__Top__DOT__s_03 = 0U;
        __Vdly__Top__DOT__s_10 = 0U;
        __Vdly__Top__DOT__s_11 = 0U;
        __Vdly__Top__DOT__s_12 = 0U;
        __Vdly__Top__DOT__s_13 = 0U;
        __Vdly__Top__DOT__e_00 = 0U;
        __Vdly__Top__DOT__e_01 = 0U;
        __Vdly__Top__DOT__e_02 = 0U;
        __Vdly__Top__DOT__e_03 = 0U;
        __Vdly__Top__DOT__e_10 = 0U;
        __Vdly__Top__DOT__e_11 = 0U;
        __Vdly__Top__DOT__e_12 = 0U;
        __Vdly__Top__DOT__e_13 = 0U;
        __Vdly__Top__DOT__public_key000 = 0U;
        __Vdly__Top__DOT__public_key001 = 0U;
        __Vdly__Top__DOT__public_key002 = 0U;
        __Vdly__Top__DOT__public_key003 = 0U;
        __Vdly__Top__DOT__public_key010 = 0U;
        __Vdly__Top__DOT__public_key011 = 0U;
        __Vdly__Top__DOT__public_key012 = 0U;
        __Vdly__Top__DOT__public_key013 = 0U;
        __Vdly__Top__DOT__public_key020 = 0U;
        __Vdly__Top__DOT__public_key021 = 0U;
        __Vdly__Top__DOT__public_key022 = 0U;
        __Vdly__Top__DOT__public_key023 = 0U;
        __Vdly__Top__DOT__public_key030 = 0U;
        __Vdly__Top__DOT__public_key031 = 0U;
        __Vdly__Top__DOT__public_key032 = 0U;
        __Vdly__Top__DOT__public_key033 = 0U;
        __Vdly__Top__DOT__public_key100 = 0U;
        __Vdly__Top__DOT__public_key101 = 0U;
        __Vdly__Top__DOT__public_key102 = 0U;
        __Vdly__Top__DOT__public_key103 = 0U;
        __Vdly__Top__DOT__public_key110 = 0U;
        __Vdly__Top__DOT__public_key111 = 0U;
        __Vdly__Top__DOT__public_key112 = 0U;
        __Vdly__Top__DOT__public_key113 = 0U;
        __Vdly__Top__DOT__r_00 = 0U;
        __Vdly__Top__DOT__r_01 = 0U;
        __Vdly__Top__DOT__r_02 = 0U;
        __Vdly__Top__DOT__r_03 = 0U;
        __Vdly__Top__DOT__r_10 = 0U;
        __Vdly__Top__DOT__r_11 = 0U;
        __Vdly__Top__DOT__r_12 = 0U;
        __Vdly__Top__DOT__r_13 = 0U;
        __Vdly__Top__DOT__e1_00 = 0U;
        __Vdly__Top__DOT__e1_01 = 0U;
        __Vdly__Top__DOT__e1_02 = 0U;
        __Vdly__Top__DOT__e1_03 = 0U;
        __Vdly__Top__DOT__e1_10 = 0U;
        __Vdly__Top__DOT__e1_11 = 0U;
        __Vdly__Top__DOT__e1_12 = 0U;
        __Vdly__Top__DOT__e1_13 = 0U;
        __Vdly__Top__DOT__e2_0 = 0U;
        __Vdly__Top__DOT__e2_1 = 0U;
        __Vdly__Top__DOT__e2_2 = 0U;
        __Vdly__Top__DOT__e2_3 = 0U;
        __Vdly__Top__DOT__ciphertext000 = 0U;
        __Vdly__Top__DOT__ciphertext001 = 0U;
        __Vdly__Top__DOT__ciphertext002 = 0U;
        __Vdly__Top__DOT__ciphertext003 = 0U;
        __Vdly__Top__DOT__ciphertext010 = 0U;
        __Vdly__Top__DOT__ciphertext011 = 0U;
        __Vdly__Top__DOT__ciphertext012 = 0U;
        __Vdly__Top__DOT__ciphertext013 = 0U;
        __Vdly__Top__DOT__ciphertext100 = 0U;
        __Vdly__Top__DOT__ciphertext101 = 0U;
        __Vdly__Top__DOT__ciphertext102 = 0U;
        __Vdly__Top__DOT__ciphertext103 = 0U;
        __Vdlyvset__Top__DOT__ciphertext__v13 = 1U;
    }
    if (__Vdlyvset__Top__DOT____Vcellout__keygen__secretkey__v0) {
        vlSelf->Top__DOT____Vcellout__keygen__secretkey[0U][0U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v0;
        vlSelf->Top__DOT____Vcellout__keygen__secretkey[0U][1U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v1;
        vlSelf->Top__DOT____Vcellout__keygen__secretkey[0U][2U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v2;
        vlSelf->Top__DOT____Vcellout__keygen__secretkey[0U][3U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v3;
        vlSelf->Top__DOT____Vcellout__keygen__secretkey[1U][0U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v4;
        vlSelf->Top__DOT____Vcellout__keygen__secretkey[1U][1U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v5;
        vlSelf->Top__DOT____Vcellout__keygen__secretkey[1U][2U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v6;
        vlSelf->Top__DOT____Vcellout__keygen__secretkey[1U][3U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__secretkey__v7;
    }
    if (__Vdlyvset__Top__DOT____Vcellout__keygen__secretkey__v8) {
        vlSelf->Top__DOT____Vcellout__keygen__secretkey[0U][0U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__secretkey[0U][1U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__secretkey[0U][2U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__secretkey[0U][3U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__secretkey[1U][0U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__secretkey[1U][1U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__secretkey[1U][2U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__secretkey[1U][3U] = 0U;
    }
    vlSelf->Top__DOT__A_t000 = __Vdly__Top__DOT__A_t000;
    vlSelf->Top__DOT__A_t001 = __Vdly__Top__DOT__A_t001;
    vlSelf->Top__DOT__A_t002 = __Vdly__Top__DOT__A_t002;
    vlSelf->Top__DOT__A_t003 = __Vdly__Top__DOT__A_t003;
    vlSelf->Top__DOT__A_t010 = __Vdly__Top__DOT__A_t010;
    vlSelf->Top__DOT__A_t011 = __Vdly__Top__DOT__A_t011;
    vlSelf->Top__DOT__A_t012 = __Vdly__Top__DOT__A_t012;
    vlSelf->Top__DOT__A_t013 = __Vdly__Top__DOT__A_t013;
    vlSelf->Top__DOT__A_t020 = __Vdly__Top__DOT__A_t020;
    vlSelf->Top__DOT__A_t021 = __Vdly__Top__DOT__A_t021;
    vlSelf->Top__DOT__A_t022 = __Vdly__Top__DOT__A_t022;
    vlSelf->Top__DOT__A_t023 = __Vdly__Top__DOT__A_t023;
    vlSelf->Top__DOT__A_t030 = __Vdly__Top__DOT__A_t030;
    vlSelf->Top__DOT__A_t031 = __Vdly__Top__DOT__A_t031;
    vlSelf->Top__DOT__A_t032 = __Vdly__Top__DOT__A_t032;
    vlSelf->Top__DOT__A_t033 = __Vdly__Top__DOT__A_t033;
    vlSelf->Top__DOT__s_00 = __Vdly__Top__DOT__s_00;
    vlSelf->Top__DOT__s_01 = __Vdly__Top__DOT__s_01;
    vlSelf->Top__DOT__s_02 = __Vdly__Top__DOT__s_02;
    vlSelf->Top__DOT__s_03 = __Vdly__Top__DOT__s_03;
    vlSelf->Top__DOT__s_10 = __Vdly__Top__DOT__s_10;
    vlSelf->Top__DOT__s_11 = __Vdly__Top__DOT__s_11;
    vlSelf->Top__DOT__s_12 = __Vdly__Top__DOT__s_12;
    vlSelf->Top__DOT__s_13 = __Vdly__Top__DOT__s_13;
    vlSelf->Top__DOT__e_00 = __Vdly__Top__DOT__e_00;
    vlSelf->Top__DOT__e_01 = __Vdly__Top__DOT__e_01;
    vlSelf->Top__DOT__e_02 = __Vdly__Top__DOT__e_02;
    vlSelf->Top__DOT__e_03 = __Vdly__Top__DOT__e_03;
    vlSelf->Top__DOT__e_10 = __Vdly__Top__DOT__e_10;
    vlSelf->Top__DOT__e_11 = __Vdly__Top__DOT__e_11;
    vlSelf->Top__DOT__e_12 = __Vdly__Top__DOT__e_12;
    vlSelf->Top__DOT__e_13 = __Vdly__Top__DOT__e_13;
    vlSelf->Top__DOT__public_key000 = __Vdly__Top__DOT__public_key000;
    vlSelf->Top__DOT__public_key001 = __Vdly__Top__DOT__public_key001;
    vlSelf->Top__DOT__public_key002 = __Vdly__Top__DOT__public_key002;
    vlSelf->Top__DOT__public_key003 = __Vdly__Top__DOT__public_key003;
    vlSelf->Top__DOT__public_key010 = __Vdly__Top__DOT__public_key010;
    vlSelf->Top__DOT__public_key011 = __Vdly__Top__DOT__public_key011;
    vlSelf->Top__DOT__public_key012 = __Vdly__Top__DOT__public_key012;
    vlSelf->Top__DOT__public_key013 = __Vdly__Top__DOT__public_key013;
    vlSelf->Top__DOT__public_key020 = __Vdly__Top__DOT__public_key020;
    vlSelf->Top__DOT__public_key021 = __Vdly__Top__DOT__public_key021;
    vlSelf->Top__DOT__public_key022 = __Vdly__Top__DOT__public_key022;
    vlSelf->Top__DOT__public_key023 = __Vdly__Top__DOT__public_key023;
    vlSelf->Top__DOT__public_key030 = __Vdly__Top__DOT__public_key030;
    vlSelf->Top__DOT__public_key031 = __Vdly__Top__DOT__public_key031;
    vlSelf->Top__DOT__public_key032 = __Vdly__Top__DOT__public_key032;
    vlSelf->Top__DOT__public_key033 = __Vdly__Top__DOT__public_key033;
    vlSelf->Top__DOT__public_key100 = __Vdly__Top__DOT__public_key100;
    vlSelf->Top__DOT__public_key101 = __Vdly__Top__DOT__public_key101;
    vlSelf->Top__DOT__public_key102 = __Vdly__Top__DOT__public_key102;
    vlSelf->Top__DOT__public_key103 = __Vdly__Top__DOT__public_key103;
    vlSelf->Top__DOT__public_key110 = __Vdly__Top__DOT__public_key110;
    vlSelf->Top__DOT__public_key111 = __Vdly__Top__DOT__public_key111;
    vlSelf->Top__DOT__public_key112 = __Vdly__Top__DOT__public_key112;
    vlSelf->Top__DOT__public_key113 = __Vdly__Top__DOT__public_key113;
    vlSelf->Top__DOT__r_00 = __Vdly__Top__DOT__r_00;
    vlSelf->Top__DOT__r_01 = __Vdly__Top__DOT__r_01;
    vlSelf->Top__DOT__r_02 = __Vdly__Top__DOT__r_02;
    vlSelf->Top__DOT__r_03 = __Vdly__Top__DOT__r_03;
    vlSelf->Top__DOT__r_10 = __Vdly__Top__DOT__r_10;
    vlSelf->Top__DOT__r_11 = __Vdly__Top__DOT__r_11;
    vlSelf->Top__DOT__r_12 = __Vdly__Top__DOT__r_12;
    vlSelf->Top__DOT__r_13 = __Vdly__Top__DOT__r_13;
    vlSelf->Top__DOT__e1_00 = __Vdly__Top__DOT__e1_00;
    vlSelf->Top__DOT__e1_01 = __Vdly__Top__DOT__e1_01;
    vlSelf->Top__DOT__e1_02 = __Vdly__Top__DOT__e1_02;
    vlSelf->Top__DOT__e1_03 = __Vdly__Top__DOT__e1_03;
    vlSelf->Top__DOT__e1_10 = __Vdly__Top__DOT__e1_10;
    vlSelf->Top__DOT__e1_11 = __Vdly__Top__DOT__e1_11;
    vlSelf->Top__DOT__e1_12 = __Vdly__Top__DOT__e1_12;
    vlSelf->Top__DOT__e1_13 = __Vdly__Top__DOT__e1_13;
    vlSelf->Top__DOT__e2_0 = __Vdly__Top__DOT__e2_0;
    vlSelf->Top__DOT__e2_1 = __Vdly__Top__DOT__e2_1;
    vlSelf->Top__DOT__e2_2 = __Vdly__Top__DOT__e2_2;
    vlSelf->Top__DOT__e2_3 = __Vdly__Top__DOT__e2_3;
    vlSelf->Top__DOT__ciphertext000 = __Vdly__Top__DOT__ciphertext000;
    vlSelf->Top__DOT__ciphertext001 = __Vdly__Top__DOT__ciphertext001;
    vlSelf->Top__DOT__ciphertext002 = __Vdly__Top__DOT__ciphertext002;
    vlSelf->Top__DOT__ciphertext003 = __Vdly__Top__DOT__ciphertext003;
    vlSelf->Top__DOT__ciphertext010 = __Vdly__Top__DOT__ciphertext010;
    vlSelf->Top__DOT__ciphertext011 = __Vdly__Top__DOT__ciphertext011;
    vlSelf->Top__DOT__ciphertext012 = __Vdly__Top__DOT__ciphertext012;
    vlSelf->Top__DOT__ciphertext013 = __Vdly__Top__DOT__ciphertext013;
    vlSelf->Top__DOT__ciphertext100 = __Vdly__Top__DOT__ciphertext100;
    vlSelf->Top__DOT__ciphertext101 = __Vdly__Top__DOT__ciphertext101;
    vlSelf->Top__DOT__ciphertext102 = __Vdly__Top__DOT__ciphertext102;
    vlSelf->Top__DOT__ciphertext103 = __Vdly__Top__DOT__ciphertext103;
    vlSelf->Top__DOT__message = __Vdly__Top__DOT__message;
    if (__Vdlyvset__Top__DOT__A_reg__v0) {
        vlSelf->Top__DOT__s_reg[0U][0U] = __Vdlyvval__Top__DOT__s_reg__v0;
        vlSelf->Top__DOT__e_reg[0U][0U] = __Vdlyvval__Top__DOT__e_reg__v0;
        vlSelf->Top__DOT__A_reg[0U][0U] = __Vdlyvval__Top__DOT__A_reg__v0;
    }
    if (__Vdlyvset__Top__DOT__A_reg__v1) {
        vlSelf->Top__DOT__s_reg[0U][1U] = __Vdlyvval__Top__DOT__s_reg__v1;
        vlSelf->Top__DOT__s_reg[0U][2U] = __Vdlyvval__Top__DOT__s_reg__v2;
        vlSelf->Top__DOT__s_reg[0U][3U] = __Vdlyvval__Top__DOT__s_reg__v3;
        vlSelf->Top__DOT__s_reg[1U][0U] = __Vdlyvval__Top__DOT__s_reg__v4;
        vlSelf->Top__DOT__s_reg[1U][1U] = __Vdlyvval__Top__DOT__s_reg__v5;
        vlSelf->Top__DOT__s_reg[1U][2U] = __Vdlyvval__Top__DOT__s_reg__v6;
        vlSelf->Top__DOT__s_reg[1U][3U] = __Vdlyvval__Top__DOT__s_reg__v7;
        vlSelf->Top__DOT__s_reg[1U][3U] = __Vdlyvval__Top__DOT__s_reg__v8;
        vlSelf->Top__DOT__s_reg[1U][2U] = __Vdlyvval__Top__DOT__s_reg__v9;
        vlSelf->Top__DOT__s_reg[1U][1U] = __Vdlyvval__Top__DOT__s_reg__v10;
        vlSelf->Top__DOT__s_reg[1U][0U] = __Vdlyvval__Top__DOT__s_reg__v11;
        vlSelf->Top__DOT__s_reg[0U][3U] = __Vdlyvval__Top__DOT__s_reg__v12;
        vlSelf->Top__DOT__s_reg[0U][2U] = __Vdlyvval__Top__DOT__s_reg__v13;
        vlSelf->Top__DOT__s_reg[0U][1U] = __Vdlyvval__Top__DOT__s_reg__v14;
        vlSelf->Top__DOT__s_reg[0U][0U] = __Vdlyvval__Top__DOT__s_reg__v15;
        vlSelf->Top__DOT__e_reg[0U][1U] = __Vdlyvval__Top__DOT__e_reg__v1;
        vlSelf->Top__DOT__e_reg[0U][2U] = __Vdlyvval__Top__DOT__e_reg__v2;
        vlSelf->Top__DOT__e_reg[0U][3U] = __Vdlyvval__Top__DOT__e_reg__v3;
        vlSelf->Top__DOT__e_reg[1U][0U] = __Vdlyvval__Top__DOT__e_reg__v4;
        vlSelf->Top__DOT__e_reg[1U][1U] = __Vdlyvval__Top__DOT__e_reg__v5;
        vlSelf->Top__DOT__e_reg[1U][2U] = __Vdlyvval__Top__DOT__e_reg__v6;
        vlSelf->Top__DOT__e_reg[1U][3U] = __Vdlyvval__Top__DOT__e_reg__v7;
        vlSelf->Top__DOT__A_reg[0U][1U] = __Vdlyvval__Top__DOT__A_reg__v1;
        vlSelf->Top__DOT__A_reg[0U][2U] = __Vdlyvval__Top__DOT__A_reg__v2;
        vlSelf->Top__DOT__A_reg[0U][3U] = __Vdlyvval__Top__DOT__A_reg__v3;
        vlSelf->Top__DOT__A_reg[1U][0U] = __Vdlyvval__Top__DOT__A_reg__v4;
        vlSelf->Top__DOT__A_reg[1U][1U] = __Vdlyvval__Top__DOT__A_reg__v5;
        vlSelf->Top__DOT__A_reg[1U][2U] = __Vdlyvval__Top__DOT__A_reg__v6;
        vlSelf->Top__DOT__A_reg[1U][3U] = __Vdlyvval__Top__DOT__A_reg__v7;
        vlSelf->Top__DOT__A_reg[2U][0U] = __Vdlyvval__Top__DOT__A_reg__v8;
        vlSelf->Top__DOT__A_reg[2U][1U] = __Vdlyvval__Top__DOT__A_reg__v9;
        vlSelf->Top__DOT__A_reg[2U][2U] = __Vdlyvval__Top__DOT__A_reg__v10;
        vlSelf->Top__DOT__A_reg[2U][3U] = __Vdlyvval__Top__DOT__A_reg__v11;
        vlSelf->Top__DOT__A_reg[3U][0U] = __Vdlyvval__Top__DOT__A_reg__v12;
        vlSelf->Top__DOT__A_reg[3U][1U] = __Vdlyvval__Top__DOT__A_reg__v13;
        vlSelf->Top__DOT__A_reg[3U][2U] = __Vdlyvval__Top__DOT__A_reg__v14;
        vlSelf->Top__DOT__A_reg[3U][3U] = __Vdlyvval__Top__DOT__A_reg__v15;
    }
    if (__Vdlyvset__Top__DOT__ciphertext__v0) {
        vlSelf->Top__DOT__secretkey[1U][3U] = __Vdlyvval__Top__DOT__secretkey__v0;
        vlSelf->Top__DOT__ciphertext[0U][0U][0U] = __Vdlyvval__Top__DOT__ciphertext__v0;
    }
    if (__Vdlyvset__Top__DOT__ciphertext__v1) {
        vlSelf->Top__DOT__secretkey[1U][2U] = __Vdlyvval__Top__DOT__secretkey__v1;
        vlSelf->Top__DOT__secretkey[1U][1U] = __Vdlyvval__Top__DOT__secretkey__v2;
        vlSelf->Top__DOT__secretkey[1U][0U] = __Vdlyvval__Top__DOT__secretkey__v3;
        vlSelf->Top__DOT__secretkey[0U][3U] = __Vdlyvval__Top__DOT__secretkey__v4;
        vlSelf->Top__DOT__secretkey[0U][2U] = __Vdlyvval__Top__DOT__secretkey__v5;
        vlSelf->Top__DOT__secretkey[0U][1U] = __Vdlyvval__Top__DOT__secretkey__v6;
        vlSelf->Top__DOT__secretkey[0U][0U] = __Vdlyvval__Top__DOT__secretkey__v7;
        vlSelf->Top__DOT__ciphertext[0U][0U][1U] = __Vdlyvval__Top__DOT__ciphertext__v1;
        vlSelf->Top__DOT__ciphertext[0U][0U][2U] = __Vdlyvval__Top__DOT__ciphertext__v2;
        vlSelf->Top__DOT__ciphertext[0U][0U][3U] = __Vdlyvval__Top__DOT__ciphertext__v3;
        vlSelf->Top__DOT__ciphertext[0U][1U][0U] = __Vdlyvval__Top__DOT__ciphertext__v4;
        vlSelf->Top__DOT__ciphertext[0U][1U][1U] = __Vdlyvval__Top__DOT__ciphertext__v5;
        vlSelf->Top__DOT__ciphertext[0U][1U][2U] = __Vdlyvval__Top__DOT__ciphertext__v6;
        vlSelf->Top__DOT__ciphertext[0U][1U][3U] = __Vdlyvval__Top__DOT__ciphertext__v7;
        vlSelf->Top__DOT__ciphertext[1U][0U][0U] = __Vdlyvval__Top__DOT__ciphertext__v8;
        vlSelf->Top__DOT__ciphertext[1U][0U][1U] = __Vdlyvval__Top__DOT__ciphertext__v9;
        vlSelf->Top__DOT__ciphertext[1U][0U][2U] = __Vdlyvval__Top__DOT__ciphertext__v10;
        vlSelf->Top__DOT__ciphertext[1U][0U][3U] = __Vdlyvval__Top__DOT__ciphertext__v11;
    }
    if (__Vdlyvset__Top__DOT__secretkey__v8) {
        vlSelf->Top__DOT__result[0U][0U] = 0U;
        vlSelf->Top__DOT__s_reg[0U][0U] = 0U;
        vlSelf->Top__DOT__secretkey[0U][0U] = 0U;
        vlSelf->Top__DOT__e_reg[0U][0U] = 0U;
        vlSelf->Top__DOT__ciphertext[0U][0U][0U] = 0U;
    }
    if (__Vdlyvset__Top__DOT__public_key__v0) {
        vlSelf->Top__DOT__r[0U][0U] = __Vdlyvval__Top__DOT__r__v0;
        vlSelf->Top__DOT__e2[0U] = __Vdlyvval__Top__DOT__e2__v0;
        vlSelf->Top__DOT__e1[0U][0U] = __Vdlyvval__Top__DOT__e1__v0;
        vlSelf->Top__DOT__public_key[0U][0U][0U] = __Vdlyvval__Top__DOT__public_key__v0;
    }
    if (__Vdlyvset__Top__DOT__public_key__v1) {
        vlSelf->Top__DOT__r[0U][1U] = __Vdlyvval__Top__DOT__r__v1;
        vlSelf->Top__DOT__r[0U][2U] = __Vdlyvval__Top__DOT__r__v2;
        vlSelf->Top__DOT__r[0U][3U] = __Vdlyvval__Top__DOT__r__v3;
        vlSelf->Top__DOT__r[1U][0U] = __Vdlyvval__Top__DOT__r__v4;
        vlSelf->Top__DOT__r[1U][1U] = __Vdlyvval__Top__DOT__r__v5;
        vlSelf->Top__DOT__r[1U][2U] = __Vdlyvval__Top__DOT__r__v6;
        vlSelf->Top__DOT__r[1U][3U] = __Vdlyvval__Top__DOT__r__v7;
        vlSelf->Top__DOT__e2[1U] = __Vdlyvval__Top__DOT__e2__v1;
        vlSelf->Top__DOT__e2[2U] = __Vdlyvval__Top__DOT__e2__v2;
        vlSelf->Top__DOT__e2[3U] = __Vdlyvval__Top__DOT__e2__v3;
        vlSelf->Top__DOT__e1[0U][1U] = __Vdlyvval__Top__DOT__e1__v1;
        vlSelf->Top__DOT__e1[0U][2U] = __Vdlyvval__Top__DOT__e1__v2;
        vlSelf->Top__DOT__e1[0U][3U] = __Vdlyvval__Top__DOT__e1__v3;
        vlSelf->Top__DOT__e1[1U][0U] = __Vdlyvval__Top__DOT__e1__v4;
        vlSelf->Top__DOT__e1[1U][1U] = __Vdlyvval__Top__DOT__e1__v5;
        vlSelf->Top__DOT__e1[1U][2U] = __Vdlyvval__Top__DOT__e1__v6;
        vlSelf->Top__DOT__e1[1U][3U] = __Vdlyvval__Top__DOT__e1__v7;
        vlSelf->Top__DOT__public_key[0U][0U][1U] = __Vdlyvval__Top__DOT__public_key__v1;
        vlSelf->Top__DOT__public_key[0U][0U][2U] = __Vdlyvval__Top__DOT__public_key__v2;
        vlSelf->Top__DOT__public_key[0U][0U][3U] = __Vdlyvval__Top__DOT__public_key__v3;
        vlSelf->Top__DOT__public_key[0U][1U][0U] = __Vdlyvval__Top__DOT__public_key__v4;
        vlSelf->Top__DOT__public_key[0U][1U][1U] = __Vdlyvval__Top__DOT__public_key__v5;
        vlSelf->Top__DOT__public_key[0U][1U][2U] = __Vdlyvval__Top__DOT__public_key__v6;
        vlSelf->Top__DOT__public_key[0U][1U][3U] = __Vdlyvval__Top__DOT__public_key__v7;
        vlSelf->Top__DOT__public_key[0U][2U][0U] = __Vdlyvval__Top__DOT__public_key__v8;
        vlSelf->Top__DOT__public_key[0U][2U][1U] = __Vdlyvval__Top__DOT__public_key__v9;
        vlSelf->Top__DOT__public_key[0U][2U][2U] = __Vdlyvval__Top__DOT__public_key__v10;
        vlSelf->Top__DOT__public_key[0U][2U][3U] = __Vdlyvval__Top__DOT__public_key__v11;
        vlSelf->Top__DOT__public_key[0U][3U][0U] = __Vdlyvval__Top__DOT__public_key__v12;
        vlSelf->Top__DOT__public_key[0U][3U][1U] = __Vdlyvval__Top__DOT__public_key__v13;
        vlSelf->Top__DOT__public_key[0U][3U][2U] = __Vdlyvval__Top__DOT__public_key__v14;
        vlSelf->Top__DOT__public_key[0U][3U][3U] = __Vdlyvval__Top__DOT__public_key__v15;
        vlSelf->Top__DOT__public_key[1U][0U][0U] = __Vdlyvval__Top__DOT__public_key__v16;
        vlSelf->Top__DOT__public_key[1U][0U][1U] = __Vdlyvval__Top__DOT__public_key__v17;
        vlSelf->Top__DOT__public_key[1U][0U][2U] = __Vdlyvval__Top__DOT__public_key__v18;
        vlSelf->Top__DOT__public_key[1U][0U][3U] = __Vdlyvval__Top__DOT__public_key__v19;
        vlSelf->Top__DOT__public_key[1U][1U][0U] = __Vdlyvval__Top__DOT__public_key__v20;
        vlSelf->Top__DOT__public_key[1U][1U][1U] = __Vdlyvval__Top__DOT__public_key__v21;
        vlSelf->Top__DOT__public_key[1U][1U][2U] = __Vdlyvval__Top__DOT__public_key__v22;
        vlSelf->Top__DOT__public_key[1U][1U][3U] = __Vdlyvval__Top__DOT__public_key__v23;
    }
    if (__Vdlyvset__Top__DOT__secretkey__v8) {
        vlSelf->Top__DOT__r[0U][0U] = 0U;
        vlSelf->Top__DOT__A_reg[0U][0U] = 0U;
        vlSelf->Top__DOT__e2[0U] = 0U;
        vlSelf->Top__DOT__e1[0U][0U] = 0U;
        vlSelf->Top__DOT__public_key[0U][0U][0U] = 0U;
    }
    if (__Vdlyvset__Top__DOT__ciphertext__v13) {
        vlSelf->Top__DOT__result[0U][1U] = 0U;
        vlSelf->Top__DOT__result[0U][2U] = 0U;
        vlSelf->Top__DOT__result[0U][3U] = 0U;
        vlSelf->Top__DOT__result[1U][0U] = 0U;
        vlSelf->Top__DOT__result[1U][1U] = 0U;
        vlSelf->Top__DOT__result[1U][2U] = 0U;
        vlSelf->Top__DOT__result[1U][3U] = 0U;
        vlSelf->Top__DOT__s_reg[0U][1U] = 0U;
        vlSelf->Top__DOT__s_reg[0U][2U] = 0U;
        vlSelf->Top__DOT__s_reg[0U][3U] = 0U;
        vlSelf->Top__DOT__s_reg[1U][0U] = 0U;
        vlSelf->Top__DOT__s_reg[1U][1U] = 0U;
        vlSelf->Top__DOT__s_reg[1U][2U] = 0U;
        vlSelf->Top__DOT__s_reg[1U][3U] = 0U;
        vlSelf->Top__DOT__secretkey[0U][1U] = 0U;
        vlSelf->Top__DOT__secretkey[0U][2U] = 0U;
        vlSelf->Top__DOT__secretkey[0U][3U] = 0U;
        vlSelf->Top__DOT__secretkey[1U][0U] = 0U;
        vlSelf->Top__DOT__secretkey[1U][1U] = 0U;
        vlSelf->Top__DOT__secretkey[1U][2U] = 0U;
        vlSelf->Top__DOT__secretkey[1U][3U] = 0U;
        vlSelf->Top__DOT__e_reg[0U][1U] = 0U;
        vlSelf->Top__DOT__e_reg[0U][2U] = 0U;
        vlSelf->Top__DOT__e_reg[0U][3U] = 0U;
        vlSelf->Top__DOT__e_reg[1U][0U] = 0U;
        vlSelf->Top__DOT__e_reg[1U][1U] = 0U;
        vlSelf->Top__DOT__e_reg[1U][2U] = 0U;
        vlSelf->Top__DOT__e_reg[1U][3U] = 0U;
        vlSelf->Top__DOT__ciphertext[1U][0U][0U] = 0U;
        vlSelf->Top__DOT__ciphertext[0U][0U][1U] = 0U;
        vlSelf->Top__DOT__ciphertext[1U][0U][1U] = 0U;
        vlSelf->Top__DOT__ciphertext[0U][0U][2U] = 0U;
        vlSelf->Top__DOT__ciphertext[1U][0U][2U] = 0U;
        vlSelf->Top__DOT__ciphertext[0U][0U][3U] = 0U;
        vlSelf->Top__DOT__ciphertext[1U][0U][3U] = 0U;
        vlSelf->Top__DOT__ciphertext[0U][1U][0U] = 0U;
        vlSelf->Top__DOT__ciphertext[1U][1U][0U] = 0U;
        vlSelf->Top__DOT__ciphertext[0U][1U][1U] = 0U;
        vlSelf->Top__DOT__ciphertext[1U][1U][1U] = 0U;
        vlSelf->Top__DOT__ciphertext[0U][1U][2U] = 0U;
        vlSelf->Top__DOT__ciphertext[1U][1U][2U] = 0U;
        vlSelf->Top__DOT__ciphertext[0U][1U][3U] = 0U;
        vlSelf->Top__DOT__ciphertext[1U][1U][3U] = 0U;
        vlSelf->Top__DOT__r[0U][1U] = 0U;
        vlSelf->Top__DOT__r[0U][2U] = 0U;
        vlSelf->Top__DOT__r[0U][3U] = 0U;
        vlSelf->Top__DOT__r[1U][0U] = 0U;
        vlSelf->Top__DOT__r[1U][1U] = 0U;
        vlSelf->Top__DOT__r[1U][2U] = 0U;
        vlSelf->Top__DOT__r[1U][3U] = 0U;
        vlSelf->Top__DOT__A_reg[0U][1U] = 0U;
        vlSelf->Top__DOT__A_reg[0U][2U] = 0U;
        vlSelf->Top__DOT__A_reg[0U][3U] = 0U;
        vlSelf->Top__DOT__A_reg[1U][0U] = 0U;
        vlSelf->Top__DOT__A_reg[1U][1U] = 0U;
        vlSelf->Top__DOT__A_reg[1U][2U] = 0U;
        vlSelf->Top__DOT__A_reg[1U][3U] = 0U;
        vlSelf->Top__DOT__A_reg[2U][0U] = 0U;
        vlSelf->Top__DOT__A_reg[2U][1U] = 0U;
        vlSelf->Top__DOT__A_reg[2U][2U] = 0U;
        vlSelf->Top__DOT__A_reg[2U][3U] = 0U;
        vlSelf->Top__DOT__A_reg[3U][0U] = 0U;
        vlSelf->Top__DOT__A_reg[3U][1U] = 0U;
        vlSelf->Top__DOT__A_reg[3U][2U] = 0U;
        vlSelf->Top__DOT__A_reg[3U][3U] = 0U;
        vlSelf->Top__DOT__e2[1U] = 0U;
        vlSelf->Top__DOT__e2[2U] = 0U;
        vlSelf->Top__DOT__e2[3U] = 0U;
        vlSelf->Top__DOT__e1[0U][1U] = 0U;
        vlSelf->Top__DOT__e1[0U][2U] = 0U;
        vlSelf->Top__DOT__e1[0U][3U] = 0U;
        vlSelf->Top__DOT__e1[1U][0U] = 0U;
        vlSelf->Top__DOT__e1[1U][1U] = 0U;
        vlSelf->Top__DOT__e1[1U][2U] = 0U;
        vlSelf->Top__DOT__e1[1U][3U] = 0U;
        vlSelf->Top__DOT__public_key[1U][0U][0U] = 0U;
        vlSelf->Top__DOT__public_key[0U][0U][1U] = 0U;
        vlSelf->Top__DOT__public_key[1U][0U][1U] = 0U;
        vlSelf->Top__DOT__public_key[0U][0U][2U] = 0U;
        vlSelf->Top__DOT__public_key[1U][0U][2U] = 0U;
        vlSelf->Top__DOT__public_key[0U][0U][3U] = 0U;
        vlSelf->Top__DOT__public_key[1U][0U][3U] = 0U;
        vlSelf->Top__DOT__public_key[0U][1U][0U] = 0U;
        vlSelf->Top__DOT__public_key[1U][1U][0U] = 0U;
        vlSelf->Top__DOT__public_key[0U][1U][1U] = 0U;
        vlSelf->Top__DOT__public_key[1U][1U][1U] = 0U;
        vlSelf->Top__DOT__public_key[0U][1U][2U] = 0U;
        vlSelf->Top__DOT__public_key[1U][1U][2U] = 0U;
        vlSelf->Top__DOT__public_key[0U][1U][3U] = 0U;
        vlSelf->Top__DOT__public_key[1U][1U][3U] = 0U;
        vlSelf->Top__DOT__public_key[0U][2U][0U] = 0U;
        vlSelf->Top__DOT__public_key[1U][2U][0U] = 0U;
        vlSelf->Top__DOT__public_key[0U][2U][1U] = 0U;
        vlSelf->Top__DOT__public_key[1U][2U][1U] = 0U;
        vlSelf->Top__DOT__public_key[0U][2U][2U] = 0U;
        vlSelf->Top__DOT__public_key[1U][2U][2U] = 0U;
        vlSelf->Top__DOT__public_key[0U][2U][3U] = 0U;
        vlSelf->Top__DOT__public_key[1U][2U][3U] = 0U;
        vlSelf->Top__DOT__public_key[0U][3U][0U] = 0U;
        vlSelf->Top__DOT__public_key[1U][3U][0U] = 0U;
        vlSelf->Top__DOT__public_key[0U][3U][1U] = 0U;
        vlSelf->Top__DOT__public_key[1U][3U][1U] = 0U;
        vlSelf->Top__DOT__public_key[0U][3U][2U] = 0U;
        vlSelf->Top__DOT__public_key[1U][3U][2U] = 0U;
        vlSelf->Top__DOT__public_key[0U][3U][3U] = 0U;
        vlSelf->Top__DOT__public_key[1U][3U][3U] = 0U;
    }
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[3U] 
        = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [0U][3U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[2U] 
        = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [0U][2U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[1U] 
        = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [0U][1U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[0U] 
        = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [0U][0U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[3U] 
        = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [1U][3U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[2U] 
        = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [1U][2U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[1U] 
        = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [1U][1U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[0U] 
        = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [1U][0U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[3U] 
        = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [0U][3U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[2U] 
        = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [0U][2U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[1U] 
        = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [0U][1U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[0U] 
        = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [0U][0U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[3U] 
        = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [1U][3U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[2U] 
        = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [1U][2U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[1U] 
        = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [1U][1U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[0U] 
        = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [1U][0U];
    vlSelf->Top__DOT__secretkey[1U][3U] = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [1U][3U];
    vlSelf->Top__DOT__secretkey[1U][2U] = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [1U][2U];
    vlSelf->Top__DOT__secretkey[1U][1U] = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [1U][1U];
    vlSelf->Top__DOT__secretkey[1U][0U] = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [1U][0U];
    vlSelf->Top__DOT__secretkey[0U][3U] = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [0U][3U];
    vlSelf->Top__DOT__secretkey[0U][2U] = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [0U][2U];
    vlSelf->Top__DOT__secretkey[0U][1U] = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [0U][1U];
    vlSelf->Top__DOT__secretkey[0U][0U] = vlSelf->Top__DOT____Vcellout__keygen__secretkey
        [0U][0U];
    vlSelf->Top__DOT__encryption__DOT__coefficients_scaled[0U] 
        = ((1U & (IData)(vlSelf->Top__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelf->Top__DOT__encryption__DOT__coefficients_scaled[1U] 
        = ((2U & (IData)(vlSelf->Top__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelf->Top__DOT__encryption__DOT__coefficients_scaled[2U] 
        = ((4U & (IData)(vlSelf->Top__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelf->Top__DOT__encryption__DOT__coefficients_scaled[3U] 
        = ((8U & (IData)(vlSelf->Top__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelf->Top__DOT____Vcellinp__keygen__secret_key[1U][3U] 
        = vlSelf->Top__DOT__s_reg[1U][3U];
    vlSelf->Top__DOT____Vcellinp__keygen__secret_key[1U][2U] 
        = vlSelf->Top__DOT__s_reg[1U][2U];
    vlSelf->Top__DOT____Vcellinp__keygen__secret_key[1U][1U] 
        = vlSelf->Top__DOT__s_reg[1U][1U];
    vlSelf->Top__DOT____Vcellinp__keygen__secret_key[1U][0U] 
        = vlSelf->Top__DOT__s_reg[1U][0U];
    vlSelf->Top__DOT____Vcellinp__keygen__secret_key[0U][3U] 
        = vlSelf->Top__DOT__s_reg[0U][3U];
    vlSelf->Top__DOT____Vcellinp__keygen__secret_key[0U][2U] 
        = vlSelf->Top__DOT__s_reg[0U][2U];
    vlSelf->Top__DOT____Vcellinp__keygen__secret_key[0U][1U] 
        = vlSelf->Top__DOT__s_reg[0U][1U];
    vlSelf->Top__DOT____Vcellinp__keygen__secret_key[0U][0U] 
        = vlSelf->Top__DOT__s_reg[0U][0U];
    vlSelf->Top__DOT____Vcellinp__keygen__e[1U][3U] 
        = vlSelf->Top__DOT__e_reg[1U][3U];
    vlSelf->Top__DOT____Vcellinp__keygen__e[1U][2U] 
        = vlSelf->Top__DOT__e_reg[1U][2U];
    vlSelf->Top__DOT____Vcellinp__keygen__e[1U][1U] 
        = vlSelf->Top__DOT__e_reg[1U][1U];
    vlSelf->Top__DOT____Vcellinp__keygen__e[1U][0U] 
        = vlSelf->Top__DOT__e_reg[1U][0U];
    vlSelf->Top__DOT____Vcellinp__keygen__e[0U][3U] 
        = vlSelf->Top__DOT__e_reg[0U][3U];
    vlSelf->Top__DOT____Vcellinp__keygen__e[0U][2U] 
        = vlSelf->Top__DOT__e_reg[0U][2U];
    vlSelf->Top__DOT____Vcellinp__keygen__e[0U][1U] 
        = vlSelf->Top__DOT__e_reg[0U][1U];
    vlSelf->Top__DOT____Vcellinp__keygen__e[0U][0U] 
        = vlSelf->Top__DOT__e_reg[0U][0U];
    vlSelf->Top__DOT____Vcellinp__encryption__r[1U][3U] 
        = vlSelf->Top__DOT__r[1U][3U];
    vlSelf->Top__DOT____Vcellinp__encryption__r[1U][2U] 
        = vlSelf->Top__DOT__r[1U][2U];
    vlSelf->Top__DOT____Vcellinp__encryption__r[1U][1U] 
        = vlSelf->Top__DOT__r[1U][1U];
    vlSelf->Top__DOT____Vcellinp__encryption__r[1U][0U] 
        = vlSelf->Top__DOT__r[1U][0U];
    vlSelf->Top__DOT____Vcellinp__encryption__r[0U][3U] 
        = vlSelf->Top__DOT__r[0U][3U];
    vlSelf->Top__DOT____Vcellinp__encryption__r[0U][2U] 
        = vlSelf->Top__DOT__r[0U][2U];
    vlSelf->Top__DOT____Vcellinp__encryption__r[0U][1U] 
        = vlSelf->Top__DOT__r[0U][1U];
    vlSelf->Top__DOT____Vcellinp__encryption__r[0U][0U] 
        = vlSelf->Top__DOT__r[0U][0U];
    vlSelf->Top__DOT____Vcellinp__encryption__e2[3U] 
        = vlSelf->Top__DOT__e2[3U];
    vlSelf->Top__DOT____Vcellinp__encryption__e2[2U] 
        = vlSelf->Top__DOT__e2[2U];
    vlSelf->Top__DOT____Vcellinp__encryption__e2[1U] 
        = vlSelf->Top__DOT__e2[1U];
    vlSelf->Top__DOT____Vcellinp__encryption__e2[0U] 
        = vlSelf->Top__DOT__e2[0U];
    vlSelf->Top__DOT____Vcellinp__encryption__e1[1U][3U] 
        = vlSelf->Top__DOT__e1[1U][3U];
    vlSelf->Top__DOT____Vcellinp__encryption__e1[1U][2U] 
        = vlSelf->Top__DOT__e1[1U][2U];
    vlSelf->Top__DOT____Vcellinp__encryption__e1[1U][1U] 
        = vlSelf->Top__DOT__e1[1U][1U];
    vlSelf->Top__DOT____Vcellinp__encryption__e1[1U][0U] 
        = vlSelf->Top__DOT__e1[1U][0U];
    vlSelf->Top__DOT____Vcellinp__encryption__e1[0U][3U] 
        = vlSelf->Top__DOT__e1[0U][3U];
    vlSelf->Top__DOT____Vcellinp__encryption__e1[0U][2U] 
        = vlSelf->Top__DOT__e1[0U][2U];
    vlSelf->Top__DOT____Vcellinp__encryption__e1[0U][1U] 
        = vlSelf->Top__DOT__e1[0U][1U];
    vlSelf->Top__DOT____Vcellinp__encryption__e1[0U][0U] 
        = vlSelf->Top__DOT__e1[0U][0U];
    vlSelf->Top__DOT____Vcellinp__decryption__secret_key[1U][3U] 
        = vlSelf->Top__DOT__secretkey[1U][3U];
    vlSelf->Top__DOT____Vcellinp__decryption__secret_key[1U][2U] 
        = vlSelf->Top__DOT__secretkey[1U][2U];
    vlSelf->Top__DOT____Vcellinp__decryption__secret_key[1U][1U] 
        = vlSelf->Top__DOT__secretkey[1U][1U];
    vlSelf->Top__DOT____Vcellinp__decryption__secret_key[1U][0U] 
        = vlSelf->Top__DOT__secretkey[1U][0U];
    vlSelf->Top__DOT____Vcellinp__decryption__secret_key[0U][3U] 
        = vlSelf->Top__DOT__secretkey[0U][3U];
    vlSelf->Top__DOT____Vcellinp__decryption__secret_key[0U][2U] 
        = vlSelf->Top__DOT__secretkey[0U][2U];
    vlSelf->Top__DOT____Vcellinp__decryption__secret_key[0U][1U] 
        = vlSelf->Top__DOT__secretkey[0U][1U];
    vlSelf->Top__DOT____Vcellinp__decryption__secret_key[0U][0U] 
        = vlSelf->Top__DOT__secretkey[0U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[3U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [0U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[2U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [0U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[1U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [0U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[0U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [0U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[3U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [1U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[2U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [1U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[1U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [1U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[0U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [1U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[3U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [0U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[2U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [0U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[1U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [0U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[0U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [0U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[3U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [1U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[2U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [1U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[1U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [1U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[0U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [1U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[3U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [0U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[2U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [0U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[1U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [0U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[0U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [0U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[3U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [1U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[2U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [1U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[1U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [1U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[0U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__r
        [1U][0U];
    vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[3U] 
        = vlSelf->Top__DOT____Vcellinp__decryption__secret_key
        [0U][3U];
    vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[2U] 
        = vlSelf->Top__DOT____Vcellinp__decryption__secret_key
        [0U][2U];
    vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[1U] 
        = vlSelf->Top__DOT____Vcellinp__decryption__secret_key
        [0U][1U];
    vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[0U] 
        = vlSelf->Top__DOT____Vcellinp__decryption__secret_key
        [0U][0U];
    vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[3U] 
        = vlSelf->Top__DOT____Vcellinp__decryption__secret_key
        [1U][3U];
    vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[2U] 
        = vlSelf->Top__DOT____Vcellinp__decryption__secret_key
        [1U][2U];
    vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[1U] 
        = vlSelf->Top__DOT____Vcellinp__decryption__secret_key
        [1U][1U];
    vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[0U] 
        = vlSelf->Top__DOT____Vcellinp__decryption__secret_key
        [1U][0U];
}

VL_INLINE_OPT void VTop___024root___sequent__TOP__1(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT____Vcellout__keygen__combined_output__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v3;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v5;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v6;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v7;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v8;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v9;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v10;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v11;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v12;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v13;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v14;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v15;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v16;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v17;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v18;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v19;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v20;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v21;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v22;
    IData/*31:0*/ __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v23;
    CData/*0:0*/ __Vdlyvset__Top__DOT____Vcellout__keygen__combined_output__v24;
    IData/*31:0*/ __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v3;
    CData/*0:0*/ __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v3;
    CData/*0:0*/ __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v3;
    CData/*0:0*/ __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v3;
    CData/*0:0*/ __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v3;
    CData/*0:0*/ __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v3;
    CData/*0:0*/ __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v3;
    CData/*0:0*/ __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v3;
    CData/*0:0*/ __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v3;
    CData/*0:0*/ __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v3;
    CData/*0:0*/ __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v3;
    CData/*0:0*/ __Vdlyvset__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v4;
    IData/*31:0*/ __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v2;
    IData/*31:0*/ __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v3;
    CData/*0:0*/ __Vdlyvset__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v4;
    // Body
    __Vdlyvset__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v0 = 0U;
    __Vdlyvset__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v4 = 0U;
    __Vdlyvset__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v0 = 0U;
    __Vdlyvset__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v4 = 0U;
    __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v0 = 0U;
    __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v4 = 0U;
    __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v0 = 0U;
    __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v4 = 0U;
    __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v0 = 0U;
    __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v4 = 0U;
    __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v0 = 0U;
    __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v4 = 0U;
    __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v0 = 0U;
    __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v4 = 0U;
    __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v0 = 0U;
    __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v4 = 0U;
    __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v0 = 0U;
    __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v4 = 0U;
    __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v0 = 0U;
    __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v4 = 0U;
    __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v0 = 0U;
    __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v4 = 0U;
    __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v0 = 0U;
    __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v4 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->Top__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__k = 4U;
        vlSelf->Top__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j = 4U;
        vlSelf->Top__DOT__keygen__DOT__unnamedblk6__DOT__i = 2U;
    }
    __Vdlyvset__Top__DOT____Vcellout__keygen__combined_output__v0 = 0U;
    __Vdlyvset__Top__DOT____Vcellout__keygen__combined_output__v24 = 0U;
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            vlSelf->Top__DOT__keygen__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 4U;
            vlSelf->Top__DOT__keygen__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 4U;
            vlSelf->Top__DOT__keygen__DOT__unnamedblk9__DOT__i = 4U;
            vlSelf->Top__DOT__keygen__DOT__unnamedblk11__DOT__i = 2U;
            __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v0 
                = vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                [0U];
            __Vdlyvset__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v0 = 1U;
            __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v1 
                = vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                [1U];
            __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v2 
                = vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                [2U];
            __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v3 
                = vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                [3U];
            __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v0 
                = vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                [0U];
            __Vdlyvset__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v0 = 1U;
            __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v1 
                = vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                [1U];
            __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v2 
                = vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                [2U];
            __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v3 
                = vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                [3U];
            __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v0 
                = vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                [0U];
            __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v0 = 1U;
            __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v1 
                = vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                [1U];
            __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v2 
                = vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                [2U];
            __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v3 
                = vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                [3U];
            __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v0 
                = vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                [0U];
            __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v0 = 1U;
            __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v1 
                = vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                [1U];
            __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v2 
                = vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                [2U];
            __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v3 
                = vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                [3U];
            __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v0 
                = vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                [0U];
            __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v0 = 1U;
            __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v1 
                = vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                [1U];
            __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v2 
                = vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                [2U];
            __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v3 
                = vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                [3U];
            __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v0 
                = vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                [0U];
            __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v0 = 1U;
            __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v1 
                = vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                [1U];
            __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v2 
                = vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                [2U];
            __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v3 
                = vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                [3U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v0 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                [0U];
            __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v0 = 1U;
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v1 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                [1U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v2 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                [2U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v3 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                [3U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v0 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                [0U];
            __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v0 = 1U;
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v1 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                [1U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v2 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                [2U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v3 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                [3U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v0 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                [0U];
            __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v0 = 1U;
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v1 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                [1U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v2 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                [2U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v3 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                [3U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v0 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                [0U];
            __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v0 = 1U;
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v1 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                [1U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v2 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                [2U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v3 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                [3U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v0 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                [0U];
            __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v0 = 1U;
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v1 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                [1U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v2 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                [2U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v3 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                [3U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v0 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                [0U];
            __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v0 = 1U;
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v1 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                [1U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v2 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                [2U];
            __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v3 
                = vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                [3U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v0 
                = vlSelf->Top__DOT____Vcellinp__keygen__A
                [0U][0U];
            __Vdlyvset__Top__DOT____Vcellout__keygen__combined_output__v0 = 1U;
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v1 
                = vlSelf->Top__DOT____Vcellinp__keygen__A
                [0U][1U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v2 
                = vlSelf->Top__DOT____Vcellinp__keygen__A
                [0U][2U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v3 
                = vlSelf->Top__DOT____Vcellinp__keygen__A
                [0U][3U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v4 
                = vlSelf->Top__DOT____Vcellinp__keygen__A
                [1U][0U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v5 
                = vlSelf->Top__DOT____Vcellinp__keygen__A
                [1U][1U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v6 
                = vlSelf->Top__DOT____Vcellinp__keygen__A
                [1U][2U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v7 
                = vlSelf->Top__DOT____Vcellinp__keygen__A
                [1U][3U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v8 
                = vlSelf->Top__DOT____Vcellinp__keygen__A
                [2U][0U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v9 
                = vlSelf->Top__DOT____Vcellinp__keygen__A
                [2U][1U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v10 
                = vlSelf->Top__DOT____Vcellinp__keygen__A
                [2U][2U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v11 
                = vlSelf->Top__DOT____Vcellinp__keygen__A
                [2U][3U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v12 
                = vlSelf->Top__DOT____Vcellinp__keygen__A
                [3U][0U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v13 
                = vlSelf->Top__DOT____Vcellinp__keygen__A
                [3U][1U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v14 
                = vlSelf->Top__DOT____Vcellinp__keygen__A
                [3U][2U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v15 
                = vlSelf->Top__DOT____Vcellinp__keygen__A
                [3U][3U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v16 
                = vlSelf->Top__DOT____Vcellout__keygen__result
                [0U][0U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v17 
                = vlSelf->Top__DOT____Vcellout__keygen__result
                [0U][1U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v18 
                = vlSelf->Top__DOT____Vcellout__keygen__result
                [0U][2U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v19 
                = vlSelf->Top__DOT____Vcellout__keygen__result
                [0U][3U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v20 
                = vlSelf->Top__DOT____Vcellout__keygen__result
                [1U][0U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v21 
                = vlSelf->Top__DOT____Vcellout__keygen__result
                [1U][1U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v22 
                = vlSelf->Top__DOT____Vcellout__keygen__result
                [1U][2U];
            __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v23 
                = vlSelf->Top__DOT____Vcellout__keygen__result
                [1U][3U];
        }
    } else {
        __Vdlyvset__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v4 = 1U;
        __Vdlyvset__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v4 = 1U;
        __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v4 = 1U;
        __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v4 = 1U;
        __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v4 = 1U;
        __Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v4 = 1U;
        __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v4 = 1U;
        __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v4 = 1U;
        __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v4 = 1U;
        __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v4 = 1U;
        __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v4 = 1U;
        __Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v4 = 1U;
        __Vdlyvset__Top__DOT____Vcellout__keygen__combined_output__v24 = 1U;
    }
    if (__Vdlyvset__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v0) {
        vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[0U] 
            = __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v0;
        vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[1U] 
            = __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v1;
        vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[2U] 
            = __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v2;
        vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[3U] 
            = __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v3;
    }
    if (__Vdlyvset__Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out__v4) {
        vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[0U] = 0U;
        vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[1U] = 0U;
        vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[2U] = 0U;
        vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[3U] = 0U;
    }
    if (__Vdlyvset__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v0) {
        vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[0U] 
            = __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v0;
        vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[1U] 
            = __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v1;
        vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[2U] 
            = __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v2;
        vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[3U] 
            = __Vdlyvval__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v3;
    }
    if (__Vdlyvset__Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out__v4) {
        vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[0U] = 0U;
        vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[1U] = 0U;
        vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[2U] = 0U;
        vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[3U] = 0U;
    }
    if (__Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v0) {
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[0U] 
            = __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v0;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[1U] 
            = __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v1;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[2U] 
            = __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v2;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[3U] 
            = __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v3;
    }
    if (__Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out__v4) {
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[0U] = 0U;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[1U] = 0U;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[2U] = 0U;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[3U] = 0U;
    }
    if (__Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v0) {
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[0U] 
            = __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v0;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[1U] 
            = __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v1;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[2U] 
            = __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v2;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[3U] 
            = __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v3;
    }
    if (__Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out__v4) {
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[0U] = 0U;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[1U] = 0U;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[2U] = 0U;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[3U] = 0U;
    }
    if (__Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v0) {
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[0U] 
            = __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v0;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[1U] 
            = __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v1;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[2U] 
            = __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v2;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[3U] 
            = __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v3;
    }
    if (__Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out__v4) {
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[0U] = 0U;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[1U] = 0U;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[2U] = 0U;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[3U] = 0U;
    }
    if (__Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v0) {
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[0U] 
            = __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v0;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[1U] 
            = __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v1;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[2U] 
            = __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v2;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[3U] 
            = __Vdlyvval__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v3;
    }
    if (__Vdlyvset__Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out__v4) {
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[0U] = 0U;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[1U] = 0U;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[2U] = 0U;
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[3U] = 0U;
    }
    if (__Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v0) {
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[0U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v0;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[1U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v1;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[2U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v2;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[3U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v3;
    }
    if (__Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out__v4) {
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[0U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[1U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[2U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[3U] = 0U;
    }
    if (__Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v0) {
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[0U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v0;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[1U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v1;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[2U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v2;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[3U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v3;
    }
    if (__Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out__v4) {
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[0U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[1U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[2U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[3U] = 0U;
    }
    if (__Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v0) {
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[0U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v0;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[1U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v1;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[2U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v2;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[3U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v3;
    }
    if (__Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out__v4) {
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[0U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[1U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[2U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[3U] = 0U;
    }
    if (__Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v0) {
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[0U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v0;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[1U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v1;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[2U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v2;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[3U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v3;
    }
    if (__Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out__v4) {
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[0U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[1U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[2U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[3U] = 0U;
    }
    if (__Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v0) {
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[0U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v0;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[1U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v1;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[2U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v2;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[3U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v3;
    }
    if (__Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out__v4) {
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[0U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[1U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[2U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[3U] = 0U;
    }
    if (__Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v0) {
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[0U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v0;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[1U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v1;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[2U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v2;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[3U] 
            = __Vdlyvval__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v3;
    }
    if (__Vdlyvset__Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out__v4) {
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[0U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[1U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[2U] = 0U;
        vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[3U] = 0U;
    }
    if (__Vdlyvset__Top__DOT____Vcellout__keygen__combined_output__v0) {
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][0U][0U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v0;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][0U][1U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v1;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][0U][2U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v2;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][0U][3U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v3;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][1U][0U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v4;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][1U][1U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v5;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][1U][2U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v6;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][1U][3U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v7;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][2U][0U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v8;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][2U][1U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v9;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][2U][2U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v10;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][2U][3U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v11;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][3U][0U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v12;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][3U][1U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v13;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][3U][2U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v14;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][3U][3U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v15;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][0U][0U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v16;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][0U][1U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v17;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][0U][2U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v18;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][0U][3U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v19;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][1U][0U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v20;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][1U][1U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v21;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][1U][2U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v22;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][1U][3U] 
            = __Vdlyvval__Top__DOT____Vcellout__keygen__combined_output__v23;
    }
    if (__Vdlyvset__Top__DOT____Vcellout__keygen__combined_output__v24) {
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][0U][0U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][0U][1U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][0U][2U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][0U][3U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][1U][0U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][1U][1U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][1U][2U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][1U][3U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][2U][0U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][2U][1U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][2U][2U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][2U][3U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][3U][0U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][3U][1U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][3U][2U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[0U][3U][3U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][0U][0U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][0U][1U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][0U][2U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][0U][3U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][1U][0U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][1U][1U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][1U][2U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][1U][3U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][2U][0U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][2U][1U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][2U][2U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][2U][3U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][3U][0U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][3U][1U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][3U][2U] = 0U;
        vlSelf->Top__DOT____Vcellout__keygen__combined_output[1U][3U][3U] = 0U;
    }
    vlSelf->Top__DOT__decryption__DOT__poly_out1[3U] 
        = vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out
        [3U];
    vlSelf->Top__DOT__decryption__DOT__poly_out1[2U] 
        = vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out
        [2U];
    vlSelf->Top__DOT__decryption__DOT__poly_out1[1U] 
        = vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out
        [1U];
    vlSelf->Top__DOT__decryption__DOT__poly_out1[0U] 
        = vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out
        [0U];
    vlSelf->Top__DOT__decryption__DOT__poly_out0[3U] 
        = vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out
        [3U];
    vlSelf->Top__DOT__decryption__DOT__poly_out0[2U] 
        = vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out
        [2U];
    vlSelf->Top__DOT__decryption__DOT__poly_out0[1U] 
        = vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out
        [1U];
    vlSelf->Top__DOT__decryption__DOT__poly_out0[0U] 
        = vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out
        [0U];
    vlSelf->Top__DOT__keygen__DOT__poly_out3[3U] = 
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out
        [3U];
    vlSelf->Top__DOT__keygen__DOT__poly_out3[2U] = 
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out
        [2U];
    vlSelf->Top__DOT__keygen__DOT__poly_out3[1U] = 
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out
        [1U];
    vlSelf->Top__DOT__keygen__DOT__poly_out3[0U] = 
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out
        [0U];
    vlSelf->Top__DOT__keygen__DOT__poly_out2[3U] = 
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out
        [3U];
    vlSelf->Top__DOT__keygen__DOT__poly_out2[2U] = 
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out
        [2U];
    vlSelf->Top__DOT__keygen__DOT__poly_out2[1U] = 
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out
        [1U];
    vlSelf->Top__DOT__keygen__DOT__poly_out2[0U] = 
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out
        [0U];
    vlSelf->Top__DOT__keygen__DOT__poly_out1[3U] = 
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out
        [3U];
    vlSelf->Top__DOT__keygen__DOT__poly_out1[2U] = 
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out
        [2U];
    vlSelf->Top__DOT__keygen__DOT__poly_out1[1U] = 
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out
        [1U];
    vlSelf->Top__DOT__keygen__DOT__poly_out1[0U] = 
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out
        [0U];
    vlSelf->Top__DOT__keygen__DOT__poly_out0[3U] = 
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out
        [3U];
    vlSelf->Top__DOT__keygen__DOT__poly_out0[2U] = 
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out
        [2U];
    vlSelf->Top__DOT__keygen__DOT__poly_out0[1U] = 
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out
        [1U];
    vlSelf->Top__DOT__keygen__DOT__poly_out0[0U] = 
        vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out
        [0U];
    vlSelf->Top__DOT__encryption__DOT__poly_out5[3U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out
        [3U];
    vlSelf->Top__DOT__encryption__DOT__poly_out5[2U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out
        [2U];
    vlSelf->Top__DOT__encryption__DOT__poly_out5[1U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out
        [1U];
    vlSelf->Top__DOT__encryption__DOT__poly_out5[0U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out
        [0U];
    vlSelf->Top__DOT__encryption__DOT__poly_out4[3U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out
        [3U];
    vlSelf->Top__DOT__encryption__DOT__poly_out4[2U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out
        [2U];
    vlSelf->Top__DOT__encryption__DOT__poly_out4[1U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out
        [1U];
    vlSelf->Top__DOT__encryption__DOT__poly_out4[0U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out
        [0U];
    vlSelf->Top__DOT__encryption__DOT__poly_out3[3U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out
        [3U];
    vlSelf->Top__DOT__encryption__DOT__poly_out3[2U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out
        [2U];
    vlSelf->Top__DOT__encryption__DOT__poly_out3[1U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out
        [1U];
    vlSelf->Top__DOT__encryption__DOT__poly_out3[0U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out
        [0U];
    vlSelf->Top__DOT__encryption__DOT__poly_out2[3U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out
        [3U];
    vlSelf->Top__DOT__encryption__DOT__poly_out2[2U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out
        [2U];
    vlSelf->Top__DOT__encryption__DOT__poly_out2[1U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out
        [1U];
    vlSelf->Top__DOT__encryption__DOT__poly_out2[0U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out
        [0U];
    vlSelf->Top__DOT__encryption__DOT__poly_out1[3U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out
        [3U];
    vlSelf->Top__DOT__encryption__DOT__poly_out1[2U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out
        [2U];
    vlSelf->Top__DOT__encryption__DOT__poly_out1[1U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out
        [1U];
    vlSelf->Top__DOT__encryption__DOT__poly_out1[0U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out
        [0U];
    vlSelf->Top__DOT__encryption__DOT__poly_out0[3U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out
        [3U];
    vlSelf->Top__DOT__encryption__DOT__poly_out0[2U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out
        [2U];
    vlSelf->Top__DOT__encryption__DOT__poly_out0[1U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out
        [1U];
    vlSelf->Top__DOT__encryption__DOT__poly_out0[0U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out
        [0U];
    vlSelf->Top__DOT__public_key[1U][3U][3U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [1U][3U][3U];
    vlSelf->Top__DOT__public_key[1U][3U][2U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [1U][3U][2U];
    vlSelf->Top__DOT__public_key[1U][3U][1U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [1U][3U][1U];
    vlSelf->Top__DOT__public_key[1U][3U][0U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [1U][3U][0U];
    vlSelf->Top__DOT__public_key[1U][2U][3U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [1U][2U][3U];
    vlSelf->Top__DOT__public_key[1U][2U][2U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [1U][2U][2U];
    vlSelf->Top__DOT__public_key[1U][2U][1U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [1U][2U][1U];
    vlSelf->Top__DOT__public_key[1U][2U][0U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [1U][2U][0U];
    vlSelf->Top__DOT__public_key[1U][1U][3U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [1U][1U][3U];
    vlSelf->Top__DOT__public_key[1U][1U][2U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [1U][1U][2U];
    vlSelf->Top__DOT__public_key[1U][1U][1U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [1U][1U][1U];
    vlSelf->Top__DOT__public_key[1U][1U][0U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [1U][1U][0U];
    vlSelf->Top__DOT__public_key[1U][0U][3U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [1U][0U][3U];
    vlSelf->Top__DOT__public_key[1U][0U][2U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [1U][0U][2U];
    vlSelf->Top__DOT__public_key[1U][0U][1U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [1U][0U][1U];
    vlSelf->Top__DOT__public_key[1U][0U][0U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [1U][0U][0U];
    vlSelf->Top__DOT__public_key[0U][3U][3U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [0U][3U][3U];
    vlSelf->Top__DOT__public_key[0U][3U][2U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [0U][3U][2U];
    vlSelf->Top__DOT__public_key[0U][3U][1U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [0U][3U][1U];
    vlSelf->Top__DOT__public_key[0U][3U][0U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [0U][3U][0U];
    vlSelf->Top__DOT__public_key[0U][2U][3U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [0U][2U][3U];
    vlSelf->Top__DOT__public_key[0U][2U][2U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [0U][2U][2U];
    vlSelf->Top__DOT__public_key[0U][2U][1U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [0U][2U][1U];
    vlSelf->Top__DOT__public_key[0U][2U][0U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [0U][2U][0U];
    vlSelf->Top__DOT__public_key[0U][1U][3U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [0U][1U][3U];
    vlSelf->Top__DOT__public_key[0U][1U][2U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [0U][1U][2U];
    vlSelf->Top__DOT__public_key[0U][1U][1U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [0U][1U][1U];
    vlSelf->Top__DOT__public_key[0U][1U][0U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [0U][1U][0U];
    vlSelf->Top__DOT__public_key[0U][0U][3U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [0U][0U][3U];
    vlSelf->Top__DOT__public_key[0U][0U][2U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [0U][0U][2U];
    vlSelf->Top__DOT__public_key[0U][0U][1U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [0U][0U][1U];
    vlSelf->Top__DOT__public_key[0U][0U][0U] = vlSelf->Top__DOT____Vcellout__keygen__combined_output
        [0U][0U][0U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[1U][3U][3U] 
        = vlSelf->Top__DOT__public_key[1U][3U][3U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[1U][3U][2U] 
        = vlSelf->Top__DOT__public_key[1U][3U][2U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[1U][3U][1U] 
        = vlSelf->Top__DOT__public_key[1U][3U][1U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[1U][3U][0U] 
        = vlSelf->Top__DOT__public_key[1U][3U][0U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[1U][2U][3U] 
        = vlSelf->Top__DOT__public_key[1U][2U][3U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[1U][2U][2U] 
        = vlSelf->Top__DOT__public_key[1U][2U][2U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[1U][2U][1U] 
        = vlSelf->Top__DOT__public_key[1U][2U][1U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[1U][2U][0U] 
        = vlSelf->Top__DOT__public_key[1U][2U][0U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[1U][1U][3U] 
        = vlSelf->Top__DOT__public_key[1U][1U][3U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[1U][1U][2U] 
        = vlSelf->Top__DOT__public_key[1U][1U][2U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[1U][1U][1U] 
        = vlSelf->Top__DOT__public_key[1U][1U][1U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[1U][1U][0U] 
        = vlSelf->Top__DOT__public_key[1U][1U][0U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[1U][0U][3U] 
        = vlSelf->Top__DOT__public_key[1U][0U][3U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[1U][0U][2U] 
        = vlSelf->Top__DOT__public_key[1U][0U][2U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[1U][0U][1U] 
        = vlSelf->Top__DOT__public_key[1U][0U][1U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[1U][0U][0U] 
        = vlSelf->Top__DOT__public_key[1U][0U][0U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[0U][3U][3U] 
        = vlSelf->Top__DOT__public_key[0U][3U][3U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[0U][3U][2U] 
        = vlSelf->Top__DOT__public_key[0U][3U][2U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[0U][3U][1U] 
        = vlSelf->Top__DOT__public_key[0U][3U][1U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[0U][3U][0U] 
        = vlSelf->Top__DOT__public_key[0U][3U][0U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[0U][2U][3U] 
        = vlSelf->Top__DOT__public_key[0U][2U][3U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[0U][2U][2U] 
        = vlSelf->Top__DOT__public_key[0U][2U][2U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[0U][2U][1U] 
        = vlSelf->Top__DOT__public_key[0U][2U][1U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[0U][2U][0U] 
        = vlSelf->Top__DOT__public_key[0U][2U][0U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[0U][1U][3U] 
        = vlSelf->Top__DOT__public_key[0U][1U][3U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[0U][1U][2U] 
        = vlSelf->Top__DOT__public_key[0U][1U][2U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[0U][1U][1U] 
        = vlSelf->Top__DOT__public_key[0U][1U][1U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[0U][1U][0U] 
        = vlSelf->Top__DOT__public_key[0U][1U][0U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[0U][0U][3U] 
        = vlSelf->Top__DOT__public_key[0U][0U][3U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[0U][0U][2U] 
        = vlSelf->Top__DOT__public_key[0U][0U][2U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[0U][0U][1U] 
        = vlSelf->Top__DOT__public_key[0U][0U][1U];
    vlSelf->Top__DOT____Vcellinp__encryption__combined_output[0U][0U][0U] 
        = vlSelf->Top__DOT__public_key[0U][0U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[3U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [1U][0U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[2U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [1U][0U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[1U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [1U][0U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[0U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [1U][0U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[3U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [1U][1U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[2U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [1U][1U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[1U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [1U][1U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[0U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [1U][1U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][3U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [0U][3U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][2U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [0U][3U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][1U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [0U][3U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][0U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [0U][3U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][3U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [0U][2U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][2U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [0U][2U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][1U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [0U][2U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][0U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [0U][2U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][3U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [0U][1U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][2U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [0U][1U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][1U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [0U][1U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][0U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [0U][1U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][3U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [0U][0U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][2U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [0U][0U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][1U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [0U][0U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][0U] 
        = vlSelf->Top__DOT____Vcellinp__encryption__combined_output
        [0U][0U][0U];
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[0U][3U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[0U][2U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[0U][1U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[0U][0U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[1U][3U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[1U][2U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[1U][1U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[1U][0U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[2U][3U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[2U][2U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[2U][1U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[2U][0U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[3U][3U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[3U][2U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[3U][1U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[3U][0U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][0U];
    vlSelf->Top__DOT__encryption__DOT__transposed_matrix[3U][3U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [3U][3U];
    vlSelf->Top__DOT__encryption__DOT__transposed_matrix[3U][2U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [3U][2U];
    vlSelf->Top__DOT__encryption__DOT__transposed_matrix[3U][1U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [3U][1U];
    vlSelf->Top__DOT__encryption__DOT__transposed_matrix[3U][0U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [3U][0U];
    vlSelf->Top__DOT__encryption__DOT__transposed_matrix[2U][3U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [2U][3U];
    vlSelf->Top__DOT__encryption__DOT__transposed_matrix[2U][2U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [2U][2U];
    vlSelf->Top__DOT__encryption__DOT__transposed_matrix[2U][1U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [2U][1U];
    vlSelf->Top__DOT__encryption__DOT__transposed_matrix[2U][0U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [2U][0U];
    vlSelf->Top__DOT__encryption__DOT__transposed_matrix[1U][3U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [1U][3U];
    vlSelf->Top__DOT__encryption__DOT__transposed_matrix[1U][2U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [1U][2U];
    vlSelf->Top__DOT__encryption__DOT__transposed_matrix[1U][1U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [1U][1U];
    vlSelf->Top__DOT__encryption__DOT__transposed_matrix[1U][0U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [1U][0U];
    vlSelf->Top__DOT__encryption__DOT__transposed_matrix[0U][3U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [0U][3U];
    vlSelf->Top__DOT__encryption__DOT__transposed_matrix[0U][2U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [0U][2U];
    vlSelf->Top__DOT__encryption__DOT__transposed_matrix[0U][1U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [0U][1U];
    vlSelf->Top__DOT__encryption__DOT__transposed_matrix[0U][0U] 
        = vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [0U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[3U] 
        = vlSelf->Top__DOT__encryption__DOT__transposed_matrix
        [0U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[2U] 
        = vlSelf->Top__DOT__encryption__DOT__transposed_matrix
        [0U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[1U] 
        = vlSelf->Top__DOT__encryption__DOT__transposed_matrix
        [0U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[0U] 
        = vlSelf->Top__DOT__encryption__DOT__transposed_matrix
        [0U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[3U] 
        = vlSelf->Top__DOT__encryption__DOT__transposed_matrix
        [1U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[2U] 
        = vlSelf->Top__DOT__encryption__DOT__transposed_matrix
        [1U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[1U] 
        = vlSelf->Top__DOT__encryption__DOT__transposed_matrix
        [1U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[0U] 
        = vlSelf->Top__DOT__encryption__DOT__transposed_matrix
        [1U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[3U] 
        = vlSelf->Top__DOT__encryption__DOT__transposed_matrix
        [2U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[2U] 
        = vlSelf->Top__DOT__encryption__DOT__transposed_matrix
        [2U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[1U] 
        = vlSelf->Top__DOT__encryption__DOT__transposed_matrix
        [2U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[0U] 
        = vlSelf->Top__DOT__encryption__DOT__transposed_matrix
        [2U][0U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[3U] 
        = vlSelf->Top__DOT__encryption__DOT__transposed_matrix
        [3U][3U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[2U] 
        = vlSelf->Top__DOT__encryption__DOT__transposed_matrix
        [3U][2U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[1U] 
        = vlSelf->Top__DOT__encryption__DOT__transposed_matrix
        [3U][1U];
    vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[0U] 
        = vlSelf->Top__DOT__encryption__DOT__transposed_matrix
        [3U][0U];
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [3U], (IData)(0x11U)));
}

VL_INLINE_OPT void VTop___024root___sequent__TOP__2(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->Top__DOT____Vcellinp__keygen__A[3U][3U] 
        = vlSelf->Top__DOT__A_reg[3U][3U];
    vlSelf->Top__DOT____Vcellinp__keygen__A[3U][2U] 
        = vlSelf->Top__DOT__A_reg[3U][2U];
    vlSelf->Top__DOT____Vcellinp__keygen__A[3U][1U] 
        = vlSelf->Top__DOT__A_reg[3U][1U];
    vlSelf->Top__DOT____Vcellinp__keygen__A[3U][0U] 
        = vlSelf->Top__DOT__A_reg[3U][0U];
    vlSelf->Top__DOT____Vcellinp__keygen__A[2U][3U] 
        = vlSelf->Top__DOT__A_reg[2U][3U];
    vlSelf->Top__DOT____Vcellinp__keygen__A[2U][2U] 
        = vlSelf->Top__DOT__A_reg[2U][2U];
    vlSelf->Top__DOT____Vcellinp__keygen__A[2U][1U] 
        = vlSelf->Top__DOT__A_reg[2U][1U];
    vlSelf->Top__DOT____Vcellinp__keygen__A[2U][0U] 
        = vlSelf->Top__DOT__A_reg[2U][0U];
    vlSelf->Top__DOT____Vcellinp__keygen__A[1U][3U] 
        = vlSelf->Top__DOT__A_reg[1U][3U];
    vlSelf->Top__DOT____Vcellinp__keygen__A[1U][2U] 
        = vlSelf->Top__DOT__A_reg[1U][2U];
    vlSelf->Top__DOT____Vcellinp__keygen__A[1U][1U] 
        = vlSelf->Top__DOT__A_reg[1U][1U];
    vlSelf->Top__DOT____Vcellinp__keygen__A[1U][0U] 
        = vlSelf->Top__DOT__A_reg[1U][0U];
    vlSelf->Top__DOT____Vcellinp__keygen__A[0U][3U] 
        = vlSelf->Top__DOT__A_reg[0U][3U];
    vlSelf->Top__DOT____Vcellinp__keygen__A[0U][2U] 
        = vlSelf->Top__DOT__A_reg[0U][2U];
    vlSelf->Top__DOT____Vcellinp__keygen__A[0U][1U] 
        = vlSelf->Top__DOT__A_reg[0U][1U];
    vlSelf->Top__DOT____Vcellinp__keygen__A[0U][0U] 
        = vlSelf->Top__DOT__A_reg[0U][0U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[3U] 
        = vlSelf->Top__DOT____Vcellinp__keygen__A[0U]
        [3U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[2U] 
        = vlSelf->Top__DOT____Vcellinp__keygen__A[0U]
        [2U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[1U] 
        = vlSelf->Top__DOT____Vcellinp__keygen__A[0U]
        [1U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[0U] 
        = vlSelf->Top__DOT____Vcellinp__keygen__A[0U]
        [0U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[3U] 
        = vlSelf->Top__DOT____Vcellinp__keygen__A[1U]
        [3U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[2U] 
        = vlSelf->Top__DOT____Vcellinp__keygen__A[1U]
        [2U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[1U] 
        = vlSelf->Top__DOT____Vcellinp__keygen__A[1U]
        [1U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[0U] 
        = vlSelf->Top__DOT____Vcellinp__keygen__A[1U]
        [0U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[3U] 
        = vlSelf->Top__DOT____Vcellinp__keygen__A[2U]
        [3U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[2U] 
        = vlSelf->Top__DOT____Vcellinp__keygen__A[2U]
        [2U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[1U] 
        = vlSelf->Top__DOT____Vcellinp__keygen__A[2U]
        [1U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[0U] 
        = vlSelf->Top__DOT____Vcellinp__keygen__A[2U]
        [0U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[3U] 
        = vlSelf->Top__DOT____Vcellinp__keygen__A[3U]
        [3U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[2U] 
        = vlSelf->Top__DOT____Vcellinp__keygen__A[3U]
        [2U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[1U] 
        = vlSelf->Top__DOT____Vcellinp__keygen__A[3U]
        [1U];
    vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[0U] 
        = vlSelf->Top__DOT____Vcellinp__keygen__A[3U]
        [0U];
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [3U], (IData)(0x11U)));
}

VL_INLINE_OPT void VTop___024root___combo__TOP__1(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->Top__DOT__keygen__DOT__added[0U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__added1[0U] = 0U;
    vlSelf->Top__DOT____Vcellout__keygen__result[0U][0U] = 0U;
    vlSelf->Top__DOT____Vcellout__keygen__result[1U][0U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__added[1U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__added1[1U] = 0U;
    vlSelf->Top__DOT____Vcellout__keygen__result[0U][1U] = 0U;
    vlSelf->Top__DOT____Vcellout__keygen__result[1U][1U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__added[2U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__added1[2U] = 0U;
    vlSelf->Top__DOT____Vcellout__keygen__result[0U][2U] = 0U;
    vlSelf->Top__DOT____Vcellout__keygen__result[1U][2U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__added[3U] = 0U;
    vlSelf->Top__DOT__keygen__DOT__added1[3U] = 0U;
    vlSelf->Top__DOT____Vcellout__keygen__result[0U][3U] = 0U;
    vlSelf->Top__DOT____Vcellout__keygen__result[1U][3U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__added2[0U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__added2[1U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__added2[2U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__added2[3U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__added[0U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__added1[0U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__u[0U][0U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__u[1U][0U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__added[1U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__added1[1U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__u[0U][1U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__u[1U][1U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__added[2U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__added1[2U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__u[0U][2U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__u[1U][2U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__added[3U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__added1[3U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__u[0U][3U] = 0U;
    vlSelf->Top__DOT__encryption__DOT__u[1U][3U] = 0U;
    if (vlSelf->enable) {
        vlSelf->Top__DOT__keygen__DOT__added[0U] = 
            (vlSelf->Top__DOT__keygen__DOT__poly_out0
             [0U] + vlSelf->Top__DOT__keygen__DOT__poly_out1
             [0U]);
        vlSelf->Top__DOT__keygen__DOT__added1[0U] = 
            (vlSelf->Top__DOT__keygen__DOT__poly_out2
             [0U] + vlSelf->Top__DOT__keygen__DOT__poly_out3
             [0U]);
        vlSelf->Top__DOT__keygen__DOT__added[0U] = 
            (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__added
                        [0U]) ? vlSelf->Top__DOT__keygen__DOT__added
             [0U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__added
                                   [0U], (IData)(0x11U)));
        vlSelf->Top__DOT__keygen__DOT__added1[0U] = 
            (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__added1
                        [0U]) ? vlSelf->Top__DOT__keygen__DOT__added1
             [0U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__added1
                                   [0U], (IData)(0x11U)));
        vlSelf->Top__DOT__keygen__DOT__added[1U] = 
            (vlSelf->Top__DOT__keygen__DOT__poly_out0
             [1U] + vlSelf->Top__DOT__keygen__DOT__poly_out1
             [1U]);
        vlSelf->Top__DOT__keygen__DOT__added1[1U] = 
            (vlSelf->Top__DOT__keygen__DOT__poly_out2
             [1U] + vlSelf->Top__DOT__keygen__DOT__poly_out3
             [1U]);
        vlSelf->Top__DOT__keygen__DOT__added[1U] = 
            (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__added
                        [1U]) ? vlSelf->Top__DOT__keygen__DOT__added
             [1U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__added
                                   [1U], (IData)(0x11U)));
        vlSelf->Top__DOT__keygen__DOT__added1[1U] = 
            (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__added1
                        [1U]) ? vlSelf->Top__DOT__keygen__DOT__added1
             [1U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__added1
                                   [1U], (IData)(0x11U)));
        vlSelf->Top__DOT__keygen__DOT__added[2U] = 
            (vlSelf->Top__DOT__keygen__DOT__poly_out0
             [2U] + vlSelf->Top__DOT__keygen__DOT__poly_out1
             [2U]);
        vlSelf->Top__DOT__keygen__DOT__added1[2U] = 
            (vlSelf->Top__DOT__keygen__DOT__poly_out2
             [2U] + vlSelf->Top__DOT__keygen__DOT__poly_out3
             [2U]);
        vlSelf->Top__DOT__keygen__DOT__added[2U] = 
            (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__added
                        [2U]) ? vlSelf->Top__DOT__keygen__DOT__added
             [2U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__added
                                   [2U], (IData)(0x11U)));
        vlSelf->Top__DOT__keygen__DOT__added1[2U] = 
            (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__added1
                        [2U]) ? vlSelf->Top__DOT__keygen__DOT__added1
             [2U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__added1
                                   [2U], (IData)(0x11U)));
        vlSelf->Top__DOT__keygen__DOT__added[3U] = 
            (vlSelf->Top__DOT__keygen__DOT__poly_out0
             [3U] + vlSelf->Top__DOT__keygen__DOT__poly_out1
             [3U]);
        vlSelf->Top__DOT__keygen__DOT__added1[3U] = 
            (vlSelf->Top__DOT__keygen__DOT__poly_out2
             [3U] + vlSelf->Top__DOT__keygen__DOT__poly_out3
             [3U]);
        vlSelf->Top__DOT__keygen__DOT__added[3U] = 
            (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__added
                        [3U]) ? vlSelf->Top__DOT__keygen__DOT__added
             [3U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__added
                                   [3U], (IData)(0x11U)));
        vlSelf->Top__DOT__keygen__DOT__added1[3U] = 
            (VL_GTS_III(32, 0U, vlSelf->Top__DOT__keygen__DOT__added1
                        [3U]) ? vlSelf->Top__DOT__keygen__DOT__added1
             [3U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__keygen__DOT__added1
                                   [3U], (IData)(0x11U)));
        vlSelf->Top__DOT____Vcellout__keygen__result[0U][0U] 
            = (vlSelf->Top__DOT__keygen__DOT__added
               [0U] + vlSelf->Top__DOT____Vcellinp__keygen__e
               [0U][0U]);
        vlSelf->Top__DOT____Vcellout__keygen__result[1U][0U] 
            = (vlSelf->Top__DOT__keygen__DOT__added1
               [0U] + vlSelf->Top__DOT____Vcellinp__keygen__e
               [1U][0U]);
        vlSelf->Top__DOT____Vcellout__keygen__result[0U][0U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT____Vcellout__keygen__result
                          [0U][0U]) ? vlSelf->Top__DOT____Vcellout__keygen__result
               [0U][0U] : VL_MODDIVS_III(32, vlSelf->Top__DOT____Vcellout__keygen__result
                                         [0U][0U], (IData)(0x11U)));
        vlSelf->Top__DOT____Vcellout__keygen__result[1U][0U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT____Vcellout__keygen__result
                          [1U][0U]) ? vlSelf->Top__DOT____Vcellout__keygen__result
               [1U][0U] : VL_MODDIVS_III(32, vlSelf->Top__DOT____Vcellout__keygen__result
                                         [1U][0U], (IData)(0x11U)));
        vlSelf->Top__DOT____Vcellout__keygen__result[0U][1U] 
            = (vlSelf->Top__DOT__keygen__DOT__added
               [1U] + vlSelf->Top__DOT____Vcellinp__keygen__e
               [0U][1U]);
        vlSelf->Top__DOT____Vcellout__keygen__result[1U][1U] 
            = (vlSelf->Top__DOT__keygen__DOT__added1
               [1U] + vlSelf->Top__DOT____Vcellinp__keygen__e
               [1U][1U]);
        vlSelf->Top__DOT____Vcellout__keygen__result[0U][1U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT____Vcellout__keygen__result
                          [0U][1U]) ? vlSelf->Top__DOT____Vcellout__keygen__result
               [0U][1U] : VL_MODDIVS_III(32, vlSelf->Top__DOT____Vcellout__keygen__result
                                         [0U][1U], (IData)(0x11U)));
        vlSelf->Top__DOT____Vcellout__keygen__result[1U][1U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT____Vcellout__keygen__result
                          [1U][1U]) ? vlSelf->Top__DOT____Vcellout__keygen__result
               [1U][1U] : VL_MODDIVS_III(32, vlSelf->Top__DOT____Vcellout__keygen__result
                                         [1U][1U], (IData)(0x11U)));
        vlSelf->Top__DOT____Vcellout__keygen__result[0U][2U] 
            = (vlSelf->Top__DOT__keygen__DOT__added
               [2U] + vlSelf->Top__DOT____Vcellinp__keygen__e
               [0U][2U]);
        vlSelf->Top__DOT____Vcellout__keygen__result[1U][2U] 
            = (vlSelf->Top__DOT__keygen__DOT__added1
               [2U] + vlSelf->Top__DOT____Vcellinp__keygen__e
               [1U][2U]);
        vlSelf->Top__DOT____Vcellout__keygen__result[0U][2U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT____Vcellout__keygen__result
                          [0U][2U]) ? vlSelf->Top__DOT____Vcellout__keygen__result
               [0U][2U] : VL_MODDIVS_III(32, vlSelf->Top__DOT____Vcellout__keygen__result
                                         [0U][2U], (IData)(0x11U)));
        vlSelf->Top__DOT____Vcellout__keygen__result[1U][2U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT____Vcellout__keygen__result
                          [1U][2U]) ? vlSelf->Top__DOT____Vcellout__keygen__result
               [1U][2U] : VL_MODDIVS_III(32, vlSelf->Top__DOT____Vcellout__keygen__result
                                         [1U][2U], (IData)(0x11U)));
        vlSelf->Top__DOT____Vcellout__keygen__result[0U][3U] 
            = (vlSelf->Top__DOT__keygen__DOT__added
               [3U] + vlSelf->Top__DOT____Vcellinp__keygen__e
               [0U][3U]);
        vlSelf->Top__DOT____Vcellout__keygen__result[1U][3U] 
            = (vlSelf->Top__DOT__keygen__DOT__added1
               [3U] + vlSelf->Top__DOT____Vcellinp__keygen__e
               [1U][3U]);
        vlSelf->Top__DOT____Vcellout__keygen__result[0U][3U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT____Vcellout__keygen__result
                          [0U][3U]) ? vlSelf->Top__DOT____Vcellout__keygen__result
               [0U][3U] : VL_MODDIVS_III(32, vlSelf->Top__DOT____Vcellout__keygen__result
                                         [0U][3U], (IData)(0x11U)));
        vlSelf->Top__DOT____Vcellout__keygen__result[1U][3U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT____Vcellout__keygen__result
                          [1U][3U]) ? vlSelf->Top__DOT____Vcellout__keygen__result
               [1U][3U] : VL_MODDIVS_III(32, vlSelf->Top__DOT____Vcellout__keygen__result
                                         [1U][3U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__added2[0U] 
            = (vlSelf->Top__DOT__encryption__DOT__poly_out4
               [0U] + vlSelf->Top__DOT__encryption__DOT__poly_out5
               [0U]);
        vlSelf->Top__DOT__encryption__DOT__added2[0U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__added2
                          [0U]) ? vlSelf->Top__DOT__encryption__DOT__added2
               [0U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__added2
                                     [0U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__added2[1U] 
            = (vlSelf->Top__DOT__encryption__DOT__poly_out4
               [1U] + vlSelf->Top__DOT__encryption__DOT__poly_out5
               [1U]);
        vlSelf->Top__DOT__encryption__DOT__added2[1U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__added2
                          [1U]) ? vlSelf->Top__DOT__encryption__DOT__added2
               [1U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__added2
                                     [1U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__added2[2U] 
            = (vlSelf->Top__DOT__encryption__DOT__poly_out4
               [2U] + vlSelf->Top__DOT__encryption__DOT__poly_out5
               [2U]);
        vlSelf->Top__DOT__encryption__DOT__added2[2U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__added2
                          [2U]) ? vlSelf->Top__DOT__encryption__DOT__added2
               [2U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__added2
                                     [2U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__added2[3U] 
            = (vlSelf->Top__DOT__encryption__DOT__poly_out4
               [3U] + vlSelf->Top__DOT__encryption__DOT__poly_out5
               [3U]);
        vlSelf->Top__DOT__encryption__DOT__added2[3U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__added2
                          [3U]) ? vlSelf->Top__DOT__encryption__DOT__added2
               [3U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__added2
                                     [3U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__added[0U] 
            = (vlSelf->Top__DOT__encryption__DOT__poly_out0
               [0U] + vlSelf->Top__DOT__encryption__DOT__poly_out1
               [0U]);
        vlSelf->Top__DOT__encryption__DOT__added1[0U] 
            = (vlSelf->Top__DOT__encryption__DOT__poly_out2
               [0U] + vlSelf->Top__DOT__encryption__DOT__poly_out3
               [0U]);
        vlSelf->Top__DOT__encryption__DOT__added[0U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__added
                          [0U]) ? vlSelf->Top__DOT__encryption__DOT__added
               [0U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__added
                                     [0U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__added1[0U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__added1
                          [0U]) ? vlSelf->Top__DOT__encryption__DOT__added1
               [0U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__added1
                                     [0U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__added[1U] 
            = (vlSelf->Top__DOT__encryption__DOT__poly_out0
               [1U] + vlSelf->Top__DOT__encryption__DOT__poly_out1
               [1U]);
        vlSelf->Top__DOT__encryption__DOT__added1[1U] 
            = (vlSelf->Top__DOT__encryption__DOT__poly_out2
               [1U] + vlSelf->Top__DOT__encryption__DOT__poly_out3
               [1U]);
        vlSelf->Top__DOT__encryption__DOT__added[1U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__added
                          [1U]) ? vlSelf->Top__DOT__encryption__DOT__added
               [1U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__added
                                     [1U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__added1[1U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__added1
                          [1U]) ? vlSelf->Top__DOT__encryption__DOT__added1
               [1U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__added1
                                     [1U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__added[2U] 
            = (vlSelf->Top__DOT__encryption__DOT__poly_out0
               [2U] + vlSelf->Top__DOT__encryption__DOT__poly_out1
               [2U]);
        vlSelf->Top__DOT__encryption__DOT__added1[2U] 
            = (vlSelf->Top__DOT__encryption__DOT__poly_out2
               [2U] + vlSelf->Top__DOT__encryption__DOT__poly_out3
               [2U]);
        vlSelf->Top__DOT__encryption__DOT__added[2U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__added
                          [2U]) ? vlSelf->Top__DOT__encryption__DOT__added
               [2U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__added
                                     [2U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__added1[2U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__added1
                          [2U]) ? vlSelf->Top__DOT__encryption__DOT__added1
               [2U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__added1
                                     [2U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__added[3U] 
            = (vlSelf->Top__DOT__encryption__DOT__poly_out0
               [3U] + vlSelf->Top__DOT__encryption__DOT__poly_out1
               [3U]);
        vlSelf->Top__DOT__encryption__DOT__added1[3U] 
            = (vlSelf->Top__DOT__encryption__DOT__poly_out2
               [3U] + vlSelf->Top__DOT__encryption__DOT__poly_out3
               [3U]);
        vlSelf->Top__DOT__encryption__DOT__added[3U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__added
                          [3U]) ? vlSelf->Top__DOT__encryption__DOT__added
               [3U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__added
                                     [3U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__added1[3U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__added1
                          [3U]) ? vlSelf->Top__DOT__encryption__DOT__added1
               [3U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__added1
                                     [3U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__u[0U][0U] 
            = (vlSelf->Top__DOT__encryption__DOT__added
               [0U] + vlSelf->Top__DOT____Vcellinp__encryption__e1
               [0U][0U]);
        vlSelf->Top__DOT__encryption__DOT__u[1U][0U] 
            = (vlSelf->Top__DOT__encryption__DOT__added1
               [0U] + vlSelf->Top__DOT____Vcellinp__encryption__e1
               [1U][0U]);
        vlSelf->Top__DOT__encryption__DOT__u[0U][0U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__u
                          [0U][0U]) ? vlSelf->Top__DOT__encryption__DOT__u
               [0U][0U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__u
                                         [0U][0U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__u[1U][0U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__u
                          [1U][0U]) ? vlSelf->Top__DOT__encryption__DOT__u
               [1U][0U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__u
                                         [1U][0U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__u[0U][1U] 
            = (vlSelf->Top__DOT__encryption__DOT__added
               [1U] + vlSelf->Top__DOT____Vcellinp__encryption__e1
               [0U][1U]);
        vlSelf->Top__DOT__encryption__DOT__u[1U][1U] 
            = (vlSelf->Top__DOT__encryption__DOT__added1
               [1U] + vlSelf->Top__DOT____Vcellinp__encryption__e1
               [1U][1U]);
        vlSelf->Top__DOT__encryption__DOT__u[0U][1U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__u
                          [0U][1U]) ? vlSelf->Top__DOT__encryption__DOT__u
               [0U][1U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__u
                                         [0U][1U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__u[1U][1U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__u
                          [1U][1U]) ? vlSelf->Top__DOT__encryption__DOT__u
               [1U][1U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__u
                                         [1U][1U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__u[0U][2U] 
            = (vlSelf->Top__DOT__encryption__DOT__added
               [2U] + vlSelf->Top__DOT____Vcellinp__encryption__e1
               [0U][2U]);
        vlSelf->Top__DOT__encryption__DOT__u[1U][2U] 
            = (vlSelf->Top__DOT__encryption__DOT__added1
               [2U] + vlSelf->Top__DOT____Vcellinp__encryption__e1
               [1U][2U]);
        vlSelf->Top__DOT__encryption__DOT__u[0U][2U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__u
                          [0U][2U]) ? vlSelf->Top__DOT__encryption__DOT__u
               [0U][2U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__u
                                         [0U][2U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__u[1U][2U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__u
                          [1U][2U]) ? vlSelf->Top__DOT__encryption__DOT__u
               [1U][2U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__u
                                         [1U][2U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__u[0U][3U] 
            = (vlSelf->Top__DOT__encryption__DOT__added
               [3U] + vlSelf->Top__DOT____Vcellinp__encryption__e1
               [0U][3U]);
        vlSelf->Top__DOT__encryption__DOT__u[1U][3U] 
            = (vlSelf->Top__DOT__encryption__DOT__added1
               [3U] + vlSelf->Top__DOT____Vcellinp__encryption__e1
               [1U][3U]);
        vlSelf->Top__DOT__encryption__DOT__u[0U][3U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__u
                          [0U][3U]) ? vlSelf->Top__DOT__encryption__DOT__u
               [0U][3U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__u
                                         [0U][3U], (IData)(0x11U)));
        vlSelf->Top__DOT__encryption__DOT__u[1U][3U] 
            = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__encryption__DOT__u
                          [1U][3U]) ? vlSelf->Top__DOT__encryption__DOT__u
               [1U][3U] : VL_MODDIVS_III(32, vlSelf->Top__DOT__encryption__DOT__u
                                         [1U][3U], (IData)(0x11U)));
    }
    vlSelf->Top__DOT__result[1U][3U] = vlSelf->Top__DOT____Vcellout__keygen__result
        [1U][3U];
    vlSelf->Top__DOT__result[1U][2U] = vlSelf->Top__DOT____Vcellout__keygen__result
        [1U][2U];
    vlSelf->Top__DOT__result[1U][1U] = vlSelf->Top__DOT____Vcellout__keygen__result
        [1U][1U];
    vlSelf->Top__DOT__result[1U][0U] = vlSelf->Top__DOT____Vcellout__keygen__result
        [1U][0U];
    vlSelf->Top__DOT__result[0U][3U] = vlSelf->Top__DOT____Vcellout__keygen__result
        [0U][3U];
    vlSelf->Top__DOT__result[0U][2U] = vlSelf->Top__DOT____Vcellout__keygen__result
        [0U][2U];
    vlSelf->Top__DOT__result[0U][1U] = vlSelf->Top__DOT____Vcellout__keygen__result
        [0U][1U];
    vlSelf->Top__DOT__result[0U][0U] = vlSelf->Top__DOT____Vcellout__keygen__result
        [0U][0U];
    vlSelf->Top__DOT__encryption__DOT__v[0U] = ((vlSelf->Top__DOT__encryption__DOT__added2
                                                 [0U] 
                                                 + 
                                                 vlSelf->Top__DOT____Vcellinp__encryption__e2
                                                 [0U]) 
                                                - vlSelf->Top__DOT__encryption__DOT__coefficients_scaled
                                                [3U]);
    vlSelf->Top__DOT__encryption__DOT__v[0U] = (VL_GTS_III(32, 0U, 
                                                           vlSelf->Top__DOT__encryption__DOT__v
                                                           [0U])
                                                 ? 
                                                ((IData)(0x11U) 
                                                 + 
                                                 vlSelf->Top__DOT__encryption__DOT__v
                                                 [0U])
                                                 : 
                                                VL_MODDIVS_III(32, 
                                                               vlSelf->Top__DOT__encryption__DOT__v
                                                               [0U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__v[1U] = ((vlSelf->Top__DOT__encryption__DOT__added2
                                                 [1U] 
                                                 + 
                                                 vlSelf->Top__DOT____Vcellinp__encryption__e2
                                                 [1U]) 
                                                - vlSelf->Top__DOT__encryption__DOT__coefficients_scaled
                                                [2U]);
    vlSelf->Top__DOT__encryption__DOT__v[1U] = (VL_GTS_III(32, 0U, 
                                                           vlSelf->Top__DOT__encryption__DOT__v
                                                           [1U])
                                                 ? 
                                                ((IData)(0x11U) 
                                                 + 
                                                 vlSelf->Top__DOT__encryption__DOT__v
                                                 [1U])
                                                 : 
                                                VL_MODDIVS_III(32, 
                                                               vlSelf->Top__DOT__encryption__DOT__v
                                                               [1U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__v[2U] = ((vlSelf->Top__DOT__encryption__DOT__added2
                                                 [2U] 
                                                 + 
                                                 vlSelf->Top__DOT____Vcellinp__encryption__e2
                                                 [2U]) 
                                                - vlSelf->Top__DOT__encryption__DOT__coefficients_scaled
                                                [1U]);
    vlSelf->Top__DOT__encryption__DOT__v[2U] = (VL_GTS_III(32, 0U, 
                                                           vlSelf->Top__DOT__encryption__DOT__v
                                                           [2U])
                                                 ? 
                                                ((IData)(0x11U) 
                                                 + 
                                                 vlSelf->Top__DOT__encryption__DOT__v
                                                 [2U])
                                                 : 
                                                VL_MODDIVS_III(32, 
                                                               vlSelf->Top__DOT__encryption__DOT__v
                                                               [2U], (IData)(0x11U)));
    vlSelf->Top__DOT__encryption__DOT__v[3U] = ((vlSelf->Top__DOT__encryption__DOT__added2
                                                 [3U] 
                                                 + 
                                                 vlSelf->Top__DOT____Vcellinp__encryption__e2
                                                 [3U]) 
                                                - vlSelf->Top__DOT__encryption__DOT__coefficients_scaled
                                                [0U]);
    vlSelf->Top__DOT__encryption__DOT__v[3U] = (VL_GTS_III(32, 0U, 
                                                           vlSelf->Top__DOT__encryption__DOT__v
                                                           [3U])
                                                 ? 
                                                ((IData)(0x11U) 
                                                 + 
                                                 vlSelf->Top__DOT__encryption__DOT__v
                                                 [3U])
                                                 : 
                                                VL_MODDIVS_III(32, 
                                                               vlSelf->Top__DOT__encryption__DOT__v
                                                               [3U], (IData)(0x11U)));
    vlSelf->Top__DOT____Vcellout__encryption__ciphertext[0U][0U][0U] 
        = vlSelf->Top__DOT__encryption__DOT__u[0U][0U];
    vlSelf->Top__DOT____Vcellout__encryption__ciphertext[1U][0U][0U] 
        = vlSelf->Top__DOT__encryption__DOT__v[0U];
    vlSelf->Top__DOT____Vcellout__encryption__ciphertext[0U][0U][1U] 
        = vlSelf->Top__DOT__encryption__DOT__u[0U][1U];
    vlSelf->Top__DOT____Vcellout__encryption__ciphertext[1U][0U][1U] 
        = vlSelf->Top__DOT__encryption__DOT__v[1U];
    vlSelf->Top__DOT____Vcellout__encryption__ciphertext[0U][0U][2U] 
        = vlSelf->Top__DOT__encryption__DOT__u[0U][2U];
    vlSelf->Top__DOT____Vcellout__encryption__ciphertext[1U][0U][2U] 
        = vlSelf->Top__DOT__encryption__DOT__v[2U];
    vlSelf->Top__DOT____Vcellout__encryption__ciphertext[0U][0U][3U] 
        = vlSelf->Top__DOT__encryption__DOT__u[0U][3U];
    vlSelf->Top__DOT____Vcellout__encryption__ciphertext[1U][0U][3U] 
        = vlSelf->Top__DOT__encryption__DOT__v[3U];
    vlSelf->Top__DOT____Vcellout__encryption__ciphertext[0U][1U][0U] 
        = vlSelf->Top__DOT__encryption__DOT__u[1U][0U];
    vlSelf->Top__DOT____Vcellout__encryption__ciphertext[1U][0U][0U] 
        = vlSelf->Top__DOT__encryption__DOT__v[0U];
    vlSelf->Top__DOT____Vcellout__encryption__ciphertext[0U][1U][1U] 
        = vlSelf->Top__DOT__encryption__DOT__u[1U][1U];
    vlSelf->Top__DOT____Vcellout__encryption__ciphertext[1U][0U][1U] 
        = vlSelf->Top__DOT__encryption__DOT__v[1U];
    vlSelf->Top__DOT____Vcellout__encryption__ciphertext[0U][1U][2U] 
        = vlSelf->Top__DOT__encryption__DOT__u[1U][2U];
    vlSelf->Top__DOT____Vcellout__encryption__ciphertext[1U][0U][2U] 
        = vlSelf->Top__DOT__encryption__DOT__v[2U];
    vlSelf->Top__DOT____Vcellout__encryption__ciphertext[0U][1U][3U] 
        = vlSelf->Top__DOT__encryption__DOT__u[1U][3U];
    vlSelf->Top__DOT____Vcellout__encryption__ciphertext[1U][0U][3U] 
        = vlSelf->Top__DOT__encryption__DOT__v[3U];
    vlSelf->Top__DOT__ciphertext[1U][1U][3U] = vlSelf->Top__DOT____Vcellout__encryption__ciphertext
        [1U][1U][3U];
    vlSelf->Top__DOT__ciphertext[1U][1U][2U] = vlSelf->Top__DOT____Vcellout__encryption__ciphertext
        [1U][1U][2U];
    vlSelf->Top__DOT__ciphertext[1U][1U][1U] = vlSelf->Top__DOT____Vcellout__encryption__ciphertext
        [1U][1U][1U];
    vlSelf->Top__DOT__ciphertext[1U][1U][0U] = vlSelf->Top__DOT____Vcellout__encryption__ciphertext
        [1U][1U][0U];
    vlSelf->Top__DOT__ciphertext[1U][0U][3U] = vlSelf->Top__DOT____Vcellout__encryption__ciphertext
        [1U][0U][3U];
    vlSelf->Top__DOT__ciphertext[1U][0U][2U] = vlSelf->Top__DOT____Vcellout__encryption__ciphertext
        [1U][0U][2U];
    vlSelf->Top__DOT__ciphertext[1U][0U][1U] = vlSelf->Top__DOT____Vcellout__encryption__ciphertext
        [1U][0U][1U];
    vlSelf->Top__DOT__ciphertext[1U][0U][0U] = vlSelf->Top__DOT____Vcellout__encryption__ciphertext
        [1U][0U][0U];
    vlSelf->Top__DOT__ciphertext[0U][1U][3U] = vlSelf->Top__DOT____Vcellout__encryption__ciphertext
        [0U][1U][3U];
    vlSelf->Top__DOT__ciphertext[0U][1U][2U] = vlSelf->Top__DOT____Vcellout__encryption__ciphertext
        [0U][1U][2U];
    vlSelf->Top__DOT__ciphertext[0U][1U][1U] = vlSelf->Top__DOT____Vcellout__encryption__ciphertext
        [0U][1U][1U];
    vlSelf->Top__DOT__ciphertext[0U][1U][0U] = vlSelf->Top__DOT____Vcellout__encryption__ciphertext
        [0U][1U][0U];
    vlSelf->Top__DOT__ciphertext[0U][0U][3U] = vlSelf->Top__DOT____Vcellout__encryption__ciphertext
        [0U][0U][3U];
    vlSelf->Top__DOT__ciphertext[0U][0U][2U] = vlSelf->Top__DOT____Vcellout__encryption__ciphertext
        [0U][0U][2U];
    vlSelf->Top__DOT__ciphertext[0U][0U][1U] = vlSelf->Top__DOT____Vcellout__encryption__ciphertext
        [0U][0U][1U];
    vlSelf->Top__DOT__ciphertext[0U][0U][0U] = vlSelf->Top__DOT____Vcellout__encryption__ciphertext
        [0U][0U][0U];
    vlSelf->Top__DOT____Vcellinp__decryption__ciphertext[1U][1U][3U] 
        = vlSelf->Top__DOT__ciphertext[1U][1U][3U];
    vlSelf->Top__DOT____Vcellinp__decryption__ciphertext[1U][1U][2U] 
        = vlSelf->Top__DOT__ciphertext[1U][1U][2U];
    vlSelf->Top__DOT____Vcellinp__decryption__ciphertext[1U][1U][1U] 
        = vlSelf->Top__DOT__ciphertext[1U][1U][1U];
    vlSelf->Top__DOT____Vcellinp__decryption__ciphertext[1U][1U][0U] 
        = vlSelf->Top__DOT__ciphertext[1U][1U][0U];
    vlSelf->Top__DOT____Vcellinp__decryption__ciphertext[1U][0U][3U] 
        = vlSelf->Top__DOT__ciphertext[1U][0U][3U];
    vlSelf->Top__DOT____Vcellinp__decryption__ciphertext[1U][0U][2U] 
        = vlSelf->Top__DOT__ciphertext[1U][0U][2U];
    vlSelf->Top__DOT____Vcellinp__decryption__ciphertext[1U][0U][1U] 
        = vlSelf->Top__DOT__ciphertext[1U][0U][1U];
    vlSelf->Top__DOT____Vcellinp__decryption__ciphertext[1U][0U][0U] 
        = vlSelf->Top__DOT__ciphertext[1U][0U][0U];
    vlSelf->Top__DOT____Vcellinp__decryption__ciphertext[0U][1U][3U] 
        = vlSelf->Top__DOT__ciphertext[0U][1U][3U];
    vlSelf->Top__DOT____Vcellinp__decryption__ciphertext[0U][1U][2U] 
        = vlSelf->Top__DOT__ciphertext[0U][1U][2U];
    vlSelf->Top__DOT____Vcellinp__decryption__ciphertext[0U][1U][1U] 
        = vlSelf->Top__DOT__ciphertext[0U][1U][1U];
    vlSelf->Top__DOT____Vcellinp__decryption__ciphertext[0U][1U][0U] 
        = vlSelf->Top__DOT__ciphertext[0U][1U][0U];
    vlSelf->Top__DOT____Vcellinp__decryption__ciphertext[0U][0U][3U] 
        = vlSelf->Top__DOT__ciphertext[0U][0U][3U];
    vlSelf->Top__DOT____Vcellinp__decryption__ciphertext[0U][0U][2U] 
        = vlSelf->Top__DOT__ciphertext[0U][0U][2U];
    vlSelf->Top__DOT____Vcellinp__decryption__ciphertext[0U][0U][1U] 
        = vlSelf->Top__DOT__ciphertext[0U][0U][1U];
    vlSelf->Top__DOT____Vcellinp__decryption__ciphertext[0U][0U][0U] 
        = vlSelf->Top__DOT__ciphertext[0U][0U][0U];
    vlSelf->Top__DOT__decryption__DOT__temp_m_n[0U] 
        = (vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
           [1U][0U][0U] - (vlSelf->Top__DOT__decryption__DOT__poly_out0
                           [0U] + vlSelf->Top__DOT__decryption__DOT__poly_out1
                           [0U]));
    if (VL_GTS_III(32, 0U, vlSelf->Top__DOT__decryption__DOT__temp_m_n
                   [0U])) {
        vlSelf->Top__DOT__decryption__DOT__temp_m_n[0U] 
            = ((IData)(0x11U) + vlSelf->Top__DOT__decryption__DOT__temp_m_n
               [0U]);
        if (VL_GTS_III(32, 0U, vlSelf->Top__DOT__decryption__DOT__temp_m_n
                       [0U])) {
            vlSelf->Top__DOT__decryption__DOT__temp_m_n[0U] 
                = ((IData)(0x11U) + vlSelf->Top__DOT__decryption__DOT__temp_m_n
                   [0U]);
        }
    } else {
        vlSelf->Top__DOT__decryption__DOT__temp_m_n[0U] 
            = VL_MODDIVS_III(32, vlSelf->Top__DOT__decryption__DOT__temp_m_n
                             [0U], (IData)(0x11U));
    }
    vlSelf->Top__DOT__decryption__DOT__temp_m_n[1U] 
        = (vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
           [1U][0U][1U] - (vlSelf->Top__DOT__decryption__DOT__poly_out0
                           [1U] + vlSelf->Top__DOT__decryption__DOT__poly_out1
                           [1U]));
    if (VL_GTS_III(32, 0U, vlSelf->Top__DOT__decryption__DOT__temp_m_n
                   [1U])) {
        vlSelf->Top__DOT__decryption__DOT__temp_m_n[1U] 
            = ((IData)(0x11U) + vlSelf->Top__DOT__decryption__DOT__temp_m_n
               [1U]);
        if (VL_GTS_III(32, 0U, vlSelf->Top__DOT__decryption__DOT__temp_m_n
                       [1U])) {
            vlSelf->Top__DOT__decryption__DOT__temp_m_n[1U] 
                = ((IData)(0x11U) + vlSelf->Top__DOT__decryption__DOT__temp_m_n
                   [1U]);
        }
    } else {
        vlSelf->Top__DOT__decryption__DOT__temp_m_n[1U] 
            = VL_MODDIVS_III(32, vlSelf->Top__DOT__decryption__DOT__temp_m_n
                             [1U], (IData)(0x11U));
    }
    vlSelf->Top__DOT__decryption__DOT__temp_m_n[2U] 
        = (vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
           [1U][0U][2U] - (vlSelf->Top__DOT__decryption__DOT__poly_out0
                           [2U] + vlSelf->Top__DOT__decryption__DOT__poly_out1
                           [2U]));
    if (VL_GTS_III(32, 0U, vlSelf->Top__DOT__decryption__DOT__temp_m_n
                   [2U])) {
        vlSelf->Top__DOT__decryption__DOT__temp_m_n[2U] 
            = ((IData)(0x11U) + vlSelf->Top__DOT__decryption__DOT__temp_m_n
               [2U]);
        if (VL_GTS_III(32, 0U, vlSelf->Top__DOT__decryption__DOT__temp_m_n
                       [2U])) {
            vlSelf->Top__DOT__decryption__DOT__temp_m_n[2U] 
                = ((IData)(0x11U) + vlSelf->Top__DOT__decryption__DOT__temp_m_n
                   [2U]);
        }
    } else {
        vlSelf->Top__DOT__decryption__DOT__temp_m_n[2U] 
            = VL_MODDIVS_III(32, vlSelf->Top__DOT__decryption__DOT__temp_m_n
                             [2U], (IData)(0x11U));
    }
    vlSelf->Top__DOT__decryption__DOT__temp_m_n[3U] 
        = (vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
           [1U][0U][3U] - (vlSelf->Top__DOT__decryption__DOT__poly_out0
                           [3U] + vlSelf->Top__DOT__decryption__DOT__poly_out1
                           [3U]));
    if (VL_GTS_III(32, 0U, vlSelf->Top__DOT__decryption__DOT__temp_m_n
                   [3U])) {
        vlSelf->Top__DOT__decryption__DOT__temp_m_n[3U] 
            = ((IData)(0x11U) + vlSelf->Top__DOT__decryption__DOT__temp_m_n
               [3U]);
        if (VL_GTS_III(32, 0U, vlSelf->Top__DOT__decryption__DOT__temp_m_n
                       [3U])) {
            vlSelf->Top__DOT__decryption__DOT__temp_m_n[3U] 
                = ((IData)(0x11U) + vlSelf->Top__DOT__decryption__DOT__temp_m_n
                   [3U]);
        }
    } else {
        vlSelf->Top__DOT__decryption__DOT__temp_m_n[3U] 
            = VL_MODDIVS_III(32, vlSelf->Top__DOT__decryption__DOT__temp_m_n
                             [3U], (IData)(0x11U));
    }
    vlSelf->Top__DOT__decryption__DOT__temp_m_n[0U] 
        = (VL_GTS_III(32, 5U, vlSelf->Top__DOT__decryption__DOT__temp_m_n
                      [0U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelf->Top__DOT__decryption__DOT__temp_m_n
                                               [0U])
                                     ? 9U : 0U));
    vlSelf->Top__DOT__decryption__DOT__temp_m_n[1U] 
        = (VL_GTS_III(32, 5U, vlSelf->Top__DOT__decryption__DOT__temp_m_n
                      [1U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelf->Top__DOT__decryption__DOT__temp_m_n
                                               [1U])
                                     ? 9U : 0U));
    vlSelf->Top__DOT__decryption__DOT__temp_m_n[2U] 
        = (VL_GTS_III(32, 5U, vlSelf->Top__DOT__decryption__DOT__temp_m_n
                      [2U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelf->Top__DOT__decryption__DOT__temp_m_n
                                               [2U])
                                     ? 9U : 0U));
    vlSelf->Top__DOT__decryption__DOT__temp_m_n[3U] 
        = (VL_GTS_III(32, 5U, vlSelf->Top__DOT__decryption__DOT__temp_m_n
                      [3U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelf->Top__DOT__decryption__DOT__temp_m_n
                                               [3U])
                                     ? 9U : 0U));
    vlSelf->Top__DOT__m_b = ((0xeU & (IData)(vlSelf->Top__DOT__m_b)) 
                             | ((9U == vlSelf->Top__DOT__decryption__DOT__temp_m_n
                                 [0U]) ? 1U : 0U));
    vlSelf->Top__DOT__m_b = ((0xdU & (IData)(vlSelf->Top__DOT__m_b)) 
                             | (((9U == vlSelf->Top__DOT__decryption__DOT__temp_m_n
                                  [1U]) ? 1U : 0U) 
                                << 1U));
    vlSelf->Top__DOT__m_b = ((0xbU & (IData)(vlSelf->Top__DOT__m_b)) 
                             | (((9U == vlSelf->Top__DOT__decryption__DOT__temp_m_n
                                  [2U]) ? 1U : 0U) 
                                << 2U));
    vlSelf->Top__DOT__m_b = ((7U & (IData)(vlSelf->Top__DOT__m_b)) 
                             | (((9U == vlSelf->Top__DOT__decryption__DOT__temp_m_n
                                  [3U]) ? 1U : 0U) 
                                << 3U));
    vlSelf->Top__DOT__decimal_value = (((((1U & (IData)(vlSelf->Top__DOT__m_b))
                                           ? 8U : 0U) 
                                         | ((2U & (IData)(vlSelf->Top__DOT__m_b))
                                             ? 4U : 0U)) 
                                        | ((4U & (IData)(vlSelf->Top__DOT__m_b))
                                            ? 2U : 0U)) 
                                       | ((8U & (IData)(vlSelf->Top__DOT__m_b))
                                           ? 1U : 0U));
    VL_WRITEF("decimal_value = %0#\n",32,vlSelf->Top__DOT__decimal_value);
    vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[3U] 
        = vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
        [0U][0U][3U];
    vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[2U] 
        = vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
        [0U][0U][2U];
    vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[1U] 
        = vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
        [0U][0U][1U];
    vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[0U] 
        = vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
        [0U][0U][0U];
    vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[3U] 
        = vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
        [0U][1U][3U];
    vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[2U] 
        = vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
        [0U][1U][2U];
    vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[1U] 
        = vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
        [0U][1U][1U];
    vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[0U] 
        = vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
        [0U][1U][0U];
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] = 0U;
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] = 0U;
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] = 0U;
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] = 0U;
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] = 0U;
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] = 0U;
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] = 0U;
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] = 0U;
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [3U], (IData)(0x11U)));
}

void VTop___024root___eval(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
    // Body
    VTop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VTop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        VTop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VTop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    VTop___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY((vlSelf->wen_Req & 0xfeU))) {
        Verilated::overWidthError("wen_Req");}
}
#endif  // VL_DEBUG

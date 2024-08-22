// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class VTop__Syms;

class VTop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(enable,0,0);
        VL_IN8(wen_Req,0,0);
        VL_IN8(bytelane_Req,7,0);
        CData/*3:0*/ Top__DOT__m_b;
        CData/*3:0*/ Top__DOT__encryption__DOT__coefficients;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__rst_n;
        VL_IN(data_Req,31,0);
        VL_IN(addr_Req,31,0);
        VL_OUT(data_Resp,31,0);
        IData/*31:0*/ Top__DOT__decimal_value;
        IData/*31:0*/ Top__DOT__A_t000;
        IData/*31:0*/ Top__DOT__A_t001;
        IData/*31:0*/ Top__DOT__A_t002;
        IData/*31:0*/ Top__DOT__A_t003;
        IData/*31:0*/ Top__DOT__A_t010;
        IData/*31:0*/ Top__DOT__A_t011;
        IData/*31:0*/ Top__DOT__A_t012;
        IData/*31:0*/ Top__DOT__A_t013;
        IData/*31:0*/ Top__DOT__A_t020;
        IData/*31:0*/ Top__DOT__A_t021;
        IData/*31:0*/ Top__DOT__A_t022;
        IData/*31:0*/ Top__DOT__A_t023;
        IData/*31:0*/ Top__DOT__A_t030;
        IData/*31:0*/ Top__DOT__A_t031;
        IData/*31:0*/ Top__DOT__A_t032;
        IData/*31:0*/ Top__DOT__A_t033;
        IData/*31:0*/ Top__DOT__s_00;
        IData/*31:0*/ Top__DOT__s_01;
        IData/*31:0*/ Top__DOT__s_02;
        IData/*31:0*/ Top__DOT__s_03;
        IData/*31:0*/ Top__DOT__s_10;
        IData/*31:0*/ Top__DOT__s_11;
        IData/*31:0*/ Top__DOT__s_12;
        IData/*31:0*/ Top__DOT__s_13;
        IData/*31:0*/ Top__DOT__e_00;
        IData/*31:0*/ Top__DOT__e_01;
        IData/*31:0*/ Top__DOT__e_02;
        IData/*31:0*/ Top__DOT__e_03;
        IData/*31:0*/ Top__DOT__e_10;
        IData/*31:0*/ Top__DOT__e_11;
        IData/*31:0*/ Top__DOT__e_12;
        IData/*31:0*/ Top__DOT__e_13;
        IData/*31:0*/ Top__DOT__message;
        IData/*31:0*/ Top__DOT__public_key000;
        IData/*31:0*/ Top__DOT__public_key001;
        IData/*31:0*/ Top__DOT__public_key002;
        IData/*31:0*/ Top__DOT__public_key003;
        IData/*31:0*/ Top__DOT__public_key010;
        IData/*31:0*/ Top__DOT__public_key011;
        IData/*31:0*/ Top__DOT__public_key012;
        IData/*31:0*/ Top__DOT__public_key013;
        IData/*31:0*/ Top__DOT__public_key020;
        IData/*31:0*/ Top__DOT__public_key021;
        IData/*31:0*/ Top__DOT__public_key022;
        IData/*31:0*/ Top__DOT__public_key023;
        IData/*31:0*/ Top__DOT__public_key030;
        IData/*31:0*/ Top__DOT__public_key031;
        IData/*31:0*/ Top__DOT__public_key032;
        IData/*31:0*/ Top__DOT__public_key033;
        IData/*31:0*/ Top__DOT__public_key100;
        IData/*31:0*/ Top__DOT__public_key101;
    };
    struct {
        IData/*31:0*/ Top__DOT__public_key102;
        IData/*31:0*/ Top__DOT__public_key103;
        IData/*31:0*/ Top__DOT__public_key110;
        IData/*31:0*/ Top__DOT__public_key111;
        IData/*31:0*/ Top__DOT__public_key112;
        IData/*31:0*/ Top__DOT__public_key113;
        IData/*31:0*/ Top__DOT__r_00;
        IData/*31:0*/ Top__DOT__r_01;
        IData/*31:0*/ Top__DOT__r_02;
        IData/*31:0*/ Top__DOT__r_03;
        IData/*31:0*/ Top__DOT__r_10;
        IData/*31:0*/ Top__DOT__r_11;
        IData/*31:0*/ Top__DOT__r_12;
        IData/*31:0*/ Top__DOT__r_13;
        IData/*31:0*/ Top__DOT__e1_00;
        IData/*31:0*/ Top__DOT__e1_01;
        IData/*31:0*/ Top__DOT__e1_02;
        IData/*31:0*/ Top__DOT__e1_03;
        IData/*31:0*/ Top__DOT__e1_10;
        IData/*31:0*/ Top__DOT__e1_11;
        IData/*31:0*/ Top__DOT__e1_12;
        IData/*31:0*/ Top__DOT__e1_13;
        IData/*31:0*/ Top__DOT__e2_0;
        IData/*31:0*/ Top__DOT__e2_1;
        IData/*31:0*/ Top__DOT__e2_2;
        IData/*31:0*/ Top__DOT__e2_3;
        IData/*31:0*/ Top__DOT__ciphertext000;
        IData/*31:0*/ Top__DOT__ciphertext001;
        IData/*31:0*/ Top__DOT__ciphertext002;
        IData/*31:0*/ Top__DOT__ciphertext003;
        IData/*31:0*/ Top__DOT__ciphertext010;
        IData/*31:0*/ Top__DOT__ciphertext011;
        IData/*31:0*/ Top__DOT__ciphertext012;
        IData/*31:0*/ Top__DOT__ciphertext013;
        IData/*31:0*/ Top__DOT__ciphertext100;
        IData/*31:0*/ Top__DOT__ciphertext101;
        IData/*31:0*/ Top__DOT__ciphertext102;
        IData/*31:0*/ Top__DOT__ciphertext103;
        IData/*31:0*/ Top__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ Top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
        IData/*31:0*/ Top__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ Top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j;
        IData/*31:0*/ Top__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ Top__DOT__keygen__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ Top__DOT__keygen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
        IData/*31:0*/ Top__DOT__keygen__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ Top__DOT__keygen__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ Top__DOT__keygen__DOT__unnamedblk9__DOT__i;
        IData/*31:0*/ Top__DOT__keygen__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j;
        IData/*31:0*/ Top__DOT__keygen__DOT__unnamedblk11__DOT__i;
        IData/*31:0*/ Top__DOT__keygen__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j;
        IData/*31:0*/ Top__DOT__keygen__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ Top__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j;
        IData/*31:0*/ Top__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__k;
        IData/*31:0*/ Top__DOT__encryption__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ Top__DOT__encryption__DOT__unnamedblk1__DOT__j;
        IData/*31:0*/ Top__DOT__encryption__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ Top__DOT__encryption__DOT__unnamedblk5__DOT__i;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Top__DOT__secretkey;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Top__DOT__result;
        VlUnpacked<VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>, 2> Top__DOT__public_key;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> Top__DOT__A_reg;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Top__DOT__s_reg;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Top__DOT__e_reg;
    };
    struct {
        VlUnpacked<VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2>, 2> Top__DOT__ciphertext;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Top__DOT__r;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Top__DOT__e1;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__e2;
        VlUnpacked<VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>, 2> Top__DOT____Vcellout__keygen__combined_output;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Top__DOT____Vcellout__keygen__result;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Top__DOT____Vcellout__keygen__secretkey;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Top__DOT____Vcellinp__keygen__e;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Top__DOT____Vcellinp__keygen__secret_key;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> Top__DOT____Vcellinp__keygen__A;
        VlUnpacked<VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2>, 2> Top__DOT____Vcellout__encryption__ciphertext;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT____Vcellinp__encryption__e2;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Top__DOT____Vcellinp__encryption__e1;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Top__DOT____Vcellinp__encryption__r;
        VlUnpacked<VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>, 2> Top__DOT____Vcellinp__encryption__combined_output;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Top__DOT____Vcellinp__decryption__secret_key;
        VlUnpacked<VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2>, 2> Top__DOT____Vcellinp__decryption__ciphertext;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT__poly_out0;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT__poly_out1;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT__poly_out2;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT__poly_out3;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT__added;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT__added1;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> Top__DOT__encryption__DOT__transposed_matrix;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__poly_out0;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__poly_out1;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__poly_out2;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__poly_out3;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__poly_out4;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__poly_out5;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__added;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__added1;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__added2;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__coefficients_scaled;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Top__DOT__encryption__DOT__u;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__v;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__temp;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__decryption__DOT__poly_out0;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__decryption__DOT__poly_out1;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__decryption__DOT__temp_m_n;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop___024root(VTop__Syms* symsp, const char* name);
    ~VTop___024root();
    VL_UNCOPYABLE(VTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

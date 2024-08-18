// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VEncrypt.h for the primary calling header

#ifndef VERILATED_VENCRYPT___024ROOT_H_
#define VERILATED_VENCRYPT___024ROOT_H_  // guard

#include "verilated.h"


class VEncrypt__Syms;

class alignas(VL_CACHE_LINE_BYTES) VEncrypt___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(enable,0,0);
    CData/*0:0*/ Encrypt__DOT__stop_random_generation;
    CData/*3:0*/ Encrypt__DOT__coefficients;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(message,31,0);
    IData/*31:0*/ Encrypt__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ Encrypt__DOT__unnamedblk1__DOT__j;
    IData/*31:0*/ Encrypt__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ Encrypt__DOT__unnamedblk5__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VL_IN(r[2][4],31,0);
    VL_IN(e1[2][4],31,0);
    VL_IN(e2[4],31,0);
    VL_IN(combined_output[2][4][4],31,0);
    VL_OUT(ciphertext[2][2][4],31,0);
    VlUnpacked<IData/*31:0*/, 20> Encrypt__DOT__rand_num;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> Encrypt__DOT__transposed_matrix;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_out0;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_out1;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_out2;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_out3;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_out4;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_out5;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__added;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__added1;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__added2;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__coefficients_scaled;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Encrypt__DOT__u;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__v;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__temp;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> Encrypt__DOT____Vcellinp__transpose_inst__matrix_in;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_mult_inst__DOT__temp_result;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_mult_inst1__DOT__temp_result;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_mult_inst2__DOT__temp_result;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_mult_inst3__DOT__temp_result;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_mult_inst4__DOT__temp_result;
    VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_mult_inst5__DOT__temp_result;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VEncrypt__Syms* const vlSymsp;

    // CONSTRUCTORS
    VEncrypt___024root(VEncrypt__Syms* symsp, const char* v__name);
    ~VEncrypt___024root();
    VL_UNCOPYABLE(VEncrypt___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

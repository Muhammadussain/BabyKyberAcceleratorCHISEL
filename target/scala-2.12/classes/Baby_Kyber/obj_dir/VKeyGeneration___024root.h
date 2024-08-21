// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VKeyGeneration.h for the primary calling header

#ifndef VERILATED_VKEYGENERATION___024ROOT_H_
#define VERILATED_VKEYGENERATION___024ROOT_H_  // guard

#include "verilated.h"


class VKeyGeneration__Syms;

class alignas(VL_CACHE_LINE_BYTES) VKeyGeneration___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(enable,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ KeyGeneration__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ KeyGeneration__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
    IData/*31:0*/ KeyGeneration__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ KeyGeneration__DOT__unnamedblk5__DOT__i;
    IData/*31:0*/ KeyGeneration__DOT__unnamedblk9__DOT__i;
    IData/*31:0*/ KeyGeneration__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j;
    IData/*31:0*/ KeyGeneration__DOT__unnamedblk11__DOT__i;
    IData/*31:0*/ KeyGeneration__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j;
    IData/*31:0*/ KeyGeneration__DOT__unnamedblk6__DOT__i;
    IData/*31:0*/ KeyGeneration__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j;
    IData/*31:0*/ KeyGeneration__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__k;
    IData/*31:0*/ __VactIterCount;
    VL_IN(A[4][4],31,0);
    VL_IN(e[2][4],31,0);
    VL_IN(secret_key[2][4],31,0);
    VL_OUT(secretkey[2][4],31,0);
    VL_OUT(result[2][4],31,0);
    VL_OUT(combined_output[2][4][4],31,0);
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__poly_out0;
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__poly_out1;
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__poly_out2;
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__poly_out3;
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__added;
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__added1;
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2;
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1;
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2;
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1;
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2;
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1;
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2;
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1;
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__poly_mult0__DOT__temp_result;
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__poly_mult1__DOT__temp_result;
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__poly_mult2__DOT__temp_result;
    VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__poly_mult3__DOT__temp_result;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VKeyGeneration__Syms* const vlSymsp;

    // CONSTRUCTORS
    VKeyGeneration___024root(VKeyGeneration__Syms* symsp, const char* v__name);
    ~VKeyGeneration___024root();
    VL_UNCOPYABLE(VKeyGeneration___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

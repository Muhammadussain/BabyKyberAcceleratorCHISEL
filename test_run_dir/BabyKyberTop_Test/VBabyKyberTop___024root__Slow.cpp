// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBabyKyberTop.h for the primary calling header

#include "verilated.h"

#include "VBabyKyberTop__Syms.h"
#include "VBabyKyberTop___024root.h"

void VBabyKyberTop___024root___ctor_var_reset(VBabyKyberTop___024root* vlSelf);

VBabyKyberTop___024root::VBabyKyberTop___024root(VBabyKyberTop__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VBabyKyberTop___024root___ctor_var_reset(this);
}

void VBabyKyberTop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VBabyKyberTop___024root::~VBabyKyberTop___024root() {
}

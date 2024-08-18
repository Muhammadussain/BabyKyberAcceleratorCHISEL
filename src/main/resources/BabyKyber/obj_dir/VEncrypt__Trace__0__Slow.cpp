// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEncrypt__Syms.h"


VL_ATTR_COLD void VEncrypt___024root__trace_init_sub__TOP__0(VEncrypt___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+163,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"message",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("r", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+167,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+171,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("e1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+175,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+179,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("e2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+183+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("combined_output", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+187,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+191,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+195,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+199,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+203,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+207,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+211,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+215,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ciphertext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+219,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+223,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+227,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+231,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Encrypt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+163,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"message",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("r", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+167,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+171,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("e1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+175,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+179,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("e2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+183+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("combined_output", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+187,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+191,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+195,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+199,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+203,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+207,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+211,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+215,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ciphertext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+219,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+223,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+227,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+231,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rand_num", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 20; ++i) {
        tracep->declBus(c+235+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("transposed_matrix", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+5,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+9,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+13,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+131,0,"stop_random_generation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("poly_out0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+132+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_out1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+136+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_out2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+140+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_out3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+144+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_out4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+148+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_out5", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+152+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("added", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+107+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("added1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+111+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("added2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+115+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+156,0,"coefficients",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("coefficients_scaled", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+157+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("u", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+119,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+123,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("v", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+127+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+255+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+163,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+17+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+21+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+132+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+25+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+260,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult_inst1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+163,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+29+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+33+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+136+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+37+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+260,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult_inst2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+163,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+41+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+45+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+140+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+49+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+260,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult_inst3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+163,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+53+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+57+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+144+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+61+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+260,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult_inst4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+163,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+65+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+69+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+148+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+73+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+260,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult_inst5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+163,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+77+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+81+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+152+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+85+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+260,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("transpose_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("matrix_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+89,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+93,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+97,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+101,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("matrix_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+5,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+9,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+13,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+161,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+162,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+105,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+106,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VEncrypt___024root__trace_init_top(VEncrypt___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root__trace_init_top\n"); );
    // Body
    VEncrypt___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VEncrypt___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VEncrypt___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VEncrypt___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VEncrypt___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VEncrypt___024root__trace_register(VEncrypt___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VEncrypt___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VEncrypt___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VEncrypt___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VEncrypt___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VEncrypt___024root__trace_const_0_sub_0(VEncrypt___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VEncrypt___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root__trace_const_0\n"); );
    // Init
    VEncrypt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VEncrypt___024root*>(voidSelf);
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VEncrypt___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VEncrypt___024root__trace_const_0_sub_0(VEncrypt___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+235,(vlSelf->Encrypt__DOT__rand_num[0]),32);
    bufp->fullIData(oldp+236,(vlSelf->Encrypt__DOT__rand_num[1]),32);
    bufp->fullIData(oldp+237,(vlSelf->Encrypt__DOT__rand_num[2]),32);
    bufp->fullIData(oldp+238,(vlSelf->Encrypt__DOT__rand_num[3]),32);
    bufp->fullIData(oldp+239,(vlSelf->Encrypt__DOT__rand_num[4]),32);
    bufp->fullIData(oldp+240,(vlSelf->Encrypt__DOT__rand_num[5]),32);
    bufp->fullIData(oldp+241,(vlSelf->Encrypt__DOT__rand_num[6]),32);
    bufp->fullIData(oldp+242,(vlSelf->Encrypt__DOT__rand_num[7]),32);
    bufp->fullIData(oldp+243,(vlSelf->Encrypt__DOT__rand_num[8]),32);
    bufp->fullIData(oldp+244,(vlSelf->Encrypt__DOT__rand_num[9]),32);
    bufp->fullIData(oldp+245,(vlSelf->Encrypt__DOT__rand_num[10]),32);
    bufp->fullIData(oldp+246,(vlSelf->Encrypt__DOT__rand_num[11]),32);
    bufp->fullIData(oldp+247,(vlSelf->Encrypt__DOT__rand_num[12]),32);
    bufp->fullIData(oldp+248,(vlSelf->Encrypt__DOT__rand_num[13]),32);
    bufp->fullIData(oldp+249,(vlSelf->Encrypt__DOT__rand_num[14]),32);
    bufp->fullIData(oldp+250,(vlSelf->Encrypt__DOT__rand_num[15]),32);
    bufp->fullIData(oldp+251,(vlSelf->Encrypt__DOT__rand_num[16]),32);
    bufp->fullIData(oldp+252,(vlSelf->Encrypt__DOT__rand_num[17]),32);
    bufp->fullIData(oldp+253,(vlSelf->Encrypt__DOT__rand_num[18]),32);
    bufp->fullIData(oldp+254,(vlSelf->Encrypt__DOT__rand_num[19]),32);
    bufp->fullIData(oldp+255,(vlSelf->Encrypt__DOT__temp[0]),32);
    bufp->fullIData(oldp+256,(vlSelf->Encrypt__DOT__temp[1]),32);
    bufp->fullIData(oldp+257,(vlSelf->Encrypt__DOT__temp[2]),32);
    bufp->fullIData(oldp+258,(vlSelf->Encrypt__DOT__temp[3]),32);
    bufp->fullIData(oldp+259,(4U),32);
    bufp->fullIData(oldp+260,(1U),32);
    bufp->fullIData(oldp+261,(2U),32);
}

VL_ATTR_COLD void VEncrypt___024root__trace_full_0_sub_0(VEncrypt___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VEncrypt___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root__trace_full_0\n"); );
    // Init
    VEncrypt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VEncrypt___024root*>(voidSelf);
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VEncrypt___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VEncrypt___024root__trace_full_0_sub_0(VEncrypt___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->Encrypt__DOT__transposed_matrix
                            [0U][0U]),32);
    bufp->fullIData(oldp+2,(vlSelf->Encrypt__DOT__transposed_matrix
                            [0U][1U]),32);
    bufp->fullIData(oldp+3,(vlSelf->Encrypt__DOT__transposed_matrix
                            [0U][2U]),32);
    bufp->fullIData(oldp+4,(vlSelf->Encrypt__DOT__transposed_matrix
                            [0U][3U]),32);
    bufp->fullIData(oldp+5,(vlSelf->Encrypt__DOT__transposed_matrix
                            [1U][0U]),32);
    bufp->fullIData(oldp+6,(vlSelf->Encrypt__DOT__transposed_matrix
                            [1U][1U]),32);
    bufp->fullIData(oldp+7,(vlSelf->Encrypt__DOT__transposed_matrix
                            [1U][2U]),32);
    bufp->fullIData(oldp+8,(vlSelf->Encrypt__DOT__transposed_matrix
                            [1U][3U]),32);
    bufp->fullIData(oldp+9,(vlSelf->Encrypt__DOT__transposed_matrix
                            [2U][0U]),32);
    bufp->fullIData(oldp+10,(vlSelf->Encrypt__DOT__transposed_matrix
                             [2U][1U]),32);
    bufp->fullIData(oldp+11,(vlSelf->Encrypt__DOT__transposed_matrix
                             [2U][2U]),32);
    bufp->fullIData(oldp+12,(vlSelf->Encrypt__DOT__transposed_matrix
                             [2U][3U]),32);
    bufp->fullIData(oldp+13,(vlSelf->Encrypt__DOT__transposed_matrix
                             [3U][0U]),32);
    bufp->fullIData(oldp+14,(vlSelf->Encrypt__DOT__transposed_matrix
                             [3U][1U]),32);
    bufp->fullIData(oldp+15,(vlSelf->Encrypt__DOT__transposed_matrix
                             [3U][2U]),32);
    bufp->fullIData(oldp+16,(vlSelf->Encrypt__DOT__transposed_matrix
                             [3U][3U]),32);
    bufp->fullIData(oldp+17,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1[0]),32);
    bufp->fullIData(oldp+18,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1[1]),32);
    bufp->fullIData(oldp+19,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1[2]),32);
    bufp->fullIData(oldp+20,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1[3]),32);
    bufp->fullIData(oldp+21,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2[0]),32);
    bufp->fullIData(oldp+22,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2[1]),32);
    bufp->fullIData(oldp+23,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2[2]),32);
    bufp->fullIData(oldp+24,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2[3]),32);
    bufp->fullIData(oldp+25,(vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+26,(vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+27,(vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+28,(vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+29,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1[0]),32);
    bufp->fullIData(oldp+30,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1[1]),32);
    bufp->fullIData(oldp+31,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1[2]),32);
    bufp->fullIData(oldp+32,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1[3]),32);
    bufp->fullIData(oldp+33,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2[0]),32);
    bufp->fullIData(oldp+34,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2[1]),32);
    bufp->fullIData(oldp+35,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2[2]),32);
    bufp->fullIData(oldp+36,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2[3]),32);
    bufp->fullIData(oldp+37,(vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+38,(vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+39,(vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+40,(vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+41,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1[0]),32);
    bufp->fullIData(oldp+42,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1[1]),32);
    bufp->fullIData(oldp+43,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1[2]),32);
    bufp->fullIData(oldp+44,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1[3]),32);
    bufp->fullIData(oldp+45,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2[0]),32);
    bufp->fullIData(oldp+46,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2[1]),32);
    bufp->fullIData(oldp+47,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2[2]),32);
    bufp->fullIData(oldp+48,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2[3]),32);
    bufp->fullIData(oldp+49,(vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+50,(vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+51,(vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+52,(vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+53,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1[0]),32);
    bufp->fullIData(oldp+54,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1[1]),32);
    bufp->fullIData(oldp+55,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1[2]),32);
    bufp->fullIData(oldp+56,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1[3]),32);
    bufp->fullIData(oldp+57,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2[0]),32);
    bufp->fullIData(oldp+58,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2[1]),32);
    bufp->fullIData(oldp+59,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2[2]),32);
    bufp->fullIData(oldp+60,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2[3]),32);
    bufp->fullIData(oldp+61,(vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+62,(vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+63,(vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+64,(vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+65,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1[0]),32);
    bufp->fullIData(oldp+66,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1[1]),32);
    bufp->fullIData(oldp+67,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1[2]),32);
    bufp->fullIData(oldp+68,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1[3]),32);
    bufp->fullIData(oldp+69,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2[0]),32);
    bufp->fullIData(oldp+70,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2[1]),32);
    bufp->fullIData(oldp+71,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2[2]),32);
    bufp->fullIData(oldp+72,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2[3]),32);
    bufp->fullIData(oldp+73,(vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+74,(vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+75,(vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+76,(vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+77,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1[0]),32);
    bufp->fullIData(oldp+78,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1[1]),32);
    bufp->fullIData(oldp+79,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1[2]),32);
    bufp->fullIData(oldp+80,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1[3]),32);
    bufp->fullIData(oldp+81,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2[0]),32);
    bufp->fullIData(oldp+82,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2[1]),32);
    bufp->fullIData(oldp+83,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2[2]),32);
    bufp->fullIData(oldp+84,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2[3]),32);
    bufp->fullIData(oldp+85,(vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+86,(vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+87,(vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+88,(vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+89,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                             [0U][0U]),32);
    bufp->fullIData(oldp+90,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                             [0U][1U]),32);
    bufp->fullIData(oldp+91,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                             [0U][2U]),32);
    bufp->fullIData(oldp+92,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                             [0U][3U]),32);
    bufp->fullIData(oldp+93,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                             [1U][0U]),32);
    bufp->fullIData(oldp+94,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                             [1U][1U]),32);
    bufp->fullIData(oldp+95,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                             [1U][2U]),32);
    bufp->fullIData(oldp+96,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                             [1U][3U]),32);
    bufp->fullIData(oldp+97,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                             [2U][0U]),32);
    bufp->fullIData(oldp+98,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                             [2U][1U]),32);
    bufp->fullIData(oldp+99,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                             [2U][2U]),32);
    bufp->fullIData(oldp+100,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                              [2U][3U]),32);
    bufp->fullIData(oldp+101,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][0U]),32);
    bufp->fullIData(oldp+102,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][1U]),32);
    bufp->fullIData(oldp+103,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][2U]),32);
    bufp->fullIData(oldp+104,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][3U]),32);
    bufp->fullIData(oldp+105,(vlSelf->Encrypt__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+106,(vlSelf->Encrypt__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+107,(vlSelf->Encrypt__DOT__added[0]),32);
    bufp->fullIData(oldp+108,(vlSelf->Encrypt__DOT__added[1]),32);
    bufp->fullIData(oldp+109,(vlSelf->Encrypt__DOT__added[2]),32);
    bufp->fullIData(oldp+110,(vlSelf->Encrypt__DOT__added[3]),32);
    bufp->fullIData(oldp+111,(vlSelf->Encrypt__DOT__added1[0]),32);
    bufp->fullIData(oldp+112,(vlSelf->Encrypt__DOT__added1[1]),32);
    bufp->fullIData(oldp+113,(vlSelf->Encrypt__DOT__added1[2]),32);
    bufp->fullIData(oldp+114,(vlSelf->Encrypt__DOT__added1[3]),32);
    bufp->fullIData(oldp+115,(vlSelf->Encrypt__DOT__added2[0]),32);
    bufp->fullIData(oldp+116,(vlSelf->Encrypt__DOT__added2[1]),32);
    bufp->fullIData(oldp+117,(vlSelf->Encrypt__DOT__added2[2]),32);
    bufp->fullIData(oldp+118,(vlSelf->Encrypt__DOT__added2[3]),32);
    bufp->fullIData(oldp+119,(vlSelf->Encrypt__DOT__u
                              [0U][0U]),32);
    bufp->fullIData(oldp+120,(vlSelf->Encrypt__DOT__u
                              [0U][1U]),32);
    bufp->fullIData(oldp+121,(vlSelf->Encrypt__DOT__u
                              [0U][2U]),32);
    bufp->fullIData(oldp+122,(vlSelf->Encrypt__DOT__u
                              [0U][3U]),32);
    bufp->fullIData(oldp+123,(vlSelf->Encrypt__DOT__u
                              [1U][0U]),32);
    bufp->fullIData(oldp+124,(vlSelf->Encrypt__DOT__u
                              [1U][1U]),32);
    bufp->fullIData(oldp+125,(vlSelf->Encrypt__DOT__u
                              [1U][2U]),32);
    bufp->fullIData(oldp+126,(vlSelf->Encrypt__DOT__u
                              [1U][3U]),32);
    bufp->fullIData(oldp+127,(vlSelf->Encrypt__DOT__v[0]),32);
    bufp->fullIData(oldp+128,(vlSelf->Encrypt__DOT__v[1]),32);
    bufp->fullIData(oldp+129,(vlSelf->Encrypt__DOT__v[2]),32);
    bufp->fullIData(oldp+130,(vlSelf->Encrypt__DOT__v[3]),32);
    bufp->fullBit(oldp+131,(vlSelf->Encrypt__DOT__stop_random_generation));
    bufp->fullIData(oldp+132,(vlSelf->Encrypt__DOT__poly_out0[0]),32);
    bufp->fullIData(oldp+133,(vlSelf->Encrypt__DOT__poly_out0[1]),32);
    bufp->fullIData(oldp+134,(vlSelf->Encrypt__DOT__poly_out0[2]),32);
    bufp->fullIData(oldp+135,(vlSelf->Encrypt__DOT__poly_out0[3]),32);
    bufp->fullIData(oldp+136,(vlSelf->Encrypt__DOT__poly_out1[0]),32);
    bufp->fullIData(oldp+137,(vlSelf->Encrypt__DOT__poly_out1[1]),32);
    bufp->fullIData(oldp+138,(vlSelf->Encrypt__DOT__poly_out1[2]),32);
    bufp->fullIData(oldp+139,(vlSelf->Encrypt__DOT__poly_out1[3]),32);
    bufp->fullIData(oldp+140,(vlSelf->Encrypt__DOT__poly_out2[0]),32);
    bufp->fullIData(oldp+141,(vlSelf->Encrypt__DOT__poly_out2[1]),32);
    bufp->fullIData(oldp+142,(vlSelf->Encrypt__DOT__poly_out2[2]),32);
    bufp->fullIData(oldp+143,(vlSelf->Encrypt__DOT__poly_out2[3]),32);
    bufp->fullIData(oldp+144,(vlSelf->Encrypt__DOT__poly_out3[0]),32);
    bufp->fullIData(oldp+145,(vlSelf->Encrypt__DOT__poly_out3[1]),32);
    bufp->fullIData(oldp+146,(vlSelf->Encrypt__DOT__poly_out3[2]),32);
    bufp->fullIData(oldp+147,(vlSelf->Encrypt__DOT__poly_out3[3]),32);
    bufp->fullIData(oldp+148,(vlSelf->Encrypt__DOT__poly_out4[0]),32);
    bufp->fullIData(oldp+149,(vlSelf->Encrypt__DOT__poly_out4[1]),32);
    bufp->fullIData(oldp+150,(vlSelf->Encrypt__DOT__poly_out4[2]),32);
    bufp->fullIData(oldp+151,(vlSelf->Encrypt__DOT__poly_out4[3]),32);
    bufp->fullIData(oldp+152,(vlSelf->Encrypt__DOT__poly_out5[0]),32);
    bufp->fullIData(oldp+153,(vlSelf->Encrypt__DOT__poly_out5[1]),32);
    bufp->fullIData(oldp+154,(vlSelf->Encrypt__DOT__poly_out5[2]),32);
    bufp->fullIData(oldp+155,(vlSelf->Encrypt__DOT__poly_out5[3]),32);
    bufp->fullCData(oldp+156,(vlSelf->Encrypt__DOT__coefficients),4);
    bufp->fullIData(oldp+157,(vlSelf->Encrypt__DOT__coefficients_scaled[0]),32);
    bufp->fullIData(oldp+158,(vlSelf->Encrypt__DOT__coefficients_scaled[1]),32);
    bufp->fullIData(oldp+159,(vlSelf->Encrypt__DOT__coefficients_scaled[2]),32);
    bufp->fullIData(oldp+160,(vlSelf->Encrypt__DOT__coefficients_scaled[3]),32);
    bufp->fullIData(oldp+161,(vlSelf->Encrypt__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+162,(vlSelf->Encrypt__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+163,(vlSelf->clk));
    bufp->fullBit(oldp+164,(vlSelf->rst_n));
    bufp->fullBit(oldp+165,(vlSelf->enable));
    bufp->fullIData(oldp+166,(vlSelf->message),32);
    bufp->fullIData(oldp+167,(vlSelf->r[0U][0U]),32);
    bufp->fullIData(oldp+168,(vlSelf->r[0U][1U]),32);
    bufp->fullIData(oldp+169,(vlSelf->r[0U][2U]),32);
    bufp->fullIData(oldp+170,(vlSelf->r[0U][3U]),32);
    bufp->fullIData(oldp+171,(vlSelf->r[1U][0U]),32);
    bufp->fullIData(oldp+172,(vlSelf->r[1U][1U]),32);
    bufp->fullIData(oldp+173,(vlSelf->r[1U][2U]),32);
    bufp->fullIData(oldp+174,(vlSelf->r[1U][3U]),32);
    bufp->fullIData(oldp+175,(vlSelf->e1[0U][0U]),32);
    bufp->fullIData(oldp+176,(vlSelf->e1[0U][1U]),32);
    bufp->fullIData(oldp+177,(vlSelf->e1[0U][2U]),32);
    bufp->fullIData(oldp+178,(vlSelf->e1[0U][3U]),32);
    bufp->fullIData(oldp+179,(vlSelf->e1[1U][0U]),32);
    bufp->fullIData(oldp+180,(vlSelf->e1[1U][1U]),32);
    bufp->fullIData(oldp+181,(vlSelf->e1[1U][2U]),32);
    bufp->fullIData(oldp+182,(vlSelf->e1[1U][3U]),32);
    bufp->fullIData(oldp+183,(vlSelf->e2[0]),32);
    bufp->fullIData(oldp+184,(vlSelf->e2[1]),32);
    bufp->fullIData(oldp+185,(vlSelf->e2[2]),32);
    bufp->fullIData(oldp+186,(vlSelf->e2[3]),32);
    bufp->fullIData(oldp+187,(vlSelf->combined_output
                              [0U][0U][0U]),32);
    bufp->fullIData(oldp+188,(vlSelf->combined_output
                              [0U][0U][1U]),32);
    bufp->fullIData(oldp+189,(vlSelf->combined_output
                              [0U][0U][2U]),32);
    bufp->fullIData(oldp+190,(vlSelf->combined_output
                              [0U][0U][3U]),32);
    bufp->fullIData(oldp+191,(vlSelf->combined_output
                              [0U][1U][0U]),32);
    bufp->fullIData(oldp+192,(vlSelf->combined_output
                              [0U][1U][1U]),32);
    bufp->fullIData(oldp+193,(vlSelf->combined_output
                              [0U][1U][2U]),32);
    bufp->fullIData(oldp+194,(vlSelf->combined_output
                              [0U][1U][3U]),32);
    bufp->fullIData(oldp+195,(vlSelf->combined_output
                              [0U][2U][0U]),32);
    bufp->fullIData(oldp+196,(vlSelf->combined_output
                              [0U][2U][1U]),32);
    bufp->fullIData(oldp+197,(vlSelf->combined_output
                              [0U][2U][2U]),32);
    bufp->fullIData(oldp+198,(vlSelf->combined_output
                              [0U][2U][3U]),32);
    bufp->fullIData(oldp+199,(vlSelf->combined_output
                              [0U][3U][0U]),32);
    bufp->fullIData(oldp+200,(vlSelf->combined_output
                              [0U][3U][1U]),32);
    bufp->fullIData(oldp+201,(vlSelf->combined_output
                              [0U][3U][2U]),32);
    bufp->fullIData(oldp+202,(vlSelf->combined_output
                              [0U][3U][3U]),32);
    bufp->fullIData(oldp+203,(vlSelf->combined_output
                              [1U][0U][0U]),32);
    bufp->fullIData(oldp+204,(vlSelf->combined_output
                              [1U][0U][1U]),32);
    bufp->fullIData(oldp+205,(vlSelf->combined_output
                              [1U][0U][2U]),32);
    bufp->fullIData(oldp+206,(vlSelf->combined_output
                              [1U][0U][3U]),32);
    bufp->fullIData(oldp+207,(vlSelf->combined_output
                              [1U][1U][0U]),32);
    bufp->fullIData(oldp+208,(vlSelf->combined_output
                              [1U][1U][1U]),32);
    bufp->fullIData(oldp+209,(vlSelf->combined_output
                              [1U][1U][2U]),32);
    bufp->fullIData(oldp+210,(vlSelf->combined_output
                              [1U][1U][3U]),32);
    bufp->fullIData(oldp+211,(vlSelf->combined_output
                              [1U][2U][0U]),32);
    bufp->fullIData(oldp+212,(vlSelf->combined_output
                              [1U][2U][1U]),32);
    bufp->fullIData(oldp+213,(vlSelf->combined_output
                              [1U][2U][2U]),32);
    bufp->fullIData(oldp+214,(vlSelf->combined_output
                              [1U][2U][3U]),32);
    bufp->fullIData(oldp+215,(vlSelf->combined_output
                              [1U][3U][0U]),32);
    bufp->fullIData(oldp+216,(vlSelf->combined_output
                              [1U][3U][1U]),32);
    bufp->fullIData(oldp+217,(vlSelf->combined_output
                              [1U][3U][2U]),32);
    bufp->fullIData(oldp+218,(vlSelf->combined_output
                              [1U][3U][3U]),32);
    bufp->fullIData(oldp+219,(vlSelf->ciphertext[0U]
                              [0U][0U]),32);
    bufp->fullIData(oldp+220,(vlSelf->ciphertext[0U]
                              [0U][1U]),32);
    bufp->fullIData(oldp+221,(vlSelf->ciphertext[0U]
                              [0U][2U]),32);
    bufp->fullIData(oldp+222,(vlSelf->ciphertext[0U]
                              [0U][3U]),32);
    bufp->fullIData(oldp+223,(vlSelf->ciphertext[0U]
                              [1U][0U]),32);
    bufp->fullIData(oldp+224,(vlSelf->ciphertext[0U]
                              [1U][1U]),32);
    bufp->fullIData(oldp+225,(vlSelf->ciphertext[0U]
                              [1U][2U]),32);
    bufp->fullIData(oldp+226,(vlSelf->ciphertext[0U]
                              [1U][3U]),32);
    bufp->fullIData(oldp+227,(vlSelf->ciphertext[1U]
                              [0U][0U]),32);
    bufp->fullIData(oldp+228,(vlSelf->ciphertext[1U]
                              [0U][1U]),32);
    bufp->fullIData(oldp+229,(vlSelf->ciphertext[1U]
                              [0U][2U]),32);
    bufp->fullIData(oldp+230,(vlSelf->ciphertext[1U]
                              [0U][3U]),32);
    bufp->fullIData(oldp+231,(vlSelf->ciphertext[1U]
                              [1U][0U]),32);
    bufp->fullIData(oldp+232,(vlSelf->ciphertext[1U]
                              [1U][1U]),32);
    bufp->fullIData(oldp+233,(vlSelf->ciphertext[1U]
                              [1U][2U]),32);
    bufp->fullIData(oldp+234,(vlSelf->ciphertext[1U]
                              [1U][3U]),32);
}

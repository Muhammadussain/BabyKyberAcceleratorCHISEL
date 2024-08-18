// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VKeyGeneration__Syms.h"


void VKeyGeneration___024root__trace_chg_0_sub_0(VKeyGeneration___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VKeyGeneration___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root__trace_chg_0\n"); );
    // Init
    VKeyGeneration___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VKeyGeneration___024root*>(voidSelf);
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VKeyGeneration___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VKeyGeneration___024root__trace_chg_0_sub_0(VKeyGeneration___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[0]),32);
        bufp->chgIData(oldp+5,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[1]),32);
        bufp->chgIData(oldp+6,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[2]),32);
        bufp->chgIData(oldp+7,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[3]),32);
        bufp->chgIData(oldp+8,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[0]),32);
        bufp->chgIData(oldp+9,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[1]),32);
        bufp->chgIData(oldp+10,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[2]),32);
        bufp->chgIData(oldp+11,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[3]),32);
        bufp->chgIData(oldp+12,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[0]),32);
        bufp->chgIData(oldp+13,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[1]),32);
        bufp->chgIData(oldp+14,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[2]),32);
        bufp->chgIData(oldp+15,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[3]),32);
        bufp->chgIData(oldp+16,(vlSelf->KeyGeneration__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+17,(vlSelf->KeyGeneration__DOT__unnamedblk5__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+18,(vlSelf->KeyGeneration__DOT__added[0]),32);
        bufp->chgIData(oldp+19,(vlSelf->KeyGeneration__DOT__added[1]),32);
        bufp->chgIData(oldp+20,(vlSelf->KeyGeneration__DOT__added[2]),32);
        bufp->chgIData(oldp+21,(vlSelf->KeyGeneration__DOT__added[3]),32);
        bufp->chgIData(oldp+22,(vlSelf->KeyGeneration__DOT__added1[0]),32);
        bufp->chgIData(oldp+23,(vlSelf->KeyGeneration__DOT__added1[1]),32);
        bufp->chgIData(oldp+24,(vlSelf->KeyGeneration__DOT__added1[2]),32);
        bufp->chgIData(oldp+25,(vlSelf->KeyGeneration__DOT__added1[3]),32);
        bufp->chgIData(oldp+26,(vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+27,(vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+28,(vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+29,(vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+30,(vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+31,(vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+32,(vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+33,(vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+34,(vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+35,(vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+36,(vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+37,(vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+38,(vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+39,(vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+40,(vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+41,(vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[3]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+42,(vlSelf->KeyGeneration__DOT__poly_out0[0]),32);
        bufp->chgIData(oldp+43,(vlSelf->KeyGeneration__DOT__poly_out0[1]),32);
        bufp->chgIData(oldp+44,(vlSelf->KeyGeneration__DOT__poly_out0[2]),32);
        bufp->chgIData(oldp+45,(vlSelf->KeyGeneration__DOT__poly_out0[3]),32);
        bufp->chgIData(oldp+46,(vlSelf->KeyGeneration__DOT__poly_out1[0]),32);
        bufp->chgIData(oldp+47,(vlSelf->KeyGeneration__DOT__poly_out1[1]),32);
        bufp->chgIData(oldp+48,(vlSelf->KeyGeneration__DOT__poly_out1[2]),32);
        bufp->chgIData(oldp+49,(vlSelf->KeyGeneration__DOT__poly_out1[3]),32);
        bufp->chgIData(oldp+50,(vlSelf->KeyGeneration__DOT__poly_out2[0]),32);
        bufp->chgIData(oldp+51,(vlSelf->KeyGeneration__DOT__poly_out2[1]),32);
        bufp->chgIData(oldp+52,(vlSelf->KeyGeneration__DOT__poly_out2[2]),32);
        bufp->chgIData(oldp+53,(vlSelf->KeyGeneration__DOT__poly_out2[3]),32);
        bufp->chgIData(oldp+54,(vlSelf->KeyGeneration__DOT__poly_out3[0]),32);
        bufp->chgIData(oldp+55,(vlSelf->KeyGeneration__DOT__poly_out3[1]),32);
        bufp->chgIData(oldp+56,(vlSelf->KeyGeneration__DOT__poly_out3[2]),32);
        bufp->chgIData(oldp+57,(vlSelf->KeyGeneration__DOT__poly_out3[3]),32);
        bufp->chgIData(oldp+58,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[0]),32);
        bufp->chgIData(oldp+59,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[1]),32);
        bufp->chgIData(oldp+60,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[2]),32);
        bufp->chgIData(oldp+61,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[3]),32);
        bufp->chgIData(oldp+62,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[0]),32);
        bufp->chgIData(oldp+63,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[1]),32);
        bufp->chgIData(oldp+64,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[2]),32);
        bufp->chgIData(oldp+65,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[3]),32);
        bufp->chgIData(oldp+66,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[0]),32);
        bufp->chgIData(oldp+67,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[1]),32);
        bufp->chgIData(oldp+68,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[2]),32);
        bufp->chgIData(oldp+69,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[3]),32);
        bufp->chgIData(oldp+70,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[0]),32);
        bufp->chgIData(oldp+71,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[1]),32);
        bufp->chgIData(oldp+72,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[2]),32);
        bufp->chgIData(oldp+73,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[3]),32);
        bufp->chgIData(oldp+74,(vlSelf->KeyGeneration__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+75,(vlSelf->KeyGeneration__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+76,(vlSelf->KeyGeneration__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+77,(vlSelf->KeyGeneration__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
        bufp->chgIData(oldp+78,(vlSelf->KeyGeneration__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+79,(vlSelf->KeyGeneration__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
        bufp->chgIData(oldp+80,(vlSelf->KeyGeneration__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__k),32);
        bufp->chgIData(oldp+81,(vlSelf->KeyGeneration__DOT__unnamedblk9__DOT__i),32);
        bufp->chgIData(oldp+82,(vlSelf->KeyGeneration__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
    }
    bufp->chgIData(oldp+83,(vlSelf->A[0U][0U]),32);
    bufp->chgIData(oldp+84,(vlSelf->A[0U][1U]),32);
    bufp->chgIData(oldp+85,(vlSelf->A[0U][2U]),32);
    bufp->chgIData(oldp+86,(vlSelf->A[0U][3U]),32);
    bufp->chgIData(oldp+87,(vlSelf->A[1U][0U]),32);
    bufp->chgIData(oldp+88,(vlSelf->A[1U][1U]),32);
    bufp->chgIData(oldp+89,(vlSelf->A[1U][2U]),32);
    bufp->chgIData(oldp+90,(vlSelf->A[1U][3U]),32);
    bufp->chgIData(oldp+91,(vlSelf->A[2U][0U]),32);
    bufp->chgIData(oldp+92,(vlSelf->A[2U][1U]),32);
    bufp->chgIData(oldp+93,(vlSelf->A[2U][2U]),32);
    bufp->chgIData(oldp+94,(vlSelf->A[2U][3U]),32);
    bufp->chgIData(oldp+95,(vlSelf->A[3U][0U]),32);
    bufp->chgIData(oldp+96,(vlSelf->A[3U][1U]),32);
    bufp->chgIData(oldp+97,(vlSelf->A[3U][2U]),32);
    bufp->chgIData(oldp+98,(vlSelf->A[3U][3U]),32);
    bufp->chgIData(oldp+99,(vlSelf->e[0U][0U]),32);
    bufp->chgIData(oldp+100,(vlSelf->e[0U][1U]),32);
    bufp->chgIData(oldp+101,(vlSelf->e[0U][2U]),32);
    bufp->chgIData(oldp+102,(vlSelf->e[0U][3U]),32);
    bufp->chgIData(oldp+103,(vlSelf->e[1U][0U]),32);
    bufp->chgIData(oldp+104,(vlSelf->e[1U][1U]),32);
    bufp->chgIData(oldp+105,(vlSelf->e[1U][2U]),32);
    bufp->chgIData(oldp+106,(vlSelf->e[1U][3U]),32);
    bufp->chgIData(oldp+107,(vlSelf->secret_key[0U]
                             [0U]),32);
    bufp->chgIData(oldp+108,(vlSelf->secret_key[0U]
                             [1U]),32);
    bufp->chgIData(oldp+109,(vlSelf->secret_key[0U]
                             [2U]),32);
    bufp->chgIData(oldp+110,(vlSelf->secret_key[0U]
                             [3U]),32);
    bufp->chgIData(oldp+111,(vlSelf->secret_key[1U]
                             [0U]),32);
    bufp->chgIData(oldp+112,(vlSelf->secret_key[1U]
                             [1U]),32);
    bufp->chgIData(oldp+113,(vlSelf->secret_key[1U]
                             [2U]),32);
    bufp->chgIData(oldp+114,(vlSelf->secret_key[1U]
                             [3U]),32);
    bufp->chgIData(oldp+115,(vlSelf->secretkey[0U][0U]),32);
    bufp->chgIData(oldp+116,(vlSelf->secretkey[0U][1U]),32);
    bufp->chgIData(oldp+117,(vlSelf->secretkey[0U][2U]),32);
    bufp->chgIData(oldp+118,(vlSelf->secretkey[0U][3U]),32);
    bufp->chgIData(oldp+119,(vlSelf->secretkey[1U][0U]),32);
    bufp->chgIData(oldp+120,(vlSelf->secretkey[1U][1U]),32);
    bufp->chgIData(oldp+121,(vlSelf->secretkey[1U][2U]),32);
    bufp->chgIData(oldp+122,(vlSelf->secretkey[1U][3U]),32);
    bufp->chgIData(oldp+123,(vlSelf->result[0U][0U]),32);
    bufp->chgIData(oldp+124,(vlSelf->result[0U][1U]),32);
    bufp->chgIData(oldp+125,(vlSelf->result[0U][2U]),32);
    bufp->chgIData(oldp+126,(vlSelf->result[0U][3U]),32);
    bufp->chgIData(oldp+127,(vlSelf->result[1U][0U]),32);
    bufp->chgIData(oldp+128,(vlSelf->result[1U][1U]),32);
    bufp->chgIData(oldp+129,(vlSelf->result[1U][2U]),32);
    bufp->chgIData(oldp+130,(vlSelf->result[1U][3U]),32);
    bufp->chgIData(oldp+131,(vlSelf->combined_output
                             [0U][0U][0U]),32);
    bufp->chgIData(oldp+132,(vlSelf->combined_output
                             [0U][0U][1U]),32);
    bufp->chgIData(oldp+133,(vlSelf->combined_output
                             [0U][0U][2U]),32);
    bufp->chgIData(oldp+134,(vlSelf->combined_output
                             [0U][0U][3U]),32);
    bufp->chgIData(oldp+135,(vlSelf->combined_output
                             [0U][1U][0U]),32);
    bufp->chgIData(oldp+136,(vlSelf->combined_output
                             [0U][1U][1U]),32);
    bufp->chgIData(oldp+137,(vlSelf->combined_output
                             [0U][1U][2U]),32);
    bufp->chgIData(oldp+138,(vlSelf->combined_output
                             [0U][1U][3U]),32);
    bufp->chgIData(oldp+139,(vlSelf->combined_output
                             [0U][2U][0U]),32);
    bufp->chgIData(oldp+140,(vlSelf->combined_output
                             [0U][2U][1U]),32);
    bufp->chgIData(oldp+141,(vlSelf->combined_output
                             [0U][2U][2U]),32);
    bufp->chgIData(oldp+142,(vlSelf->combined_output
                             [0U][2U][3U]),32);
    bufp->chgIData(oldp+143,(vlSelf->combined_output
                             [0U][3U][0U]),32);
    bufp->chgIData(oldp+144,(vlSelf->combined_output
                             [0U][3U][1U]),32);
    bufp->chgIData(oldp+145,(vlSelf->combined_output
                             [0U][3U][2U]),32);
    bufp->chgIData(oldp+146,(vlSelf->combined_output
                             [0U][3U][3U]),32);
    bufp->chgIData(oldp+147,(vlSelf->combined_output
                             [1U][0U][0U]),32);
    bufp->chgIData(oldp+148,(vlSelf->combined_output
                             [1U][0U][1U]),32);
    bufp->chgIData(oldp+149,(vlSelf->combined_output
                             [1U][0U][2U]),32);
    bufp->chgIData(oldp+150,(vlSelf->combined_output
                             [1U][0U][3U]),32);
    bufp->chgIData(oldp+151,(vlSelf->combined_output
                             [1U][1U][0U]),32);
    bufp->chgIData(oldp+152,(vlSelf->combined_output
                             [1U][1U][1U]),32);
    bufp->chgIData(oldp+153,(vlSelf->combined_output
                             [1U][1U][2U]),32);
    bufp->chgIData(oldp+154,(vlSelf->combined_output
                             [1U][1U][3U]),32);
    bufp->chgIData(oldp+155,(vlSelf->combined_output
                             [1U][2U][0U]),32);
    bufp->chgIData(oldp+156,(vlSelf->combined_output
                             [1U][2U][1U]),32);
    bufp->chgIData(oldp+157,(vlSelf->combined_output
                             [1U][2U][2U]),32);
    bufp->chgIData(oldp+158,(vlSelf->combined_output
                             [1U][2U][3U]),32);
    bufp->chgIData(oldp+159,(vlSelf->combined_output
                             [1U][3U][0U]),32);
    bufp->chgIData(oldp+160,(vlSelf->combined_output
                             [1U][3U][1U]),32);
    bufp->chgIData(oldp+161,(vlSelf->combined_output
                             [1U][3U][2U]),32);
    bufp->chgIData(oldp+162,(vlSelf->combined_output
                             [1U][3U][3U]),32);
    bufp->chgBit(oldp+163,(vlSelf->clk));
    bufp->chgBit(oldp+164,(vlSelf->rst_n));
    bufp->chgBit(oldp+165,(vlSelf->enable));
}

void VKeyGeneration___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root__trace_cleanup\n"); );
    // Init
    VKeyGeneration___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VKeyGeneration___024root*>(voidSelf);
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

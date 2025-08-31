// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


VL_ATTR_COLD void VTop___024root__trace_init_sub__TOP__0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+729,"clk", false,-1);
    tracep->declBit(c+730,"rst_n", false,-1);
    tracep->declBit(c+731,"enable", false,-1);
    tracep->declBus(c+732,"data_Req", false,-1, 31,0);
    tracep->declBus(c+733,"addr_Req", false,-1, 31,0);
    tracep->declBit(c+734,"wen_Req", false,-1);
    tracep->declBus(c+735,"bytelane_Req", false,-1, 7,0);
    tracep->declBus(c+736,"data_Resp", false,-1, 31,0);
    tracep->pushNamePrefix("Top ");
    tracep->declBit(c+729,"clk", false,-1);
    tracep->declBit(c+730,"rst_n", false,-1);
    tracep->declBit(c+731,"enable", false,-1);
    tracep->declBus(c+732,"data_Req", false,-1, 31,0);
    tracep->declBus(c+733,"addr_Req", false,-1, 31,0);
    tracep->declBit(c+734,"wen_Req", false,-1);
    tracep->declBus(c+735,"bytelane_Req", false,-1, 7,0);
    tracep->declBus(c+736,"data_Resp", false,-1, 31,0);
    tracep->pushNamePrefix("secretkey");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+123,"[0]", false,-1, 31,0);
    tracep->declBus(c+124,"[1]", false,-1, 31,0);
    tracep->declBus(c+125,"[2]", false,-1, 31,0);
    tracep->declBus(c+126,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+127,"[0]", false,-1, 31,0);
    tracep->declBus(c+128,"[1]", false,-1, 31,0);
    tracep->declBus(c+129,"[2]", false,-1, 31,0);
    tracep->declBus(c+130,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+99,"[0]", false,-1, 31,0);
    tracep->declBus(c+100,"[1]", false,-1, 31,0);
    tracep->declBus(c+101,"[2]", false,-1, 31,0);
    tracep->declBus(c+102,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+103,"[0]", false,-1, 31,0);
    tracep->declBus(c+104,"[1]", false,-1, 31,0);
    tracep->declBus(c+105,"[2]", false,-1, 31,0);
    tracep->declBus(c+106,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("public_key");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+386,"[0]", false,-1, 31,0);
    tracep->declBus(c+387,"[1]", false,-1, 31,0);
    tracep->declBus(c+388,"[2]", false,-1, 31,0);
    tracep->declBus(c+389,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+390,"[0]", false,-1, 31,0);
    tracep->declBus(c+391,"[1]", false,-1, 31,0);
    tracep->declBus(c+392,"[2]", false,-1, 31,0);
    tracep->declBus(c+393,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+394,"[0]", false,-1, 31,0);
    tracep->declBus(c+395,"[1]", false,-1, 31,0);
    tracep->declBus(c+396,"[2]", false,-1, 31,0);
    tracep->declBus(c+397,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+398,"[0]", false,-1, 31,0);
    tracep->declBus(c+399,"[1]", false,-1, 31,0);
    tracep->declBus(c+400,"[2]", false,-1, 31,0);
    tracep->declBus(c+401,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+402,"[0]", false,-1, 31,0);
    tracep->declBus(c+403,"[1]", false,-1, 31,0);
    tracep->declBus(c+404,"[2]", false,-1, 31,0);
    tracep->declBus(c+405,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+406,"[0]", false,-1, 31,0);
    tracep->declBus(c+407,"[1]", false,-1, 31,0);
    tracep->declBus(c+408,"[2]", false,-1, 31,0);
    tracep->declBus(c+409,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+410,"[0]", false,-1, 31,0);
    tracep->declBus(c+411,"[1]", false,-1, 31,0);
    tracep->declBus(c+412,"[2]", false,-1, 31,0);
    tracep->declBus(c+413,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+414,"[0]", false,-1, 31,0);
    tracep->declBus(c+415,"[1]", false,-1, 31,0);
    tracep->declBus(c+416,"[2]", false,-1, 31,0);
    tracep->declBus(c+417,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("A_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+131,"[0]", false,-1, 31,0);
    tracep->declBus(c+132,"[1]", false,-1, 31,0);
    tracep->declBus(c+133,"[2]", false,-1, 31,0);
    tracep->declBus(c+134,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+135,"[0]", false,-1, 31,0);
    tracep->declBus(c+136,"[1]", false,-1, 31,0);
    tracep->declBus(c+137,"[2]", false,-1, 31,0);
    tracep->declBus(c+138,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+139,"[0]", false,-1, 31,0);
    tracep->declBus(c+140,"[1]", false,-1, 31,0);
    tracep->declBus(c+141,"[2]", false,-1, 31,0);
    tracep->declBus(c+142,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+143,"[0]", false,-1, 31,0);
    tracep->declBus(c+144,"[1]", false,-1, 31,0);
    tracep->declBus(c+145,"[2]", false,-1, 31,0);
    tracep->declBus(c+146,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+147,"[0]", false,-1, 31,0);
    tracep->declBus(c+148,"[1]", false,-1, 31,0);
    tracep->declBus(c+149,"[2]", false,-1, 31,0);
    tracep->declBus(c+150,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+151,"[0]", false,-1, 31,0);
    tracep->declBus(c+152,"[1]", false,-1, 31,0);
    tracep->declBus(c+153,"[2]", false,-1, 31,0);
    tracep->declBus(c+154,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+155,"[0]", false,-1, 31,0);
    tracep->declBus(c+156,"[1]", false,-1, 31,0);
    tracep->declBus(c+157,"[2]", false,-1, 31,0);
    tracep->declBus(c+158,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+159,"[0]", false,-1, 31,0);
    tracep->declBus(c+160,"[1]", false,-1, 31,0);
    tracep->declBus(c+161,"[2]", false,-1, 31,0);
    tracep->declBus(c+162,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ciphertext");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+107,"[0]", false,-1, 31,0);
    tracep->declBus(c+108,"[1]", false,-1, 31,0);
    tracep->declBus(c+109,"[2]", false,-1, 31,0);
    tracep->declBus(c+110,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+111,"[0]", false,-1, 31,0);
    tracep->declBus(c+112,"[1]", false,-1, 31,0);
    tracep->declBus(c+113,"[2]", false,-1, 31,0);
    tracep->declBus(c+114,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+115,"[0]", false,-1, 31,0);
    tracep->declBus(c+116,"[1]", false,-1, 31,0);
    tracep->declBus(c+117,"[2]", false,-1, 31,0);
    tracep->declBus(c+118,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+119,"[0]", false,-1, 31,0);
    tracep->declBus(c+120,"[1]", false,-1, 31,0);
    tracep->declBus(c+121,"[2]", false,-1, 31,0);
    tracep->declBus(c+122,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("r");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+163,"[0]", false,-1, 31,0);
    tracep->declBus(c+164,"[1]", false,-1, 31,0);
    tracep->declBus(c+165,"[2]", false,-1, 31,0);
    tracep->declBus(c+166,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+167,"[0]", false,-1, 31,0);
    tracep->declBus(c+168,"[1]", false,-1, 31,0);
    tracep->declBus(c+169,"[2]", false,-1, 31,0);
    tracep->declBus(c+170,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e1");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+171,"[0]", false,-1, 31,0);
    tracep->declBus(c+172,"[1]", false,-1, 31,0);
    tracep->declBus(c+173,"[2]", false,-1, 31,0);
    tracep->declBus(c+174,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+175,"[0]", false,-1, 31,0);
    tracep->declBus(c+176,"[1]", false,-1, 31,0);
    tracep->declBus(c+177,"[2]", false,-1, 31,0);
    tracep->declBus(c+178,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+179+i*1,"e2", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"decimal_value", false,-1, 31,0);
    tracep->declBus(c+2,"m_b", false,-1, 3,0);
    tracep->declBus(c+183,"A_t000", false,-1, 31,0);
    tracep->declBus(c+184,"A_t001", false,-1, 31,0);
    tracep->declBus(c+185,"A_t002", false,-1, 31,0);
    tracep->declBus(c+186,"A_t003", false,-1, 31,0);
    tracep->declBus(c+187,"A_t010", false,-1, 31,0);
    tracep->declBus(c+188,"A_t011", false,-1, 31,0);
    tracep->declBus(c+189,"A_t012", false,-1, 31,0);
    tracep->declBus(c+190,"A_t013", false,-1, 31,0);
    tracep->declBus(c+191,"A_t020", false,-1, 31,0);
    tracep->declBus(c+192,"A_t021", false,-1, 31,0);
    tracep->declBus(c+193,"A_t022", false,-1, 31,0);
    tracep->declBus(c+194,"A_t023", false,-1, 31,0);
    tracep->declBus(c+195,"A_t030", false,-1, 31,0);
    tracep->declBus(c+196,"A_t031", false,-1, 31,0);
    tracep->declBus(c+197,"A_t032", false,-1, 31,0);
    tracep->declBus(c+198,"A_t033", false,-1, 31,0);
    tracep->declBus(c+199,"s_00", false,-1, 31,0);
    tracep->declBus(c+200,"s_01", false,-1, 31,0);
    tracep->declBus(c+201,"s_02", false,-1, 31,0);
    tracep->declBus(c+202,"s_03", false,-1, 31,0);
    tracep->declBus(c+203,"s_10", false,-1, 31,0);
    tracep->declBus(c+204,"s_11", false,-1, 31,0);
    tracep->declBus(c+205,"s_12", false,-1, 31,0);
    tracep->declBus(c+206,"s_13", false,-1, 31,0);
    tracep->declBus(c+207,"e_00", false,-1, 31,0);
    tracep->declBus(c+208,"e_01", false,-1, 31,0);
    tracep->declBus(c+209,"e_02", false,-1, 31,0);
    tracep->declBus(c+210,"e_03", false,-1, 31,0);
    tracep->declBus(c+211,"e_10", false,-1, 31,0);
    tracep->declBus(c+212,"e_11", false,-1, 31,0);
    tracep->declBus(c+213,"e_12", false,-1, 31,0);
    tracep->declBus(c+214,"e_13", false,-1, 31,0);
    tracep->declBus(c+215,"message", false,-1, 31,0);
    tracep->declBus(c+216,"public_key000", false,-1, 31,0);
    tracep->declBus(c+217,"public_key001", false,-1, 31,0);
    tracep->declBus(c+218,"public_key002", false,-1, 31,0);
    tracep->declBus(c+219,"public_key003", false,-1, 31,0);
    tracep->declBus(c+220,"public_key010", false,-1, 31,0);
    tracep->declBus(c+221,"public_key011", false,-1, 31,0);
    tracep->declBus(c+222,"public_key012", false,-1, 31,0);
    tracep->declBus(c+223,"public_key013", false,-1, 31,0);
    tracep->declBus(c+224,"public_key020", false,-1, 31,0);
    tracep->declBus(c+225,"public_key021", false,-1, 31,0);
    tracep->declBus(c+226,"public_key022", false,-1, 31,0);
    tracep->declBus(c+227,"public_key023", false,-1, 31,0);
    tracep->declBus(c+228,"public_key030", false,-1, 31,0);
    tracep->declBus(c+229,"public_key031", false,-1, 31,0);
    tracep->declBus(c+230,"public_key032", false,-1, 31,0);
    tracep->declBus(c+231,"public_key033", false,-1, 31,0);
    tracep->declBus(c+232,"public_key100", false,-1, 31,0);
    tracep->declBus(c+233,"public_key101", false,-1, 31,0);
    tracep->declBus(c+234,"public_key102", false,-1, 31,0);
    tracep->declBus(c+235,"public_key103", false,-1, 31,0);
    tracep->declBus(c+236,"public_key110", false,-1, 31,0);
    tracep->declBus(c+237,"public_key111", false,-1, 31,0);
    tracep->declBus(c+238,"public_key112", false,-1, 31,0);
    tracep->declBus(c+239,"public_key113", false,-1, 31,0);
    tracep->declBus(c+240,"r_00", false,-1, 31,0);
    tracep->declBus(c+241,"r_01", false,-1, 31,0);
    tracep->declBus(c+242,"r_02", false,-1, 31,0);
    tracep->declBus(c+243,"r_03", false,-1, 31,0);
    tracep->declBus(c+244,"r_10", false,-1, 31,0);
    tracep->declBus(c+245,"r_11", false,-1, 31,0);
    tracep->declBus(c+246,"r_12", false,-1, 31,0);
    tracep->declBus(c+247,"r_13", false,-1, 31,0);
    tracep->declBus(c+248,"e1_00", false,-1, 31,0);
    tracep->declBus(c+249,"e1_01", false,-1, 31,0);
    tracep->declBus(c+250,"e1_02", false,-1, 31,0);
    tracep->declBus(c+251,"e1_03", false,-1, 31,0);
    tracep->declBus(c+252,"e1_10", false,-1, 31,0);
    tracep->declBus(c+253,"e1_11", false,-1, 31,0);
    tracep->declBus(c+254,"e1_12", false,-1, 31,0);
    tracep->declBus(c+255,"e1_13", false,-1, 31,0);
    tracep->declBus(c+256,"e2_0", false,-1, 31,0);
    tracep->declBus(c+257,"e2_1", false,-1, 31,0);
    tracep->declBus(c+258,"e2_2", false,-1, 31,0);
    tracep->declBus(c+259,"e2_3", false,-1, 31,0);
    tracep->declBus(c+260,"ciphertext000", false,-1, 31,0);
    tracep->declBus(c+261,"ciphertext001", false,-1, 31,0);
    tracep->declBus(c+262,"ciphertext002", false,-1, 31,0);
    tracep->declBus(c+263,"ciphertext003", false,-1, 31,0);
    tracep->declBus(c+264,"ciphertext010", false,-1, 31,0);
    tracep->declBus(c+265,"ciphertext011", false,-1, 31,0);
    tracep->declBus(c+266,"ciphertext012", false,-1, 31,0);
    tracep->declBus(c+267,"ciphertext013", false,-1, 31,0);
    tracep->declBus(c+268,"ciphertext100", false,-1, 31,0);
    tracep->declBus(c+269,"ciphertext101", false,-1, 31,0);
    tracep->declBus(c+270,"ciphertext102", false,-1, 31,0);
    tracep->declBus(c+271,"ciphertext103", false,-1, 31,0);
    tracep->pushNamePrefix("decryption ");
    tracep->declBit(c+729,"clk", false,-1);
    tracep->declBit(c+730,"rst_n", false,-1);
    tracep->declBit(c+731,"enable", false,-1);
    tracep->pushNamePrefix("secret_key");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+272,"[0]", false,-1, 31,0);
    tracep->declBus(c+273,"[1]", false,-1, 31,0);
    tracep->declBus(c+274,"[2]", false,-1, 31,0);
    tracep->declBus(c+275,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+276,"[0]", false,-1, 31,0);
    tracep->declBus(c+277,"[1]", false,-1, 31,0);
    tracep->declBus(c+278,"[2]", false,-1, 31,0);
    tracep->declBus(c+279,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ciphertext");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+3,"[0]", false,-1, 31,0);
    tracep->declBus(c+4,"[1]", false,-1, 31,0);
    tracep->declBus(c+5,"[2]", false,-1, 31,0);
    tracep->declBus(c+6,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+7,"[0]", false,-1, 31,0);
    tracep->declBus(c+8,"[1]", false,-1, 31,0);
    tracep->declBus(c+9,"[2]", false,-1, 31,0);
    tracep->declBus(c+10,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+11,"[0]", false,-1, 31,0);
    tracep->declBus(c+12,"[1]", false,-1, 31,0);
    tracep->declBus(c+13,"[2]", false,-1, 31,0);
    tracep->declBus(c+14,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+15,"[0]", false,-1, 31,0);
    tracep->declBus(c+16,"[1]", false,-1, 31,0);
    tracep->declBus(c+17,"[2]", false,-1, 31,0);
    tracep->declBus(c+18,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+2,"m_b", false,-1, 3,0);
    tracep->declBus(c+1,"decimal_value", false,-1, 31,0);
    tracep->declBus(c+737,"Q", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+418+i*1,"poly_out0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+422+i*1,"poly_out1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+19+i*1,"temp_m_n", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("poly_mult1 ");
    tracep->declBit(c+729,"clk", false,-1);
    tracep->declBit(c+730,"rst_n", false,-1);
    tracep->declBit(c+731,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+23+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+280+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+426+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+27+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+739,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+738,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+738,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult2 ");
    tracep->declBit(c+729,"clk", false,-1);
    tracep->declBit(c+730,"rst_n", false,-1);
    tracep->declBit(c+731,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+31+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+284+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+430+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+35+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+739,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+738,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+738,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("encryption ");
    tracep->declBit(c+729,"clk", false,-1);
    tracep->declBit(c+730,"rst_n", false,-1);
    tracep->declBit(c+731,"enable", false,-1);
    tracep->declBus(c+215,"message", false,-1, 31,0);
    tracep->pushNamePrefix("r");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+288,"[0]", false,-1, 31,0);
    tracep->declBus(c+289,"[1]", false,-1, 31,0);
    tracep->declBus(c+290,"[2]", false,-1, 31,0);
    tracep->declBus(c+291,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+292,"[0]", false,-1, 31,0);
    tracep->declBus(c+293,"[1]", false,-1, 31,0);
    tracep->declBus(c+294,"[2]", false,-1, 31,0);
    tracep->declBus(c+295,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e1");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+296,"[0]", false,-1, 31,0);
    tracep->declBus(c+297,"[1]", false,-1, 31,0);
    tracep->declBus(c+298,"[2]", false,-1, 31,0);
    tracep->declBus(c+299,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+300,"[0]", false,-1, 31,0);
    tracep->declBus(c+301,"[1]", false,-1, 31,0);
    tracep->declBus(c+302,"[2]", false,-1, 31,0);
    tracep->declBus(c+303,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+304+i*1,"e2", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("combined_output");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+434,"[0]", false,-1, 31,0);
    tracep->declBus(c+435,"[1]", false,-1, 31,0);
    tracep->declBus(c+436,"[2]", false,-1, 31,0);
    tracep->declBus(c+437,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+438,"[0]", false,-1, 31,0);
    tracep->declBus(c+439,"[1]", false,-1, 31,0);
    tracep->declBus(c+440,"[2]", false,-1, 31,0);
    tracep->declBus(c+441,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+442,"[0]", false,-1, 31,0);
    tracep->declBus(c+443,"[1]", false,-1, 31,0);
    tracep->declBus(c+444,"[2]", false,-1, 31,0);
    tracep->declBus(c+445,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+446,"[0]", false,-1, 31,0);
    tracep->declBus(c+447,"[1]", false,-1, 31,0);
    tracep->declBus(c+448,"[2]", false,-1, 31,0);
    tracep->declBus(c+449,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+450,"[0]", false,-1, 31,0);
    tracep->declBus(c+451,"[1]", false,-1, 31,0);
    tracep->declBus(c+452,"[2]", false,-1, 31,0);
    tracep->declBus(c+453,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+454,"[0]", false,-1, 31,0);
    tracep->declBus(c+455,"[1]", false,-1, 31,0);
    tracep->declBus(c+456,"[2]", false,-1, 31,0);
    tracep->declBus(c+457,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+458,"[0]", false,-1, 31,0);
    tracep->declBus(c+459,"[1]", false,-1, 31,0);
    tracep->declBus(c+460,"[2]", false,-1, 31,0);
    tracep->declBus(c+461,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+462,"[0]", false,-1, 31,0);
    tracep->declBus(c+463,"[1]", false,-1, 31,0);
    tracep->declBus(c+464,"[2]", false,-1, 31,0);
    tracep->declBus(c+465,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ciphertext");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+39,"[0]", false,-1, 31,0);
    tracep->declBus(c+40,"[1]", false,-1, 31,0);
    tracep->declBus(c+41,"[2]", false,-1, 31,0);
    tracep->declBus(c+42,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+43,"[0]", false,-1, 31,0);
    tracep->declBus(c+44,"[1]", false,-1, 31,0);
    tracep->declBus(c+45,"[2]", false,-1, 31,0);
    tracep->declBus(c+46,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+47,"[0]", false,-1, 31,0);
    tracep->declBus(c+48,"[1]", false,-1, 31,0);
    tracep->declBus(c+49,"[2]", false,-1, 31,0);
    tracep->declBus(c+50,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+51,"[0]", false,-1, 31,0);
    tracep->declBus(c+52,"[1]", false,-1, 31,0);
    tracep->declBus(c+53,"[2]", false,-1, 31,0);
    tracep->declBus(c+54,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("transposed_matrix");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+466,"[0]", false,-1, 31,0);
    tracep->declBus(c+467,"[1]", false,-1, 31,0);
    tracep->declBus(c+468,"[2]", false,-1, 31,0);
    tracep->declBus(c+469,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+470,"[0]", false,-1, 31,0);
    tracep->declBus(c+471,"[1]", false,-1, 31,0);
    tracep->declBus(c+472,"[2]", false,-1, 31,0);
    tracep->declBus(c+473,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+474,"[0]", false,-1, 31,0);
    tracep->declBus(c+475,"[1]", false,-1, 31,0);
    tracep->declBus(c+476,"[2]", false,-1, 31,0);
    tracep->declBus(c+477,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+478,"[0]", false,-1, 31,0);
    tracep->declBus(c+479,"[1]", false,-1, 31,0);
    tracep->declBus(c+480,"[2]", false,-1, 31,0);
    tracep->declBus(c+481,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+482+i*1,"poly_out0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+486+i*1,"poly_out1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+490+i*1,"poly_out2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+494+i*1,"poly_out3", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+498+i*1,"poly_out4", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+502+i*1,"poly_out5", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+55+i*1,"added", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+59+i*1,"added1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+63+i*1,"added2", true,(i+0), 31,0);
    }
    tracep->declBus(c+308,"coefficients", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+309+i*1,"coefficients_scaled", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("u");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+67,"[0]", false,-1, 31,0);
    tracep->declBus(c+68,"[1]", false,-1, 31,0);
    tracep->declBus(c+69,"[2]", false,-1, 31,0);
    tracep->declBus(c+70,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+71,"[0]", false,-1, 31,0);
    tracep->declBus(c+72,"[1]", false,-1, 31,0);
    tracep->declBus(c+73,"[2]", false,-1, 31,0);
    tracep->declBus(c+74,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+75+i*1,"v", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+740+i*1,"temp", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("poly_mult_inst ");
    tracep->declBit(c+729,"clk", false,-1);
    tracep->declBit(c+730,"rst_n", false,-1);
    tracep->declBit(c+731,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+506+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+313+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+510+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+514+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+739,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+738,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+738,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult_inst1 ");
    tracep->declBit(c+729,"clk", false,-1);
    tracep->declBit(c+730,"rst_n", false,-1);
    tracep->declBit(c+731,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+518+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+317+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+522+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+526+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+739,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+738,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+738,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult_inst2 ");
    tracep->declBit(c+729,"clk", false,-1);
    tracep->declBit(c+730,"rst_n", false,-1);
    tracep->declBit(c+731,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+530+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+321+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+534+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+538+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+739,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+738,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+738,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult_inst3 ");
    tracep->declBit(c+729,"clk", false,-1);
    tracep->declBit(c+730,"rst_n", false,-1);
    tracep->declBit(c+731,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+542+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+325+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+546+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+550+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+739,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+738,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+738,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult_inst4 ");
    tracep->declBit(c+729,"clk", false,-1);
    tracep->declBit(c+730,"rst_n", false,-1);
    tracep->declBit(c+731,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+554+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+329+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+558+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+562+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+739,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+738,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+738,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult_inst5 ");
    tracep->declBit(c+729,"clk", false,-1);
    tracep->declBit(c+730,"rst_n", false,-1);
    tracep->declBit(c+731,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+566+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+333+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+570+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+574+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+739,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+738,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+738,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("transpose_inst ");
    tracep->pushNamePrefix("matrix_in");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+578,"[0]", false,-1, 31,0);
    tracep->declBus(c+579,"[1]", false,-1, 31,0);
    tracep->declBus(c+580,"[2]", false,-1, 31,0);
    tracep->declBus(c+581,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+582,"[0]", false,-1, 31,0);
    tracep->declBus(c+583,"[1]", false,-1, 31,0);
    tracep->declBus(c+584,"[2]", false,-1, 31,0);
    tracep->declBus(c+585,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+586,"[0]", false,-1, 31,0);
    tracep->declBus(c+587,"[1]", false,-1, 31,0);
    tracep->declBus(c+588,"[2]", false,-1, 31,0);
    tracep->declBus(c+589,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+590,"[0]", false,-1, 31,0);
    tracep->declBus(c+591,"[1]", false,-1, 31,0);
    tracep->declBus(c+592,"[2]", false,-1, 31,0);
    tracep->declBus(c+593,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("matrix_out");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+594,"[0]", false,-1, 31,0);
    tracep->declBus(c+595,"[1]", false,-1, 31,0);
    tracep->declBus(c+596,"[2]", false,-1, 31,0);
    tracep->declBus(c+597,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+598,"[0]", false,-1, 31,0);
    tracep->declBus(c+599,"[1]", false,-1, 31,0);
    tracep->declBus(c+600,"[2]", false,-1, 31,0);
    tracep->declBus(c+601,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+602,"[0]", false,-1, 31,0);
    tracep->declBus(c+603,"[1]", false,-1, 31,0);
    tracep->declBus(c+604,"[2]", false,-1, 31,0);
    tracep->declBus(c+605,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+606,"[0]", false,-1, 31,0);
    tracep->declBus(c+607,"[1]", false,-1, 31,0);
    tracep->declBus(c+608,"[2]", false,-1, 31,0);
    tracep->declBus(c+609,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+337,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+338,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+79,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+80,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+744,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk9 ");
    tracep->declBus(c+738,"j", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("keygen ");
    tracep->pushNamePrefix("A");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+681,"[0]", false,-1, 31,0);
    tracep->declBus(c+682,"[1]", false,-1, 31,0);
    tracep->declBus(c+683,"[2]", false,-1, 31,0);
    tracep->declBus(c+684,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+685,"[0]", false,-1, 31,0);
    tracep->declBus(c+686,"[1]", false,-1, 31,0);
    tracep->declBus(c+687,"[2]", false,-1, 31,0);
    tracep->declBus(c+688,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+689,"[0]", false,-1, 31,0);
    tracep->declBus(c+690,"[1]", false,-1, 31,0);
    tracep->declBus(c+691,"[2]", false,-1, 31,0);
    tracep->declBus(c+692,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+693,"[0]", false,-1, 31,0);
    tracep->declBus(c+694,"[1]", false,-1, 31,0);
    tracep->declBus(c+695,"[2]", false,-1, 31,0);
    tracep->declBus(c+696,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+339,"[0]", false,-1, 31,0);
    tracep->declBus(c+340,"[1]", false,-1, 31,0);
    tracep->declBus(c+341,"[2]", false,-1, 31,0);
    tracep->declBus(c+342,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+343,"[0]", false,-1, 31,0);
    tracep->declBus(c+344,"[1]", false,-1, 31,0);
    tracep->declBus(c+345,"[2]", false,-1, 31,0);
    tracep->declBus(c+346,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("secret_key");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+347,"[0]", false,-1, 31,0);
    tracep->declBus(c+348,"[1]", false,-1, 31,0);
    tracep->declBus(c+349,"[2]", false,-1, 31,0);
    tracep->declBus(c+350,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+351,"[0]", false,-1, 31,0);
    tracep->declBus(c+352,"[1]", false,-1, 31,0);
    tracep->declBus(c+353,"[2]", false,-1, 31,0);
    tracep->declBus(c+354,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("secretkey");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+355,"[0]", false,-1, 31,0);
    tracep->declBus(c+356,"[1]", false,-1, 31,0);
    tracep->declBus(c+357,"[2]", false,-1, 31,0);
    tracep->declBus(c+358,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+359,"[0]", false,-1, 31,0);
    tracep->declBus(c+360,"[1]", false,-1, 31,0);
    tracep->declBus(c+361,"[2]", false,-1, 31,0);
    tracep->declBus(c+362,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+81,"[0]", false,-1, 31,0);
    tracep->declBus(c+82,"[1]", false,-1, 31,0);
    tracep->declBus(c+83,"[2]", false,-1, 31,0);
    tracep->declBus(c+84,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+85,"[0]", false,-1, 31,0);
    tracep->declBus(c+86,"[1]", false,-1, 31,0);
    tracep->declBus(c+87,"[2]", false,-1, 31,0);
    tracep->declBus(c+88,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("combined_output");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+610,"[0]", false,-1, 31,0);
    tracep->declBus(c+611,"[1]", false,-1, 31,0);
    tracep->declBus(c+612,"[2]", false,-1, 31,0);
    tracep->declBus(c+613,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+614,"[0]", false,-1, 31,0);
    tracep->declBus(c+615,"[1]", false,-1, 31,0);
    tracep->declBus(c+616,"[2]", false,-1, 31,0);
    tracep->declBus(c+617,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+618,"[0]", false,-1, 31,0);
    tracep->declBus(c+619,"[1]", false,-1, 31,0);
    tracep->declBus(c+620,"[2]", false,-1, 31,0);
    tracep->declBus(c+621,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+622,"[0]", false,-1, 31,0);
    tracep->declBus(c+623,"[1]", false,-1, 31,0);
    tracep->declBus(c+624,"[2]", false,-1, 31,0);
    tracep->declBus(c+625,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+626,"[0]", false,-1, 31,0);
    tracep->declBus(c+627,"[1]", false,-1, 31,0);
    tracep->declBus(c+628,"[2]", false,-1, 31,0);
    tracep->declBus(c+629,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+630,"[0]", false,-1, 31,0);
    tracep->declBus(c+631,"[1]", false,-1, 31,0);
    tracep->declBus(c+632,"[2]", false,-1, 31,0);
    tracep->declBus(c+633,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+634,"[0]", false,-1, 31,0);
    tracep->declBus(c+635,"[1]", false,-1, 31,0);
    tracep->declBus(c+636,"[2]", false,-1, 31,0);
    tracep->declBus(c+637,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+638,"[0]", false,-1, 31,0);
    tracep->declBus(c+639,"[1]", false,-1, 31,0);
    tracep->declBus(c+640,"[2]", false,-1, 31,0);
    tracep->declBus(c+641,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+729,"clk", false,-1);
    tracep->declBit(c+730,"rst_n", false,-1);
    tracep->declBit(c+731,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+642+i*1,"poly_out0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+646+i*1,"poly_out1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+650+i*1,"poly_out2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+654+i*1,"poly_out3", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+89+i*1,"added", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+93+i*1,"added1", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("poly_mult0 ");
    tracep->declBit(c+729,"clk", false,-1);
    tracep->declBit(c+730,"rst_n", false,-1);
    tracep->declBit(c+731,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+697+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+363+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+658+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+701+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+739,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+738,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+738,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult1 ");
    tracep->declBit(c+729,"clk", false,-1);
    tracep->declBit(c+730,"rst_n", false,-1);
    tracep->declBit(c+731,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+705+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+367+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+662+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+709+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+739,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+738,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+738,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult2 ");
    tracep->declBit(c+729,"clk", false,-1);
    tracep->declBit(c+730,"rst_n", false,-1);
    tracep->declBit(c+731,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+713+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+371+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+666+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+717+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+739,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+738,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+738,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult3 ");
    tracep->declBit(c+729,"clk", false,-1);
    tracep->declBit(c+730,"rst_n", false,-1);
    tracep->declBit(c+731,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+721+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+375+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+670+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+725+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+739,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+738,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+738,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+738,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+379,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+380,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk11 ");
    tracep->declBus(c+674,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk12 ");
    tracep->declBus(c+675,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+97,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+98,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+676,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+677,"j", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+678,"k", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk9 ");
    tracep->declBus(c+679,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk10 ");
    tracep->declBus(c+680,"j", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+381,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+382,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+383,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+384,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+385,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VTop___024root__trace_init_top(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_top\n"); );
    // Body
    VTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTop___024root__trace_register(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTop___024root__trace_full_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_top_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTop___024root__trace_full_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->Top__DOT__decimal_value),32);
    bufp->fullCData(oldp+2,(vlSelf->Top__DOT__m_b),4);
    bufp->fullIData(oldp+3,(vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
                            [0U][0U][0U]),32);
    bufp->fullIData(oldp+4,(vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
                            [0U][0U][1U]),32);
    bufp->fullIData(oldp+5,(vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
                            [0U][0U][2U]),32);
    bufp->fullIData(oldp+6,(vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
                            [0U][0U][3U]),32);
    bufp->fullIData(oldp+7,(vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
                            [0U][1U][0U]),32);
    bufp->fullIData(oldp+8,(vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
                            [0U][1U][1U]),32);
    bufp->fullIData(oldp+9,(vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
                            [0U][1U][2U]),32);
    bufp->fullIData(oldp+10,(vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
                             [0U][1U][3U]),32);
    bufp->fullIData(oldp+11,(vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
                             [1U][0U][0U]),32);
    bufp->fullIData(oldp+12,(vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
                             [1U][0U][1U]),32);
    bufp->fullIData(oldp+13,(vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
                             [1U][0U][2U]),32);
    bufp->fullIData(oldp+14,(vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
                             [1U][0U][3U]),32);
    bufp->fullIData(oldp+15,(vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
                             [1U][1U][0U]),32);
    bufp->fullIData(oldp+16,(vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
                             [1U][1U][1U]),32);
    bufp->fullIData(oldp+17,(vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
                             [1U][1U][2U]),32);
    bufp->fullIData(oldp+18,(vlSelf->Top__DOT____Vcellinp__decryption__ciphertext
                             [1U][1U][3U]),32);
    bufp->fullIData(oldp+19,(vlSelf->Top__DOT__decryption__DOT__temp_m_n[0]),32);
    bufp->fullIData(oldp+20,(vlSelf->Top__DOT__decryption__DOT__temp_m_n[1]),32);
    bufp->fullIData(oldp+21,(vlSelf->Top__DOT__decryption__DOT__temp_m_n[2]),32);
    bufp->fullIData(oldp+22,(vlSelf->Top__DOT__decryption__DOT__temp_m_n[3]),32);
    bufp->fullIData(oldp+23,(vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[0]),32);
    bufp->fullIData(oldp+24,(vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[1]),32);
    bufp->fullIData(oldp+25,(vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[2]),32);
    bufp->fullIData(oldp+26,(vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[3]),32);
    bufp->fullIData(oldp+27,(vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+28,(vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+29,(vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+30,(vlSelf->Top__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+31,(vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[0]),32);
    bufp->fullIData(oldp+32,(vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[1]),32);
    bufp->fullIData(oldp+33,(vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[2]),32);
    bufp->fullIData(oldp+34,(vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[3]),32);
    bufp->fullIData(oldp+35,(vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+36,(vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+37,(vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+38,(vlSelf->Top__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+39,(vlSelf->Top__DOT____Vcellout__encryption__ciphertext
                             [0U][0U][0U]),32);
    bufp->fullIData(oldp+40,(vlSelf->Top__DOT____Vcellout__encryption__ciphertext
                             [0U][0U][1U]),32);
    bufp->fullIData(oldp+41,(vlSelf->Top__DOT____Vcellout__encryption__ciphertext
                             [0U][0U][2U]),32);
    bufp->fullIData(oldp+42,(vlSelf->Top__DOT____Vcellout__encryption__ciphertext
                             [0U][0U][3U]),32);
    bufp->fullIData(oldp+43,(vlSelf->Top__DOT____Vcellout__encryption__ciphertext
                             [0U][1U][0U]),32);
    bufp->fullIData(oldp+44,(vlSelf->Top__DOT____Vcellout__encryption__ciphertext
                             [0U][1U][1U]),32);
    bufp->fullIData(oldp+45,(vlSelf->Top__DOT____Vcellout__encryption__ciphertext
                             [0U][1U][2U]),32);
    bufp->fullIData(oldp+46,(vlSelf->Top__DOT____Vcellout__encryption__ciphertext
                             [0U][1U][3U]),32);
    bufp->fullIData(oldp+47,(vlSelf->Top__DOT____Vcellout__encryption__ciphertext
                             [1U][0U][0U]),32);
    bufp->fullIData(oldp+48,(vlSelf->Top__DOT____Vcellout__encryption__ciphertext
                             [1U][0U][1U]),32);
    bufp->fullIData(oldp+49,(vlSelf->Top__DOT____Vcellout__encryption__ciphertext
                             [1U][0U][2U]),32);
    bufp->fullIData(oldp+50,(vlSelf->Top__DOT____Vcellout__encryption__ciphertext
                             [1U][0U][3U]),32);
    bufp->fullIData(oldp+51,(vlSelf->Top__DOT____Vcellout__encryption__ciphertext
                             [1U][1U][0U]),32);
    bufp->fullIData(oldp+52,(vlSelf->Top__DOT____Vcellout__encryption__ciphertext
                             [1U][1U][1U]),32);
    bufp->fullIData(oldp+53,(vlSelf->Top__DOT____Vcellout__encryption__ciphertext
                             [1U][1U][2U]),32);
    bufp->fullIData(oldp+54,(vlSelf->Top__DOT____Vcellout__encryption__ciphertext
                             [1U][1U][3U]),32);
    bufp->fullIData(oldp+55,(vlSelf->Top__DOT__encryption__DOT__added[0]),32);
    bufp->fullIData(oldp+56,(vlSelf->Top__DOT__encryption__DOT__added[1]),32);
    bufp->fullIData(oldp+57,(vlSelf->Top__DOT__encryption__DOT__added[2]),32);
    bufp->fullIData(oldp+58,(vlSelf->Top__DOT__encryption__DOT__added[3]),32);
    bufp->fullIData(oldp+59,(vlSelf->Top__DOT__encryption__DOT__added1[0]),32);
    bufp->fullIData(oldp+60,(vlSelf->Top__DOT__encryption__DOT__added1[1]),32);
    bufp->fullIData(oldp+61,(vlSelf->Top__DOT__encryption__DOT__added1[2]),32);
    bufp->fullIData(oldp+62,(vlSelf->Top__DOT__encryption__DOT__added1[3]),32);
    bufp->fullIData(oldp+63,(vlSelf->Top__DOT__encryption__DOT__added2[0]),32);
    bufp->fullIData(oldp+64,(vlSelf->Top__DOT__encryption__DOT__added2[1]),32);
    bufp->fullIData(oldp+65,(vlSelf->Top__DOT__encryption__DOT__added2[2]),32);
    bufp->fullIData(oldp+66,(vlSelf->Top__DOT__encryption__DOT__added2[3]),32);
    bufp->fullIData(oldp+67,(vlSelf->Top__DOT__encryption__DOT__u
                             [0U][0U]),32);
    bufp->fullIData(oldp+68,(vlSelf->Top__DOT__encryption__DOT__u
                             [0U][1U]),32);
    bufp->fullIData(oldp+69,(vlSelf->Top__DOT__encryption__DOT__u
                             [0U][2U]),32);
    bufp->fullIData(oldp+70,(vlSelf->Top__DOT__encryption__DOT__u
                             [0U][3U]),32);
    bufp->fullIData(oldp+71,(vlSelf->Top__DOT__encryption__DOT__u
                             [1U][0U]),32);
    bufp->fullIData(oldp+72,(vlSelf->Top__DOT__encryption__DOT__u
                             [1U][1U]),32);
    bufp->fullIData(oldp+73,(vlSelf->Top__DOT__encryption__DOT__u
                             [1U][2U]),32);
    bufp->fullIData(oldp+74,(vlSelf->Top__DOT__encryption__DOT__u
                             [1U][3U]),32);
    bufp->fullIData(oldp+75,(vlSelf->Top__DOT__encryption__DOT__v[0]),32);
    bufp->fullIData(oldp+76,(vlSelf->Top__DOT__encryption__DOT__v[1]),32);
    bufp->fullIData(oldp+77,(vlSelf->Top__DOT__encryption__DOT__v[2]),32);
    bufp->fullIData(oldp+78,(vlSelf->Top__DOT__encryption__DOT__v[3]),32);
    bufp->fullIData(oldp+79,(vlSelf->Top__DOT__encryption__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+80,(vlSelf->Top__DOT__encryption__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+81,(vlSelf->Top__DOT____Vcellout__keygen__result
                             [0U][0U]),32);
    bufp->fullIData(oldp+82,(vlSelf->Top__DOT____Vcellout__keygen__result
                             [0U][1U]),32);
    bufp->fullIData(oldp+83,(vlSelf->Top__DOT____Vcellout__keygen__result
                             [0U][2U]),32);
    bufp->fullIData(oldp+84,(vlSelf->Top__DOT____Vcellout__keygen__result
                             [0U][3U]),32);
    bufp->fullIData(oldp+85,(vlSelf->Top__DOT____Vcellout__keygen__result
                             [1U][0U]),32);
    bufp->fullIData(oldp+86,(vlSelf->Top__DOT____Vcellout__keygen__result
                             [1U][1U]),32);
    bufp->fullIData(oldp+87,(vlSelf->Top__DOT____Vcellout__keygen__result
                             [1U][2U]),32);
    bufp->fullIData(oldp+88,(vlSelf->Top__DOT____Vcellout__keygen__result
                             [1U][3U]),32);
    bufp->fullIData(oldp+89,(vlSelf->Top__DOT__keygen__DOT__added[0]),32);
    bufp->fullIData(oldp+90,(vlSelf->Top__DOT__keygen__DOT__added[1]),32);
    bufp->fullIData(oldp+91,(vlSelf->Top__DOT__keygen__DOT__added[2]),32);
    bufp->fullIData(oldp+92,(vlSelf->Top__DOT__keygen__DOT__added[3]),32);
    bufp->fullIData(oldp+93,(vlSelf->Top__DOT__keygen__DOT__added1[0]),32);
    bufp->fullIData(oldp+94,(vlSelf->Top__DOT__keygen__DOT__added1[1]),32);
    bufp->fullIData(oldp+95,(vlSelf->Top__DOT__keygen__DOT__added1[2]),32);
    bufp->fullIData(oldp+96,(vlSelf->Top__DOT__keygen__DOT__added1[3]),32);
    bufp->fullIData(oldp+97,(vlSelf->Top__DOT__keygen__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+98,(vlSelf->Top__DOT__keygen__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+99,(vlSelf->Top__DOT__result
                             [0U][0U]),32);
    bufp->fullIData(oldp+100,(vlSelf->Top__DOT__result
                              [0U][1U]),32);
    bufp->fullIData(oldp+101,(vlSelf->Top__DOT__result
                              [0U][2U]),32);
    bufp->fullIData(oldp+102,(vlSelf->Top__DOT__result
                              [0U][3U]),32);
    bufp->fullIData(oldp+103,(vlSelf->Top__DOT__result
                              [1U][0U]),32);
    bufp->fullIData(oldp+104,(vlSelf->Top__DOT__result
                              [1U][1U]),32);
    bufp->fullIData(oldp+105,(vlSelf->Top__DOT__result
                              [1U][2U]),32);
    bufp->fullIData(oldp+106,(vlSelf->Top__DOT__result
                              [1U][3U]),32);
    bufp->fullIData(oldp+107,(vlSelf->Top__DOT__ciphertext
                              [0U][0U][0U]),32);
    bufp->fullIData(oldp+108,(vlSelf->Top__DOT__ciphertext
                              [0U][0U][1U]),32);
    bufp->fullIData(oldp+109,(vlSelf->Top__DOT__ciphertext
                              [0U][0U][2U]),32);
    bufp->fullIData(oldp+110,(vlSelf->Top__DOT__ciphertext
                              [0U][0U][3U]),32);
    bufp->fullIData(oldp+111,(vlSelf->Top__DOT__ciphertext
                              [0U][1U][0U]),32);
    bufp->fullIData(oldp+112,(vlSelf->Top__DOT__ciphertext
                              [0U][1U][1U]),32);
    bufp->fullIData(oldp+113,(vlSelf->Top__DOT__ciphertext
                              [0U][1U][2U]),32);
    bufp->fullIData(oldp+114,(vlSelf->Top__DOT__ciphertext
                              [0U][1U][3U]),32);
    bufp->fullIData(oldp+115,(vlSelf->Top__DOT__ciphertext
                              [1U][0U][0U]),32);
    bufp->fullIData(oldp+116,(vlSelf->Top__DOT__ciphertext
                              [1U][0U][1U]),32);
    bufp->fullIData(oldp+117,(vlSelf->Top__DOT__ciphertext
                              [1U][0U][2U]),32);
    bufp->fullIData(oldp+118,(vlSelf->Top__DOT__ciphertext
                              [1U][0U][3U]),32);
    bufp->fullIData(oldp+119,(vlSelf->Top__DOT__ciphertext
                              [1U][1U][0U]),32);
    bufp->fullIData(oldp+120,(vlSelf->Top__DOT__ciphertext
                              [1U][1U][1U]),32);
    bufp->fullIData(oldp+121,(vlSelf->Top__DOT__ciphertext
                              [1U][1U][2U]),32);
    bufp->fullIData(oldp+122,(vlSelf->Top__DOT__ciphertext
                              [1U][1U][3U]),32);
    bufp->fullIData(oldp+123,(vlSelf->Top__DOT__secretkey
                              [0U][0U]),32);
    bufp->fullIData(oldp+124,(vlSelf->Top__DOT__secretkey
                              [0U][1U]),32);
    bufp->fullIData(oldp+125,(vlSelf->Top__DOT__secretkey
                              [0U][2U]),32);
    bufp->fullIData(oldp+126,(vlSelf->Top__DOT__secretkey
                              [0U][3U]),32);
    bufp->fullIData(oldp+127,(vlSelf->Top__DOT__secretkey
                              [1U][0U]),32);
    bufp->fullIData(oldp+128,(vlSelf->Top__DOT__secretkey
                              [1U][1U]),32);
    bufp->fullIData(oldp+129,(vlSelf->Top__DOT__secretkey
                              [1U][2U]),32);
    bufp->fullIData(oldp+130,(vlSelf->Top__DOT__secretkey
                              [1U][3U]),32);
    bufp->fullIData(oldp+131,(vlSelf->Top__DOT__A_reg
                              [0U][0U]),32);
    bufp->fullIData(oldp+132,(vlSelf->Top__DOT__A_reg
                              [0U][1U]),32);
    bufp->fullIData(oldp+133,(vlSelf->Top__DOT__A_reg
                              [0U][2U]),32);
    bufp->fullIData(oldp+134,(vlSelf->Top__DOT__A_reg
                              [0U][3U]),32);
    bufp->fullIData(oldp+135,(vlSelf->Top__DOT__A_reg
                              [1U][0U]),32);
    bufp->fullIData(oldp+136,(vlSelf->Top__DOT__A_reg
                              [1U][1U]),32);
    bufp->fullIData(oldp+137,(vlSelf->Top__DOT__A_reg
                              [1U][2U]),32);
    bufp->fullIData(oldp+138,(vlSelf->Top__DOT__A_reg
                              [1U][3U]),32);
    bufp->fullIData(oldp+139,(vlSelf->Top__DOT__A_reg
                              [2U][0U]),32);
    bufp->fullIData(oldp+140,(vlSelf->Top__DOT__A_reg
                              [2U][1U]),32);
    bufp->fullIData(oldp+141,(vlSelf->Top__DOT__A_reg
                              [2U][2U]),32);
    bufp->fullIData(oldp+142,(vlSelf->Top__DOT__A_reg
                              [2U][3U]),32);
    bufp->fullIData(oldp+143,(vlSelf->Top__DOT__A_reg
                              [3U][0U]),32);
    bufp->fullIData(oldp+144,(vlSelf->Top__DOT__A_reg
                              [3U][1U]),32);
    bufp->fullIData(oldp+145,(vlSelf->Top__DOT__A_reg
                              [3U][2U]),32);
    bufp->fullIData(oldp+146,(vlSelf->Top__DOT__A_reg
                              [3U][3U]),32);
    bufp->fullIData(oldp+147,(vlSelf->Top__DOT__s_reg
                              [0U][0U]),32);
    bufp->fullIData(oldp+148,(vlSelf->Top__DOT__s_reg
                              [0U][1U]),32);
    bufp->fullIData(oldp+149,(vlSelf->Top__DOT__s_reg
                              [0U][2U]),32);
    bufp->fullIData(oldp+150,(vlSelf->Top__DOT__s_reg
                              [0U][3U]),32);
    bufp->fullIData(oldp+151,(vlSelf->Top__DOT__s_reg
                              [1U][0U]),32);
    bufp->fullIData(oldp+152,(vlSelf->Top__DOT__s_reg
                              [1U][1U]),32);
    bufp->fullIData(oldp+153,(vlSelf->Top__DOT__s_reg
                              [1U][2U]),32);
    bufp->fullIData(oldp+154,(vlSelf->Top__DOT__s_reg
                              [1U][3U]),32);
    bufp->fullIData(oldp+155,(vlSelf->Top__DOT__e_reg
                              [0U][0U]),32);
    bufp->fullIData(oldp+156,(vlSelf->Top__DOT__e_reg
                              [0U][1U]),32);
    bufp->fullIData(oldp+157,(vlSelf->Top__DOT__e_reg
                              [0U][2U]),32);
    bufp->fullIData(oldp+158,(vlSelf->Top__DOT__e_reg
                              [0U][3U]),32);
    bufp->fullIData(oldp+159,(vlSelf->Top__DOT__e_reg
                              [1U][0U]),32);
    bufp->fullIData(oldp+160,(vlSelf->Top__DOT__e_reg
                              [1U][1U]),32);
    bufp->fullIData(oldp+161,(vlSelf->Top__DOT__e_reg
                              [1U][2U]),32);
    bufp->fullIData(oldp+162,(vlSelf->Top__DOT__e_reg
                              [1U][3U]),32);
    bufp->fullIData(oldp+163,(vlSelf->Top__DOT__r[0U]
                              [0U]),32);
    bufp->fullIData(oldp+164,(vlSelf->Top__DOT__r[0U]
                              [1U]),32);
    bufp->fullIData(oldp+165,(vlSelf->Top__DOT__r[0U]
                              [2U]),32);
    bufp->fullIData(oldp+166,(vlSelf->Top__DOT__r[0U]
                              [3U]),32);
    bufp->fullIData(oldp+167,(vlSelf->Top__DOT__r[1U]
                              [0U]),32);
    bufp->fullIData(oldp+168,(vlSelf->Top__DOT__r[1U]
                              [1U]),32);
    bufp->fullIData(oldp+169,(vlSelf->Top__DOT__r[1U]
                              [2U]),32);
    bufp->fullIData(oldp+170,(vlSelf->Top__DOT__r[1U]
                              [3U]),32);
    bufp->fullIData(oldp+171,(vlSelf->Top__DOT__e1[0U]
                              [0U]),32);
    bufp->fullIData(oldp+172,(vlSelf->Top__DOT__e1[0U]
                              [1U]),32);
    bufp->fullIData(oldp+173,(vlSelf->Top__DOT__e1[0U]
                              [2U]),32);
    bufp->fullIData(oldp+174,(vlSelf->Top__DOT__e1[0U]
                              [3U]),32);
    bufp->fullIData(oldp+175,(vlSelf->Top__DOT__e1[1U]
                              [0U]),32);
    bufp->fullIData(oldp+176,(vlSelf->Top__DOT__e1[1U]
                              [1U]),32);
    bufp->fullIData(oldp+177,(vlSelf->Top__DOT__e1[1U]
                              [2U]),32);
    bufp->fullIData(oldp+178,(vlSelf->Top__DOT__e1[1U]
                              [3U]),32);
    bufp->fullIData(oldp+179,(vlSelf->Top__DOT__e2[0]),32);
    bufp->fullIData(oldp+180,(vlSelf->Top__DOT__e2[1]),32);
    bufp->fullIData(oldp+181,(vlSelf->Top__DOT__e2[2]),32);
    bufp->fullIData(oldp+182,(vlSelf->Top__DOT__e2[3]),32);
    bufp->fullIData(oldp+183,(vlSelf->Top__DOT__A_t000),32);
    bufp->fullIData(oldp+184,(vlSelf->Top__DOT__A_t001),32);
    bufp->fullIData(oldp+185,(vlSelf->Top__DOT__A_t002),32);
    bufp->fullIData(oldp+186,(vlSelf->Top__DOT__A_t003),32);
    bufp->fullIData(oldp+187,(vlSelf->Top__DOT__A_t010),32);
    bufp->fullIData(oldp+188,(vlSelf->Top__DOT__A_t011),32);
    bufp->fullIData(oldp+189,(vlSelf->Top__DOT__A_t012),32);
    bufp->fullIData(oldp+190,(vlSelf->Top__DOT__A_t013),32);
    bufp->fullIData(oldp+191,(vlSelf->Top__DOT__A_t020),32);
    bufp->fullIData(oldp+192,(vlSelf->Top__DOT__A_t021),32);
    bufp->fullIData(oldp+193,(vlSelf->Top__DOT__A_t022),32);
    bufp->fullIData(oldp+194,(vlSelf->Top__DOT__A_t023),32);
    bufp->fullIData(oldp+195,(vlSelf->Top__DOT__A_t030),32);
    bufp->fullIData(oldp+196,(vlSelf->Top__DOT__A_t031),32);
    bufp->fullIData(oldp+197,(vlSelf->Top__DOT__A_t032),32);
    bufp->fullIData(oldp+198,(vlSelf->Top__DOT__A_t033),32);
    bufp->fullIData(oldp+199,(vlSelf->Top__DOT__s_00),32);
    bufp->fullIData(oldp+200,(vlSelf->Top__DOT__s_01),32);
    bufp->fullIData(oldp+201,(vlSelf->Top__DOT__s_02),32);
    bufp->fullIData(oldp+202,(vlSelf->Top__DOT__s_03),32);
    bufp->fullIData(oldp+203,(vlSelf->Top__DOT__s_10),32);
    bufp->fullIData(oldp+204,(vlSelf->Top__DOT__s_11),32);
    bufp->fullIData(oldp+205,(vlSelf->Top__DOT__s_12),32);
    bufp->fullIData(oldp+206,(vlSelf->Top__DOT__s_13),32);
    bufp->fullIData(oldp+207,(vlSelf->Top__DOT__e_00),32);
    bufp->fullIData(oldp+208,(vlSelf->Top__DOT__e_01),32);
    bufp->fullIData(oldp+209,(vlSelf->Top__DOT__e_02),32);
    bufp->fullIData(oldp+210,(vlSelf->Top__DOT__e_03),32);
    bufp->fullIData(oldp+211,(vlSelf->Top__DOT__e_10),32);
    bufp->fullIData(oldp+212,(vlSelf->Top__DOT__e_11),32);
    bufp->fullIData(oldp+213,(vlSelf->Top__DOT__e_12),32);
    bufp->fullIData(oldp+214,(vlSelf->Top__DOT__e_13),32);
    bufp->fullIData(oldp+215,(vlSelf->Top__DOT__message),32);
    bufp->fullIData(oldp+216,(vlSelf->Top__DOT__public_key000),32);
    bufp->fullIData(oldp+217,(vlSelf->Top__DOT__public_key001),32);
    bufp->fullIData(oldp+218,(vlSelf->Top__DOT__public_key002),32);
    bufp->fullIData(oldp+219,(vlSelf->Top__DOT__public_key003),32);
    bufp->fullIData(oldp+220,(vlSelf->Top__DOT__public_key010),32);
    bufp->fullIData(oldp+221,(vlSelf->Top__DOT__public_key011),32);
    bufp->fullIData(oldp+222,(vlSelf->Top__DOT__public_key012),32);
    bufp->fullIData(oldp+223,(vlSelf->Top__DOT__public_key013),32);
    bufp->fullIData(oldp+224,(vlSelf->Top__DOT__public_key020),32);
    bufp->fullIData(oldp+225,(vlSelf->Top__DOT__public_key021),32);
    bufp->fullIData(oldp+226,(vlSelf->Top__DOT__public_key022),32);
    bufp->fullIData(oldp+227,(vlSelf->Top__DOT__public_key023),32);
    bufp->fullIData(oldp+228,(vlSelf->Top__DOT__public_key030),32);
    bufp->fullIData(oldp+229,(vlSelf->Top__DOT__public_key031),32);
    bufp->fullIData(oldp+230,(vlSelf->Top__DOT__public_key032),32);
    bufp->fullIData(oldp+231,(vlSelf->Top__DOT__public_key033),32);
    bufp->fullIData(oldp+232,(vlSelf->Top__DOT__public_key100),32);
    bufp->fullIData(oldp+233,(vlSelf->Top__DOT__public_key101),32);
    bufp->fullIData(oldp+234,(vlSelf->Top__DOT__public_key102),32);
    bufp->fullIData(oldp+235,(vlSelf->Top__DOT__public_key103),32);
    bufp->fullIData(oldp+236,(vlSelf->Top__DOT__public_key110),32);
    bufp->fullIData(oldp+237,(vlSelf->Top__DOT__public_key111),32);
    bufp->fullIData(oldp+238,(vlSelf->Top__DOT__public_key112),32);
    bufp->fullIData(oldp+239,(vlSelf->Top__DOT__public_key113),32);
    bufp->fullIData(oldp+240,(vlSelf->Top__DOT__r_00),32);
    bufp->fullIData(oldp+241,(vlSelf->Top__DOT__r_01),32);
    bufp->fullIData(oldp+242,(vlSelf->Top__DOT__r_02),32);
    bufp->fullIData(oldp+243,(vlSelf->Top__DOT__r_03),32);
    bufp->fullIData(oldp+244,(vlSelf->Top__DOT__r_10),32);
    bufp->fullIData(oldp+245,(vlSelf->Top__DOT__r_11),32);
    bufp->fullIData(oldp+246,(vlSelf->Top__DOT__r_12),32);
    bufp->fullIData(oldp+247,(vlSelf->Top__DOT__r_13),32);
    bufp->fullIData(oldp+248,(vlSelf->Top__DOT__e1_00),32);
    bufp->fullIData(oldp+249,(vlSelf->Top__DOT__e1_01),32);
    bufp->fullIData(oldp+250,(vlSelf->Top__DOT__e1_02),32);
    bufp->fullIData(oldp+251,(vlSelf->Top__DOT__e1_03),32);
    bufp->fullIData(oldp+252,(vlSelf->Top__DOT__e1_10),32);
    bufp->fullIData(oldp+253,(vlSelf->Top__DOT__e1_11),32);
    bufp->fullIData(oldp+254,(vlSelf->Top__DOT__e1_12),32);
    bufp->fullIData(oldp+255,(vlSelf->Top__DOT__e1_13),32);
    bufp->fullIData(oldp+256,(vlSelf->Top__DOT__e2_0),32);
    bufp->fullIData(oldp+257,(vlSelf->Top__DOT__e2_1),32);
    bufp->fullIData(oldp+258,(vlSelf->Top__DOT__e2_2),32);
    bufp->fullIData(oldp+259,(vlSelf->Top__DOT__e2_3),32);
    bufp->fullIData(oldp+260,(vlSelf->Top__DOT__ciphertext000),32);
    bufp->fullIData(oldp+261,(vlSelf->Top__DOT__ciphertext001),32);
    bufp->fullIData(oldp+262,(vlSelf->Top__DOT__ciphertext002),32);
    bufp->fullIData(oldp+263,(vlSelf->Top__DOT__ciphertext003),32);
    bufp->fullIData(oldp+264,(vlSelf->Top__DOT__ciphertext010),32);
    bufp->fullIData(oldp+265,(vlSelf->Top__DOT__ciphertext011),32);
    bufp->fullIData(oldp+266,(vlSelf->Top__DOT__ciphertext012),32);
    bufp->fullIData(oldp+267,(vlSelf->Top__DOT__ciphertext013),32);
    bufp->fullIData(oldp+268,(vlSelf->Top__DOT__ciphertext100),32);
    bufp->fullIData(oldp+269,(vlSelf->Top__DOT__ciphertext101),32);
    bufp->fullIData(oldp+270,(vlSelf->Top__DOT__ciphertext102),32);
    bufp->fullIData(oldp+271,(vlSelf->Top__DOT__ciphertext103),32);
    bufp->fullIData(oldp+272,(vlSelf->Top__DOT____Vcellinp__decryption__secret_key
                              [0U][0U]),32);
    bufp->fullIData(oldp+273,(vlSelf->Top__DOT____Vcellinp__decryption__secret_key
                              [0U][1U]),32);
    bufp->fullIData(oldp+274,(vlSelf->Top__DOT____Vcellinp__decryption__secret_key
                              [0U][2U]),32);
    bufp->fullIData(oldp+275,(vlSelf->Top__DOT____Vcellinp__decryption__secret_key
                              [0U][3U]),32);
    bufp->fullIData(oldp+276,(vlSelf->Top__DOT____Vcellinp__decryption__secret_key
                              [1U][0U]),32);
    bufp->fullIData(oldp+277,(vlSelf->Top__DOT____Vcellinp__decryption__secret_key
                              [1U][1U]),32);
    bufp->fullIData(oldp+278,(vlSelf->Top__DOT____Vcellinp__decryption__secret_key
                              [1U][2U]),32);
    bufp->fullIData(oldp+279,(vlSelf->Top__DOT____Vcellinp__decryption__secret_key
                              [1U][3U]),32);
    bufp->fullIData(oldp+280,(vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[0]),32);
    bufp->fullIData(oldp+281,(vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[1]),32);
    bufp->fullIData(oldp+282,(vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[2]),32);
    bufp->fullIData(oldp+283,(vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[3]),32);
    bufp->fullIData(oldp+284,(vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[0]),32);
    bufp->fullIData(oldp+285,(vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[1]),32);
    bufp->fullIData(oldp+286,(vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[2]),32);
    bufp->fullIData(oldp+287,(vlSelf->Top__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[3]),32);
    bufp->fullIData(oldp+288,(vlSelf->Top__DOT____Vcellinp__encryption__r
                              [0U][0U]),32);
    bufp->fullIData(oldp+289,(vlSelf->Top__DOT____Vcellinp__encryption__r
                              [0U][1U]),32);
    bufp->fullIData(oldp+290,(vlSelf->Top__DOT____Vcellinp__encryption__r
                              [0U][2U]),32);
    bufp->fullIData(oldp+291,(vlSelf->Top__DOT____Vcellinp__encryption__r
                              [0U][3U]),32);
    bufp->fullIData(oldp+292,(vlSelf->Top__DOT____Vcellinp__encryption__r
                              [1U][0U]),32);
    bufp->fullIData(oldp+293,(vlSelf->Top__DOT____Vcellinp__encryption__r
                              [1U][1U]),32);
    bufp->fullIData(oldp+294,(vlSelf->Top__DOT____Vcellinp__encryption__r
                              [1U][2U]),32);
    bufp->fullIData(oldp+295,(vlSelf->Top__DOT____Vcellinp__encryption__r
                              [1U][3U]),32);
    bufp->fullIData(oldp+296,(vlSelf->Top__DOT____Vcellinp__encryption__e1
                              [0U][0U]),32);
    bufp->fullIData(oldp+297,(vlSelf->Top__DOT____Vcellinp__encryption__e1
                              [0U][1U]),32);
    bufp->fullIData(oldp+298,(vlSelf->Top__DOT____Vcellinp__encryption__e1
                              [0U][2U]),32);
    bufp->fullIData(oldp+299,(vlSelf->Top__DOT____Vcellinp__encryption__e1
                              [0U][3U]),32);
    bufp->fullIData(oldp+300,(vlSelf->Top__DOT____Vcellinp__encryption__e1
                              [1U][0U]),32);
    bufp->fullIData(oldp+301,(vlSelf->Top__DOT____Vcellinp__encryption__e1
                              [1U][1U]),32);
    bufp->fullIData(oldp+302,(vlSelf->Top__DOT____Vcellinp__encryption__e1
                              [1U][2U]),32);
    bufp->fullIData(oldp+303,(vlSelf->Top__DOT____Vcellinp__encryption__e1
                              [1U][3U]),32);
    bufp->fullIData(oldp+304,(vlSelf->Top__DOT____Vcellinp__encryption__e2[0]),32);
    bufp->fullIData(oldp+305,(vlSelf->Top__DOT____Vcellinp__encryption__e2[1]),32);
    bufp->fullIData(oldp+306,(vlSelf->Top__DOT____Vcellinp__encryption__e2[2]),32);
    bufp->fullIData(oldp+307,(vlSelf->Top__DOT____Vcellinp__encryption__e2[3]),32);
    bufp->fullCData(oldp+308,(vlSelf->Top__DOT__encryption__DOT__coefficients),4);
    bufp->fullIData(oldp+309,(vlSelf->Top__DOT__encryption__DOT__coefficients_scaled[0]),32);
    bufp->fullIData(oldp+310,(vlSelf->Top__DOT__encryption__DOT__coefficients_scaled[1]),32);
    bufp->fullIData(oldp+311,(vlSelf->Top__DOT__encryption__DOT__coefficients_scaled[2]),32);
    bufp->fullIData(oldp+312,(vlSelf->Top__DOT__encryption__DOT__coefficients_scaled[3]),32);
    bufp->fullIData(oldp+313,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[0]),32);
    bufp->fullIData(oldp+314,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[1]),32);
    bufp->fullIData(oldp+315,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[2]),32);
    bufp->fullIData(oldp+316,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[3]),32);
    bufp->fullIData(oldp+317,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[0]),32);
    bufp->fullIData(oldp+318,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[1]),32);
    bufp->fullIData(oldp+319,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[2]),32);
    bufp->fullIData(oldp+320,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[3]),32);
    bufp->fullIData(oldp+321,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[0]),32);
    bufp->fullIData(oldp+322,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[1]),32);
    bufp->fullIData(oldp+323,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[2]),32);
    bufp->fullIData(oldp+324,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[3]),32);
    bufp->fullIData(oldp+325,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[0]),32);
    bufp->fullIData(oldp+326,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[1]),32);
    bufp->fullIData(oldp+327,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[2]),32);
    bufp->fullIData(oldp+328,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[3]),32);
    bufp->fullIData(oldp+329,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[0]),32);
    bufp->fullIData(oldp+330,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[1]),32);
    bufp->fullIData(oldp+331,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[2]),32);
    bufp->fullIData(oldp+332,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[3]),32);
    bufp->fullIData(oldp+333,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[0]),32);
    bufp->fullIData(oldp+334,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[1]),32);
    bufp->fullIData(oldp+335,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[2]),32);
    bufp->fullIData(oldp+336,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[3]),32);
    bufp->fullIData(oldp+337,(vlSelf->Top__DOT__encryption__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+338,(vlSelf->Top__DOT__encryption__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+339,(vlSelf->Top__DOT____Vcellinp__keygen__e
                              [0U][0U]),32);
    bufp->fullIData(oldp+340,(vlSelf->Top__DOT____Vcellinp__keygen__e
                              [0U][1U]),32);
    bufp->fullIData(oldp+341,(vlSelf->Top__DOT____Vcellinp__keygen__e
                              [0U][2U]),32);
    bufp->fullIData(oldp+342,(vlSelf->Top__DOT____Vcellinp__keygen__e
                              [0U][3U]),32);
    bufp->fullIData(oldp+343,(vlSelf->Top__DOT____Vcellinp__keygen__e
                              [1U][0U]),32);
    bufp->fullIData(oldp+344,(vlSelf->Top__DOT____Vcellinp__keygen__e
                              [1U][1U]),32);
    bufp->fullIData(oldp+345,(vlSelf->Top__DOT____Vcellinp__keygen__e
                              [1U][2U]),32);
    bufp->fullIData(oldp+346,(vlSelf->Top__DOT____Vcellinp__keygen__e
                              [1U][3U]),32);
    bufp->fullIData(oldp+347,(vlSelf->Top__DOT____Vcellinp__keygen__secret_key
                              [0U][0U]),32);
    bufp->fullIData(oldp+348,(vlSelf->Top__DOT____Vcellinp__keygen__secret_key
                              [0U][1U]),32);
    bufp->fullIData(oldp+349,(vlSelf->Top__DOT____Vcellinp__keygen__secret_key
                              [0U][2U]),32);
    bufp->fullIData(oldp+350,(vlSelf->Top__DOT____Vcellinp__keygen__secret_key
                              [0U][3U]),32);
    bufp->fullIData(oldp+351,(vlSelf->Top__DOT____Vcellinp__keygen__secret_key
                              [1U][0U]),32);
    bufp->fullIData(oldp+352,(vlSelf->Top__DOT____Vcellinp__keygen__secret_key
                              [1U][1U]),32);
    bufp->fullIData(oldp+353,(vlSelf->Top__DOT____Vcellinp__keygen__secret_key
                              [1U][2U]),32);
    bufp->fullIData(oldp+354,(vlSelf->Top__DOT____Vcellinp__keygen__secret_key
                              [1U][3U]),32);
    bufp->fullIData(oldp+355,(vlSelf->Top__DOT____Vcellout__keygen__secretkey
                              [0U][0U]),32);
    bufp->fullIData(oldp+356,(vlSelf->Top__DOT____Vcellout__keygen__secretkey
                              [0U][1U]),32);
    bufp->fullIData(oldp+357,(vlSelf->Top__DOT____Vcellout__keygen__secretkey
                              [0U][2U]),32);
    bufp->fullIData(oldp+358,(vlSelf->Top__DOT____Vcellout__keygen__secretkey
                              [0U][3U]),32);
    bufp->fullIData(oldp+359,(vlSelf->Top__DOT____Vcellout__keygen__secretkey
                              [1U][0U]),32);
    bufp->fullIData(oldp+360,(vlSelf->Top__DOT____Vcellout__keygen__secretkey
                              [1U][1U]),32);
    bufp->fullIData(oldp+361,(vlSelf->Top__DOT____Vcellout__keygen__secretkey
                              [1U][2U]),32);
    bufp->fullIData(oldp+362,(vlSelf->Top__DOT____Vcellout__keygen__secretkey
                              [1U][3U]),32);
    bufp->fullIData(oldp+363,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[0]),32);
    bufp->fullIData(oldp+364,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[1]),32);
    bufp->fullIData(oldp+365,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[2]),32);
    bufp->fullIData(oldp+366,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[3]),32);
    bufp->fullIData(oldp+367,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[0]),32);
    bufp->fullIData(oldp+368,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[1]),32);
    bufp->fullIData(oldp+369,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[2]),32);
    bufp->fullIData(oldp+370,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[3]),32);
    bufp->fullIData(oldp+371,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[0]),32);
    bufp->fullIData(oldp+372,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[1]),32);
    bufp->fullIData(oldp+373,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[2]),32);
    bufp->fullIData(oldp+374,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[3]),32);
    bufp->fullIData(oldp+375,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[0]),32);
    bufp->fullIData(oldp+376,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[1]),32);
    bufp->fullIData(oldp+377,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[2]),32);
    bufp->fullIData(oldp+378,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[3]),32);
    bufp->fullIData(oldp+379,(vlSelf->Top__DOT__keygen__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+380,(vlSelf->Top__DOT__keygen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+381,(vlSelf->Top__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+382,(vlSelf->Top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+383,(vlSelf->Top__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+384,(vlSelf->Top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    bufp->fullIData(oldp+385,(vlSelf->Top__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+386,(vlSelf->Top__DOT__public_key
                              [0U][0U][0U]),32);
    bufp->fullIData(oldp+387,(vlSelf->Top__DOT__public_key
                              [0U][0U][1U]),32);
    bufp->fullIData(oldp+388,(vlSelf->Top__DOT__public_key
                              [0U][0U][2U]),32);
    bufp->fullIData(oldp+389,(vlSelf->Top__DOT__public_key
                              [0U][0U][3U]),32);
    bufp->fullIData(oldp+390,(vlSelf->Top__DOT__public_key
                              [0U][1U][0U]),32);
    bufp->fullIData(oldp+391,(vlSelf->Top__DOT__public_key
                              [0U][1U][1U]),32);
    bufp->fullIData(oldp+392,(vlSelf->Top__DOT__public_key
                              [0U][1U][2U]),32);
    bufp->fullIData(oldp+393,(vlSelf->Top__DOT__public_key
                              [0U][1U][3U]),32);
    bufp->fullIData(oldp+394,(vlSelf->Top__DOT__public_key
                              [0U][2U][0U]),32);
    bufp->fullIData(oldp+395,(vlSelf->Top__DOT__public_key
                              [0U][2U][1U]),32);
    bufp->fullIData(oldp+396,(vlSelf->Top__DOT__public_key
                              [0U][2U][2U]),32);
    bufp->fullIData(oldp+397,(vlSelf->Top__DOT__public_key
                              [0U][2U][3U]),32);
    bufp->fullIData(oldp+398,(vlSelf->Top__DOT__public_key
                              [0U][3U][0U]),32);
    bufp->fullIData(oldp+399,(vlSelf->Top__DOT__public_key
                              [0U][3U][1U]),32);
    bufp->fullIData(oldp+400,(vlSelf->Top__DOT__public_key
                              [0U][3U][2U]),32);
    bufp->fullIData(oldp+401,(vlSelf->Top__DOT__public_key
                              [0U][3U][3U]),32);
    bufp->fullIData(oldp+402,(vlSelf->Top__DOT__public_key
                              [1U][0U][0U]),32);
    bufp->fullIData(oldp+403,(vlSelf->Top__DOT__public_key
                              [1U][0U][1U]),32);
    bufp->fullIData(oldp+404,(vlSelf->Top__DOT__public_key
                              [1U][0U][2U]),32);
    bufp->fullIData(oldp+405,(vlSelf->Top__DOT__public_key
                              [1U][0U][3U]),32);
    bufp->fullIData(oldp+406,(vlSelf->Top__DOT__public_key
                              [1U][1U][0U]),32);
    bufp->fullIData(oldp+407,(vlSelf->Top__DOT__public_key
                              [1U][1U][1U]),32);
    bufp->fullIData(oldp+408,(vlSelf->Top__DOT__public_key
                              [1U][1U][2U]),32);
    bufp->fullIData(oldp+409,(vlSelf->Top__DOT__public_key
                              [1U][1U][3U]),32);
    bufp->fullIData(oldp+410,(vlSelf->Top__DOT__public_key
                              [1U][2U][0U]),32);
    bufp->fullIData(oldp+411,(vlSelf->Top__DOT__public_key
                              [1U][2U][1U]),32);
    bufp->fullIData(oldp+412,(vlSelf->Top__DOT__public_key
                              [1U][2U][2U]),32);
    bufp->fullIData(oldp+413,(vlSelf->Top__DOT__public_key
                              [1U][2U][3U]),32);
    bufp->fullIData(oldp+414,(vlSelf->Top__DOT__public_key
                              [1U][3U][0U]),32);
    bufp->fullIData(oldp+415,(vlSelf->Top__DOT__public_key
                              [1U][3U][1U]),32);
    bufp->fullIData(oldp+416,(vlSelf->Top__DOT__public_key
                              [1U][3U][2U]),32);
    bufp->fullIData(oldp+417,(vlSelf->Top__DOT__public_key
                              [1U][3U][3U]),32);
    bufp->fullIData(oldp+418,(vlSelf->Top__DOT__decryption__DOT__poly_out0[0]),32);
    bufp->fullIData(oldp+419,(vlSelf->Top__DOT__decryption__DOT__poly_out0[1]),32);
    bufp->fullIData(oldp+420,(vlSelf->Top__DOT__decryption__DOT__poly_out0[2]),32);
    bufp->fullIData(oldp+421,(vlSelf->Top__DOT__decryption__DOT__poly_out0[3]),32);
    bufp->fullIData(oldp+422,(vlSelf->Top__DOT__decryption__DOT__poly_out1[0]),32);
    bufp->fullIData(oldp+423,(vlSelf->Top__DOT__decryption__DOT__poly_out1[1]),32);
    bufp->fullIData(oldp+424,(vlSelf->Top__DOT__decryption__DOT__poly_out1[2]),32);
    bufp->fullIData(oldp+425,(vlSelf->Top__DOT__decryption__DOT__poly_out1[3]),32);
    bufp->fullIData(oldp+426,(vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[0]),32);
    bufp->fullIData(oldp+427,(vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[1]),32);
    bufp->fullIData(oldp+428,(vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[2]),32);
    bufp->fullIData(oldp+429,(vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[3]),32);
    bufp->fullIData(oldp+430,(vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[0]),32);
    bufp->fullIData(oldp+431,(vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[1]),32);
    bufp->fullIData(oldp+432,(vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[2]),32);
    bufp->fullIData(oldp+433,(vlSelf->Top__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[3]),32);
    bufp->fullIData(oldp+434,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [0U][0U][0U]),32);
    bufp->fullIData(oldp+435,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [0U][0U][1U]),32);
    bufp->fullIData(oldp+436,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [0U][0U][2U]),32);
    bufp->fullIData(oldp+437,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [0U][0U][3U]),32);
    bufp->fullIData(oldp+438,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [0U][1U][0U]),32);
    bufp->fullIData(oldp+439,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [0U][1U][1U]),32);
    bufp->fullIData(oldp+440,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [0U][1U][2U]),32);
    bufp->fullIData(oldp+441,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [0U][1U][3U]),32);
    bufp->fullIData(oldp+442,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [0U][2U][0U]),32);
    bufp->fullIData(oldp+443,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [0U][2U][1U]),32);
    bufp->fullIData(oldp+444,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [0U][2U][2U]),32);
    bufp->fullIData(oldp+445,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [0U][2U][3U]),32);
    bufp->fullIData(oldp+446,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [0U][3U][0U]),32);
    bufp->fullIData(oldp+447,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [0U][3U][1U]),32);
    bufp->fullIData(oldp+448,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [0U][3U][2U]),32);
    bufp->fullIData(oldp+449,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [0U][3U][3U]),32);
    bufp->fullIData(oldp+450,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [1U][0U][0U]),32);
    bufp->fullIData(oldp+451,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [1U][0U][1U]),32);
    bufp->fullIData(oldp+452,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [1U][0U][2U]),32);
    bufp->fullIData(oldp+453,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [1U][0U][3U]),32);
    bufp->fullIData(oldp+454,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [1U][1U][0U]),32);
    bufp->fullIData(oldp+455,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [1U][1U][1U]),32);
    bufp->fullIData(oldp+456,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [1U][1U][2U]),32);
    bufp->fullIData(oldp+457,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [1U][1U][3U]),32);
    bufp->fullIData(oldp+458,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [1U][2U][0U]),32);
    bufp->fullIData(oldp+459,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [1U][2U][1U]),32);
    bufp->fullIData(oldp+460,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [1U][2U][2U]),32);
    bufp->fullIData(oldp+461,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [1U][2U][3U]),32);
    bufp->fullIData(oldp+462,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [1U][3U][0U]),32);
    bufp->fullIData(oldp+463,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [1U][3U][1U]),32);
    bufp->fullIData(oldp+464,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [1U][3U][2U]),32);
    bufp->fullIData(oldp+465,(vlSelf->Top__DOT____Vcellinp__encryption__combined_output
                              [1U][3U][3U]),32);
    bufp->fullIData(oldp+466,(vlSelf->Top__DOT__encryption__DOT__transposed_matrix
                              [0U][0U]),32);
    bufp->fullIData(oldp+467,(vlSelf->Top__DOT__encryption__DOT__transposed_matrix
                              [0U][1U]),32);
    bufp->fullIData(oldp+468,(vlSelf->Top__DOT__encryption__DOT__transposed_matrix
                              [0U][2U]),32);
    bufp->fullIData(oldp+469,(vlSelf->Top__DOT__encryption__DOT__transposed_matrix
                              [0U][3U]),32);
    bufp->fullIData(oldp+470,(vlSelf->Top__DOT__encryption__DOT__transposed_matrix
                              [1U][0U]),32);
    bufp->fullIData(oldp+471,(vlSelf->Top__DOT__encryption__DOT__transposed_matrix
                              [1U][1U]),32);
    bufp->fullIData(oldp+472,(vlSelf->Top__DOT__encryption__DOT__transposed_matrix
                              [1U][2U]),32);
    bufp->fullIData(oldp+473,(vlSelf->Top__DOT__encryption__DOT__transposed_matrix
                              [1U][3U]),32);
    bufp->fullIData(oldp+474,(vlSelf->Top__DOT__encryption__DOT__transposed_matrix
                              [2U][0U]),32);
    bufp->fullIData(oldp+475,(vlSelf->Top__DOT__encryption__DOT__transposed_matrix
                              [2U][1U]),32);
    bufp->fullIData(oldp+476,(vlSelf->Top__DOT__encryption__DOT__transposed_matrix
                              [2U][2U]),32);
    bufp->fullIData(oldp+477,(vlSelf->Top__DOT__encryption__DOT__transposed_matrix
                              [2U][3U]),32);
    bufp->fullIData(oldp+478,(vlSelf->Top__DOT__encryption__DOT__transposed_matrix
                              [3U][0U]),32);
    bufp->fullIData(oldp+479,(vlSelf->Top__DOT__encryption__DOT__transposed_matrix
                              [3U][1U]),32);
    bufp->fullIData(oldp+480,(vlSelf->Top__DOT__encryption__DOT__transposed_matrix
                              [3U][2U]),32);
    bufp->fullIData(oldp+481,(vlSelf->Top__DOT__encryption__DOT__transposed_matrix
                              [3U][3U]),32);
    bufp->fullIData(oldp+482,(vlSelf->Top__DOT__encryption__DOT__poly_out0[0]),32);
    bufp->fullIData(oldp+483,(vlSelf->Top__DOT__encryption__DOT__poly_out0[1]),32);
    bufp->fullIData(oldp+484,(vlSelf->Top__DOT__encryption__DOT__poly_out0[2]),32);
    bufp->fullIData(oldp+485,(vlSelf->Top__DOT__encryption__DOT__poly_out0[3]),32);
    bufp->fullIData(oldp+486,(vlSelf->Top__DOT__encryption__DOT__poly_out1[0]),32);
    bufp->fullIData(oldp+487,(vlSelf->Top__DOT__encryption__DOT__poly_out1[1]),32);
    bufp->fullIData(oldp+488,(vlSelf->Top__DOT__encryption__DOT__poly_out1[2]),32);
    bufp->fullIData(oldp+489,(vlSelf->Top__DOT__encryption__DOT__poly_out1[3]),32);
    bufp->fullIData(oldp+490,(vlSelf->Top__DOT__encryption__DOT__poly_out2[0]),32);
    bufp->fullIData(oldp+491,(vlSelf->Top__DOT__encryption__DOT__poly_out2[1]),32);
    bufp->fullIData(oldp+492,(vlSelf->Top__DOT__encryption__DOT__poly_out2[2]),32);
    bufp->fullIData(oldp+493,(vlSelf->Top__DOT__encryption__DOT__poly_out2[3]),32);
    bufp->fullIData(oldp+494,(vlSelf->Top__DOT__encryption__DOT__poly_out3[0]),32);
    bufp->fullIData(oldp+495,(vlSelf->Top__DOT__encryption__DOT__poly_out3[1]),32);
    bufp->fullIData(oldp+496,(vlSelf->Top__DOT__encryption__DOT__poly_out3[2]),32);
    bufp->fullIData(oldp+497,(vlSelf->Top__DOT__encryption__DOT__poly_out3[3]),32);
    bufp->fullIData(oldp+498,(vlSelf->Top__DOT__encryption__DOT__poly_out4[0]),32);
    bufp->fullIData(oldp+499,(vlSelf->Top__DOT__encryption__DOT__poly_out4[1]),32);
    bufp->fullIData(oldp+500,(vlSelf->Top__DOT__encryption__DOT__poly_out4[2]),32);
    bufp->fullIData(oldp+501,(vlSelf->Top__DOT__encryption__DOT__poly_out4[3]),32);
    bufp->fullIData(oldp+502,(vlSelf->Top__DOT__encryption__DOT__poly_out5[0]),32);
    bufp->fullIData(oldp+503,(vlSelf->Top__DOT__encryption__DOT__poly_out5[1]),32);
    bufp->fullIData(oldp+504,(vlSelf->Top__DOT__encryption__DOT__poly_out5[2]),32);
    bufp->fullIData(oldp+505,(vlSelf->Top__DOT__encryption__DOT__poly_out5[3]),32);
    bufp->fullIData(oldp+506,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[0]),32);
    bufp->fullIData(oldp+507,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[1]),32);
    bufp->fullIData(oldp+508,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[2]),32);
    bufp->fullIData(oldp+509,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[3]),32);
    bufp->fullIData(oldp+510,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[0]),32);
    bufp->fullIData(oldp+511,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[1]),32);
    bufp->fullIData(oldp+512,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[2]),32);
    bufp->fullIData(oldp+513,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[3]),32);
    bufp->fullIData(oldp+514,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+515,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+516,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+517,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+518,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[0]),32);
    bufp->fullIData(oldp+519,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[1]),32);
    bufp->fullIData(oldp+520,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[2]),32);
    bufp->fullIData(oldp+521,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[3]),32);
    bufp->fullIData(oldp+522,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[0]),32);
    bufp->fullIData(oldp+523,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[1]),32);
    bufp->fullIData(oldp+524,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[2]),32);
    bufp->fullIData(oldp+525,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[3]),32);
    bufp->fullIData(oldp+526,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+527,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+528,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+529,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+530,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[0]),32);
    bufp->fullIData(oldp+531,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[1]),32);
    bufp->fullIData(oldp+532,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[2]),32);
    bufp->fullIData(oldp+533,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[3]),32);
    bufp->fullIData(oldp+534,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[0]),32);
    bufp->fullIData(oldp+535,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[1]),32);
    bufp->fullIData(oldp+536,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[2]),32);
    bufp->fullIData(oldp+537,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[3]),32);
    bufp->fullIData(oldp+538,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+539,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+540,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+541,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+542,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[0]),32);
    bufp->fullIData(oldp+543,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[1]),32);
    bufp->fullIData(oldp+544,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[2]),32);
    bufp->fullIData(oldp+545,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[3]),32);
    bufp->fullIData(oldp+546,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[0]),32);
    bufp->fullIData(oldp+547,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[1]),32);
    bufp->fullIData(oldp+548,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[2]),32);
    bufp->fullIData(oldp+549,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[3]),32);
    bufp->fullIData(oldp+550,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+551,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+552,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+553,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+554,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[0]),32);
    bufp->fullIData(oldp+555,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[1]),32);
    bufp->fullIData(oldp+556,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[2]),32);
    bufp->fullIData(oldp+557,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[3]),32);
    bufp->fullIData(oldp+558,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[0]),32);
    bufp->fullIData(oldp+559,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[1]),32);
    bufp->fullIData(oldp+560,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[2]),32);
    bufp->fullIData(oldp+561,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[3]),32);
    bufp->fullIData(oldp+562,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+563,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+564,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+565,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+566,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[0]),32);
    bufp->fullIData(oldp+567,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[1]),32);
    bufp->fullIData(oldp+568,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[2]),32);
    bufp->fullIData(oldp+569,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[3]),32);
    bufp->fullIData(oldp+570,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[0]),32);
    bufp->fullIData(oldp+571,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[1]),32);
    bufp->fullIData(oldp+572,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[2]),32);
    bufp->fullIData(oldp+573,(vlSelf->Top__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[3]),32);
    bufp->fullIData(oldp+574,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+575,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+576,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+577,(vlSelf->Top__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+578,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [0U][0U]),32);
    bufp->fullIData(oldp+579,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [0U][1U]),32);
    bufp->fullIData(oldp+580,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [0U][2U]),32);
    bufp->fullIData(oldp+581,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [0U][3U]),32);
    bufp->fullIData(oldp+582,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [1U][0U]),32);
    bufp->fullIData(oldp+583,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [1U][1U]),32);
    bufp->fullIData(oldp+584,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [1U][2U]),32);
    bufp->fullIData(oldp+585,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [1U][3U]),32);
    bufp->fullIData(oldp+586,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [2U][0U]),32);
    bufp->fullIData(oldp+587,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [2U][1U]),32);
    bufp->fullIData(oldp+588,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [2U][2U]),32);
    bufp->fullIData(oldp+589,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [2U][3U]),32);
    bufp->fullIData(oldp+590,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][0U]),32);
    bufp->fullIData(oldp+591,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][1U]),32);
    bufp->fullIData(oldp+592,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][2U]),32);
    bufp->fullIData(oldp+593,(vlSelf->Top__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][3U]),32);
    bufp->fullIData(oldp+594,(vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [0U][0U]),32);
    bufp->fullIData(oldp+595,(vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [0U][1U]),32);
    bufp->fullIData(oldp+596,(vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [0U][2U]),32);
    bufp->fullIData(oldp+597,(vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [0U][3U]),32);
    bufp->fullIData(oldp+598,(vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [1U][0U]),32);
    bufp->fullIData(oldp+599,(vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [1U][1U]),32);
    bufp->fullIData(oldp+600,(vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [1U][2U]),32);
    bufp->fullIData(oldp+601,(vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [1U][3U]),32);
    bufp->fullIData(oldp+602,(vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [2U][0U]),32);
    bufp->fullIData(oldp+603,(vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [2U][1U]),32);
    bufp->fullIData(oldp+604,(vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [2U][2U]),32);
    bufp->fullIData(oldp+605,(vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [2U][3U]),32);
    bufp->fullIData(oldp+606,(vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [3U][0U]),32);
    bufp->fullIData(oldp+607,(vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [3U][1U]),32);
    bufp->fullIData(oldp+608,(vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [3U][2U]),32);
    bufp->fullIData(oldp+609,(vlSelf->Top__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [3U][3U]),32);
    bufp->fullIData(oldp+610,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [0U][0U][0U]),32);
    bufp->fullIData(oldp+611,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [0U][0U][1U]),32);
    bufp->fullIData(oldp+612,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [0U][0U][2U]),32);
    bufp->fullIData(oldp+613,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [0U][0U][3U]),32);
    bufp->fullIData(oldp+614,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [0U][1U][0U]),32);
    bufp->fullIData(oldp+615,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [0U][1U][1U]),32);
    bufp->fullIData(oldp+616,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [0U][1U][2U]),32);
    bufp->fullIData(oldp+617,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [0U][1U][3U]),32);
    bufp->fullIData(oldp+618,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [0U][2U][0U]),32);
    bufp->fullIData(oldp+619,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [0U][2U][1U]),32);
    bufp->fullIData(oldp+620,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [0U][2U][2U]),32);
    bufp->fullIData(oldp+621,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [0U][2U][3U]),32);
    bufp->fullIData(oldp+622,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [0U][3U][0U]),32);
    bufp->fullIData(oldp+623,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [0U][3U][1U]),32);
    bufp->fullIData(oldp+624,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [0U][3U][2U]),32);
    bufp->fullIData(oldp+625,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [0U][3U][3U]),32);
    bufp->fullIData(oldp+626,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [1U][0U][0U]),32);
    bufp->fullIData(oldp+627,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [1U][0U][1U]),32);
    bufp->fullIData(oldp+628,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [1U][0U][2U]),32);
    bufp->fullIData(oldp+629,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [1U][0U][3U]),32);
    bufp->fullIData(oldp+630,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [1U][1U][0U]),32);
    bufp->fullIData(oldp+631,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [1U][1U][1U]),32);
    bufp->fullIData(oldp+632,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [1U][1U][2U]),32);
    bufp->fullIData(oldp+633,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [1U][1U][3U]),32);
    bufp->fullIData(oldp+634,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [1U][2U][0U]),32);
    bufp->fullIData(oldp+635,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [1U][2U][1U]),32);
    bufp->fullIData(oldp+636,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [1U][2U][2U]),32);
    bufp->fullIData(oldp+637,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [1U][2U][3U]),32);
    bufp->fullIData(oldp+638,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [1U][3U][0U]),32);
    bufp->fullIData(oldp+639,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [1U][3U][1U]),32);
    bufp->fullIData(oldp+640,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [1U][3U][2U]),32);
    bufp->fullIData(oldp+641,(vlSelf->Top__DOT____Vcellout__keygen__combined_output
                              [1U][3U][3U]),32);
    bufp->fullIData(oldp+642,(vlSelf->Top__DOT__keygen__DOT__poly_out0[0]),32);
    bufp->fullIData(oldp+643,(vlSelf->Top__DOT__keygen__DOT__poly_out0[1]),32);
    bufp->fullIData(oldp+644,(vlSelf->Top__DOT__keygen__DOT__poly_out0[2]),32);
    bufp->fullIData(oldp+645,(vlSelf->Top__DOT__keygen__DOT__poly_out0[3]),32);
    bufp->fullIData(oldp+646,(vlSelf->Top__DOT__keygen__DOT__poly_out1[0]),32);
    bufp->fullIData(oldp+647,(vlSelf->Top__DOT__keygen__DOT__poly_out1[1]),32);
    bufp->fullIData(oldp+648,(vlSelf->Top__DOT__keygen__DOT__poly_out1[2]),32);
    bufp->fullIData(oldp+649,(vlSelf->Top__DOT__keygen__DOT__poly_out1[3]),32);
    bufp->fullIData(oldp+650,(vlSelf->Top__DOT__keygen__DOT__poly_out2[0]),32);
    bufp->fullIData(oldp+651,(vlSelf->Top__DOT__keygen__DOT__poly_out2[1]),32);
    bufp->fullIData(oldp+652,(vlSelf->Top__DOT__keygen__DOT__poly_out2[2]),32);
    bufp->fullIData(oldp+653,(vlSelf->Top__DOT__keygen__DOT__poly_out2[3]),32);
    bufp->fullIData(oldp+654,(vlSelf->Top__DOT__keygen__DOT__poly_out3[0]),32);
    bufp->fullIData(oldp+655,(vlSelf->Top__DOT__keygen__DOT__poly_out3[1]),32);
    bufp->fullIData(oldp+656,(vlSelf->Top__DOT__keygen__DOT__poly_out3[2]),32);
    bufp->fullIData(oldp+657,(vlSelf->Top__DOT__keygen__DOT__poly_out3[3]),32);
    bufp->fullIData(oldp+658,(vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[0]),32);
    bufp->fullIData(oldp+659,(vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[1]),32);
    bufp->fullIData(oldp+660,(vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[2]),32);
    bufp->fullIData(oldp+661,(vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[3]),32);
    bufp->fullIData(oldp+662,(vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[0]),32);
    bufp->fullIData(oldp+663,(vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[1]),32);
    bufp->fullIData(oldp+664,(vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[2]),32);
    bufp->fullIData(oldp+665,(vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[3]),32);
    bufp->fullIData(oldp+666,(vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[0]),32);
    bufp->fullIData(oldp+667,(vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[1]),32);
    bufp->fullIData(oldp+668,(vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[2]),32);
    bufp->fullIData(oldp+669,(vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[3]),32);
    bufp->fullIData(oldp+670,(vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[0]),32);
    bufp->fullIData(oldp+671,(vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[1]),32);
    bufp->fullIData(oldp+672,(vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[2]),32);
    bufp->fullIData(oldp+673,(vlSelf->Top__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[3]),32);
    bufp->fullIData(oldp+674,(vlSelf->Top__DOT__keygen__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+675,(vlSelf->Top__DOT__keygen__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
    bufp->fullIData(oldp+676,(vlSelf->Top__DOT__keygen__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+677,(vlSelf->Top__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
    bufp->fullIData(oldp+678,(vlSelf->Top__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__k),32);
    bufp->fullIData(oldp+679,(vlSelf->Top__DOT__keygen__DOT__unnamedblk9__DOT__i),32);
    bufp->fullIData(oldp+680,(vlSelf->Top__DOT__keygen__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
    bufp->fullIData(oldp+681,(vlSelf->Top__DOT____Vcellinp__keygen__A
                              [0U][0U]),32);
    bufp->fullIData(oldp+682,(vlSelf->Top__DOT____Vcellinp__keygen__A
                              [0U][1U]),32);
    bufp->fullIData(oldp+683,(vlSelf->Top__DOT____Vcellinp__keygen__A
                              [0U][2U]),32);
    bufp->fullIData(oldp+684,(vlSelf->Top__DOT____Vcellinp__keygen__A
                              [0U][3U]),32);
    bufp->fullIData(oldp+685,(vlSelf->Top__DOT____Vcellinp__keygen__A
                              [1U][0U]),32);
    bufp->fullIData(oldp+686,(vlSelf->Top__DOT____Vcellinp__keygen__A
                              [1U][1U]),32);
    bufp->fullIData(oldp+687,(vlSelf->Top__DOT____Vcellinp__keygen__A
                              [1U][2U]),32);
    bufp->fullIData(oldp+688,(vlSelf->Top__DOT____Vcellinp__keygen__A
                              [1U][3U]),32);
    bufp->fullIData(oldp+689,(vlSelf->Top__DOT____Vcellinp__keygen__A
                              [2U][0U]),32);
    bufp->fullIData(oldp+690,(vlSelf->Top__DOT____Vcellinp__keygen__A
                              [2U][1U]),32);
    bufp->fullIData(oldp+691,(vlSelf->Top__DOT____Vcellinp__keygen__A
                              [2U][2U]),32);
    bufp->fullIData(oldp+692,(vlSelf->Top__DOT____Vcellinp__keygen__A
                              [2U][3U]),32);
    bufp->fullIData(oldp+693,(vlSelf->Top__DOT____Vcellinp__keygen__A
                              [3U][0U]),32);
    bufp->fullIData(oldp+694,(vlSelf->Top__DOT____Vcellinp__keygen__A
                              [3U][1U]),32);
    bufp->fullIData(oldp+695,(vlSelf->Top__DOT____Vcellinp__keygen__A
                              [3U][2U]),32);
    bufp->fullIData(oldp+696,(vlSelf->Top__DOT____Vcellinp__keygen__A
                              [3U][3U]),32);
    bufp->fullIData(oldp+697,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[0]),32);
    bufp->fullIData(oldp+698,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[1]),32);
    bufp->fullIData(oldp+699,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[2]),32);
    bufp->fullIData(oldp+700,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[3]),32);
    bufp->fullIData(oldp+701,(vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+702,(vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+703,(vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+704,(vlSelf->Top__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+705,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[0]),32);
    bufp->fullIData(oldp+706,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[1]),32);
    bufp->fullIData(oldp+707,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[2]),32);
    bufp->fullIData(oldp+708,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[3]),32);
    bufp->fullIData(oldp+709,(vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+710,(vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+711,(vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+712,(vlSelf->Top__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+713,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[0]),32);
    bufp->fullIData(oldp+714,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[1]),32);
    bufp->fullIData(oldp+715,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[2]),32);
    bufp->fullIData(oldp+716,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[3]),32);
    bufp->fullIData(oldp+717,(vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+718,(vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+719,(vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+720,(vlSelf->Top__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+721,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[0]),32);
    bufp->fullIData(oldp+722,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[1]),32);
    bufp->fullIData(oldp+723,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[2]),32);
    bufp->fullIData(oldp+724,(vlSelf->Top__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[3]),32);
    bufp->fullIData(oldp+725,(vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+726,(vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+727,(vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+728,(vlSelf->Top__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3]),32);
    bufp->fullBit(oldp+729,(vlSelf->clk));
    bufp->fullBit(oldp+730,(vlSelf->rst_n));
    bufp->fullBit(oldp+731,(vlSelf->enable));
    bufp->fullIData(oldp+732,(vlSelf->data_Req),32);
    bufp->fullIData(oldp+733,(vlSelf->addr_Req),32);
    bufp->fullBit(oldp+734,(vlSelf->wen_Req));
    bufp->fullCData(oldp+735,(vlSelf->bytelane_Req),8);
    bufp->fullIData(oldp+736,(vlSelf->data_Resp),32);
    bufp->fullIData(oldp+737,(0x11U),32);
    bufp->fullIData(oldp+738,(4U),32);
    bufp->fullIData(oldp+739,(1U),32);
    bufp->fullIData(oldp+740,(vlSelf->Top__DOT__encryption__DOT__temp[0]),32);
    bufp->fullIData(oldp+741,(vlSelf->Top__DOT__encryption__DOT__temp[1]),32);
    bufp->fullIData(oldp+742,(vlSelf->Top__DOT__encryption__DOT__temp[2]),32);
    bufp->fullIData(oldp+743,(vlSelf->Top__DOT__encryption__DOT__temp[3]),32);
    bufp->fullIData(oldp+744,(2U),32);
}

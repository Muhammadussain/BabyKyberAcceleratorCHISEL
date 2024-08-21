circuit BabyKyberTop :
  extmodule Top :
    input clk : UInt<1>
    input rst_n : UInt<1>
    input enable : UInt<1>
    input data_Req : SInt<32>
    input addr_Req : SInt<32>
    input wen_Req : UInt<1>
    input bytelane_Req : SInt<8>
    output data_Resp : SInt<32>
    defname = Top

  module BabyKyberTop :
    input clock : Clock
    input reset : UInt<1>
    output io_req_ready : UInt<1>
    input io_req_valid : UInt<1>
    input io_req_bits_addrRequest : SInt<32>
    input io_req_bits_dataRequest : SInt<32>
    input io_req_bits_activeByteLane : SInt<4>
    input io_req_bits_isWrite : UInt<1>
    input io_rsp_ready : UInt<1>
    output io_rsp_valid : UInt<1>
    output io_rsp_bits_dataResponse : SInt<32>

    inst bkyber of Top @[BabyKyberTop.scala 21:24]
    reg validReg : UInt<1>, clock with :
      reset => (UInt<1>("h0"), validReg) @[BabyKyberTop.scala 14:27]
    node _clk_T = asUInt(clock) @[BabyKyberTop.scala 23:36]
    node _clk_T_1 = bits(_clk_T, 0, 0) @[BabyKyberTop.scala 23:38]
    node _rst_T = bits(reset, 0, 0) @[BabyKyberTop.scala 25:24]
    node _T = and(io_req_valid, io_req_bits_isWrite) @[BabyKyberTop.scala 37:23]
    node _T_1 = eq(io_req_bits_isWrite, UInt<1>("h0")) @[BabyKyberTop.scala 46:32]
    node _T_2 = and(io_req_valid, _T_1) @[BabyKyberTop.scala 46:29]
    node _GEN_0 = mux(_T_2, UInt<1>("h1"), UInt<1>("h0")) @[BabyKyberTop.scala 46:54 BabyKyberTop.scala 48:18 BabyKyberTop.scala 54:22]
    node _GEN_1 = validif(_T_2, UInt<1>("h0")) @[BabyKyberTop.scala 46:54 BabyKyberTop.scala 49:27]
    node _GEN_2 = validif(_T_2, io_req_bits_addrRequest) @[BabyKyberTop.scala 46:54 BabyKyberTop.scala 50:28]
    node _GEN_3 = validif(_T_2, bkyber.data_Resp) @[BabyKyberTop.scala 46:54 BabyKyberTop.scala 52:15]
    node _GEN_4 = validif(_T, io_req_bits_dataRequest) @[BabyKyberTop.scala 37:47 BabyKyberTop.scala 39:28]
    node _GEN_5 = mux(_T, io_req_bits_addrRequest, _GEN_2) @[BabyKyberTop.scala 37:47 BabyKyberTop.scala 40:28]
    node _GEN_6 = mux(_T, io_req_bits_isWrite, _GEN_1) @[BabyKyberTop.scala 37:47 BabyKyberTop.scala 41:27]
    node _GEN_7 = validif(_T, io_req_bits_activeByteLane) @[BabyKyberTop.scala 37:47 BabyKyberTop.scala 42:32]
    node _GEN_8 = mux(_T, bkyber.data_Resp, _GEN_3) @[BabyKyberTop.scala 37:47 BabyKyberTop.scala 43:15]
    node _GEN_9 = mux(_T, validReg, _GEN_0) @[BabyKyberTop.scala 37:47 BabyKyberTop.scala 14:27]
    node rdata = _GEN_8 @[BabyKyberTop.scala 18:21]
    node clk = _clk_T_1
    node rst = _rst_T @[BabyKyberTop.scala 24:19 BabyKyberTop.scala 25:9]
    io_req_ready <= UInt<1>("h1") @[BabyKyberTop.scala 16:18]
    io_rsp_valid <= validReg @[BabyKyberTop.scala 15:18]
    io_rsp_bits_dataResponse <= rdata @[BabyKyberTop.scala 59:30]
    validReg <= mux(reset, UInt<1>("h0"), _GEN_9) @[BabyKyberTop.scala 14:27 BabyKyberTop.scala 14:27]
    bkyber.clk <= clk @[BabyKyberTop.scala 27:19]
    bkyber.rst_n <= rst @[BabyKyberTop.scala 28:21]
    bkyber.enable <= UInt<1>("h1") @[BabyKyberTop.scala 29:22]
    bkyber.data_Req <= _GEN_4
    bkyber.addr_Req <= _GEN_5
    bkyber.wen_Req <= _GEN_6
    bkyber.bytelane_Req <= _GEN_7

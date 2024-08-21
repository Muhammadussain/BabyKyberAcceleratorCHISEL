;buildInfoPackage: chisel3, version: 3.4.3, scalaVersion: 2.12.12, sbtVersion: 1.3.10
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
    output io : {flip req : {flip ready : UInt<1>, valid : UInt<1>, bits : {addrRequest : SInt<32>, dataRequest : SInt<32>, activeByteLane : SInt<4>, isWrite : UInt<1>}}, rsp : {flip ready : UInt<1>, valid : UInt<1>, bits : {dataResponse : SInt<32>}}}
    
    reg validReg : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[BabyKyberTop.scala 14:27]
    io.rsp.valid <= validReg @[BabyKyberTop.scala 15:18]
    io.req.ready <= UInt<1>("h01") @[BabyKyberTop.scala 16:18]
    wire rdata : SInt<32> @[BabyKyberTop.scala 18:21]
    inst bkyber of Top @[BabyKyberTop.scala 21:24]
    bkyber.data_Resp is invalid
    bkyber.bytelane_Req is invalid
    bkyber.wen_Req is invalid
    bkyber.addr_Req is invalid
    bkyber.data_Req is invalid
    bkyber.enable is invalid
    bkyber.rst_n is invalid
    bkyber.clk is invalid
    node _clk_T = asUInt(clock) @[BabyKyberTop.scala 23:36]
    node _clk_T_1 = bits(_clk_T, 0, 0) @[BabyKyberTop.scala 23:38]
    wire clk : UInt<1>
    clk <= _clk_T_1
    wire rst : UInt<1> @[BabyKyberTop.scala 24:19]
    node _rst_T = bits(reset, 0, 0) @[BabyKyberTop.scala 25:24]
    rst <= _rst_T @[BabyKyberTop.scala 25:9]
    bkyber.clk <= clk @[BabyKyberTop.scala 27:19]
    bkyber.rst_n <= rst @[BabyKyberTop.scala 28:21]
    bkyber.enable <= UInt<1>("h01") @[BabyKyberTop.scala 29:22]
    bkyber.data_Req is invalid @[BabyKyberTop.scala 30:24]
    bkyber.addr_Req is invalid @[BabyKyberTop.scala 31:24]
    bkyber.wen_Req is invalid @[BabyKyberTop.scala 32:23]
    bkyber.bytelane_Req is invalid @[BabyKyberTop.scala 33:28]
    node _T = and(io.req.valid, io.req.bits.isWrite) @[BabyKyberTop.scala 37:23]
    when _T : @[BabyKyberTop.scala 37:47]
      bkyber.data_Req <= io.req.bits.dataRequest @[BabyKyberTop.scala 39:28]
      bkyber.addr_Req <= io.req.bits.addrRequest @[BabyKyberTop.scala 40:28]
      bkyber.wen_Req <= UInt<1>("h01") @[BabyKyberTop.scala 41:27]
      bkyber.bytelane_Req <= io.req.bits.activeByteLane @[BabyKyberTop.scala 42:32]
      rdata <= bkyber.data_Resp @[BabyKyberTop.scala 43:15]
      skip @[BabyKyberTop.scala 37:47]
    else : @[BabyKyberTop.scala 46:54]
      node _T_1 = eq(io.req.bits.isWrite, UInt<1>("h00")) @[BabyKyberTop.scala 46:32]
      node _T_2 = and(io.req.valid, _T_1) @[BabyKyberTop.scala 46:29]
      when _T_2 : @[BabyKyberTop.scala 46:54]
        validReg <= UInt<1>("h01") @[BabyKyberTop.scala 48:18]
        bkyber.wen_Req <= UInt<1>("h00") @[BabyKyberTop.scala 49:27]
        bkyber.addr_Req <= io.req.bits.addrRequest @[BabyKyberTop.scala 50:28]
        rdata <= bkyber.data_Resp @[BabyKyberTop.scala 52:15]
        skip @[BabyKyberTop.scala 46:54]
      else : @[BabyKyberTop.scala 53:17]
        validReg <= UInt<1>("h00") @[BabyKyberTop.scala 54:22]
        rdata is invalid @[BabyKyberTop.scala 56:19]
        skip @[BabyKyberTop.scala 53:17]
    io.rsp.bits.dataResponse <= rdata @[BabyKyberTop.scala 59:30]
    

module BabyKyberTop(
  input         clock,
  input         reset,
  output        io_req_ready,
  input         io_req_valid,
  input  [31:0] io_req_bits_addrRequest,
  input  [31:0] io_req_bits_dataRequest,
  input  [3:0]  io_req_bits_activeByteLane,
  input         io_req_bits_isWrite,
  input         io_rsp_ready,
  output        io_rsp_valid,
  output [31:0] io_rsp_bits_dataResponse
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  bkyber_clk; // @[BabyKyberTop.scala 21:24]
  wire  bkyber_rst_n; // @[BabyKyberTop.scala 21:24]
  wire  bkyber_enable; // @[BabyKyberTop.scala 21:24]
  wire [31:0] bkyber_data_Req; // @[BabyKyberTop.scala 21:24]
  wire [31:0] bkyber_addr_Req; // @[BabyKyberTop.scala 21:24]
  wire  bkyber_wen_Req; // @[BabyKyberTop.scala 21:24]
  wire [7:0] bkyber_bytelane_Req; // @[BabyKyberTop.scala 21:24]
  wire [31:0] bkyber_data_Resp; // @[BabyKyberTop.scala 21:24]
  reg  validReg; // @[BabyKyberTop.scala 14:27]
  wire  _T_2 = io_req_valid & ~io_req_bits_isWrite; // @[BabyKyberTop.scala 46:29]
  wire [31:0] _GEN_3 = bkyber_data_Resp; // @[BabyKyberTop.scala 46:54 BabyKyberTop.scala 52:15]
  Top bkyber ( // @[BabyKyberTop.scala 21:24]
    .clk(bkyber_clk),
    .rst_n(bkyber_rst_n),
    .enable(bkyber_enable),
    .data_Req(bkyber_data_Req),
    .addr_Req(bkyber_addr_Req),
    .wen_Req(bkyber_wen_Req),
    .bytelane_Req(bkyber_bytelane_Req),
    .data_Resp(bkyber_data_Resp)
  );
  assign io_req_ready = 1'h1; // @[BabyKyberTop.scala 16:18]
  assign io_rsp_valid = validReg; // @[BabyKyberTop.scala 15:18]
  assign io_rsp_bits_dataResponse = io_req_valid & io_req_bits_isWrite ? $signed(bkyber_data_Resp) : $signed(_GEN_3); // @[BabyKyberTop.scala 37:47 BabyKyberTop.scala 43:15]
  assign bkyber_clk = clock; // @[BabyKyberTop.scala 23:36]
  assign bkyber_rst_n = reset; // @[BabyKyberTop.scala 25:24]
  assign bkyber_enable = 1'h1; // @[BabyKyberTop.scala 29:22]
  assign bkyber_data_Req = io_req_bits_dataRequest; // @[BabyKyberTop.scala 37:47 BabyKyberTop.scala 39:28]
  assign bkyber_addr_Req = io_req_bits_addrRequest; // @[BabyKyberTop.scala 37:47 BabyKyberTop.scala 40:28]
  assign bkyber_wen_Req = io_req_valid & io_req_bits_isWrite; // @[BabyKyberTop.scala 37:23]
  assign bkyber_bytelane_Req = {{4{io_req_bits_activeByteLane[3]}},io_req_bits_activeByteLane}; // @[BabyKyberTop.scala 37:47 BabyKyberTop.scala 42:32]
  always @(posedge clock) begin
    if (reset) begin // @[BabyKyberTop.scala 14:27]
      validReg <= 1'h0; // @[BabyKyberTop.scala 14:27]
    end else if (!(io_req_valid & io_req_bits_isWrite)) begin // @[BabyKyberTop.scala 37:47]
      validReg <= _T_2;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  validReg = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

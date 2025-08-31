// /* Created By Hamna Mohiuddin @hamnamohi as a Google Summer of Code 2024 Project.*/

// package BabyKyber

// import chisel3._
// import chisel3.util._
// import chisel3.experimental._
// import chisel3.util.experimental._

// class BabyKyberTop extends Module {
//     val io = IO(new Bundle {
//         val req = Flipped(Decoupled(new RequestIO))
//         val rsp = Decoupled(new ResponseIO)
//     })

//     val validReg = WireInit(false.B)
//     io.rsp.valid := validReg
//     io.req.ready := true.B

//     val rdata = Wire(SInt(32.W))

//     // the accelerator
//     val bkyber = Module(new Top)

//     val clk = WireInit(clock.asUInt()(0))
//     val rst = Wire(Bool())
//     rst := reset.asBool()

//     bkyber.io.clk := clk
//     bkyber.io.rst_n := rst
//     bkyber.io.enable := 1.B
//     bkyber.io.data_Req := DontCare
//     bkyber.io.addr_Req := DontCare
//     bkyber.io.wen_Req := DontCare
//     bkyber.io.bytelane_Req := DontCare

//     dontTouch(io.req.valid)

//     when(io.req.valid && io.req.bits.isWrite) {
//         //write
//         bkyber.io.rst_n := 1.B
//         bkyber.io.data_Req := io.req.bits.dataRequest
//         bkyber.io.addr_Req := io.req.bits.addrRequest
//         bkyber.io.wen_Req := io.req.bits.isWrite
//         bkyber.io.bytelane_Req := io.req.bits.activeByteLane
//         rdata := bkyber.io.data_Resp


//     }.elsewhen(io.req.valid && !io.req.bits.isWrite) {
//         //read
//         validReg := true.B
//         bkyber.io.wen_Req := false.B
//         bkyber.io.addr_Req := io.req.bits.addrRequest

//         rdata := bkyber.io.data_Resp
//     }.otherwise {
//             validReg := false.B
//             // rdata map (_ := DontCare)
//             rdata := DontCare
//         }
    
//     io.rsp.bits.dataResponse := rdata

// }
// class BabyKyberIO extends Bundle{
//     val clk = Input(Bool())
//     val rst_n = Input(Bool())
//     val enable = Input(Bool())
//     val data_Req = Input(SInt(32.W))
//     val addr_Req = Input(SInt(32.W))
//     val wen_Req = Input(Bool())
//     val bytelane_Req = Input(SInt(8.W))
//     val data_Resp = Output(SInt(32.W))
// }

// class Top extends BlackBox() with HasBlackBoxResource {
//     val io = IO(new BabyKyberIO)
//     addResource("/Baby_Kyber/Top.sv")
//     addResource("/Baby_Kyber/Decrypt.sv")
//     addResource("/Baby_Kyber/Encrypt.sv")
//     addResource("/Baby_Kyber/KeyGeneration.sv")
//     addResource("/Baby_Kyber/PolynomialMatrixMultiplication.sv")
//     addResource("/Baby_Kyber/MatrixTranspose.sv")
// }
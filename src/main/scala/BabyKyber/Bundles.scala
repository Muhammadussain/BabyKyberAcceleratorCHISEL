package BabyKyberAcceleratorCHISEL.BabyKyber

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.util.experimental._

class RequestIO extends Bundle {
  val addrRequest: UInt = Input(UInt(32.W))
  val dataRequest: UInt = Input(UInt(32.W))
  val activeByteLane: UInt = Input(UInt(4.W))
  val isWrite: Bool = Input(Bool())
}

class ResponseIO extends Bundle {
  val dataResponse: UInt = Input(UInt(32.W))
}
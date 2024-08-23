/* Created By Hamna Mohiuddin @hamnamohi as a Google Summer of Code 2024 Project.*/

package BabyKyber

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.util.experimental._

class RequestIO extends Bundle {
  val addrRequest: SInt = Input(SInt(32.W))
  val dataRequest: SInt = Input(SInt(32.W))
  val activeByteLane: SInt = Input(SInt(4.W))
  val isWrite: Bool = Input(Bool())
}

class ResponseIO extends Bundle {
  val dataResponse: SInt = Input(SInt(32.W))
}
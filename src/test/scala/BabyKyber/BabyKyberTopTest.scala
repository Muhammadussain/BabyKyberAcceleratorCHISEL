package BabyKyber

import chisel3._
import chiseltest._
import org.scalatest._
import chiseltest.internal.VerilatorBackendAnnotation
import chisel3.experimental.BundleLiterals._
import chiseltest.experimental.TestOptionBuilder._
import chiseltest.internal.VerilatorBackendAnnotation
// import org.scalatest.flatspec.AnyFlatSpec

class BabyKyberTopTests extends FreeSpec with ChiselScalatestTester {
  "BabyKyberTop Test" in {
    test(new BabyKyberTop).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      c.io.req.valid.poke(true.B)
      c.io.req.bits.isWrite.poke(true.B)
      c.io.req.bits.dataRequest.poke(42.S)
      c.io.req.bits.addrRequest.poke(0x40007000.S)
      c.io.req.bits.activeByteLane.poke(0xFF.S)

      c.clock.step(10)


      c.io.rsp.valid.expect(false.B) 
      c.io.rsp.bits.dataResponse.expect(1.S)
    }
  }
}

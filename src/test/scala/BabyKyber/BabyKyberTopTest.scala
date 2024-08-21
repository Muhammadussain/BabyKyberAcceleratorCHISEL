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
    test(new BabyKyberTop) { c =>
      // Initialize inputs
      c.io.req.valid.poke(true.B)
      c.io.req.bits.isWrite.poke(false.B)
      c.io.req.bits.dataRequest.poke(4.S)
      c.io.req.bits.addrRequest.poke(0x40007000.S)
      c.io.req.bits.activeByteLane.poke(0xFF.S)

      // Step the clock
      c.clock.step(1)

      // Check write response
      c.io.rsp.valid.expect(true.B)  // rsp.valid should still be false after write
      c.io.rsp.bits.dataResponse.expect(0.S) // No valid response yet

      // Step the clock for the read operation
      // rsp.valid should now be false
    }
  }
}

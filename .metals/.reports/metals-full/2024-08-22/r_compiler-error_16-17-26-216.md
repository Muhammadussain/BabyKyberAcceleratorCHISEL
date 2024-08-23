file://<WORKSPACE>/src/main/scala/BabyKyber/BabyKyberTop.scala
### java.lang.AssertionError: assertion failed: denotation object Predef invalid in run 3. ValidFor: Period(1..2, run = 4)

occurred in the presentation compiler.

presentation compiler configuration:
Scala version: 3.3.3
Classpath:
<HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala3-library_3/3.3.3/scala3-library_3-3.3.3.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-library/2.13.12/scala-library-2.13.12.jar [exists ]
Options:



action parameters:
uri: file://<WORKSPACE>/src/main/scala/BabyKyber/BabyKyberTop.scala
text:
```scala
package BabyKyber

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.util.experimental._

class BabyKyberTop extends Module {
    val io = IO(new Bundle {
        val req = Flipped(Decoupled(new RequestIO))
        val rsp = Decoupled(new ResponseIO)
    })

    val validReg = WireInit(false.B)
    io.rsp.valid := validReg
    io.req.ready := true.B

    val rdata = Wire(SInt(32.W))

    // the accelerator
    val bkyber = Module(new Top)

    val clk = WireInit(clock.asUInt()(0))
    val rst = Wire(Bool())
    rst := reset.asBool()

    bkyber.io.clk := clk
    bkyber.io.rst_n := rst
    bkyber.io.enable := 1.B
    bkyber.io.data_Req := DontCare
    bkyber.io.addr_Req := DontCare
    bkyber.io.wen_Req := DontCare
    bkyber.io.bytelane_Req := DontCare

    dontTouch(io.req.valid)

    when(io.req.valid && io.req.bits.isWrite) {
        //write
        bkyber.io.rst_n := 1.B
        bkyber.io.data_Req := io.req.bits.dataRequest
        bkyber.io.addr_Req := io.req.bits.addrRequest
        bkyber.io.wen_Req := io.req.bits.isWrite
        bkyber.io.bytelane_Req := io.req.bits.activeByteLane
        rdata := bkyber.io.data_Resp


    }.elsewhen(io.req.valid && !io.req.bits.isWrite) {
        //read
        validReg := true.B
        bkyber.io.wen_Req := false.B
        bkyber.io.addr_Req := io.req.bits.addrRequest

        rdata := bkyber.io.data_Resp
    }.otherwise {
            validReg := false.B
            // rdata map (_ := DontCare)
            rdata := DontCare
        }
    
    io.rsp.bits.dataResponse := rdata

}
class BabyKyberIO extends Bundle{
    val clk = Input(Bool())
    val rst_n = Input(Bool())
    val enable = Input(Bool())
    val data_Req = Input(SInt(32.W))
    val addr_Req = Input(SInt(32.W))
    val wen_Req = Input(Bool())
    val bytelane_Req = Input(SInt(8.W))
    val data_Resp = Output(SInt(32.W))
}

class Top extends BlackBox() with HasBlackBoxResource {
    val io = IO(new BabyKyberIO)
    addResource("/Baby_Kyber/Top.sv")
    addResource("/Baby_Kyber/Decrypt.sv")
    addResource("/Baby_Kyber/Encrypt.sv")
    addResource("/Baby_Kyber/KeyGeneration.sv")
    addResource("/Baby_Kyber/PolynomialMatrixMultiplication.sv")
    addResource("/Baby_Kyber/MatrixTranspose.sv")
}
```



#### Error stacktrace:

```
scala.runtime.Scala3RunTime$.assertFailed(Scala3RunTime.scala:8)
	dotty.tools.dotc.core.Denotations$SingleDenotation.updateValidity(Denotations.scala:717)
	dotty.tools.dotc.core.Denotations$SingleDenotation.bringForward(Denotations.scala:742)
	dotty.tools.dotc.core.Denotations$SingleDenotation.toNewRun$1(Denotations.scala:799)
	dotty.tools.dotc.core.Denotations$SingleDenotation.current(Denotations.scala:870)
	dotty.tools.dotc.core.Symbols$Symbol.recomputeDenot(Symbols.scala:120)
	dotty.tools.dotc.core.Symbols$Symbol.computeDenot(Symbols.scala:114)
	dotty.tools.dotc.core.Symbols$Symbol.denot(Symbols.scala:107)
	dotty.tools.dotc.core.Symbols$.toDenot(Symbols.scala:494)
	dotty.tools.dotc.core.Types$Type.widenIfUnstable(Types.scala:1286)
	dotty.tools.dotc.core.Types$Type.memberBasedOnFlags(Types.scala:702)
	dotty.tools.dotc.typer.Typer.selection$1(Typer.scala:291)
	dotty.tools.dotc.typer.Typer.wildImportRef$1(Typer.scala:349)
	dotty.tools.dotc.typer.Typer.loop$1(Typer.scala:497)
	dotty.tools.dotc.typer.Typer.findRefRecur$1(Typer.scala:515)
	dotty.tools.dotc.typer.Typer.findRef(Typer.scala:518)
	dotty.tools.dotc.typer.Typer.typedIdent(Typer.scala:577)
	dotty.tools.dotc.typer.Typer.typedNamed$1(Typer.scala:3018)
	dotty.tools.dotc.typer.Typer.typedUnadapted(Typer.scala:3114)
	dotty.tools.dotc.typer.Typer.typed(Typer.scala:3187)
	dotty.tools.dotc.typer.Typer.typed(Typer.scala:3191)
	dotty.tools.dotc.typer.Typer.typedExpr(Typer.scala:3303)
	dotty.tools.dotc.typer.Namer.typedAheadExpr$$anonfun$1(Namer.scala:1656)
	dotty.tools.dotc.typer.Namer.typedAhead(Namer.scala:1646)
	dotty.tools.dotc.typer.Namer.typedAheadExpr(Namer.scala:1656)
	dotty.tools.dotc.typer.Namer$Completer.$anonfun$15(Namer.scala:794)
	dotty.tools.dotc.typer.Typer.typedImportQualifier(Typer.scala:2784)
	dotty.tools.dotc.typer.Namer$Completer.typeSig(Namer.scala:794)
	dotty.tools.dotc.typer.Namer$Completer.completeInCreationContext(Namer.scala:934)
	dotty.tools.dotc.typer.Namer$Completer.complete(Namer.scala:814)
	dotty.tools.dotc.core.SymDenotations$SymDenotation.completeFrom(SymDenotations.scala:174)
	dotty.tools.dotc.core.Denotations$Denotation.completeInfo$1(Denotations.scala:187)
	dotty.tools.dotc.core.Denotations$Denotation.info(Denotations.scala:189)
	dotty.tools.dotc.core.SymDenotations$SymDenotation.ensureCompleted(SymDenotations.scala:393)
	dotty.tools.dotc.typer.Typer.retrieveSym(Typer.scala:2991)
	dotty.tools.dotc.typer.Typer.typedImport(Typer.scala:2787)
	dotty.tools.dotc.typer.Typer.typedUnnamed$1(Typer.scala:3062)
	dotty.tools.dotc.typer.Typer.typedUnadapted(Typer.scala:3115)
	dotty.tools.dotc.typer.Typer.typed(Typer.scala:3187)
	dotty.tools.dotc.typer.Typer.typed(Typer.scala:3191)
	dotty.tools.dotc.typer.Typer.traverse$1(Typer.scala:3203)
	dotty.tools.dotc.typer.Typer.typedStats(Typer.scala:3259)
	dotty.tools.dotc.typer.Typer.typedPackageDef(Typer.scala:2812)
	dotty.tools.dotc.typer.Typer.typedUnnamed$1(Typer.scala:3083)
	dotty.tools.dotc.typer.Typer.typedUnadapted(Typer.scala:3115)
	dotty.tools.dotc.typer.Typer.typed(Typer.scala:3187)
	dotty.tools.dotc.typer.Typer.typed(Typer.scala:3191)
	dotty.tools.dotc.typer.Typer.typedExpr(Typer.scala:3303)
	dotty.tools.dotc.typer.TyperPhase.typeCheck$$anonfun$1(TyperPhase.scala:44)
	dotty.tools.dotc.typer.TyperPhase.typeCheck$$anonfun$adapted$1(TyperPhase.scala:50)
	scala.Function0.apply$mcV$sp(Function0.scala:42)
	dotty.tools.dotc.core.Phases$Phase.monitor(Phases.scala:440)
	dotty.tools.dotc.typer.TyperPhase.typeCheck(TyperPhase.scala:50)
	dotty.tools.dotc.typer.TyperPhase.runOn$$anonfun$3(TyperPhase.scala:84)
	scala.runtime.function.JProcedure1.apply(JProcedure1.java:15)
	scala.runtime.function.JProcedure1.apply(JProcedure1.java:10)
	scala.collection.immutable.List.foreach(List.scala:333)
	dotty.tools.dotc.typer.TyperPhase.runOn(TyperPhase.scala:84)
	dotty.tools.dotc.Run.runPhases$1$$anonfun$1(Run.scala:246)
	scala.runtime.function.JProcedure1.apply(JProcedure1.java:15)
	scala.runtime.function.JProcedure1.apply(JProcedure1.java:10)
	scala.collection.ArrayOps$.foreach$extension(ArrayOps.scala:1323)
	dotty.tools.dotc.Run.runPhases$1(Run.scala:262)
	dotty.tools.dotc.Run.compileUnits$$anonfun$1(Run.scala:270)
	dotty.tools.dotc.Run.compileUnits$$anonfun$adapted$1(Run.scala:279)
	dotty.tools.dotc.util.Stats$.maybeMonitored(Stats.scala:71)
	dotty.tools.dotc.Run.compileUnits(Run.scala:279)
	dotty.tools.dotc.Run.compileSources(Run.scala:194)
	dotty.tools.dotc.interactive.InteractiveDriver.run(InteractiveDriver.scala:165)
	scala.meta.internal.pc.MetalsDriver.run(MetalsDriver.scala:45)
	scala.meta.internal.pc.WithCompilationUnit.<init>(WithCompilationUnit.scala:28)
	scala.meta.internal.pc.SimpleCollector.<init>(PcCollector.scala:373)
	scala.meta.internal.pc.PcSemanticTokensProvider$Collector$.<init>(PcSemanticTokensProvider.scala:61)
	scala.meta.internal.pc.PcSemanticTokensProvider.Collector$lzyINIT1(PcSemanticTokensProvider.scala:61)
	scala.meta.internal.pc.PcSemanticTokensProvider.Collector(PcSemanticTokensProvider.scala:61)
	scala.meta.internal.pc.PcSemanticTokensProvider.provide(PcSemanticTokensProvider.scala:90)
	scala.meta.internal.pc.ScalaPresentationCompiler.semanticTokens$$anonfun$1(ScalaPresentationCompiler.scala:117)
```
#### Short summary: 

java.lang.AssertionError: assertion failed: denotation object Predef invalid in run 3. ValidFor: Period(1..2, run = 4)
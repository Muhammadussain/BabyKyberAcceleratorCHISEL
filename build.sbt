// See README.md for license details.

// Hard-coded versions (inlined per project)
ThisBuild / scalaVersion := "2.13.10"
ThisBuild / version := "0.1.0"
ThisBuild / organization := "com.github.merledu"

name := "BabyKyberAcceleratorCHISEL"
libraryDependencies ++= Seq(
  "edu.berkeley.cs" %% "chisel3" % "3.5.6",
  "edu.berkeley.cs" %% "chiseltest" % "0.5.6" % "test"
)
scalacOptions ++= Seq(
  "-Xsource:2.13",
  "-language:reflectiveCalls",
  "-deprecation",
  "-feature",
  "-Xcheckinit",
  // Enables autoclonetype2 in 3.4.x (on by default in 3.5)
  "-P:chiselplugin:useBundlePlugin"
)
addCompilerPlugin("edu.berkeley.cs" % "chisel3-plugin" % "3.5.6" cross CrossVersion.full)




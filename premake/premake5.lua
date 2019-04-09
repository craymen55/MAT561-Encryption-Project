workspace "MAT561EncryptionProject"

  configurations { "Debug", "Release" }
  
  location "../build"
  targetdir "../bin"

  filter { "configurations:Debug" }
  symbols "On"
  optimize "Debug"
  filter {}

  filter { "configurations:Release" }
  symbols "Off"
  optimize "Speed"
  filter {}

  project "HelloWorld"
  kind "ConsoleApp"
  files { "../src/HelloWorld.cpp", "../src/Num.cpp" }

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

  project "RSADigitalSignature"
  kind "ConsoleApp"
  files { "../src/Euclid.cpp", "../src/RSADigitalSignatureMain.cpp", "../src/Multinv.cpp", "../src/Modexp.cpp", "../src/Num.cpp" }

# MAT561 Encryption Project

To build, first run `premake/premake5` with the build system you'll be using.

For example, to build on Linux with makefiles:

```
cd premake
./premake5 gmake
cd ../build
make
```

To build on Windows with Visual Studio 2015:

```
cd premake
premake5 vs2015
cd ../build
msbuild MAT561EncryptionProject.sln
```

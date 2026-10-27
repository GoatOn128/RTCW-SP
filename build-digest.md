# Build digest

commit: 73630c36f373

- ubuntu-latest-x64-debug: failure
- ubuntu-latest-x64-release: failure
- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: failure
- uncrustify: success
- windows-latest-x64-debug: failure
- windows-latest-x64-release: failure
- windows-latest-x86-debug: failure
- windows-latest-x86-release: failure

## ubuntu-latest-x64-debug

status: failure

errors: 18
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/Material_shader.cpp:1385:19: error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1386:19: error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1387:19: error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1388:19: error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1389:19: error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1390:19: error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1488:19: error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1489:19: error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1490:19: error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1491:19: error: 'skyFogDensity' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1492:19: error: 'skyFogDefined' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1501:19: error: 'sunShaderName' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1513:20: error: 'lightGridMulAmbient' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1522:20: error: 'lightGridMulDirected' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1544:20: error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1547:20: error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1570:19: error: 'mapFogString' is a private member of 'idMaterialManagerLocal'
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Error 1

### failure context

- build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o

```
 1513 |                                 parserManager->lightGridMulAmbient = value;
      |                                                ^
src/renderer-bfg/Material_local.h:86:7: note: declared private here
   86 | float lightGridMulAmbient;
      |       ^
src/renderer-bfg/Material_shader.cpp:1522:20: error: 'lightGridMulDirected' is a private member of 'idMaterialManagerLocal'
 1522 |                                 parserManager->lightGridMulDirected = value;
      |                                                ^
src/renderer-bfg/Material_local.h:87:7: note: declared private here
   87 | float lightGridMulDirected;
      |       ^
src/renderer-bfg/Material_shader.cpp:1544:20: error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
 1544 |                                 parserManager->waterFogString.Format( "0 %d 1.1 %f %f %f 200", ( int )fogvar,
      |                                                ^
src/renderer-bfg/Material_local.h:96:7: note: declared private here
   96 | idStr waterFogString;
      |       ^
src/renderer-bfg/Material_shader.cpp:1547:20: error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
 1547 |                                 parserManager->waterFogString.Format( "0 5 %f %f %f %f 200", fogvar,
      |                                                ^
src/renderer-bfg/Material_local.h:96:7: note: declared private here
   96 | idStr waterFogString;
      |       ^
src/renderer-bfg/Material_shader.cpp:1570:19: error: 'mapFogString' is a private member of 'idMaterialManagerLocal'
 1570 |                         parserManager->mapFogString.Format( "0 %d %f %f %f %f 0", fogFar,
      |                                        ^
src/renderer-bfg/Material_local.h:97:7: note: declared private here
   97 | idStr mapFogString;
      |       ^
17 errors generated.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x64-release

status: failure

errors: 18
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/Material_shader.cpp:1385:19: error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1386:19: error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1387:19: error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1388:19: error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1389:19: error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1390:19: error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1488:19: error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1489:19: error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1490:19: error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1491:19: error: 'skyFogDensity' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1492:19: error: 'skyFogDefined' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1501:19: error: 'sunShaderName' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1513:20: error: 'lightGridMulAmbient' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1522:20: error: 'lightGridMulDirected' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1544:20: error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1547:20: error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1570:19: error: 'mapFogString' is a private member of 'idMaterialManagerLocal'
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Error 1

### failure context

- build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o

```
 1513 |                                 parserManager->lightGridMulAmbient = value;
      |                                                ^
src/renderer-bfg/Material_local.h:86:7: note: declared private here
   86 | float lightGridMulAmbient;
      |       ^
src/renderer-bfg/Material_shader.cpp:1522:20: error: 'lightGridMulDirected' is a private member of 'idMaterialManagerLocal'
 1522 |                                 parserManager->lightGridMulDirected = value;
      |                                                ^
src/renderer-bfg/Material_local.h:87:7: note: declared private here
   87 | float lightGridMulDirected;
      |       ^
src/renderer-bfg/Material_shader.cpp:1544:20: error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
 1544 |                                 parserManager->waterFogString.Format( "0 %d 1.1 %f %f %f 200", ( int )fogvar,
      |                                                ^
src/renderer-bfg/Material_local.h:96:7: note: declared private here
   96 | idStr waterFogString;
      |       ^
src/renderer-bfg/Material_shader.cpp:1547:20: error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
 1547 |                                 parserManager->waterFogString.Format( "0 5 %f %f %f %f 200", fogvar,
      |                                                ^
src/renderer-bfg/Material_local.h:96:7: note: declared private here
   96 | idStr waterFogString;
      |       ^
src/renderer-bfg/Material_shader.cpp:1570:19: error: 'mapFogString' is a private member of 'idMaterialManagerLocal'
 1570 |                         parserManager->mapFogString.Format( "0 %d %f %f %f %f 0", fogFar,
      |                                        ^
src/renderer-bfg/Material_local.h:97:7: note: declared private here
   97 | idStr mapFogString;
      |       ^
17 errors generated.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-debug

status: failure

errors: 18
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/Material_shader.cpp:1385:19: error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1386:19: error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1387:19: error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1388:19: error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1389:19: error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1390:19: error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1488:19: error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1489:19: error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1490:19: error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1491:19: error: 'skyFogDensity' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1492:19: error: 'skyFogDefined' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1501:19: error: 'sunShaderName' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1513:20: error: 'lightGridMulAmbient' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1522:20: error: 'lightGridMulDirected' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1544:20: error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1547:20: error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1570:19: error: 'mapFogString' is a private member of 'idMaterialManagerLocal'
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Error 1

### failure context

- build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o

```
 1513 |                                 parserManager->lightGridMulAmbient = value;
      |                                                ^
src/renderer-bfg/Material_local.h:86:7: note: declared private here
   86 | float lightGridMulAmbient;
      |       ^
src/renderer-bfg/Material_shader.cpp:1522:20: error: 'lightGridMulDirected' is a private member of 'idMaterialManagerLocal'
 1522 |                                 parserManager->lightGridMulDirected = value;
      |                                                ^
src/renderer-bfg/Material_local.h:87:7: note: declared private here
   87 | float lightGridMulDirected;
      |       ^
src/renderer-bfg/Material_shader.cpp:1544:20: error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
 1544 |                                 parserManager->waterFogString.Format( "0 %d 1.1 %f %f %f 200", ( int )fogvar,
      |                                                ^
src/renderer-bfg/Material_local.h:96:7: note: declared private here
   96 | idStr waterFogString;
      |       ^
src/renderer-bfg/Material_shader.cpp:1547:20: error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
 1547 |                                 parserManager->waterFogString.Format( "0 5 %f %f %f %f 200", fogvar,
      |                                                ^
src/renderer-bfg/Material_local.h:96:7: note: declared private here
   96 | idStr waterFogString;
      |       ^
src/renderer-bfg/Material_shader.cpp:1570:19: error: 'mapFogString' is a private member of 'idMaterialManagerLocal'
 1570 |                         parserManager->mapFogString.Format( "0 %d %f %f %f %f 0", fogFar,
      |                                        ^
src/renderer-bfg/Material_local.h:97:7: note: declared private here
   97 | idStr mapFogString;
      |       ^
17 errors generated.
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-release

status: failure

errors: 18
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/Material_shader.cpp:1385:19: error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1386:19: error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1387:19: error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1388:19: error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1389:19: error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1390:19: error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1488:19: error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1489:19: error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1490:19: error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1491:19: error: 'skyFogDensity' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1492:19: error: 'skyFogDefined' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1501:19: error: 'sunShaderName' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1513:20: error: 'lightGridMulAmbient' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1522:20: error: 'lightGridMulDirected' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1544:20: error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1547:20: error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
src/renderer-bfg/Material_shader.cpp:1570:19: error: 'mapFogString' is a private member of 'idMaterialManagerLocal'
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Error 1

### failure context

- build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o

```
 1513 |                                 parserManager->lightGridMulAmbient = value;
      |                                                ^
src/renderer-bfg/Material_local.h:86:7: note: declared private here
   86 | float lightGridMulAmbient;
      |       ^
src/renderer-bfg/Material_shader.cpp:1522:20: error: 'lightGridMulDirected' is a private member of 'idMaterialManagerLocal'
 1522 |                                 parserManager->lightGridMulDirected = value;
      |                                                ^
src/renderer-bfg/Material_local.h:87:7: note: declared private here
   87 | float lightGridMulDirected;
      |       ^
src/renderer-bfg/Material_shader.cpp:1544:20: error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
 1544 |                                 parserManager->waterFogString.Format( "0 %d 1.1 %f %f %f 200", ( int )fogvar,
      |                                                ^
src/renderer-bfg/Material_local.h:96:7: note: declared private here
   96 | idStr waterFogString;
      |       ^
src/renderer-bfg/Material_shader.cpp:1547:20: error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
 1547 |                                 parserManager->waterFogString.Format( "0 5 %f %f %f %f 200", fogvar,
      |                                                ^
src/renderer-bfg/Material_local.h:96:7: note: declared private here
   96 | idStr waterFogString;
      |       ^
src/renderer-bfg/Material_shader.cpp:1570:19: error: 'mapFogString' is a private member of 'idMaterialManagerLocal'
 1570 |                         parserManager->mapFogString.Format( "0 %d %f %f %f %f 0", fogFar,
      |                                        ^
src/renderer-bfg/Material_local.h:97:7: note: declared private here
   97 | idStr mapFogString;
      |       ^
17 errors generated.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Error 1
```


### warning kinds

## uncrustify

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-debug

status: failure

errors: 18
warnings: 0 in 0 kinds

### errors

src\renderer-bfg\Material_shader.cpp(1385,19): error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1386,19): error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1387,19): error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1388,19): error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1389,19): error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1390,19): error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1488,19): error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1489,19): error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1490,19): error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1491,19): error: 'skyFogDensity' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1492,19): error: 'skyFogDefined' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1501,19): error: 'sunShaderName' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1513,20): error: 'lightGridMulAmbient' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1522,20): error: 'lightGridMulDirected' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1544,20): error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1547,20): error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1570,19): error: 'mapFogString' is a private member of 'idMaterialManagerLocal'
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj] Error 1

### failure context

- build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj

```
 1513 |                                 parserManager->lightGridMulAmbient = value;
      |                                                ^
src\renderer-bfg\Material_local.h(86,7): note: declared private here
   86 | float lightGridMulAmbient;
      |       ^
src\renderer-bfg\Material_shader.cpp(1522,20): error: 'lightGridMulDirected' is a private member of 'idMaterialManagerLocal'
 1522 |                                 parserManager->lightGridMulDirected = value;
      |                                                ^
src\renderer-bfg\Material_local.h(87,7): note: declared private here
   87 | float lightGridMulDirected;
      |       ^
src\renderer-bfg\Material_shader.cpp(1544,20): error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
 1544 |                                 parserManager->waterFogString.Format( "0 %d 1.1 %f %f %f 200", ( int )fogvar,
      |                                                ^
src\renderer-bfg\Material_local.h(96,7): note: declared private here
   96 | idStr waterFogString;
      |       ^
src\renderer-bfg\Material_shader.cpp(1547,20): error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
 1547 |                                 parserManager->waterFogString.Format( "0 5 %f %f %f %f 200", fogvar,
      |                                                ^
src\renderer-bfg\Material_local.h(96,7): note: declared private here
   96 | idStr waterFogString;
      |       ^
src\renderer-bfg\Material_shader.cpp(1570,19): error: 'mapFogString' is a private member of 'idMaterialManagerLocal'
 1570 |                         parserManager->mapFogString.Format( "0 %d %f %f %f %f 0", fogFar,
      |                                        ^
src\renderer-bfg\Material_local.h(97,7): note: declared private here
   97 | idStr mapFogString;
      |       ^
17 errors generated.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x64-release

status: failure

errors: 18
warnings: 0 in 0 kinds

### errors

src\renderer-bfg\Material_shader.cpp(1385,19): error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1386,19): error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1387,19): error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1388,19): error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1389,19): error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1390,19): error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1488,19): error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1489,19): error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1490,19): error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1491,19): error: 'skyFogDensity' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1492,19): error: 'skyFogDefined' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1501,19): error: 'sunShaderName' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1513,20): error: 'lightGridMulAmbient' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1522,20): error: 'lightGridMulDirected' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1544,20): error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1547,20): error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1570,19): error: 'mapFogString' is a private member of 'idMaterialManagerLocal'
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj] Error 1

### failure context

- build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj

```
      |                                                ^
src\renderer-bfg\Material_local.h(86,7): note: declared private here
   86 | float lightGridMulAmbient;
      |       ^
src\renderer-bfg\Material_shader.cpp(1522,20): error: 'lightGridMulDirected' is a private member of 'idMaterialManagerLocal'
 1522 |                                 parserManager->lightGridMulDirected = value;
      |                                                ^
src\renderer-bfg\Material_local.h(87,7): note: declared private here
   87 | float lightGridMulDirected;
      |       ^
src\renderer-bfg\Material_shader.cpp(1544,20): error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
 1544 |                                 parserManager->waterFogString.Format( "0 %d 1.1 %f %f %f 200", ( int )fogvar,
      |                                                ^
src\renderer-bfg\Material_local.h(96,7): note: declared private here
   96 | idStr waterFogString;
      |       ^
src\renderer-bfg\Material_shader.cpp(1547,20): error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
 1547 |                                 parserManager->waterFogString.Format( "0 5 %f %f %f %f 200", fogvar,
      |                                                ^
src\renderer-bfg\Material_local.h(96,7): note: declared private here
   96 | idStr waterFogString;
      |       ^
src\renderer-bfg\Material_shader.cpp(1570,19): error: 'mapFogString' is a private member of 'idMaterialManagerLocal'
 1570 |                         parserManager->mapFogString.Format( "0 %d %f %f %f %f 0", fogFar,
      |                                        ^
src\renderer-bfg\Material_local.h(97,7): note: declared private here
   97 | idStr mapFogString;
      |       ^
17 errors generated.
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj /c src\renderer-bfg\Image_intrinsic.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x86-debug

status: failure

errors: 18
warnings: 0 in 0 kinds

### errors

src\renderer-bfg\Material_shader.cpp(1385,19): error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1386,19): error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1387,19): error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1388,19): error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1389,19): error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1390,19): error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1488,19): error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1489,19): error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1490,19): error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1491,19): error: 'skyFogDensity' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1492,19): error: 'skyFogDefined' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1501,19): error: 'sunShaderName' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1513,20): error: 'lightGridMulAmbient' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1522,20): error: 'lightGridMulDirected' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1544,20): error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1547,20): error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1570,19): error: 'mapFogString' is a private member of 'idMaterialManagerLocal'
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj] Error 1

### failure context

- build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj

```
      |                                                ^
src\renderer-bfg\Material_local.h(86,7): note: declared private here
   86 | float lightGridMulAmbient;
      |       ^
src\renderer-bfg\Material_shader.cpp(1522,20): error: 'lightGridMulDirected' is a private member of 'idMaterialManagerLocal'
 1522 |                                 parserManager->lightGridMulDirected = value;
      |                                                ^
src\renderer-bfg\Material_local.h(87,7): note: declared private here
   87 | float lightGridMulDirected;
      |       ^
src\renderer-bfg\Material_shader.cpp(1544,20): error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
 1544 |                                 parserManager->waterFogString.Format( "0 %d 1.1 %f %f %f 200", ( int )fogvar,
      |                                                ^
src\renderer-bfg\Material_local.h(96,7): note: declared private here
   96 | idStr waterFogString;
      |       ^
src\renderer-bfg\Material_shader.cpp(1547,20): error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
 1547 |                                 parserManager->waterFogString.Format( "0 5 %f %f %f %f 200", fogvar,
      |                                                ^
src\renderer-bfg\Material_local.h(96,7): note: declared private here
   96 | idStr waterFogString;
      |       ^
src\renderer-bfg\Material_shader.cpp(1570,19): error: 'mapFogString' is a private member of 'idMaterialManagerLocal'
 1570 |                         parserManager->mapFogString.Format( "0 %d %f %f %f %f 0", fogFar,
      |                                        ^
src\renderer-bfg\Material_local.h(97,7): note: declared private here
   97 | idStr mapFogString;
      |       ^
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj /c src\renderer-bfg\Image_intrinsic.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
17 errors generated.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x86-release

status: failure

errors: 18
warnings: 0 in 0 kinds

### errors

src\renderer-bfg\Material_shader.cpp(1385,19): error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1386,19): error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1387,19): error: 'sunLight' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1388,19): error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1389,19): error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1390,19): error: 'sunDirection' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1488,19): error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1489,19): error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1490,19): error: 'skyFogColor' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1491,19): error: 'skyFogDensity' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1492,19): error: 'skyFogDefined' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1501,19): error: 'sunShaderName' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1513,20): error: 'lightGridMulAmbient' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1522,20): error: 'lightGridMulDirected' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1544,20): error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1547,20): error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
src\renderer-bfg\Material_shader.cpp(1570,19): error: 'mapFogString' is a private member of 'idMaterialManagerLocal'
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj] Error 1

### failure context

- build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj

```
 1513 |                                 parserManager->lightGridMulAmbient = value;
      |                                                ^
src\renderer-bfg\Material_local.h(86,7): note: declared private here
   86 | float lightGridMulAmbient;
      |       ^
src\renderer-bfg\Material_shader.cpp(1522,20): error: 'lightGridMulDirected' is a private member of 'idMaterialManagerLocal'
 1522 |                                 parserManager->lightGridMulDirected = value;
      |                                                ^
src\renderer-bfg\Material_local.h(87,7): note: declared private here
   87 | float lightGridMulDirected;
      |       ^
src\renderer-bfg\Material_shader.cpp(1544,20): error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
 1544 |                                 parserManager->waterFogString.Format( "0 %d 1.1 %f %f %f 200", ( int )fogvar,
      |                                                ^
src\renderer-bfg\Material_local.h(96,7): note: declared private here
   96 | idStr waterFogString;
      |       ^
src\renderer-bfg\Material_shader.cpp(1547,20): error: 'waterFogString' is a private member of 'idMaterialManagerLocal'
 1547 |                                 parserManager->waterFogString.Format( "0 5 %f %f %f %f 200", fogvar,
      |                                                ^
src\renderer-bfg\Material_local.h(96,7): note: declared private here
   96 | idStr waterFogString;
      |       ^
src\renderer-bfg\Material_shader.cpp(1570,19): error: 'mapFogString' is a private member of 'idMaterialManagerLocal'
 1570 |                         parserManager->mapFogString.Format( "0 %d %f %f %f %f 0", fogFar,
      |                                        ^
src\renderer-bfg\Material_local.h(97,7): note: declared private here
   97 | idStr mapFogString;
      |       ^
17 errors generated.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj] Error 1
```


### warning kinds


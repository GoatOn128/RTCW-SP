# Build digest

commit: 2326534ee507

- ubuntu-latest-x64-debug: failure
- ubuntu-latest-x64-release: failure
- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: failure
- uncrustify: success
- windows-latest-x64-debug: failure
- windows-latest-x64-release: failure
- windows-latest-x86-debug: cancelled
- windows-latest-x86-release: cancelled

## ubuntu-latest-x64-debug

status: failure

errors: 12
warnings: 0 in 0 kinds

### errors

src/idlib/Parser.cpp:704:1: error: a type specifier is required for all declarations
src/idlib/Parser.cpp:704:18: error: use of undeclared identifier 'TestPreprocessorMacros'
src/idlib/Lexer.cpp:1716:21: src/idlib/Parser.cpp:704:70: error: expected ';' after top level declarator
error: 704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
src/idlib/Lexer.cpp:1716:14: error: no matching function for call to 'fopen'
src/idlib/Lexer.cpp:1723:2: error: use of undeclared identifier 'buf'
src/idlib/Lexer.cpp:1724:2: error: use of undeclared identifier 'buf'
src/idlib/Lexer.cpp:1725:14: error: use of undeclared identifier 'buf'
src/idlib/Lexer.cpp:1726:13: error: use of undeclared identifier 'buf'
src/idlib/Lexer.cpp:1732:20: error: use of undeclared identifier 'buf'
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Parser.cpp.o] Error 1
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Lexer.cpp.o] Error 1

### failure context

- build/linux-x64-debug/idlib/obj/idlib/Parser.cpp.o

```
use of undeclared identifier 'pathname'; did you mean 'ptsname'?
 1716 |         FILE * fp = fopen( pathname, "rb" );
      |                            ^~~~~~~~
      |                            ptsname
/usr/include/stdlib.h:1161:14: note: 'ptsname' declared here
 1161 | extern char *ptsname (int __fd) __THROW __wur;
      |              ^
src/idlib/Lexer.cpp:1716:14: error: no matching function for call to 'fopen'
 1716 |         FILE * fp = fopen( pathname, "rb" );
      |                     ^~~~~
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Math.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
/usr/include/stdio.h:271:14: note: candidate function not viable: no known conversion from 'char *(int) noexcept(true)' to 'const char *__restrict' for 1st argument
  271 | extern FILE *fopen (const char *__restrict __filename,
      |              ^      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
3 errors generated.
src/idlib/Lexer.cpp:1723:2: error: use of undeclared identifier 'buf'
 1723 |         buf = (char *) Mem_Alloc( length + 1, TAG_IDLIB_LEXER );
      |         ^~~
src/idlib/Lexer.cpp:1724:2: error: use of undeclared identifier 'buf'
 1724 |         buf[length] = '\0';
      |         ^~~
src/idlib/Lexer.cpp:1725:14: error: use of undeclared identifier 'buf'
 1725 |         if ( fread( buf, 1, length, fp ) != (size_t) length ) {
      |                     ^~~
src/idlib/Lexer.cpp:1726:13: error: use of undeclared identifier 'buf'
 1726 |                 Mem_Free( buf );
      |                           ^~~
src/idlib/Lexer.cpp:1732:20: error: use of undeclared identifier 'buf'
 1732 |         idLexer::buffer = buf;
      |                           ^~~
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Parser.cpp.o] Error 1
```

- build/linux-x64-debug/idlib/obj/idlib/Lexer.cpp.o

```
      |                            ptsname
/usr/include/stdlib.h:1161:14: note: 'ptsname' declared here
 1161 | extern char *ptsname (int __fd) __THROW __wur;
      |              ^
src/idlib/Lexer.cpp:1716:14: error: no matching function for call to 'fopen'
 1716 |         FILE * fp = fopen( pathname, "rb" );
      |                     ^~~~~
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Math.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
/usr/include/stdio.h:271:14: note: candidate function not viable: no known conversion from 'char *(int) noexcept(true)' to 'const char *__restrict' for 1st argument
  271 | extern FILE *fopen (const char *__restrict __filename,
      |              ^      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
3 errors generated.
src/idlib/Lexer.cpp:1723:2: error: use of undeclared identifier 'buf'
 1723 |         buf = (char *) Mem_Alloc( length + 1, TAG_IDLIB_LEXER );
      |         ^~~
src/idlib/Lexer.cpp:1724:2: error: use of undeclared identifier 'buf'
 1724 |         buf[length] = '\0';
      |         ^~~
src/idlib/Lexer.cpp:1725:14: error: use of undeclared identifier 'buf'
 1725 |         if ( fread( buf, 1, length, fp ) != (size_t) length ) {
      |                     ^~~
src/idlib/Lexer.cpp:1726:13: error: use of undeclared identifier 'buf'
 1726 |                 Mem_Free( buf );
      |                           ^~~
src/idlib/Lexer.cpp:1732:20: error: use of undeclared identifier 'buf'
 1732 |         idLexer::buffer = buf;
      |                           ^~~
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Parser.cpp.o] Error 1
7 errors generated.
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Vector.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Lexer.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x64-release

status: failure

errors: 12
warnings: 0 in 0 kinds

### errors

src/idlib/Lexer.cpp:1716:21: error: use of undeclared identifier 'pathname'; did you mean 'ptsname'?
src/idlib/Lexer.cpp:1716:14: error: no matching function for call to 'fopen'
src/idlib/Lexer.cpp:1723:2: error: use of undeclared identifier 'buf'
src/idlib/Lexer.cpp:1724:2: error: use of undeclared identifier 'buf'
src/idlib/Lexer.cpp:1725:14: error: use of undeclared identifier 'buf'
src/idlib/Lexer.cpp:1726:13: error: use of undeclared identifier 'buf'
src/idlib/Lexer.cpp:1732:20: error: use of undeclared identifier 'buf'
scons: *** [build/linux-x64-release/idlib/obj/idlib/Lexer.cpp.o] Error 1
src/idlib/Parser.cpp:704:1: error: a type specifier is required for all declarations
src/idlib/Parser.cpp:704:18: error: use of undeclared identifier 'TestPreprocessorMacros'
src/idlib/Parser.cpp:704:70: error: expected ';' after top level declarator
scons: *** [build/linux-x64-release/idlib/obj/idlib/Parser.cpp.o] Error 1

### failure context

- build/linux-x64-release/idlib/obj/idlib/Lexer.cpp.o

```
clang++ -o build/linux-x64-release/idlib/obj/idlib/sys/sys_assert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-depre
src/idlib/Lexer.cpp:1716:21: error: use of undeclared identifier 'pathname'; did you mean 'ptsname'?
 1716 |         FILE * fp = fopen( pathname, "rb" );
      |                            ^~~~~~~~
      |                            ptsname
/usr/include/stdlib.h:1161:14: note: 'ptsname' declared here
 1161 | extern char *ptsname (int __fd) __THROW __wur;
      |              ^
src/idlib/Lexer.cpp:1716:14: error: no matching function for call to 'fopen'
 1716 |         FILE * fp = fopen( pathname, "rb" );
      |                     ^~~~~
/usr/include/stdio.h:271:14: note: candidate function not viable: no known conversion from 'char *(int) noexcept(true)' to 'const char *__restrict' for 1st argument
  271 | extern FILE *fopen (const char *__restrict __filename,
      |              ^      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/idlib/Lexer.cpp:1723:2: error: use of undeclared identifier 'buf'
 1723 |         buf = (char *) Mem_Alloc( length + 1, TAG_IDLIB_LEXER );
      |         ^~~
src/idlib/Lexer.cpp:1724:2: error: use of undeclared identifier 'buf'
 1724 |         buf[length] = '\0';
      |         ^~~
src/idlib/Lexer.cpp:1725:14: error: use of undeclared identifier 'buf'
 1725 |         if ( fread( buf, 1, length, fp ) != (size_t) length ) {
      |                     ^~~
src/idlib/Lexer.cpp:1726:13: error: use of undeclared identifier 'buf'
 1726 |                 Mem_Free( buf );
      |                           ^~~
src/idlib/Lexer.cpp:1732:20: error: use of undeclared identifier 'buf'
 1732 |         idLexer::buffer = buf;
      |                           ^~~
7 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Lexer.cpp.o] Error 1
```

- build/linux-x64-release/idlib/obj/idlib/Parser.cpp.o

```
      |              ^      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/idlib/Lexer.cpp:1723:2: error: use of undeclared identifier 'buf'
 1723 |         buf = (char *) Mem_Alloc( length + 1, TAG_IDLIB_LEXER );
      |         ^~~
src/idlib/Lexer.cpp:1724:2: error: use of undeclared identifier 'buf'
 1724 |         buf[length] = '\0';
      |         ^~~
src/idlib/Lexer.cpp:1725:14: error: use of undeclared identifier 'buf'
 1725 |         if ( fread( buf, 1, length, fp ) != (size_t) length ) {
      |                     ^~~
src/idlib/Lexer.cpp:1726:13: error: use of undeclared identifier 'buf'
 1726 |                 Mem_Free( buf );
      |                           ^~~
src/idlib/Lexer.cpp:1732:20: error: use of undeclared identifier 'buf'
 1732 |         idLexer::buffer = buf;
      |                           ^~~
7 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Lexer.cpp.o] Error 1
clang++ -o build/linux-x64-release/idlib/obj/idlib/containers/HashIndex.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno
src/idlib/Parser.cpp:704:1: error: a type specifier is required for all declarations
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      | ^
src/idlib/Parser.cpp:704:18: error: use of undeclared identifier 'TestPreprocessorMacros'
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      |                  ^~~~~~~~~~~~~~~~~~~~~~
src/idlib/Parser.cpp:704:70: error: expected ';' after top level declarator
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      |                                                                      ^
      |                                                                      ;
3 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Parser.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-debug

status: failure

errors: 12
warnings: 0 in 0 kinds

### errors

src/idlib/Parser.cpp:704:1: error: a type specifier is required for all declarations
src/idlib/Parser.cpp:704:18: error: use of undeclared identifier 'TestPreprocessorMacros'
src/idlib/Lexer.cpp:1716:21: error: use of undeclared identifier 'pathname'; did you mean 'ptsname'?
src/idlib/Parser.cpp:704:70: error: expected ';' after top level declarator
src/idlib/Lexer.cpp:1716:14: error: no matching function for call to 'fopen'
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Parser.cpp.o] Error 1
src/idlib/Lexer.cpp:1723:2: error: use of undeclared identifier 'buf'
src/idlib/Lexer.cpp:1724:2: error: use of undeclared identifier 'buf'
src/idlib/Lexer.cpp:1725:14: error: use of undeclared identifier 'buf'
src/idlib/Lexer.cpp:1726:13: error: use of undeclared identifier 'buf'
src/idlib/Lexer.cpp:1732:20: error: use of undeclared identifier 'buf'
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Lexer.cpp.o] Error 1

### failure context

- build/linux-x86-debug/idlib/obj/idlib/Parser.cpp.o

```
clang++ -o build/linux-x86-debug/idlib/obj/idlib/Lexer.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-co
clang++ -o build/linux-x86-debug/idlib/obj/idlib/Parser.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-c
clang++ -o build/linux-x86-debug/idlib/obj/idlib/sys/sys_assert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depr
clang++ -o build/linux-x86-debug/idlib/obj/idlib/containers/HashIndex.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wn
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Math.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
src/idlib/Parser.cpp:704:1: error: a type specifier is required for all declarations
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      | ^
src/idlib/Parser.cpp:704:18: error: use of undeclared identifier 'TestPreprocessorMacros'
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      |                  ^~~~~~~~~~~~~~~~~~~~~~
src/idlib/Lexer.cpp:1716:21: error: use of undeclared identifier 'pathname'; did you mean 'ptsname'?
 1716 |         FILE * fp = fopen( pathname, "rb" );
      |                            ^~~~~~~~
      |                            ptsname
src/idlib/Parser.cpp:704:70: error: expected ';' after top level declarator
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      |                                                                      ^
      |                                                                      ;
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Vector.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
/usr/include/stdlib.h:1161:14: note: 'ptsname' declared here
 1161 | extern char *ptsname (int __fd) __THROW __wur;
      |              ^
src/idlib/Lexer.cpp:1716:14: error: no matching function for call to 'fopen'
 1716 |         FILE * fp = fopen( pathname, "rb" );
      |                     ^~~~~
3 errors generated.
/usr/include/stdio.h:271:14: note: candidate function not viable: no known conversion from 'char *(int) noexcept(true)' to 'const char *__restrict' for 1st argument
  271 | extern FILE *fopen (const char *__restrict __filename,
      |              ^      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Parser.cpp.o] Error 1
```

- build/linux-x86-debug/idlib/obj/idlib/Lexer.cpp.o

```
      |                                                                      ;
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Vector.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
/usr/include/stdlib.h:1161:14: note: 'ptsname' declared here
 1161 | extern char *ptsname (int __fd) __THROW __wur;
      |              ^
src/idlib/Lexer.cpp:1716:14: error: no matching function for call to 'fopen'
 1716 |         FILE * fp = fopen( pathname, "rb" );
      |                     ^~~~~
3 errors generated.
/usr/include/stdio.h:271:14: note: candidate function not viable: no known conversion from 'char *(int) noexcept(true)' to 'const char *__restrict' for 1st argument
  271 | extern FILE *fopen (const char *__restrict __filename,
      |              ^      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Parser.cpp.o] Error 1
src/idlib/Lexer.cpp:1723:2: error: use of undeclared identifier 'buf'
 1723 |         buf = (char *) Mem_Alloc( length + 1, TAG_IDLIB_LEXER );
      |         ^~~
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Matrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
src/idlib/Lexer.cpp:1724:2: error: use of undeclared identifier 'buf'
 1724 |         buf[length] = '\0';
      |         ^~~
src/idlib/Lexer.cpp:1725:14: error: use of undeclared identifier 'buf'
 1725 |         if ( fread( buf, 1, length, fp ) != (size_t) length ) {
      |                     ^~~
src/idlib/Lexer.cpp:1726:13: error: use of undeclared identifier 'buf'
 1726 |                 Mem_Free( buf );
      |                           ^~~
src/idlib/Lexer.cpp:1732:20: error: use of undeclared identifier 'buf'
 1732 |         idLexer::buffer = buf;
      |                           ^~~
7 errors generated.
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Lexer.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-release

status: failure

errors: 12
warnings: 0 in 0 kinds

### errors

src/idlib/Lexer.cpp:1716:21: error: use of undeclared identifier 'pathname'; did you mean 'ptsname'?
src/idlib/Lexer.cpp:1716:14: error: no matching function for call to 'fopen'
src/idlib/Lexer.cpp:1723:2: error: use of undeclared identifier 'buf'
src/idlib/Lexer.cpp:1724:2: error: use of undeclared identifier 'buf'
src/idlib/Lexer.cpp:1725:14: error: use of undeclared identifier 'buf'
src/idlib/Lexer.cpp:1726:13: error: use of undeclared identifier 'buf'
src/idlib/Lexer.cpp:1732:20: error: use of undeclared identifier 'buf'
scons: *** [build/linux-x86-release/idlib/obj/idlib/Lexer.cpp.o] Error 1
src/idlib/Parser.cpp:704:1: error: a type specifier is required for all declarations
src/idlib/Parser.cpp:704:18: error: use of undeclared identifier 'TestPreprocessorMacros'
src/idlib/Parser.cpp:704:70: error: expected ';' after top level declarator
scons: *** [build/linux-x86-release/idlib/obj/idlib/Parser.cpp.o] Error 1

### failure context

- build/linux-x86-release/idlib/obj/idlib/Lexer.cpp.o

```
clang++ -o build/linux-x86-release/idlib/obj/idlib/sys/sys_assert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-depre
src/idlib/Lexer.cpp:1716:21: error: use of undeclared identifier 'pathname'; did you mean 'ptsname'?
 1716 |         FILE * fp = fopen( pathname, "rb" );
      |                            ^~~~~~~~
      |                            ptsname
/usr/include/stdlib.h:1161:14: note: 'ptsname' declared here
 1161 | extern char *ptsname (int __fd) __THROW __wur;
      |              ^
src/idlib/Lexer.cpp:1716:14: error: no matching function for call to 'fopen'
 1716 |         FILE * fp = fopen( pathname, "rb" );
      |                     ^~~~~
/usr/include/stdio.h:271:14: note: candidate function not viable: no known conversion from 'char *(int) noexcept(true)' to 'const char *__restrict' for 1st argument
  271 | extern FILE *fopen (const char *__restrict __filename,
      |              ^      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/idlib/Lexer.cpp:1723:2: error: use of undeclared identifier 'buf'
 1723 |         buf = (char *) Mem_Alloc( length + 1, TAG_IDLIB_LEXER );
      |         ^~~
src/idlib/Lexer.cpp:1724:2: error: use of undeclared identifier 'buf'
 1724 |         buf[length] = '\0';
      |         ^~~
src/idlib/Lexer.cpp:1725:14: error: use of undeclared identifier 'buf'
 1725 |         if ( fread( buf, 1, length, fp ) != (size_t) length ) {
      |                     ^~~
src/idlib/Lexer.cpp:1726:13: error: use of undeclared identifier 'buf'
 1726 |                 Mem_Free( buf );
      |                           ^~~
src/idlib/Lexer.cpp:1732:20: error: use of undeclared identifier 'buf'
 1732 |         idLexer::buffer = buf;
      |                           ^~~
7 errors generated.
scons: *** [build/linux-x86-release/idlib/obj/idlib/Lexer.cpp.o] Error 1
```

- build/linux-x86-release/idlib/obj/idlib/Parser.cpp.o

```
      |              ^      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/idlib/Lexer.cpp:1723:2: error: use of undeclared identifier 'buf'
 1723 |         buf = (char *) Mem_Alloc( length + 1, TAG_IDLIB_LEXER );
      |         ^~~
src/idlib/Lexer.cpp:1724:2: error: use of undeclared identifier 'buf'
 1724 |         buf[length] = '\0';
      |         ^~~
src/idlib/Lexer.cpp:1725:14: error: use of undeclared identifier 'buf'
 1725 |         if ( fread( buf, 1, length, fp ) != (size_t) length ) {
      |                     ^~~
src/idlib/Lexer.cpp:1726:13: error: use of undeclared identifier 'buf'
 1726 |                 Mem_Free( buf );
      |                           ^~~
src/idlib/Lexer.cpp:1732:20: error: use of undeclared identifier 'buf'
 1732 |         idLexer::buffer = buf;
      |                           ^~~
7 errors generated.
scons: *** [build/linux-x86-release/idlib/obj/idlib/Lexer.cpp.o] Error 1
clang++ -o build/linux-x86-release/idlib/obj/idlib/containers/HashIndex.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno
src/idlib/Parser.cpp:704:1: error: a type specifier is required for all declarations
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      | ^
src/idlib/Parser.cpp:704:18: error: use of undeclared identifier 'TestPreprocessorMacros'
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      |                  ^~~~~~~~~~~~~~~~~~~~~~
src/idlib/Parser.cpp:704:70: error: expected ';' after top level declarator
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      |                                                                      ^
      |                                                                      ;
3 errors generated.
scons: *** [build/linux-x86-release/idlib/obj/idlib/Parser.cpp.o] Error 1
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

errors: 14
warnings: 0 in 0 kinds

### errors

src\idlib\Lexer.cpp(1716,21): error: use of undeclared identifier 'pathname'
src\idlib\Lexer.cpp(1723,2): error: use of undeclared identifier 'buf'
src\idlib\Lexer.cpp(1724,2): error: use of undeclared identifier 'buf'
src\idlib\Lexer.cpp(1725,14): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
src\idlib\Lexer.cpp(1725,14): error: invalid use of non-static data member 'buf'
src\idlib\Lexer.cpp(1726,13): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
src\idlib\Lexer.cpp(1726,13): error: invalid use of non-static data member 'buf'
src\idlib\Lexer.cpp(1732,20): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
src\idlib\Lexer.cpp(1732,20): error: invalid use of non-static data member 'buf'
src\idlib\Parser.cpp(704,1): error: a type specifier is required for all declarations
src\idlib\Parser.cpp(704,18): error: use of undeclared identifier 'TestPreprocessorMacros'
src\idlib\Parser.cpp(704,70): error: expected ';' after top level declarator
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Lexer.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Parser.cpp.obj] Error 1

### failure context

- build\windows-x64-debug\idlib\obj\idlib\Lexer.cpp.obj

```
      |                           ^~~
      |                           _WSABUF::buf
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\ws2def.h(697,39): note: '_WSABUF::buf' declared here
  697 |     _Field_size_bytes_(len) CHAR FAR *buf; /* the pointer to the buffer */
      |                                       ^
src\idlib\Lexer.cpp(1726,13): error: invalid use of non-static data member 'buf'
 1726 |                 Mem_Free( buf );
      |                           ^~~
src\idlib\Lexer.cpp(1732,20): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
 1732 |         idLexer::buffer = buf;
      |                           ^~~
      |                           _WSABUF::buf
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\ws2def.h(697,39): note: '_WSABUF::buf' declared here
  697 |     _Field_size_bytes_(len) CHAR FAR *buf; /* the pointer to the buffer */
      |                                       ^
src\idlib\Lexer.cpp(1732,20): error: invalid use of non-static data member 'buf'
 1732 |         idLexer::buffer = buf;
      |                           ^~~
9 errors generated.
src\idlib\Parser.cpp(704,1): error: a type specifier is required for all declarations
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      | ^
src\idlib\Parser.cpp(704,18): error: use of undeclared identifier 'TestPreprocessorMacros'
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      |                  ^~~~~~~~~~~~~~~~~~~~~~
src\idlib\Parser.cpp(704,70): error: expected ';' after top level declarator
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      |                                                                      ^
      |                                                                      ;
3 errors generated.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Lexer.cpp.obj] Error 1
```

- build\windows-x64-debug\idlib\obj\idlib\Parser.cpp.obj

```
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\ws2def.h(697,39): note: '_WSABUF::buf' declared here
  697 |     _Field_size_bytes_(len) CHAR FAR *buf; /* the pointer to the buffer */
      |                                       ^
src\idlib\Lexer.cpp(1726,13): error: invalid use of non-static data member 'buf'
 1726 |                 Mem_Free( buf );
      |                           ^~~
src\idlib\Lexer.cpp(1732,20): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
 1732 |         idLexer::buffer = buf;
      |                           ^~~
      |                           _WSABUF::buf
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\ws2def.h(697,39): note: '_WSABUF::buf' declared here
  697 |     _Field_size_bytes_(len) CHAR FAR *buf; /* the pointer to the buffer */
      |                                       ^
src\idlib\Lexer.cpp(1732,20): error: invalid use of non-static data member 'buf'
 1732 |         idLexer::buffer = buf;
      |                           ^~~
9 errors generated.
src\idlib\Parser.cpp(704,1): error: a type specifier is required for all declarations
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      | ^
src\idlib\Parser.cpp(704,18): error: use of undeclared identifier 'TestPreprocessorMacros'
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      |                  ^~~~~~~~~~~~~~~~~~~~~~
src\idlib\Parser.cpp(704,70): error: expected ';' after top level declarator
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      |                                                                      ^
      |                                                                      ;
3 errors generated.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Lexer.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\Math.cpp.obj /c src\idlib\math\Math.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Parser.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x64-release

status: failure

errors: 14
warnings: 0 in 0 kinds

### errors

src\idlib\Lexer.cpp(1716,21): error: use of undeclared identifier 'pathname'
src\idlib\Lexer.cpp(1723,2): error: use of undeclared identifier 'buf'
src\idlib\Lexer.cpp(1724,2): error: use of undeclared identifier 'buf'
src\idlib\Lexer.cpp(1725,14): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
src\idlib\Lexer.cpp(1725,14): error: invalid use of non-static data member 'buf'
src\idlib\Lexer.cpp(1726,13): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
src\idlib\Lexer.cpp(1726,13): error: invalid use of non-static data member 'buf'
src\idlib\Lexer.cpp(1732,20): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
src\idlib\Lexer.cpp(1732,20): error: invalid use of non-static data member 'buf'
scons: *** [build\windows-x64-release\idlib\obj\idlib\Lexer.cpp.obj] Error 1
src\idlib\Parser.cpp(704,1): error: a type specifier is required for all declarations
src\idlib\Parser.cpp(704,18): error: use of undeclared identifier 'TestPreprocessorMacros'
src\idlib\Parser.cpp(704,70): error: expected ';' after top level declarator
scons: *** [build\windows-x64-release\idlib\obj\idlib\Parser.cpp.obj] Error 1

### failure context

- build\windows-x64-release\idlib\obj\idlib\Lexer.cpp.obj

```
 1725 |         if ( fread( buf, 1, length, fp ) != (size_t) length ) {
      |                     ^~~
      |                     _WSABUF::buf
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\ws2def.h(697,39): note: '_WSABUF::buf' declared here
  697 |     _Field_size_bytes_(len) CHAR FAR *buf; /* the pointer to the buffer */
      |                                       ^
src\idlib\Lexer.cpp(1725,14): error: invalid use of non-static data member 'buf'
 1725 |         if ( fread( buf, 1, length, fp ) != (size_t) length ) {
      |                     ^~~
src\idlib\Lexer.cpp(1726,13): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
 1726 |                 Mem_Free( buf );
      |                           ^~~
      |                           _WSABUF::buf
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\ws2def.h(697,39): note: '_WSABUF::buf' declared here
  697 |     _Field_size_bytes_(len) CHAR FAR *buf; /* the pointer to the buffer */
      |                                       ^
src\idlib\Lexer.cpp(1726,13): error: invalid use of non-static data member 'buf'
 1726 |                 Mem_Free( buf );
      |                           ^~~
src\idlib\Lexer.cpp(1732,20): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
 1732 |         idLexer::buffer = buf;
      |                           ^~~
      |                           _WSABUF::buf
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\ws2def.h(697,39): note: '_WSABUF::buf' declared here
  697 |     _Field_size_bytes_(len) CHAR FAR *buf; /* the pointer to the buffer */
      |                                       ^
src\idlib\Lexer.cpp(1732,20): error: invalid use of non-static data member 'buf'
 1732 |         idLexer::buffer = buf;
      |                           ^~~
9 errors generated.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Lexer.cpp.obj] Error 1
```

- build\windows-x64-release\idlib\obj\idlib\Parser.cpp.obj

```
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\ws2def.h(697,39): note: '_WSABUF::buf' declared here
  697 |     _Field_size_bytes_(len) CHAR FAR *buf; /* the pointer to the buffer */
      |                                       ^
src\idlib\Lexer.cpp(1726,13): error: invalid use of non-static data member 'buf'
 1726 |                 Mem_Free( buf );
      |                           ^~~
src\idlib\Lexer.cpp(1732,20): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
 1732 |         idLexer::buffer = buf;
      |                           ^~~
      |                           _WSABUF::buf
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\ws2def.h(697,39): note: '_WSABUF::buf' declared here
  697 |     _Field_size_bytes_(len) CHAR FAR *buf; /* the pointer to the buffer */
      |                                       ^
src\idlib\Lexer.cpp(1732,20): error: invalid use of non-static data member 'buf'
 1732 |         idLexer::buffer = buf;
      |                           ^~~
9 errors generated.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Lexer.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-release\idlib\obj\idlib\containers\HashIndex.cpp.obj /c src\idlib\containers\HashIndex.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wr
src\idlib\Parser.cpp(704,1): error: a type specifier is required for all declarations
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      | ^
src\idlib\Parser.cpp(704,18): error: use of undeclared identifier 'TestPreprocessorMacros'
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      |                  ^~~~~~~~~~~~~~~~~~~~~~
src\idlib\Parser.cpp(704,70): error: expected ';' after top level declarator
  704 | CONSOLE_COMMAND( TestPreprocessorMacros, "check analyze warning", 0 ) {
      |                                                                      ^
      |                                                                      ;
3 errors generated.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Parser.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x86-debug

status: cancelled

errors: 14
warnings: 0 in 0 kinds

### errors

src\idlib\Lexer.cpp(1716,21): error: use of undeclared identifier 'pathname'
src\idlib\Parser.cpp(704,1): error: a type specifier is required for all declarations
src\idlib\Parser.cpp(704,18): error: use of undeclared identifier 'TestPreprocessorMacros'
src\idlib\Parser.cpp(704,70): error: expected ';' after top level declarator
src\idlib\Lexer.cpp(1723,2): error: use of undeclared identifier 'buf'
src\idlib\Lexer.cpp(1724,2): error: use of undeclared identifier 'buf'
src\idlib\Lexer.cpp(1725,14): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
src\idlib\Lexer.cpp(1725,14): error: invalid use of non-static data member 'buf'
src\idlib\Lexer.cpp(1726,13): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
src\idlib\Lexer.cpp(1726,13): error: invalid use of non-static data member 'buf'
src\idlib\Lexer.cpp(1732,20): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
src\idlib\Lexer.cpp(1732,20): error: invalid use of non-static data member 'buf'
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Parser.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Lexer.cpp.obj] Error 1

### failure context

- build\windows-x86-debug\idlib\obj\idlib\Parser.cpp.obj

```
 1725 |         if ( fread( buf, 1, length, fp ) != (size_t) length ) {
      |                     ^~~
      |                     _WSABUF::buf
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\ws2def.h(697,39): note: '_WSABUF::buf' declared here
  697 |     _Field_size_bytes_(len) CHAR FAR *buf; /* the pointer to the buffer */
      |                                       ^
src\idlib\Lexer.cpp(1725,14): error: invalid use of non-static data member 'buf'
 1725 |         if ( fread( buf, 1, length, fp ) != (size_t) length ) {
      |                     ^~~
3 errors generated.
src\idlib\Lexer.cpp(1726,13): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
 1726 |                 Mem_Free( buf );
      |                           ^~~
      |                           _WSABUF::buf
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\ws2def.h(697,39): note: '_WSABUF::buf' declared here
  697 |     _Field_size_bytes_(len) CHAR FAR *buf; /* the pointer to the buffer */
      |                                       ^
src\idlib\Lexer.cpp(1726,13): error: invalid use of non-static data member 'buf'
 1726 |                 Mem_Free( buf );
      |                           ^~~
src\idlib\Lexer.cpp(1732,20): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
 1732 |         idLexer::buffer = buf;
      |                           ^~~
      |                           _WSABUF::buf
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\ws2def.h(697,39): note: '_WSABUF::buf' declared here
  697 |     _Field_size_bytes_(len) CHAR FAR *buf; /* the pointer to the buffer */
      |                                       ^
src\idlib\Lexer.cpp(1732,20): error: invalid use of non-static data member 'buf'
 1732 |         idLexer::buffer = buf;
      |                           ^~~
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Parser.cpp.obj] Error 1
```

- build\windows-x86-debug\idlib\obj\idlib\Lexer.cpp.obj

```
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\ws2def.h(697,39): note: '_WSABUF::buf' declared here
  697 |     _Field_size_bytes_(len) CHAR FAR *buf; /* the pointer to the buffer */
      |                                       ^
src\idlib\Lexer.cpp(1725,14): error: invalid use of non-static data member 'buf'
 1725 |         if ( fread( buf, 1, length, fp ) != (size_t) length ) {
      |                     ^~~
3 errors generated.
src\idlib\Lexer.cpp(1726,13): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
 1726 |                 Mem_Free( buf );
      |                           ^~~
      |                           _WSABUF::buf
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\ws2def.h(697,39): note: '_WSABUF::buf' declared here
  697 |     _Field_size_bytes_(len) CHAR FAR *buf; /* the pointer to the buffer */
      |                                       ^
src\idlib\Lexer.cpp(1726,13): error: invalid use of non-static data member 'buf'
 1726 |                 Mem_Free( buf );
      |                           ^~~
src\idlib\Lexer.cpp(1732,20): error: use of undeclared identifier 'buf'; did you mean '_WSABUF::buf'?
 1732 |         idLexer::buffer = buf;
      |                           ^~~
      |                           _WSABUF::buf
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\ws2def.h(697,39): note: '_WSABUF::buf' declared here
  697 |     _Field_size_bytes_(len) CHAR FAR *buf; /* the pointer to the buffer */
      |                                       ^
src\idlib\Lexer.cpp(1732,20): error: invalid use of non-static data member 'buf'
 1732 |         idLexer::buffer = buf;
      |                           ^~~
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Parser.cpp.obj] Error 1
9 errors generated.
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\math\Math.cpp.obj /c src\idlib\math\Math.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Lexer.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x86-release

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds


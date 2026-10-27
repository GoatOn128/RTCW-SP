# Copilot instructions - RTCW-SP engine modernization

Rules for GitHub Copilot when working in this repository.

## What this repository is

Return to Castle Wolfenstein single-player engine (id Tech 3 era, GPL). It is being modernized on several axes at once: a SCons/LLVM build, a SDL3 platform layer, a C++ port to idlib, a new native module system, and a glad-based renderer DLL.

## Repository layout

- `src/` - engine code: `client`, `server`, `qcommon`, `renderer`, `splines`, `sys`, `games/` (botai, botlib, cgame, game, ui), `tools`, `third-party`.
- `src/third-party/` - vendored third-party code (currently ft2, jpeg-6). All NEW third-party code goes here and only here.
- `src/sys/` - platform layer. Cross-platform ported code lives directly in `src/sys/` with the `sys_` name prefix. Platform-specific code that cannot be expressed through SDL3 goes in `src/sys/win32/`, `src/sys/unix/`, `src/sys/macosx/`.
- `references/doom3gpl/` - Doom 3 (2004) GPL source. Reference for the game.dll module loading system. Read-only.
- `references/doom3bfg/` - Doom 3 BFG edition source. Reference for idlib. Read-only.
- `uncrustify.cfg` - authoritative code style, enforced by CI.

## Hard rules

1. Never modify or build anything under `references/`. It is reference material only.
2. New third-party code goes to `src/third-party/` only.
3. Ported platform code goes to `src/sys/` with the `sys_` prefix; anything not expressible through SDL3 goes to `src/sys/<platform>/` (win32, unix, macosx).
4. Every commit must pass uncrustify. Run `uncrustify -c uncrustify.cfg` on changed files before committing.
5. Commit messages: plain-English bullet lists, one logical change per commit, explaining what and why.
6. Prefer surgical, behavior-preserving edits. No gratuitous rewrites.

## Build system

- Replace cons (`src/sys/unix`), `src/Makefile` and the VS2008 solution with a complete SCons build. A root `SConstruct` drives everything.
- Toolchain: LLVM/Clang on both platforms - clang-cl on Windows, clang on Linux (and macOS once ported). Do not use MSVC- or GCC-only language extensions.
- Build outputs: the main binary (WolfSP), the renderer DLL, the game modules (game, cgame, ui), botlib, and tools.
- Configurations: debug and release, x86 and x64, for every platform in the matrix.
- Full Visual Studio integration: SCons must generate a `wolf.sln` + `.vcxproj` set using the LLVM clang-cl toolset, so developers get the VS debugger, compiler settings and IntelliSense. Debugger launch settings (working directory, command arguments, environment, PDB paths) must be generated and kept working.

## Platform layer (SDL3)

- Port everything in `src/sys` to SDL3. Ported cross-platform code lives in `src/sys/` with the `sys_` prefix.
- What cannot be done through SDL3 is implemented per platform under `src/sys/win32/`, `src/sys/unix/`, `src/sys/macosx/`.
- Delete old backend files once their functionality is fully replaced.

## Renderer

- The renderer builds as a DLL. The engine already contains an unused code path for loading the renderer as a DLL and `src/renderer/ref_trin.def` exists - wire this path up and make it the default.
- Delete `qgl.h`, `qgl_linked.h` and all qgl code. Replace with glad.
- Remove dead OpenGL extension paths; keep only the core profile and the extensions the renderer actually uses.

## Module system

- Remove the Quake 3 VM system entirely: `src/qcommon/vm.c`, `vm_interpreted.c`, `vm_x86.c`, `vm_local.h` and every VM_* call site.
- Replace it with the Doom 3 (2004) game.dll model from `references/doom3gpl`: the engine exposes a syscall/import table, each game module exports a single GetGameAPI-style entry point, and the engine loads game/cgame/ui as native DLLs at runtime.
- game, cgame and ui are native code modules. No qvm bytecode, no VM interpreter, no JIT.

## Engine port to C++ and idlib

- Port the engine from C to C++ incrementally, module by module. The build must stay green after each step.
- Port idlib from `references/doom3bfg` into `src/idlib` (copy only what is needed: idStr, idList, idDict, idMath and vector math, heap, parsing, etc.) and adopt it progressively in the engine.
- Keep original copyright and license headers when copying reference code. Doom 3 / BFG is GPLv3 while RTCW is GPLv2: for large verbatim copies, note the license implications in the commit message; prefer reimplementation when in doubt.

## CI

`.github/workflows/` must provide:

1. A formatting job that runs uncrustify with `uncrustify.cfg` over the whole tree, before any compile job. If files are unformatted, the job formats them, commits the formatted files back to the branch with `[skip ci]` in the message, and fails the run so the change is visible.
2. A build matrix that compiles the project fully for every platform: windows-latest (x86 + x64, clang-cl), ubuntu-latest (x86 + x64, clang), and macOS as the port lands.
3. Caching everywhere it saves time: actions/cache for SCons build directories, pip (scons), and ccache/sccache for clang. Cache keys hash the SConstruct files plus platform and compiler version.
4. Concurrency with cancel-in-progress so a new commit cancels superseded in-progress runs.
5. Build log publication: every run, success or failure, commits to the repo root a full `build.log` and a `build-digest.md` - a machine-digestible summary: overall status, failing step, per-platform status, and every error and warning with file:line. Read the digest first, the full log as fallback. The publishing commit carries `[skip ci]` to avoid loops.

## CI iteration loop (mandatory after every push)

1. Commit the change.
2. Wait for the CI run to finish. Never assume success.
3. Read `build-digest.md` first, then `build.log`, and check errors AND warnings, not just pass/fail.
4. Fix everything found, surgically.
5. Commit the fix and repeat until fully green.

## Roadmap order

1. SCons + clang build, uncrustify CI job, build.log/digest publication. Do this first: every later phase depends on CI feedback.
2. Renderer DLL + glad, removal of qgl and dead OpenGL extensions.
3. SDL3 port of src/sys.
4. VM removal + Doom 3 game.dll module system.
5. C++ port and idlib adoption.

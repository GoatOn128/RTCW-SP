# CI fix working notes

Working notes for the build/CI cleanup so any session can resume without
re-downloading the full build digest. CI publishes build-digest.md (very
large) and build-digest-compact.md to the repo root on each build; read
the compact one.

## Build and CI facts

- SCons build. Outputs: bin/WolfSP_<arch>(.exe) and bin/main/qagame_<arch>,
  cgame_<arch>, ui_<arch> (.so on Linux, .dll on Windows).
- ARCH_STRING ("x86" / "x64") comes from the generated q_buildconfig.h,
  which is force-included into every translation unit (-include / /FI),
  so ARCH_STRING is usable in any source file.
- CI publishes build logs and the digest on a "[skip ci]" commit. The
  uncrustify bot also auto-commits "format tree [skip ci]" after pushes,
  so re-fetch files before editing instead of trusting cached copies.
- Iteration loop: push a fix commit, wait for the digest commit, fetch
  build-digest-compact.md at the new head, fix errors and warnings,
  repeat until the build is green with zero warnings.

## Fixes already applied (2026-10-28 series)

- cg_ents.cpp and linux_glimp.cpp began with a stray
  "successfully downloaded text file( SHA:... )" line from a bad push;
  removed. linux_glimp.cpp also switched to the current
  X11/extensions/Xxf86dga.h and Xxf86vmode.h headers (the old ones emit
  #warning obsolete header).
- SConstruct: removed the md5_env block that still compiled the deleted
  src/renderer/tr_md5.cpp. Nothing else references MD5 in the renderer
  (checked tr_local.h and tr_model.cpp). Added the common_nowarn flag
  list for transitional C-to-C++ warning classes.
- q_shared.h: added #include <stdint.h> (intptr_t/uintptr_t for cl_cin,
  common, msg, be_ai_goal, be_ai_weap, cg_event); va() format parameter
  is now const char* in both q_shared.h and q_shared.cpp.
- msg.cpp: reworded a "// warning:" comment the digest counted as a
  warning.
- unix_main.cpp: replaced the VM-era Sys_LoadDll_Wrapped/Sys_LoadDll
  (dllEntry/vmMain protocol, #error Unknown arch) with the new-style
  loader declared in qcommon.h (same one win_main.cpp implements):
  Sys_LoadDll(name, entryPointName, entryPoint). Keeps the dlopen search
  chain pwd/home/base x fs_game/BASEGAME. Module file name is
  "%s_" ARCH_STRING ".so". Also added explicit casts for Z_Malloc and
  malloc results.
- linux_qgl.cpp: qglX* assignments now use *(void **)&fp = GPA(...)
  (POSIX dlsym idiom) to avoid ISO C++ function-pointer conversion
  errors.
- win_main.cpp: Sys_LoadDll now loads "%s_" ARCH_STRING ".dll"
  (qagame_x64.dll) instead of "%sx86.dll", matching SCons output names.
- g_weapon.cpp: grenade upangle clamp uses 50.0f / -50.0f so the
  min/max templates in q_shared.h deduce float.

## Remaining warning kinds to fix in code

Line numbers refer to the tree before the uncrustify format run; match
on content, not line numbers.

- sizeof-pointer-memaccess: cvar.cpp, bg_animation.cpp (two sites),
  ai_system.cpp
- strncat-size: cl_main.cpp
- array-bounds: tr_image.cpp, tr_shade_calc.cpp
- self-assign: cg_view.cpp (two sites)
- logical-not-parentheses: g_client.cpp (two sites)
- format string issues: l_precomp.cpp (two sites)
- null-dereference (intentional *(int*)0 trap): common.cpp - use a
  volatile pointer
- char-subscripts: cg_newDraw.cpp
- pointer-to-bool-conversion: about a dozen sites
- nontrivial-memcall: FxScheduler.cpp
- enum-compare / tautological-compare / parentheses-equality: scattered
- unused-function: win_shared.cpp IsPentium/Is3DNOW/IsKNI/IsMMX

## Agent tooling notes

- Fetch repo files with get_file_contents (returns resource.text;
  refuses files over 1MB). push_files needs the FULL file content.
- Never read or write repo files through raw.githubusercontent.com
  proxies: they truncate around 32KB, and a bad proxied read is how
  cg_ents.cpp and linux_glimp.cpp got their stray first line.

## 2026-10-28 session 2 commits

- cf545e3 "Fix the remaining cross-platform build errors":
  - g_func_decs.h: the va() forward declaration now matches the
    const char* definition.
  - splines/q_shared.cpp: Com_Allocate/Com_Dealloc are now defined
    here (malloc/free); they were only declared extern "C" before,
    which left undefined symbols at link time.
  - be_ai_weap.cpp: PROJECTILE_OFS cast goes through
    (int)(intptr_t).
  - ci-format.yml: uncrustify excludes bg_pmove.cpp as well as
    bg_pmove.c (the file was renamed in the C++ port).
- e560ddc "Fix real-bug warnings flagged by the compilers":
  sizeof-pointer-memaccess, strncat-size, array-bounds,
  self-assign, logical-not-parentheses, format-string, the
  volatile null-dereference trap, char-subscripts,
  nontrivial-memcall and the tr_shader color-gen mixups across 14
  files. Two of these edits wrote literal "$1"/"$2" replacement
  tokens into the tree (q_splineshared.h va declaration, cg_view.cpp
  zoom-out comments) and broke the next build; repaired in the
  follow-up commit below. Lesson: "$1" is literal text in a
  split/join replacement; only String.replace understands
  replacement tokens.
- 88de932 "Fix the always-true array checks and enum compares":
  all -Wpointer-bool-conversion sites (snd_dma.cpp ss->loop x3,
  ai_script_actions_combat.cpp ps.weapons, cg_drawtools.cpp and
  ui_main.cpp backgroundcolor, cg_servercmds.cpp text x3,
  cg_weapons.cpp comppath, ui_main.cpp levelname, cg_ents.cpp
  dl_stylestring) and the ui_players.cpp weapon_t vs -1 compares
  (cast to int). MAX_WEAPONS is 64, so ps.weapons is int[2] and
  both elements are checked. comppath in cg_weapons.cpp is also
  zero-initialized now; it was read uninitialized when an item had
  no world models.
- Follow-up commit (this one):
  - q_splineshared.h: va declaration restored to
    "char *QDECL va( const char *format, ... );".
  - cg_view.cpp: removed the leftover "$ 1" prefix from the two
    "fully zoomed out" comments (hard compile error).
  - linux_glimp.cpp: back to Xxf86dga.h / Xxf86vmode.h from
    libxxf86dga-dev / libxxf86vm-dev, which ci-ubuntu.yml installs.
    The lowercase xf86dga.h / xf86vmode.h are obsolete stubs from
    libxext-dev that emit #warning.

## Remaining status after these commits

- The last digest (build of e560ddc) showed 17 warnings in the
  ubuntu debug job: 12 pointer-bool, 3 tautological compare, and 2
  X11 obsolete-header #warnings. 88de932 fixed the first two kinds;
  the header switch removes the last two.
- Release jobs appear to fail on warnings that debug jobs merely
  print (release-game failed on the ai weapons check,
  release-ui on the ui_main checks), so they should clear with the
  same fixes.
- Release x86 jobs show "cancelled" (fail-fast), not real failures.
- Next: fetch the new digest and verify zero errors and zero
  warnings everywhere.

## Session 3, iteration 1 (build of 9cf6a35, digest 7caf9c3)
- windows x64 debug + release-game: SUCCESS, 0 warnings; all earlier warning kinds gone
- all ubuntu legs failed on missing X11/extensions/Xxf86vmode.h. Lesson: libxxf86dga-dev ships the capital Xxf86dga.h, but libxxf86vm-dev ships the LOWERCASE xf86vmode.h (real header, no obsolete #warning). Correct mix: capital dga header, lowercase vmode header
- windows x86 failed in clang-cl on: ds: segment overrides in snd_mix.cpp inline asm (6 sites, MSVC-only syntax), static declarations inside the naked BoxOnPlaneSide (q_math.cpp, 4 TUs), plus win_glimp.cpp cdecl->stdcall cast warning
- splines.cpp:580 -Wunused-value only in release legs: NDEBUG branch defined CHECK_NAN_VEC as object-like macro so CHECK_NAN_VEC(origin) expanded to (origin)
- fixes pushed: linux_glimp.cpp vmode include lowercased; snd_mix.cpp ds: dropped (6x); q_math.cpp statics moved to file scope; win_glimp.cpp static DWORD WINAPI GLimp_RenderThreadStart(LPVOID) trampoline passed to CreateThread; q_splineshared.h release CHECK_NAN/CHECK_NAN_VEC made function-like empty macros
- awaiting next digest

## Iteration - 2026-10-28 (fixes for digest 7609bcd, build of 33e0568)
HEAD before push: 7609bcd | CI: publish build logs and digest [skip ci]
- windows x86 link failure (__MSASMLABEL_ undefined): clang-cl cannot resolve MSVC asm-block label addresses taken with offset in q_math.cpp BoxOnPlaneSide. The C version now compiles for __clang__ and non-MSVC; real MSVC x86 keeps the asm.
- linux x86 missing symbols: removed the dead snd_mixa.s/math.s prototype branches. C fallbacks of S_WriteLinearBlastStereo16 (snd_mix.cpp) and BoxOnPlaneSide (q_math.cpp) now apply on linux-i386 and all non-MSVC builds. clang-cl x86 keeps the working snd_mix asm.
- linux all legs: unix_main.cpp had its own refexport_t re definition; C tentative definitions do not merge in C++, so it is extern now (cl_main.cpp owns it). Same reason the original C build linked.
- linux all legs: the five extension qgl pointers (LockArraysEXT, UnlockArraysEXT, ActiveTextureARB, ClientActiveTextureARB, MultiTexCoord2fARB) were defined in both linux_qgl.cpp and tr_init.cpp; linux_qgl.cpp declares them extern now.
- linux all legs: added portable Sys_SnapVector to unix_main.cpp (declared in qcommon.h, win32 x87 version lives in win_shared.cpp; round half away from zero per component).
- linux release-game hardlink leg: botlib be_ai_goal.cpp defined int g_gametype / int g_gameskill which collided with the game module's vmCvar_t in g_main.cpp when both are linked into one exe. g_gametype is static now, the unused g_gameskill copy is removed (no botlib header externs them).
Files pushed: src/qcommon/q_math.cpp, src/client/snd_mix.cpp, src/sys/unix/unix_main.cpp, src/sys/unix/linux_qgl.cpp, src/games/botlib/be_ai_goal.cpp, tools/ci-session-notes.md

## RESULT: CI fully green (digest 1ff8d2d, build of 89ac614)
All 13 jobs success with 0 errors and 0 warnings:
ubuntu x64 debug/release/release-game, ubuntu x86 debug/release,
windows x64 debug/release/release-cgame/release-game/release-ui,
windows x86 debug/release, uncrustify.
The g_gametype/g_gameskill, re, qgl* extern, Sys_SnapVector and
portable BoxOnPlaneSide/S_WriteLinearBlastStereo16 fixes from the
previous entry all linked cleanly. Task complete.

## 2026-10-28: replace BMP/PCX loaders with stb_image / dr_pcx
- tr_image.cpp: LoadBMP now decodes with stbi_load_from_memory and LoadPCX32 with drpcx_load_memory (dr_pcx v0.3.1 from src/third-party/drlibs), same pattern as the stb jpg loader. The 8-bit-palette-only hand-written LoadPCX and the manual BMP parser are gone, including the LoadPCX32 bug that freed the shared R_GetImageBuffer scratch while converting.
- Output contract unchanged: top-down 32 bit RGBA in the shared image buffer, so no caller changes and texture orientation stays identical. dr_pcx applies the 256-color palette with alpha 255 like the old code.
- stb_impl.c also defines DR_PCX_IMPLEMENTATION and includes dr_pcx.h so the vendored pcx decoder compiles in the warnings-muted C unit.
- SConstruct: src/third-party/drlibs added to common_cpppath.
Files: src/renderer/tr_image.cpp, src/third-party/stb/stb_impl.c, SConstruct, tools/ci-session-notes.md.

## RESULT: CI fully green (digest 5ab6014, build of 92369f5)
All 13 jobs success with 0 errors and 0 warnings after replacing the
BMP/PCX loaders: ubuntu x64 debug/release/release-game, ubuntu x86
debug/release, windows x64 debug/release/release-cgame/release-game/
release-ui, windows x86 debug/release, uncrustify. stb_image (BMP),
dr_pcx (PCX) and the drpcx implementation compiled inside the muted
stb_impl.c unit all built clean on every compiler (msvc clang-cl x86/x64,
gcc/clang linux x86/x64). Task complete.

## 2026-10-28: replace the SCons build with CMake
- src/CMakeLists.txt rewritten: real source paths (the committed draft
  still referenced jpeg-6, ft2, external/, src/tools/nav), adds the
  missing files (cgame fx/*, splines/q_shared.cpp, stb_impl.c, qcommon
  q_math.cpp/q_shared.cpp, game ai/*), removes the Win32-only
  FATAL_ERROR "cmaketest" guards, and builds cross-platform
  (Linux sys/unix set + X11/GL/dl/m/pthread, Windows sys/win32 set +
  winmm/wsock32 and the .def files guarded to WIN32).
- ARCH_STRING is now a compile definition (x86/x64 from the pointer
  size) instead of the generated q_buildconfig.h; module outputs are
  qagame_<arch>, cgame_<arch>, ui_<arch> and the engine stays
  WolfSP_<arch>; all runnable products land in the repository root.
  No debug _d postfix needed: the loader falls back from *_d to the
  plain name.
- extractfuncs runs as a game_function_table custom target before the
  game module; it gets an explicit file list (file(GLOB) at configure
  time) because the Windows main() takes FindFirstFile filters while
  the Linux main() takes literal paths.
- bspc: dropped the broken ../nav source and bin_nt leftovers from its
  CMakeLists; navmesh_builder.cpp includes fixed to
  ../../qcommon/wolf_nav.h and ../../qcommon/q_shared.h; bspc links the
  recast/detour static libs defined in the top-level CMakeLists.
- src/CMakePresets.json: visual-studio (Win32), visual-studio-x64,
  command-line, linux-debug/release (Ninja) and linux-x86-*
  (-m32); build presets for all of them.
- CI: ci-windows.yml and ci-ubuntu.yml now configure and build with
  CMake (VS generator -A Win32/x64 on Windows, Ninja + -m32 on Linux
  x86); the hardlink matrix dimension and the scons cache are gone;
  LEG names are os-arch-config; digest/upload steps unchanged so
  ci-publish.yml keeps working without edits.
- VS Code: tasks/launch/c_cpp_properties point at the presets and the
  repository-root outputs; VS2026DevCmd.cmd drives cmake configure/
  build/clean; .code-workspace and settings add cmake.sourceDirectory
  and the cmake-tools recommendation; Open-Workspace.cmd detects
  src/CMakeLists.txt as the root marker.
- Docs: .github/README.md compiling sections rewritten for CMake
  (LICENSE sections untouched); CLAUDE.md and COPILOT.md build/CI
  sections updated to CMake; .gitignore drops the scons entries.
- Awaiting the first CMake CI digest.

## CMake CI iterations (2026-10-28, session 4)

- 5f984ed "Fix the engine build against the module layout":
  CPUSTRING win-/linux- <arch>, /wd4723, -Wno-unused-result,
  shared WOLF_MODULE_PUBLIC_INCLUDE_DIRS for the game/cgame/ui
  headers used by wolf and renderer, bg_lib.cpp CRT rename hack,
  win32 _M_IX86 asm guards, cgame #undef CHAR_WIDTH, midiInOpen
  DWORD_PTR casts, win_syscon LRESULT fixes.
- 980a441 "Fix the remaining CI build failures": unused-local
  removals in fx, and l_script.h _MAX_PATH fallback raised from 64
  to 260 so the fortify-checked strcpy in LoadScriptFile stops
  aborting extractfuncs on long CI paths.
- 0382fe8 "Fix the Linux build":
  - common.cpp: the Com_Memcpy/Com_Memset block was compiled out on
    Linux by the outer "#if !( __linux__ || __FreeBSD__ )" guard,
    leaving ~83 undefined refs at wolf link. The single guard is now
    "#if ( ( !id386 ) && ( !defined __i386__ ) ) || defined( __linux__ )
    || defined( __FreeBSD__ )": plain C on non-x86 and on Linux/FreeBSD
    (the optimized versions are MSVC inline asm), Windows unchanged.
  - g_main.cpp CalculateRanks: the counter-clearing loop ran to
    TEAM_NUM_TEAMS (4) but numteamVotingClients is [2]; iterations 2+
    wrote past the array (-Waggressive-loop-optimizations). Loop now
    bounds to the two real counters, matching the [0]/[1] uses below.
- 7613c39 "Install the 32-bit GL dev packages for the x86 builds":
  the x86 legs linked -lGL against the 64-bit libGL ("skipping
  incompatible ... cannot find -lGL"). ci-ubuntu.yml now installs
  libgl-dev:i386 / libglx-dev:i386 with the other :i386 X packages;
  the arch-independent-GL comment was wrong because libGL.so itself
  is per-arch.

## RESULT: CI fully green on CMake (digest ece30a1, build of 7613c39)
All 9 jobs success with 0 errors and 0 warnings: ubuntu x64/x86
debug/release, windows x64/x86 debug/release, uncrustify. The full
logs at the digest commit contain only "all ubuntu legs succeeded" /
"all windows legs succeeded". Task complete.

## 2026-10-28: split the CMake projects and add the dedicated server
- 24f067f: cmake/WolfUtils.cmake now owns the shared helpers
  (WOLF_ARCH, output directories, wolf_configure_target,
  wolf_set_output_directory, wolf_configure_engine); every project
  includes them through the top-level CMakeLists.
- Per-project CMakeLists: games/game, games/cgame, games/ui (the
  runtime modules), renderer, splines, games/botlib, third-party
  (recast/detour) and tools/extractfuncs; tools/bspc keeps its own
  file and the wolf/wolfded engine targets stay in src/CMakeLists.txt.
- The /wd4244 /wd4267 /wd4723 /wd4996 /wd5033 MSVC disables stay in the
  shared wolf_configure_target so every target mutes them.
- WolfDED_<arch> dedicated server: same engine sources with the
  DEDICATED define the tree carries (common.cpp locks the dedicated
  cvar to 1 with CVAR_ROM and skips the client/renderer/sound
  startup).
- The game modules now output to bin/main (SHARED_LIBRARY targets);
  executables, tools and .map files stay at the repository root. Run
  the exe with bin/ as the base path so the loader finds bin/main.

## RESULT: CI fully green (digest b98d1af, build of 24f067f)
All 9 jobs success with 0 errors and 0 warnings on the split build:
ubuntu x64/x86 debug/release, windows x64/x86 debug/release,
uncrustify. WolfDED and the restructured modules compiled and linked
clean everywhere. Task complete.

## 2026-10-28: fix the MSVC warnings in code instead of suppressing them

Removed the /wd4244 /wd4267 /wd4723 /wd4996 /wd5033 suppressions and fixed all the warning sites in the source:

- Cast strlen, size(), fread and fwrite results to the integer types the callers expect across client, qcommon, renderer, server, splines, system, bot, cgame, game and ui code
- Removed the register storage class from the botlib precompiler and qsort code
- Replaced the zombie spirit fade-time divide by a constant zero with a direct three-way time comparison
- Replaced the deprecated GetVersionEx calls with a Sys_GetVersion helper built on RtlGetVersion from ntdll
- Cast the SOCKS username and password lengths and the console event string length to int in the Windows system code

Result: all four ubuntu legs and all four windows legs build with 0 errors and 0 warnings, and uncrustify passes.

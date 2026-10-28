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

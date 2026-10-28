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

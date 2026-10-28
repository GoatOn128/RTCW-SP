# Host tool that regenerates the game function table (g_funcs.h /
# g_func_decs.h) that g_save.cpp compiles in.

add_executable(extractfuncs
    extractfuncs.cpp
    l_log.cpp
    l_memory.cpp
    l_precomp.cpp
    l_script.cpp
)
target_compile_definitions(extractfuncs PRIVATE _CONSOLE SCREWUP)
if(MSVC)
    # The optimizer in current MSVC releases crashes on this legacy parser.
    target_compile_options(extractfuncs PRIVATE /Od)
endif()
wolf_configure_target(extractfuncs)

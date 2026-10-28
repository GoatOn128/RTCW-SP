# The bot AI library, linked into the engine.  The navigation queries go
# through Detour.

add_library(botlib STATIC
    be_nav_interface.cpp
    be_ai_char.cpp
    be_ai_chat.cpp
    be_ai_gen.cpp
    be_ai_goal.cpp
    be_ai_move.cpp
    be_ai_weap.cpp
    be_ai_weight.cpp
    be_ea.cpp
    be_interface.cpp
    l_crc.cpp
    l_libvar.cpp
    l_log.cpp
    l_memory.cpp
    l_precomp.cpp
    l_script.cpp
    l_struct.cpp
)
target_compile_definitions(botlib PRIVATE _LIB BOTLIB)
target_compile_features(botlib PRIVATE cxx_std_17)
target_include_directories(botlib PRIVATE "${WOLF_SOURCE_DIR}/third-party/recast/Detour/Include")
target_link_libraries(botlib PUBLIC detour)
wolf_configure_target(botlib)

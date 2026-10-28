project(botlib)

set(BOTLIB_SOURCES
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
	l_struct.cpp)

add_library(${PROJECT_NAME} STATIC ${BOTLIB_SOURCES})
target_compile_definitions(${PROJECT_NAME} PRIVATE _LIB BOTLIB)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)
target_include_directories(${PROJECT_NAME} PRIVATE "${ENGINE_SOURCE_DIR}/third-party/recast/Detour/Include")
target_link_libraries(${PROJECT_NAME} PUBLIC detour)
configure_target(${PROJECT_NAME})

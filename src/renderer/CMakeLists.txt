project(renderer)

set(RENDERER_SOURCES
	tr_animation.cpp
	tr_backend.cpp
	tr_renderprog.cpp
	tr_decals.cpp
	tr_vfx.cpp
	tr_bsp.cpp
	tr_cmds.cpp
	tr_cmesh.cpp
	tr_curve.cpp
	tr_flares.cpp
	tr_font.cpp
	tr_image.cpp
	tr_init.cpp
	tr_light.cpp
	tr_main.cpp
	tr_marks.cpp
	tr_mesh.cpp
	tr_model.cpp
	tr_noise.cpp
	tr_scene.cpp
	tr_shade.cpp
	tr_shade_calc.cpp
	tr_shader.cpp
	tr_shadows.cpp
	tr_sky.cpp
	tr_surface.cpp
	tr_world.cpp
	../third-party/stb/stb_impl.c
)
if(WIN32)
	list(APPEND RENDERER_SOURCES
		../sys/win32/win_gamma.cpp
		../sys/win32/win_glimp.cpp
		../sys/win32/win_qgl.cpp
	)
else()
	list(APPEND RENDERER_SOURCES
		../sys/unix/linux_glimp.cpp
		../sys/unix/linux_qgl.cpp
	)
endif()

if(MSVC)
	set_source_files_properties(../third-party/stb/stb_impl.c PROPERTIES COMPILE_OPTIONS /W0)
endif()

add_library(${PROJECT_NAME} STATIC ${RENDERER_SOURCES})
target_compile_definitions(${PROJECT_NAME} PRIVATE _LIB __USEA3D __A3D_GEOM)
target_include_directories(${PROJECT_NAME} PRIVATE
	"${ENGINE_SOURCE_DIR}/third-party/stb"
	"${ENGINE_SOURCE_DIR}/third-party/drlibs"
	${WOLF_MODULE_PUBLIC_INCLUDE_DIRS}
)
configure_target(${PROJECT_NAME})

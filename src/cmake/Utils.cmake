# Shared CMake helpers.
set(ENGINE_SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/..")
cmake_path(NORMAL_PATH ENGINE_SOURCE_DIR)

if(CMAKE_SIZEOF_VOID_P EQUAL 4)
	set(CPU_ARCH x86)
else()
	set(CPU_ARCH x64)
endif()

set(ENGINE_OUTPUT_DIRECTORY "${ENGINE_SOURCE_DIR}/..")
cmake_path(NORMAL_PATH ENGINE_OUTPUT_DIRECTORY)
set(ENGINE_MODULE_OUTPUT_DIRECTORY "${ENGINE_OUTPUT_DIRECTORY}/bin/main")

set(WOLF_MODULE_PUBLIC_INCLUDE_DIRS
	"${ENGINE_SOURCE_DIR}/games/game"
	"${ENGINE_SOURCE_DIR}/games/cgame"
	"${ENGINE_SOURCE_DIR}/games/ui"
)

# sets the output directory
function(set_output_directory target)
	get_target_property(target_type ${target} TYPE)
	if(target_type STREQUAL "SHARED_LIBRARY")
		set(out_destination "${ENGINE_MODULE_OUTPUT_DIRECTORY}")
	else()
		set(out_destination "${ENGINE_OUTPUT_DIRECTORY}")
	endif()
	set_target_properties(${target} PROPERTIES
		RUNTIME_OUTPUT_DIRECTORY $<1:>${out_destination}
		LIBRARY_OUTPUT_DIRECTORY $<1:>${out_destination}
		ARCHIVE_OUTPUT_DIRECTORY $<1:>${CMAKE_BINARY_DIR}/lib
		PDB_OUTPUT_DIRECTORY $<1:>${out_destination}
		COMPILE_PDB_OUTPUT_DIRECTORY $<1:>${CMAKE_BINARY_DIR}/pdb
	)
endfunction()

# configures a target with common definitions, include directories, and compile options
function(configure_target target)
	target_compile_definitions(${target} PRIVATE
		ARCH_STRING="${CPU_ARCH}"
		MAC_STATIC=
		$<$<CONFIG:Debug>:_DEBUG;DEBUG>
		$<$<NOT:$<CONFIG:Debug>>:NDEBUG>
	)
	if(WIN32)
		target_compile_definitions(${target} PRIVATE
			WIN32 _WINDOWS _CRT_SECURE_NO_WARNINGS
			PATH_SEP='\\\\'
			CPUSTRING="win-${CPU_ARCH}"
		)
	else()
		target_compile_definitions(${target} PRIVATE
			PATH_SEP='/'
			CPUSTRING="linux-${CPU_ARCH}"
		)
	endif()
	if(MSVC)
		target_compile_options(${target} PRIVATE
			/W3
		)
	endif()
	if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
		target_compile_options(${target} PRIVATE
			$<$<COMPILE_LANGUAGE:CXX>:-fno-operator-names;-Wno-write-strings;-Wno-register;-Wno-unused-result>
		)
	endif()
	target_include_directories(${target} PRIVATE
		"${ENGINE_SOURCE_DIR}"
		"${ENGINE_SOURCE_DIR}/qcommon"
	)
	set_output_directory(${target})
	set_type_solution_folder(${target})
endfunction()

# configures the engine target
function(configure_engine target)
	target_compile_definitions(${target} PRIVATE __USEA3D __A3D_GEOM)
	target_include_directories(${target} PRIVATE ${WOLF_MODULE_PUBLIC_INCLUDE_DIRS})
	target_link_libraries(${target} PRIVATE renderer botlib splines)
	if(WIN32)
		target_link_libraries(${target} PRIVATE winmm wsock32)
		target_link_options(${target} PRIVATE
			/STACK:8388608
			/MAP:${ENGINE_OUTPUT_DIRECTORY}/$<TARGET_PROPERTY:${target},OUTPUT_NAME>.map
			/NXCOMPAT:NO
		)
	else()
		target_link_libraries(${target} PRIVATE X11 GL Xxf86dga Xxf86vm dl m pthread)
	endif()
	configure_target(${target})
endfunction()

# puts a target in a Visual Studio solution folder
function(set_solution_folder target folder)
	set_target_properties(${target} PROPERTIES FOLDER ${folder})
endfunction()

# puts a target in the solution folder that matches its type
function(set_type_solution_folder target)
	get_target_property(target_type ${target} TYPE)
	if(target_type STREQUAL "SHARED_LIBRARY")
		set(folder dll)
	elseif(target_type STREQUAL "STATIC_LIBRARY")
		set(folder libs)
	elseif(target_type STREQUAL "EXECUTABLE")
		set(folder exes)
	else()
		set(folder misc)
	endif()
	set_solution_folder(${target} ${folder})
endfunction()

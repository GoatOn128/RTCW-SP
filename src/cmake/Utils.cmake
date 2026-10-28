# Shared CMake helpers.

# put the targets into solution folders in the generated IDE files
# the project requires CMake 3.25, which predates the 3.26 default, so the FOLDER property is ignored without this
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

cmake_path(SET ENGINE_SOURCE_DIR NORMALIZE "${CMAKE_CURRENT_LIST_DIR}/..")

if(CMAKE_SIZEOF_VOID_P EQUAL 4)
	set(CPU_ARCH x86)
else()
	set(CPU_ARCH x64)
endif()

cmake_path(SET ENGINE_OUTPUT_DIRECTORY NORMALIZE "${ENGINE_SOURCE_DIR}/../bin")
set(ENGINE_MODULE_OUTPUT_DIRECTORY "${ENGINE_OUTPUT_DIRECTORY}/main")

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
	attach_target_headers(${target})
	group_target_sources(${target})
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

# appends every buildsystem target defined at or below the given directory to the result variable
function(collect_targets result dir)
	get_property(subdirs DIRECTORY "${dir}" PROPERTY SUBDIRECTORIES)
	foreach(subdir IN LISTS subdirs)
		collect_targets(${result} "${subdir}")
	endforeach()
	get_directory_property(sub_targets DIRECTORY "${dir}" BUILDSYSTEM_TARGETS)
	set(${result} ${${result}} ${sub_targets} PARENT_SCOPE)
endfunction()

# groups the target files in the IDE into filters that mirror the source tree
function(group_target_sources target)
	get_target_property(target_sources ${target} SOURCES)
	if(NOT target_sources)
		return()
	endif()
	get_target_property(target_dir ${target} SOURCE_DIR)
	if(NOT target_dir)
		set(target_dir "${CMAKE_CURRENT_SOURCE_DIR}")
	endif()
	set(target_files "")
	foreach(s IN LISTS target_sources)
		if(NOT IS_ABSOLUTE "${s}")
			set(s "${target_dir}/${s}")
		endif()
		cmake_path(SET s NORMALIZE "${s}")
		list(APPEND target_files "${s}")
	endforeach()
	if(target_files)
		source_group(TREE "${ENGINE_SOURCE_DIR}" FILES ${target_files})
	endif()
endfunction()

# attaches the headers that sit next to the target's own source files so they show up in its IDE project
function(attach_target_headers target)
	get_target_property(target_dir ${target} SOURCE_DIR)
	get_target_property(target_sources ${target} SOURCES)
	if(NOT target_dir OR NOT target_sources)
		return()
	endif()
	set(owned_sources "")
	set(source_dirs "")
	foreach(s IN LISTS target_sources)
		if(NOT IS_ABSOLUTE "${s}")
			set(s "${target_dir}/${s}")
		endif()
		cmake_path(SET s NORMALIZE "${s}")
		list(APPEND owned_sources "${s}")
		cmake_path(GET s PARENT_PATH s_dir)
		list(APPEND source_dirs "${s_dir}")
	endforeach()
	list(REMOVE_DUPLICATES source_dirs)
	set(dir_headers "")
	foreach(d IN LISTS source_dirs)
		file(GLOB headers "${d}/*.h" "${d}/*.hpp" "${d}/*.inl")
		list(APPEND dir_headers ${headers})
	endforeach()
	list(SORT dir_headers)
	list(REMOVE_DUPLICATES dir_headers)
	set(new_headers "")
	foreach(h IN LISTS dir_headers)
		if(NOT "${h}" IN_LIST owned_sources)
			list(APPEND new_headers "${h}")
		endif()
	endforeach()
	if(new_headers)
		target_sources(${target} PRIVATE ${new_headers})
	endif()
endfunction()

# puts the headers no target owns into every project so they stay visible in the IDE
function(attach_headers_to_targets)
	file(GLOB_RECURSE all_headers
		"${ENGINE_SOURCE_DIR}/*.h"
		"${ENGINE_SOURCE_DIR}/*.hpp"
		"${ENGINE_SOURCE_DIR}/*.inl"
	)
	list(SORT all_headers)
	list(REMOVE_DUPLICATES all_headers)
	set(owned_sources "")
	collect_targets(all_targets "${CMAKE_SOURCE_DIR}")
	foreach(t IN LISTS all_targets)
		get_target_property(target_dir ${t} SOURCE_DIR)
		get_target_property(target_sources ${t} SOURCES)
		if(NOT target_sources)
			continue()
		endif()
		foreach(s IN LISTS target_sources)
			if(NOT IS_ABSOLUTE "${s}")
				set(s "${target_dir}/${s}")
			endif()
			cmake_path(SET s NORMALIZE "${s}")
			list(APPEND owned_sources "${s}")
		endforeach()
	endforeach()
	list(REMOVE_DUPLICATES owned_sources)
	set(loose_headers "")
	foreach(h IN LISTS all_headers)
		if(NOT "${h}" IN_LIST owned_sources)
			list(APPEND loose_headers "${h}")
		endif()
	endforeach()
	if(NOT loose_headers)
		return()
	endif()
	foreach(t IN LISTS all_targets)
		get_target_property(target_type ${t} TYPE)
		if(NOT target_type STREQUAL "UTILITY")
			target_sources(${t} PRIVATE ${loose_headers})
		endif()
	endforeach()
endfunction()

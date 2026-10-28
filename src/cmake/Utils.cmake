# Shared CMake helpers.

# put the targets into solution folders in the generated IDE files
# the project requires CMake 3.25, which predates the 3.26 default, so the FOLDER property is ignored without this
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(ENGINE_SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/..")
cmake_path(NORMAL_PATH ENGINE_SOURCE_DIR)

if(CMAKE_SIZEOF_VOID_P EQUAL 4)
	set(CPU_ARCH x86)
else()
	set(CPU_ARCH x64)
endif()

set(ENGINE_OUTPUT_DIRECTORY "${ENGINE_SOURCE_DIR}/../bin")
cmake_path(NORMAL_PATH ENGINE_OUTPUT_DIRECTORY)
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

# gathers the header files that no target lists as a source into a utility target so they show up in the IDE
function(gather_loose_headers target)
	file(GLOB_RECURSE all_headers
		"${ENGINE_SOURCE_DIR}/*.h"
		"${ENGINE_SOURCE_DIR}/*.hpp"
		"${ENGINE_SOURCE_DIR}/*.inl"
	)
	list(SORT all_headers)
	list(REMOVE_DUPLICATES all_headers)

	# collect the full path of every source file the targets own
	set(owned_sources "")
	collect_targets(all_targets "${CMAKE_SOURCE_DIR}")
	foreach(t IN LISTS all_targets)
		get_target_property(target_sources ${t} SOURCES)
		if(NOT target_sources)
			continue()
		endif()
		get_target_property(target_dir ${t} SOURCE_DIR)
		if(NOT target_dir)
			set(target_dir "${CMAKE_SOURCE_DIR}")
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

	# keep the headers that no target owns
	set(loose_headers "")
	foreach(h IN LISTS all_headers)
		if(NOT "${h}" IN_LIST owned_sources)
			list(APPEND loose_headers "${h}")
		endif()
	endforeach()

	if(NOT loose_headers)
		return()
	endif()
	add_custom_target(${target} SOURCES ${loose_headers})
	set_solution_folder(${target} misc)
	source_group(TREE "${ENGINE_SOURCE_DIR}" PREFIX "Header Files" FILES ${loose_headers})
endfunction()

# groups the target sources in the IDE into Source Files and Header Files filters that mirror the source tree
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
	set(source_files "")
	set(header_files "")
	foreach(f IN LISTS target_files)
		if(f MATCHES "\\.(h|hpp|inl)$")
			list(APPEND header_files "${f}")
		else()
			list(APPEND source_files "${f}")
		endif()
	endforeach()
	if(source_files)
		source_group(TREE "${ENGINE_SOURCE_DIR}" PREFIX "Source Files" FILES ${source_files})
	endif()
	if(header_files)
		source_group(TREE "${ENGINE_SOURCE_DIR}" PREFIX "Header Files" FILES ${header_files})
	endif()
endfunction()

# attaches the loose engine, game and tool headers to the target whose source directory contains them
function(attach_headers_to_targets)
	file(GLOB_RECURSE all_headers
		"${ENGINE_SOURCE_DIR}/*.h"
		"${ENGINE_SOURCE_DIR}/*.hpp"
		"${ENGINE_SOURCE_DIR}/*.inl"
	)
	list(SORT all_headers)
	list(REMOVE_DUPLICATES all_headers)

	# collect the full path of every source file the targets own and each target directory
	set(owned_sources "")
	set(target_pairs "")
	collect_targets(all_targets "${CMAKE_SOURCE_DIR}")
	foreach(t IN LISTS all_targets)
		get_target_property(target_dir ${t} SOURCE_DIR)
		if(target_dir)
			list(APPEND target_pairs "${target_dir}=>${t}")
		endif()
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

	# keep the headers no target owns; third-party code stays in the utility project
	set(loose_headers "")
	string(FIND "${ENGINE_SOURCE_DIR}" "" zero)
	set(third_party_prefix "${ENGINE_SOURCE_DIR}/third-party/")
	foreach(h IN LISTS all_headers)
		if("${h}" IN_LIST owned_sources)
			continue()
		endif()
		string(FIND "${h}" "${third_party_prefix}" third_pos)
		if(third_pos EQUAL 0)
			continue()
		endif()
		list(APPEND loose_headers "${h}")
	endforeach()

	# find the target with the deepest source directory that contains each header
	set(assignments "")
	foreach(h IN LISTS loose_headers)
		set(best_target "")
		set(best_length 0)
		foreach(pair IN LISTS target_pairs)
			string(FIND "${pair}" "=>" sep)
			string(SUBSTRING "${pair}" 0 ${sep} pair_dir)
			math(EXPR name_start "${sep} + 1")
			string(SUBSTRING "${pair}" ${name_start} -1 pair_target)
			string(FIND "${h}" "${pair_dir}/" pos)
			if(pos EQUAL 0)
				string(LENGTH "${pair_dir}" dir_length)
				math(EXPR prefix_length "${dir_length} + 1")
				if(prefix_length GREATER best_length)
					set(best_length ${prefix_length})
					set(best_target ${pair_target})
				endif()
			endif()
		endforeach()
		if(best_target)
			list(APPEND assignments "${h}=>${best_target}")
		endif()
	endforeach()

	# move the assigned headers into their targets
	foreach(pair IN LISTS target_pairs)
		string(FIND "${pair}" "=>" sep)
		math(EXPR name_start "${sep} + 1")
		string(SUBSTRING "${pair}" ${name_start} -1 t)
		set(t_headers "")
		foreach(a IN LISTS assignments)
			if(a MATCHES "=>${t}$")
				string(REGEX REPLACE "=>${t}$" "" hf "${a}")
				list(APPEND t_headers "${hf}")
			endif()
		endforeach()
		if(t_headers)
			target_sources(${t} PRIVATE ${t_headers})
		endif()
	endforeach()
endfunction()

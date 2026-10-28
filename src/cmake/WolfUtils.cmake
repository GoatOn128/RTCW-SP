# Shared CMake helpers for the WolfSP tree.
#
# Every project includes the same target configuration through
# wolf_configure_target so compile flags, the arch suffix and the output
# locations stay identical across the engine, the game modules and the tools.

# The utils live in src/cmake, so the parent directory is the src root.
set(WOLF_SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/..")
cmake_path(NORMAL_PATH WOLF_SOURCE_DIR)

# The engine loads the game modules at runtime as <name>_<arch>.dll/.so, so
# the arch suffix must follow the pointer size of the configured build.
if(CMAKE_SIZEOF_VOID_P EQUAL 4)
    set(WOLF_ARCH x86)
else()
    set(WOLF_ARCH x64)
endif()

# Executables and tools stay at the repository root.  The game modules go to
# bin/main, the classic Wolfenstein install layout the engine loads them
# from at runtime.
set(WOLF_OUTPUT_DIRECTORY "${WOLF_SOURCE_DIR}/..")
cmake_path(NORMAL_PATH WOLF_OUTPUT_DIRECTORY)
set(WOLF_MODULE_OUTPUT_DIRECTORY "${WOLF_OUTPUT_DIRECTORY}/bin/main")

# The engine headers still reference the module public headers through their
# original ../game, ../cgame and ../ui relative paths; resolve them now that
# the module code lives under games/.
set(WOLF_MODULE_PUBLIC_INCLUDE_DIRS
    "${WOLF_SOURCE_DIR}/games/game"
    "${WOLF_SOURCE_DIR}/games/cgame"
    "${WOLF_SOURCE_DIR}/games/ui"
)

function(wolf_set_output_directory target)
    # Shared libraries are the runtime-loaded game modules; they go to
    # bin/main while every other product stays at the repository root.
    get_target_property(wolf_target_type ${target} TYPE)
    if(wolf_target_type STREQUAL "SHARED_LIBRARY")
        set(wolf_destination "${WOLF_MODULE_OUTPUT_DIRECTORY}")
    else()
        set(wolf_destination "${WOLF_OUTPUT_DIRECTORY}")
    endif()
    set_target_properties(${target} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${wolf_destination}"
        LIBRARY_OUTPUT_DIRECTORY "${wolf_destination}"
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        PDB_OUTPUT_DIRECTORY "${wolf_destination}"
        COMPILE_PDB_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/pdb"
    )
endfunction()

function(wolf_configure_target target)
    target_compile_definitions(${target} PRIVATE
        ARCH_STRING="${WOLF_ARCH}"
        MAC_STATIC=
        $<$<CONFIG:Debug>:_DEBUG;DEBUG>
        $<$<NOT:$<CONFIG:Debug>>:NDEBUG>
    )
    if(WIN32)
        target_compile_definitions(${target} PRIVATE
            WIN32 _WINDOWS _CRT_SECURE_NO_WARNINGS
            PATH_SEP='\\\\'
            CPUSTRING="win-${WOLF_ARCH}"
        )
    else()
        target_compile_definitions(${target} PRIVATE
            PATH_SEP='/'
            CPUSTRING="linux-${WOLF_ARCH}"
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
        "${WOLF_SOURCE_DIR}"
        "${WOLF_SOURCE_DIR}/qcommon"
    )
    wolf_set_output_directory(${target})
endfunction()

# Common configuration for the engine executables: the client and server
# sources link against the renderer, botlib and spline libraries and produce
# the three game modules alongside themselves, like the original solution
# build ordering.
function(wolf_configure_engine target)
    target_compile_definitions(${target} PRIVATE __USEA3D __A3D_GEOM)
    target_include_directories(${target} PRIVATE ${WOLF_MODULE_PUBLIC_INCLUDE_DIRS})
    target_link_libraries(${target} PRIVATE renderer botlib Splines)
    if(WIN32)
        target_link_libraries(${target} PRIVATE winmm wsock32)
        target_link_options(${target} PRIVATE
            /STACK:8388608
            /MAP:${WOLF_OUTPUT_DIRECTORY}/$<TARGET_PROPERTY:${target},OUTPUT_NAME>.map
            /NXCOMPAT:NO
        )
    else()
        target_link_libraries(${target} PRIVATE X11 GL Xxf86dga Xxf86vm dl m pthread)
    endif()
    add_dependencies(${target} game cgame ui)
    wolf_configure_target(${target})
endfunction()

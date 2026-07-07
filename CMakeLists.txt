cmake_minimum_required(VERSION 3.22)
project(bello LANGUAGES C CXX)

message(STATUS ${CMAKE_CXX_COMPILER_ID})

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 23)

set(SOURCES
        ${PROJECT_SOURCE_DIR}/src/bello.cpp
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")


if (WIN32)
    execute_process(
            COMMAND ${PROJECT_SOURCE_DIR}/precompile.bat
    )
elseif (LINUX)
    execute_process(
            COMMAND ${PROJECT_SOURCE_DIR}/precompile.sh
    )
elseif (APPLE)
    execute_process(
            COMMAND ${PROJECT_SOURCE_DIR}/precompile.sh
    )
endif()

add_executable(bello ${SOURCES})

if (MSVC)
    target_compile_options(bello PRIVATE /MT)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_link_options(bello PRIVATE -static)
    #target_compile_options(bello PRIVATE -static-libgcc -static-libstdc++)
elseif(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    if (APPLE)
        find_library(EDIT_LIBRARY edit)
        target_link_libraries(bello PRIVATE ${EDIT_LIBRARY})
    else()
        # linux的情况
        target_compile_options(bello PRIVATE -static-libgcc -static-libstdc++)
    endif()
endif()


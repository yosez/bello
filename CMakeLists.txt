#cmake_minimum_required(VERSION 3.22 FATAL_ERROR)
#
#project(bello
#        LANGUAGES CXX
#)
#
##set(CMAKE_CXX_STANDARD 17)
##set(CMAKE_C_STANDARD 11)
#
#
#set(SOURCES
#        ${PROJECT_SOURCE_DIR}/Bello/y.tab.c
#        ${PROJECT_SOURCE_DIR}/Bello/lex.yy.c
#)
#
#file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/Bello/*.c")
#file(GLOB HEADERS "${PROJECT_SOURCE_DIR}/Bello/*.h")
#
#foreach (SRC ${SOURCES})
#    message(STATUS "SRC: ${SRC}")
#endforeach ()
#
#foreach (HDR ${HEADERS})
#    message(STATUS "HDR: ${HDR}")
#endforeach ()
#
#add_executable(bello
#    ${SOURCES}
#)
#
#set_target_properties(bello PROPERTIES
#        LINKER_LANGUAGE CXX
#)
#
#set_target_properties(bello PROPERTIES
#    C_STANDARD 11
#    CXX_STANDARD 17
#)
#
#target_include_directories(${PROJECT_NAME} PRIVATE
#        ${PROJECT_SOURCE_DIR}/Bello
#)
#
#
##target_link_libraries(${PROJECT_NAME})

cmake_minimum_required(VERSION 3.22)
project(src LANGUAGES C CXX)

message(STATUS ${CMAKE_CXX_COMPILER_ID})

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# —— 手动列出所有必需的源文件 ——
set(SOURCES
        ${PROJECT_SOURCE_DIR}/src/y.tab.c
        ${PROJECT_SOURCE_DIR}/src/lex.yy.c
        ${PROJECT_SOURCE_DIR}/src/bello.cpp
)

set_source_files_properties(
        ${PROJECT_SOURCE_DIR}/src/y.tab.c
        ${PROJECT_SOURCE_DIR}/src/lex.yy.c
        PROPERTIES LANGUAGE CXX
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

if (NOT WIN32)
    add_library(linenoise STATIC lbr/linenoise.c)
    target_include_directories(linenoise PUBLIC lbr)
endif()

add_executable(bello ${SOURCES})

if (MSVC)
    target_compile_options(bello PRIVATE /MT)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_link_options(bello PRIVATE -static)
    #target_compile_options(bello PRIVATE -static-libgcc -static-libstdc++)
elseif(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    if (APPLE)
    else()
        # linux的情况
        target_compile_options(bello PRIVATE -static-libgcc -static-libstdc++)
    endif()
endif()


if (NOT WIN32)
    target_link_libraries(bello PRIVATE linenoise)
endif()
cmake_minimum_required(VERSION 3.22)
project(src LANGUAGES C CXX)

message(STATUS ${CMAKE_CXX_COMPILER_ID})

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)

set(SOURCES
        ${PROJECT_SOURCE_DIR}/src/bello.cpp
)

#set_source_files_properties(
#        ${PROJECT_SOURCE_DIR}/src/y.tab.c
#        ${PROJECT_SOURCE_DIR}/src/lex.yy.c
#        PROPERTIES LANGUAGE CXX
#)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

#if (NOT WIN32)
#    add_library(linenoise STATIC lbr/linenoise.c)
#    target_include_directories(linenoise PUBLIC lbr)
#endif()

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


#if (NOT WIN32)
#    target_link_libraries(bello PRIVATE linenoise)
#endif()
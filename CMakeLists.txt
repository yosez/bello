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
#if (MINGW)
#    target_link_options(bello PRIVATE "-Wl,-subsystem,console")
#endif()
#
##target_link_libraries(${PROJECT_NAME})

cmake_minimum_required(VERSION 3.22)
project(bello LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# —— 手动列出所有必需的源文件 ——
set(SOURCES
        ${PROJECT_SOURCE_DIR}/Bello/y.tab.cpp
        ${PROJECT_SOURCE_DIR}/Bello/lex.yy.cpp
        # …其他 .c/.cpp
)

add_executable(bello ${SOURCES})

target_include_directories(bello PRIVATE
        ${PROJECT_SOURCE_DIR}/Bello
)
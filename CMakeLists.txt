cmake_minimum_required(VERSION 3.22 FATAL_ERROR)

project(bello
        LANGUAGES CXX
)

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/Bello/*.cpp" "${PROJECT_SOURCE_DIR}/Bello/*.c")
file(GLOB HEADERS "${PROJECT_SOURCE_DIR}/Bello/*.h" "${PROJECT_SOURCE_DIR}/Bello/*.hpp")

set(SOURCES
        ${SOURCES}
        ${PROJECT_SOURCE_DIR/Bello/y.tab.c}
        ${PROJECT_SOURCE_DIR/Bello/lex.yy.c}
)

message(STATUS "${HEADERS}")

message(STATUS "${SOURCES}")

#list(FILTER SOURCES EXCLUDE
#    ".*/custom_build_rules/.*$"
#    ".*/data/.*$"
#    ".*/test/.*$"
#)
#
#list(FILTER HEADERS EXCLUDE
#    ".*/custom_build_rules/.*$"
#    ".*/data/.*$"
#    ".*/test/.*$"
#)


# 添加可执行文件
add_executable(bello
        ${SOURCES}
        # ${HEADERS}
)

set_target_properties(bello PROPERTIES
        LINKER_LANGUAGE CXX
)


target_include_directories(${PROJECT_NAME} PRIVATE
        include
        ${PROJECT_SOURCE_DIR}/Bello
)

target_link_libraries(${PROJECT_NAME})
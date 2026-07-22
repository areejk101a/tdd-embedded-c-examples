cmake_minimum_required(VERSION 3.15)

project(example1 C)

set(CMAKE_C_STANDARD 99)

#
# Collect source files
#
file(GLOB_RECURSE APP_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c"
)

file(GLOB_RECURSE APP_HEADERS CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h"
)

file(GLOB_RECURSE TEST_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/test/*.c"
)

#
# Main application
#
add_executable(example1_app
    ${APP_SOURCES}
    main/main.c
)

target_include_directories(example1_app PRIVATE
    include
)

#
# Test application
#
add_executable(example1_tests
    ${APP_SOURCES}
    ${TEST_SOURCES}
    ${PROJECT_SOURCE_DIR}/../unity/src/unity.c
    ${PROJECT_SOURCE_DIR}/../unity/extras/fixture/src/unity_fixture.c
    ${PROJECT_SOURCE_DIR}/../unity/extras/memory/src/unity_memory.c
)

target_include_directories(example1_tests PRIVATE
    include
    ${PROJECT_SOURCE_DIR}/../unity/src
    ${PROJECT_SOURCE_DIR}/../unity/extras/fixture/src/
    ${PROJECT_SOURCE_DIR}/../unity/extras/memory/src
)

#
# Place executables in bin/
#
set_target_properties(example1_app PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
)

set_target_properties(example1_tests PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
)
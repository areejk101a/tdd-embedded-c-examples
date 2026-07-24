cmake_minimum_required(VERSION 3.15)

project(fpExample C)

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

file(GLOB_RECURSE PLAT_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/platform/*.c"
)

# file(GLOB_RECURSE MOCK_SOURCES CONFIGURE_DEPENDS
#     "${CMAKE_CURRENT_SOURCE_DIR}/mocks/*.c"
# )


#
# Main application
#
add_executable(fpExample_app
    ${APP_SOURCES}
    ${PLAT_SOURCES}
    main/main.c
)

target_include_directories(fpExample_app PRIVATE
    include
)

#
# Test application
#
add_executable(fpExample_tests
    ${APP_SOURCES}
    ${TEST_SOURCES}
    # ${MOCK_SOURCES}
    ${PROJECT_SOURCE_DIR}/../unity/src/unity.c
    ${PROJECT_SOURCE_DIR}/../unity/extras/fixture/src/unity_fixture.c
    ${PROJECT_SOURCE_DIR}/../unity/extras/memory/src/unity_memory.c
)

target_include_directories(fpExample_tests PRIVATE
    include
    # ${CMAKE_CURRENT_SOURCE_DIR}/mocks
    ${PROJECT_SOURCE_DIR}/../unity/src
    ${PROJECT_SOURCE_DIR}/../unity/extras/fixture/src/
    ${PROJECT_SOURCE_DIR}/../unity/extras/memory/src
)

#
# Place executables in bin/
#
set_target_properties(fpExample_app PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
)

set_target_properties(fpExample_tests PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
)
cmake_minimum_required(VERSION 2.6)
set(PROJECT_NAME_STR af_gtest_example)
project(${PROJECT_NAME_STR})

add_definitions(-Wall -pthread)

set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)

enable_testing()

add_subdirectory(src)
add_subdirectory(src_test)

cmake_minimum_required(VERSION 3.23)
project(ISR1)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(lib/googletest-main)

include_directories(lib/googletest-main/googletest/include)
add_executable(ISR1 main.cpp calculator.h)
target_link_libraries(ISR1 gtest gtest_main)
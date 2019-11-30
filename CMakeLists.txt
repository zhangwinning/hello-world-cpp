cmake_minimum_required(VERSION 3.14)
project(hello-world-cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(hello-world-cpp hello.cpp)
add_executable(hello-world-cpp_test test01/Sales_item.cpp test01/Sales_item.h)

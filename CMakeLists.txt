cmake_minimum_required(VERSION 3.14)
project(hello-world-cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(hello-world-cpp_function function/fact.cpp)
add_executable(hello-world-cpp_function__fact_input function/factinput.cpp)
add_executable(hello-world-cpp_function__abs function/abs.cpp)
add_executable(hello-world-cpp_function__add function/add.cpp)
#add_executable(hello-world-cpp hello.cpp)
#add_executable(hello-world-cpp_test test01/Sales_item.cpp test01/Sales_item.h)
#add_executable(hello-world-cpp_unsigned unsigned/main.cpp unsigned/main.h)



#target_link_libraries (hello-world-cpp_unsigned test_library)

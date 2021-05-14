cmake_minimum_required(VERSION 3.11)

project(main)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE hello)

target_compile_features(main PUBLIC cxx_std_17)
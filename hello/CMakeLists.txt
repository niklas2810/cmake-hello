cmake_minimum_required(VERSION 3.11)

project(hello)

add_library(hello src/hello.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_compile_features(hello PUBLIC cxx_std_17)

add_custom_command(TARGET hello POST_BUILD 
  COMMAND "${CMAKE_COMMAND}" -E copy 
     "$<TARGET_FILE:hello>"
     "../tests/$<CONFIGURATION>/$<TARGET_FILE_NAME:hello>" 
  COMMENT "Copying to tests directory")
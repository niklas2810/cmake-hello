cmake_minimum_required(VERSION 3.11)

project(CmakeHello VERSION 1.9 DESCRIPTION "Building an example cmake project")

add_subdirectory(hello)
add_subdirectory(apps)
if(PROJECT_NAME STREQUAL CMAKE_PROJECT_NAME)
    add_subdirectory(tests)
endif() #PROJECT_NAME STREQUAL CMAKE_PROJECT_NAME
#[[
/**
*  @file    CMakeLists.txt
*  @author  Neil Burman (nburma01)
*  @date    2017-10-15
*  @version 1.0
*
*  @brief Make file for the project
*
*  @section Homework4 make file
*
]]

cmake_minimum_required(VERSION 3.8)
project(Homework4)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)

add_executable(Homework4 ${SOURCE_FILES})

add_subdirectory (Fiblib)
add_subdirectory (VectOut)

target_link_libraries(Homework4 Fiblib VectOut)




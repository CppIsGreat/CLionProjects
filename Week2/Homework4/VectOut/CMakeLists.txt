#[[
/**
*  @file    CMakeLists.txt
*  @author  Neil Burman (nburma01)
*  @date    2017-10-15
*  @version 1.0
*
*  @brief Make file for the project
*
*  @section DESCRIPTION
*
*
]]

cmake_minimum_required(VERSION 3.8)
project(VectOut)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES VectOut.cpp)

add_library(VectOut STATIC ${SOURCE_FILES})
cmake_minimum_required(VERSION 3.8)
project(Fiblib)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES Fiblib.cpp)

add_library(Fiblib STATIC ${SOURCE_FILES})
cmake_minimum_required(VERSION 3.8)
project(Homework1)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp
	point.cpp
	point.hpp
	multiline.cpp
	multiline.hpp)

add_executable(Homework1 ${SOURCE_FILES})


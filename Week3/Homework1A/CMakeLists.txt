cmake_minimum_required(VERSION 3.8)
project(Homework1A)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp
	point.cpp
	point.hpp
	multiline.cpp
	multiline.hpp)

add_executable(Homework1A ${SOURCE_FILES})

set(CATCH_INCLUDE_DIR /Users/neil/Catch/include)
add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CATCH_INCLUDE_DIR})

target_link_libraries(Homework1A Catch)

enable_testing()
add_test(NAME MyAwesomeTest COMMAND my_test)

cmake_minimum_required(VERSION 3.8)
project(Test3)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)

add_executable(Test3 ${SOURCE_FILES})

add_subdirectory (Fiblib)
add_subdirectory (VectOut)

target_link_libraries(Test3 Fiblib VectOut)




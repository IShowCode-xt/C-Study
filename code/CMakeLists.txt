cmake_minimum_required(VERSION 3.17)
project(code C)

set(CMAKE_C_STANDARD 99)
ADD_SUBDIRECTORY(code1)
add_executable(code main.c )
add_executable(test1 code1/test1.c )
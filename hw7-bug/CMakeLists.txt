cmake_minimum_required(VERSION 3.23)
project(hw7_bug)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(hw7_bug
        bug.cpp
        bug.h
        bug_main.cpp)

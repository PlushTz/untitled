cmake_minimum_required(VERSION 4.0)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled main.cpp
        test.h
        test.cpp
        pointer.cpp
        pointer.h
        reference.h
        reference.cpp)

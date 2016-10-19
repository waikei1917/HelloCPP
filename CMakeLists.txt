cmake_minimum_required(VERSION 3.6)
project(HelloCPP)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(HelloCPP ${SOURCE_FILES})
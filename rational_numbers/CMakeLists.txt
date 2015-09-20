cmake_minimum_required(VERSION 3.3)
project(CIS263)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main-rat.cpp RationalNumber.cpp RationalNumber.h)
add_executable(CIS263 ${SOURCE_FILES})

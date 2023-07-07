cmake_minimum_required(VERSION 3.25)
project(mcv)

set(CMAKE_CXX_STANDARD 14)

add_executable(mcv main.cpp libThirdParty32.h libThirdParty32Wrapper64.h)
MESSAGE(STATUS "Building for 32-bit")
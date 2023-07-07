cmake_minimum_required(VERSION 3.25)
project(mcv)

set(CMAKE_CXX_STANDARD 14)

add_executable(mcv main.cpp libThirdParty32.h libThirdParty32Wrapper64.h)
if ("$ENV{IS_32}" STREQUAL "1" )
    MESSAGE(STATUS "Building for 32-bit")
    set_target_properties(mcv PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")
else()
    MESSAGE(STATUS "Building for 64-bit")
endif()
MESSAGE(STATUS "$ENV{IS_32}")
cmake_minimum_required(VERSION 3.17)

add_library(lib_serial STATIC
        src/test_header.cpp
)

target_include_directories(lib_serial
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

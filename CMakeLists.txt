cmake_minimum_required(VERSION 3.17)
project(Trees LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SRC_DIR "${CMAKE_SOURCE_DIR}/src")
set(API_DIR "${CMAKE_SOURCE_DIR}/api")

set(main.cpp)

add_executable(Trees main.cpp)

target_include_directories(Trees PRIVATE "${SRC_DIR}" "${API_DIR}")

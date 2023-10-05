cmake_minimum_required(VERSION 3.17)

project(Trees)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(BinaryTree)

add_executable(Trees main.cpp)

target_link_libraries(Trees 
    PUBLIC 
        BinaryTree
)

target_include_directories(Trees  
    PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/BinaryTree"
)

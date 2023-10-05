
add_library(BinaryTree
    SHARED
        src/binary_tree.cpp
)

target_include_directories(BinaryTree
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/api>
)

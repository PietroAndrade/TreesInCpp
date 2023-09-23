project(BinaryTree)

include_directories("${PROJECT_SOURCE_DIR}/api")

add_library(BinaryTree
    SHARED
        src/binary_tree.cpp
)
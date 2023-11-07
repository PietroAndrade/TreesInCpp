add_library(BinaryTree
    SHARED
        src/binary_tree.cpp
        src/binary_tree_impl.cpp
        src/binary_tree_impl.h
)

target_include_directories(BinaryTree
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/api>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/interface>
)

target_link_libraries(BinaryTree
    PRIVATE
        Node
)
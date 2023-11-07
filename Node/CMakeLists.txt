project(Node LANGUAGES CXX)

add_library(Node INTERFACE)

target_include_directories(Node
    INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/interface>
)
cmake_minimum_required(VERSION 3.27)
project(graph-traversal-visualizer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion")

add_executable(graph-traversal-visualizer main.cpp
        DfsStrategy.cpp
        DfsStrategy.h
        GraphTraversalStrategy.cpp
        GraphTraversalStrategy.h
        utils.cpp
        utils.h
        BfsStrategy.cpp
        BfsStrategy.h
)

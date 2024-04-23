cmake_minimum_required(VERSION 3.16)

project(UnityBuild)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_UNITY_BUILD ON)

add_executable(UnityBuild
    src/main.cpp
    src/lib.cpp
)

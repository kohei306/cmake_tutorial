cmake_minimum_required(VERSION 3.5)

project(MyApplication VERSION 1.0 LANGUAGES CXX)

add_executable(MyApplication src/main.cpp)

find_package(MyLibraries REQUIRED)

target_link_libraries(MyApplication PRIVATE MyLibraries::MyLibraryA)
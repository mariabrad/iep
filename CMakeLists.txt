cmake_minimum_required(VERSION 3.16)  # CMake version check
project(main)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard



# Add executable target with source files listed in SOURCE_FILES variable
add_executable(main main.cpp headphones.cpp wireless.cpp wired.cpp)

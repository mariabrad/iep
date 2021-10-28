cmake_minimum_required(VERSION 3.16)  # CMake version check
project(IEP)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(myfiles main.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(main ${myfiles})

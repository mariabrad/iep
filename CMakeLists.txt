cmake_minimum_required(VERSION 3.16)  # CMake version check
project(main)               # Create project 
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard


add_subdirectory( Wired )
add_subdirectory( Wireless )
add_subdirectory( Headphones )
add_subdirectory( Mixed )
add_subdirectory( Lock )
add_subdirectory( Catalogue )
add_executable( main src/main.cpp)

target_link_libraries(main Headphones)
target_link_libraries(main Wired)
target_link_libraries(main Wireless)
target_link_libraries(main Mixed)
target_link_libraries(main Lock)
target_link_libraries(main Catalogue)
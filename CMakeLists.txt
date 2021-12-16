cmake_minimum_required(VERSION 3.16)
project(main)              
set(CMAKE_CXX_STANDARD 14)            


add_subdirectory( Wired )
add_subdirectory( Wireless )
add_subdirectory( Headphones )
add_subdirectory( Mixed )
add_subdirectory( Lock )
add_subdirectory( Catalogue )
add_subdirectory( Customer )
add_executable( main src/main.cpp)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

target_link_libraries(main Headphones)
target_link_libraries(main Wired)
target_link_libraries(main Wireless)
target_link_libraries(main Mixed)
target_link_libraries(main Lock)
target_link_libraries(main Catalogue)
target_link_libraries(main Customer)

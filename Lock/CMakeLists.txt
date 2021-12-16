add_library(Lock STATIC lock.hpp lock.cpp)

target_include_directories( Lock PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )

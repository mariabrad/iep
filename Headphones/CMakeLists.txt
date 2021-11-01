add_library(Headphones STATIC headphones.hpp headphones.cpp )

target_include_directories( Headphones PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )

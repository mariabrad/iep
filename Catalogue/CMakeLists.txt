add_library(Catalogue STATIC catalogue.hpp catalogue.cpp )
target_link_libraries(Catalogue Headphones)
target_include_directories( Catalogue PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )

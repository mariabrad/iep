add_library( Mixed STATIC mixed.hpp mixed.cpp )
target_link_libraries(Mixed Headphones)
target_include_directories( Mixed PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )

add_library( Wireless STATIC wireless.h wireless.cpp )
target_link_libraries(Wireless Headphones)
target_include_directories( Wireless PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )

add_library( Wireless STATIC wireless.hpp wireless.cpp )
target_link_libraries(Wireless Headphones)
target_include_directories( Wireless PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )

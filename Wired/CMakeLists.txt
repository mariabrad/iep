add_library( Wired STATIC wired.hpp wired.cpp )

target_include_directories( Wired PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )
target_link_libraries(Wired Headphones)

add_library( Customer STATIC customer.hpp customer.cpp )
target_link_libraries(Customer Headphones)
target_include_directories( Customer PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )

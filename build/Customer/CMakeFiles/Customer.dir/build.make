# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/maria/iep

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/maria/iep/build

# Include any dependencies generated for this target.
include Customer/CMakeFiles/Customer.dir/depend.make

# Include the progress variables for this target.
include Customer/CMakeFiles/Customer.dir/progress.make

# Include the compile flags for this target's objects.
include Customer/CMakeFiles/Customer.dir/flags.make

Customer/CMakeFiles/Customer.dir/customer.cpp.o: Customer/CMakeFiles/Customer.dir/flags.make
Customer/CMakeFiles/Customer.dir/customer.cpp.o: ../Customer/customer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maria/iep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Customer/CMakeFiles/Customer.dir/customer.cpp.o"
	cd /home/maria/iep/build/Customer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Customer.dir/customer.cpp.o -c /home/maria/iep/Customer/customer.cpp

Customer/CMakeFiles/Customer.dir/customer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Customer.dir/customer.cpp.i"
	cd /home/maria/iep/build/Customer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maria/iep/Customer/customer.cpp > CMakeFiles/Customer.dir/customer.cpp.i

Customer/CMakeFiles/Customer.dir/customer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Customer.dir/customer.cpp.s"
	cd /home/maria/iep/build/Customer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maria/iep/Customer/customer.cpp -o CMakeFiles/Customer.dir/customer.cpp.s

# Object files for target Customer
Customer_OBJECTS = \
"CMakeFiles/Customer.dir/customer.cpp.o"

# External object files for target Customer
Customer_EXTERNAL_OBJECTS =

Customer/libCustomer.a: Customer/CMakeFiles/Customer.dir/customer.cpp.o
Customer/libCustomer.a: Customer/CMakeFiles/Customer.dir/build.make
Customer/libCustomer.a: Customer/CMakeFiles/Customer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/maria/iep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libCustomer.a"
	cd /home/maria/iep/build/Customer && $(CMAKE_COMMAND) -P CMakeFiles/Customer.dir/cmake_clean_target.cmake
	cd /home/maria/iep/build/Customer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Customer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Customer/CMakeFiles/Customer.dir/build: Customer/libCustomer.a

.PHONY : Customer/CMakeFiles/Customer.dir/build

Customer/CMakeFiles/Customer.dir/clean:
	cd /home/maria/iep/build/Customer && $(CMAKE_COMMAND) -P CMakeFiles/Customer.dir/cmake_clean.cmake
.PHONY : Customer/CMakeFiles/Customer.dir/clean

Customer/CMakeFiles/Customer.dir/depend:
	cd /home/maria/iep/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/maria/iep /home/maria/iep/Customer /home/maria/iep/build /home/maria/iep/build/Customer /home/maria/iep/build/Customer/CMakeFiles/Customer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Customer/CMakeFiles/Customer.dir/depend


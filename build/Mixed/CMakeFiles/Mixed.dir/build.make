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
CMAKE_SOURCE_DIR = /home/maria/IEP/rep

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/maria/IEP/rep/build

# Include any dependencies generated for this target.
include Mixed/CMakeFiles/Mixed.dir/depend.make

# Include the progress variables for this target.
include Mixed/CMakeFiles/Mixed.dir/progress.make

# Include the compile flags for this target's objects.
include Mixed/CMakeFiles/Mixed.dir/flags.make

Mixed/CMakeFiles/Mixed.dir/mixed.cpp.o: Mixed/CMakeFiles/Mixed.dir/flags.make
Mixed/CMakeFiles/Mixed.dir/mixed.cpp.o: ../Mixed/mixed.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maria/IEP/rep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Mixed/CMakeFiles/Mixed.dir/mixed.cpp.o"
	cd /home/maria/IEP/rep/build/Mixed && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mixed.dir/mixed.cpp.o -c /home/maria/IEP/rep/Mixed/mixed.cpp

Mixed/CMakeFiles/Mixed.dir/mixed.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mixed.dir/mixed.cpp.i"
	cd /home/maria/IEP/rep/build/Mixed && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maria/IEP/rep/Mixed/mixed.cpp > CMakeFiles/Mixed.dir/mixed.cpp.i

Mixed/CMakeFiles/Mixed.dir/mixed.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mixed.dir/mixed.cpp.s"
	cd /home/maria/IEP/rep/build/Mixed && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maria/IEP/rep/Mixed/mixed.cpp -o CMakeFiles/Mixed.dir/mixed.cpp.s

# Object files for target Mixed
Mixed_OBJECTS = \
"CMakeFiles/Mixed.dir/mixed.cpp.o"

# External object files for target Mixed
Mixed_EXTERNAL_OBJECTS =

Mixed/libMixed.a: Mixed/CMakeFiles/Mixed.dir/mixed.cpp.o
Mixed/libMixed.a: Mixed/CMakeFiles/Mixed.dir/build.make
Mixed/libMixed.a: Mixed/CMakeFiles/Mixed.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/maria/IEP/rep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMixed.a"
	cd /home/maria/IEP/rep/build/Mixed && $(CMAKE_COMMAND) -P CMakeFiles/Mixed.dir/cmake_clean_target.cmake
	cd /home/maria/IEP/rep/build/Mixed && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Mixed.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Mixed/CMakeFiles/Mixed.dir/build: Mixed/libMixed.a

.PHONY : Mixed/CMakeFiles/Mixed.dir/build

Mixed/CMakeFiles/Mixed.dir/clean:
	cd /home/maria/IEP/rep/build/Mixed && $(CMAKE_COMMAND) -P CMakeFiles/Mixed.dir/cmake_clean.cmake
.PHONY : Mixed/CMakeFiles/Mixed.dir/clean

Mixed/CMakeFiles/Mixed.dir/depend:
	cd /home/maria/IEP/rep/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/maria/IEP/rep /home/maria/IEP/rep/Mixed /home/maria/IEP/rep/build /home/maria/IEP/rep/build/Mixed /home/maria/IEP/rep/build/Mixed/CMakeFiles/Mixed.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Mixed/CMakeFiles/Mixed.dir/depend

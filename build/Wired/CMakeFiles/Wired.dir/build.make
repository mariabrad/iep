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
include Wired/CMakeFiles/Wired.dir/depend.make

# Include the progress variables for this target.
include Wired/CMakeFiles/Wired.dir/progress.make

# Include the compile flags for this target's objects.
include Wired/CMakeFiles/Wired.dir/flags.make

Wired/CMakeFiles/Wired.dir/wired.cpp.o: Wired/CMakeFiles/Wired.dir/flags.make
Wired/CMakeFiles/Wired.dir/wired.cpp.o: ../Wired/wired.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maria/IEP/rep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Wired/CMakeFiles/Wired.dir/wired.cpp.o"
	cd /home/maria/IEP/rep/build/Wired && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Wired.dir/wired.cpp.o -c /home/maria/IEP/rep/Wired/wired.cpp

Wired/CMakeFiles/Wired.dir/wired.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Wired.dir/wired.cpp.i"
	cd /home/maria/IEP/rep/build/Wired && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maria/IEP/rep/Wired/wired.cpp > CMakeFiles/Wired.dir/wired.cpp.i

Wired/CMakeFiles/Wired.dir/wired.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Wired.dir/wired.cpp.s"
	cd /home/maria/IEP/rep/build/Wired && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maria/IEP/rep/Wired/wired.cpp -o CMakeFiles/Wired.dir/wired.cpp.s

# Object files for target Wired
Wired_OBJECTS = \
"CMakeFiles/Wired.dir/wired.cpp.o"

# External object files for target Wired
Wired_EXTERNAL_OBJECTS =

Wired/libWired.a: Wired/CMakeFiles/Wired.dir/wired.cpp.o
Wired/libWired.a: Wired/CMakeFiles/Wired.dir/build.make
Wired/libWired.a: Wired/CMakeFiles/Wired.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/maria/IEP/rep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libWired.a"
	cd /home/maria/IEP/rep/build/Wired && $(CMAKE_COMMAND) -P CMakeFiles/Wired.dir/cmake_clean_target.cmake
	cd /home/maria/IEP/rep/build/Wired && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Wired.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Wired/CMakeFiles/Wired.dir/build: Wired/libWired.a

.PHONY : Wired/CMakeFiles/Wired.dir/build

Wired/CMakeFiles/Wired.dir/clean:
	cd /home/maria/IEP/rep/build/Wired && $(CMAKE_COMMAND) -P CMakeFiles/Wired.dir/cmake_clean.cmake
.PHONY : Wired/CMakeFiles/Wired.dir/clean

Wired/CMakeFiles/Wired.dir/depend:
	cd /home/maria/IEP/rep/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/maria/IEP/rep /home/maria/IEP/rep/Wired /home/maria/IEP/rep/build /home/maria/IEP/rep/build/Wired /home/maria/IEP/rep/build/Wired/CMakeFiles/Wired.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Wired/CMakeFiles/Wired.dir/depend


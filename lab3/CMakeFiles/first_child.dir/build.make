# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/aleksandr/.local/lib/python3.10/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/aleksandr/.local/lib/python3.10/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aleksandr/LABS-OS/lab3var13

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aleksandr/LABS-OS/lab3var13

# Include any dependencies generated for this target.
include CMakeFiles/first_child.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/first_child.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/first_child.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/first_child.dir/flags.make

CMakeFiles/first_child.dir/first_child.cpp.o: CMakeFiles/first_child.dir/flags.make
CMakeFiles/first_child.dir/first_child.cpp.o: first_child.cpp
CMakeFiles/first_child.dir/first_child.cpp.o: CMakeFiles/first_child.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/aleksandr/LABS-OS/lab3var13/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/first_child.dir/first_child.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/first_child.dir/first_child.cpp.o -MF CMakeFiles/first_child.dir/first_child.cpp.o.d -o CMakeFiles/first_child.dir/first_child.cpp.o -c /home/aleksandr/LABS-OS/lab3var13/first_child.cpp

CMakeFiles/first_child.dir/first_child.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/first_child.dir/first_child.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aleksandr/LABS-OS/lab3var13/first_child.cpp > CMakeFiles/first_child.dir/first_child.cpp.i

CMakeFiles/first_child.dir/first_child.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/first_child.dir/first_child.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aleksandr/LABS-OS/lab3var13/first_child.cpp -o CMakeFiles/first_child.dir/first_child.cpp.s

# Object files for target first_child
first_child_OBJECTS = \
"CMakeFiles/first_child.dir/first_child.cpp.o"

# External object files for target first_child
first_child_EXTERNAL_OBJECTS =

first_child: CMakeFiles/first_child.dir/first_child.cpp.o
first_child: CMakeFiles/first_child.dir/build.make
first_child: CMakeFiles/first_child.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/aleksandr/LABS-OS/lab3var13/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable first_child"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/first_child.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/first_child.dir/build: first_child
.PHONY : CMakeFiles/first_child.dir/build

CMakeFiles/first_child.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/first_child.dir/cmake_clean.cmake
.PHONY : CMakeFiles/first_child.dir/clean

CMakeFiles/first_child.dir/depend:
	cd /home/aleksandr/LABS-OS/lab3var13 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aleksandr/LABS-OS/lab3var13 /home/aleksandr/LABS-OS/lab3var13 /home/aleksandr/LABS-OS/lab3var13 /home/aleksandr/LABS-OS/lab3var13 /home/aleksandr/LABS-OS/lab3var13/CMakeFiles/first_child.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/first_child.dir/depend


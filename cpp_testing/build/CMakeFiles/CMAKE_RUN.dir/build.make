# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/smgarner/esp/cpp_testing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/smgarner/esp/cpp_testing/build

# Include any dependencies generated for this target.
include CMakeFiles/CMAKE_RUN.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CMAKE_RUN.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CMAKE_RUN.dir/flags.make

CMakeFiles/CMAKE_RUN.dir/main.cpp.o: CMakeFiles/CMAKE_RUN.dir/flags.make
CMakeFiles/CMAKE_RUN.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/smgarner/esp/cpp_testing/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CMAKE_RUN.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CMAKE_RUN.dir/main.cpp.o -c /home/smgarner/esp/cpp_testing/main.cpp

CMakeFiles/CMAKE_RUN.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CMAKE_RUN.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/smgarner/esp/cpp_testing/main.cpp > CMakeFiles/CMAKE_RUN.dir/main.cpp.i

CMakeFiles/CMAKE_RUN.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CMAKE_RUN.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/smgarner/esp/cpp_testing/main.cpp -o CMakeFiles/CMAKE_RUN.dir/main.cpp.s

# Object files for target CMAKE_RUN
CMAKE_RUN_OBJECTS = \
"CMakeFiles/CMAKE_RUN.dir/main.cpp.o"

# External object files for target CMAKE_RUN
CMAKE_RUN_EXTERNAL_OBJECTS =

CMAKE_RUN: CMakeFiles/CMAKE_RUN.dir/main.cpp.o
CMAKE_RUN: CMakeFiles/CMAKE_RUN.dir/build.make
CMAKE_RUN: CMakeFiles/CMAKE_RUN.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/smgarner/esp/cpp_testing/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CMAKE_RUN"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CMAKE_RUN.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CMAKE_RUN.dir/build: CMAKE_RUN

.PHONY : CMakeFiles/CMAKE_RUN.dir/build

CMakeFiles/CMAKE_RUN.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CMAKE_RUN.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CMAKE_RUN.dir/clean

CMakeFiles/CMAKE_RUN.dir/depend:
	cd /home/smgarner/esp/cpp_testing/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/smgarner/esp/cpp_testing /home/smgarner/esp/cpp_testing /home/smgarner/esp/cpp_testing/build /home/smgarner/esp/cpp_testing/build /home/smgarner/esp/cpp_testing/build/CMakeFiles/CMAKE_RUN.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CMAKE_RUN.dir/depend

# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/abdullah/modern_cpp/modern_cpp_templates/homework_9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/abdullah/modern_cpp/modern_cpp_templates/homework_9/build

# Include any dependencies generated for this target.
include CMakeFiles/kmeans.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/kmeans.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/kmeans.dir/flags.make

CMakeFiles/kmeans.dir/src/kmeans.cpp.o: CMakeFiles/kmeans.dir/flags.make
CMakeFiles/kmeans.dir/src/kmeans.cpp.o: ../src/kmeans.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abdullah/modern_cpp/modern_cpp_templates/homework_9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/kmeans.dir/src/kmeans.cpp.o"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kmeans.dir/src/kmeans.cpp.o -c /home/abdullah/modern_cpp/modern_cpp_templates/homework_9/src/kmeans.cpp

CMakeFiles/kmeans.dir/src/kmeans.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kmeans.dir/src/kmeans.cpp.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abdullah/modern_cpp/modern_cpp_templates/homework_9/src/kmeans.cpp > CMakeFiles/kmeans.dir/src/kmeans.cpp.i

CMakeFiles/kmeans.dir/src/kmeans.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kmeans.dir/src/kmeans.cpp.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abdullah/modern_cpp/modern_cpp_templates/homework_9/src/kmeans.cpp -o CMakeFiles/kmeans.dir/src/kmeans.cpp.s

CMakeFiles/kmeans.dir/src/kmeans.cpp.o.requires:

.PHONY : CMakeFiles/kmeans.dir/src/kmeans.cpp.o.requires

CMakeFiles/kmeans.dir/src/kmeans.cpp.o.provides: CMakeFiles/kmeans.dir/src/kmeans.cpp.o.requires
	$(MAKE) -f CMakeFiles/kmeans.dir/build.make CMakeFiles/kmeans.dir/src/kmeans.cpp.o.provides.build
.PHONY : CMakeFiles/kmeans.dir/src/kmeans.cpp.o.provides

CMakeFiles/kmeans.dir/src/kmeans.cpp.o.provides.build: CMakeFiles/kmeans.dir/src/kmeans.cpp.o


CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.o: CMakeFiles/kmeans.dir/flags.make
CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.o: ../src/kmeans_utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abdullah/modern_cpp/modern_cpp_templates/homework_9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.o"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.o -c /home/abdullah/modern_cpp/modern_cpp_templates/homework_9/src/kmeans_utils.cpp

CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abdullah/modern_cpp/modern_cpp_templates/homework_9/src/kmeans_utils.cpp > CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.i

CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abdullah/modern_cpp/modern_cpp_templates/homework_9/src/kmeans_utils.cpp -o CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.s

CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.o.requires:

.PHONY : CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.o.requires

CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.o.provides: CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.o.requires
	$(MAKE) -f CMakeFiles/kmeans.dir/build.make CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.o.provides.build
.PHONY : CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.o.provides

CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.o.provides.build: CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.o


# Object files for target kmeans
kmeans_OBJECTS = \
"CMakeFiles/kmeans.dir/src/kmeans.cpp.o" \
"CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.o"

# External object files for target kmeans
kmeans_EXTERNAL_OBJECTS =

libkmeans.a: CMakeFiles/kmeans.dir/src/kmeans.cpp.o
libkmeans.a: CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.o
libkmeans.a: CMakeFiles/kmeans.dir/build.make
libkmeans.a: CMakeFiles/kmeans.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/abdullah/modern_cpp/modern_cpp_templates/homework_9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libkmeans.a"
	$(CMAKE_COMMAND) -P CMakeFiles/kmeans.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kmeans.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/kmeans.dir/build: libkmeans.a

.PHONY : CMakeFiles/kmeans.dir/build

CMakeFiles/kmeans.dir/requires: CMakeFiles/kmeans.dir/src/kmeans.cpp.o.requires
CMakeFiles/kmeans.dir/requires: CMakeFiles/kmeans.dir/src/kmeans_utils.cpp.o.requires

.PHONY : CMakeFiles/kmeans.dir/requires

CMakeFiles/kmeans.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/kmeans.dir/cmake_clean.cmake
.PHONY : CMakeFiles/kmeans.dir/clean

CMakeFiles/kmeans.dir/depend:
	cd /home/abdullah/modern_cpp/modern_cpp_templates/homework_9/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/abdullah/modern_cpp/modern_cpp_templates/homework_9 /home/abdullah/modern_cpp/modern_cpp_templates/homework_9 /home/abdullah/modern_cpp/modern_cpp_templates/homework_9/build /home/abdullah/modern_cpp/modern_cpp_templates/homework_9/build /home/abdullah/modern_cpp/modern_cpp_templates/homework_9/build/CMakeFiles/kmeans.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/kmeans.dir/depend


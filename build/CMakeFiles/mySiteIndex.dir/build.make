# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /home/alovii/CLionProjects/mySite

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alovii/CLionProjects/mySite/build

# Include any dependencies generated for this target.
include CMakeFiles/mySiteIndex.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mySiteIndex.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mySiteIndex.dir/flags.make

CMakeFiles/mySiteIndex.dir/Index.cpp.o: CMakeFiles/mySiteIndex.dir/flags.make
CMakeFiles/mySiteIndex.dir/Index.cpp.o: ../Index.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alovii/CLionProjects/mySite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mySiteIndex.dir/Index.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mySiteIndex.dir/Index.cpp.o -c /home/alovii/CLionProjects/mySite/Index.cpp

CMakeFiles/mySiteIndex.dir/Index.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mySiteIndex.dir/Index.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alovii/CLionProjects/mySite/Index.cpp > CMakeFiles/mySiteIndex.dir/Index.cpp.i

CMakeFiles/mySiteIndex.dir/Index.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mySiteIndex.dir/Index.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alovii/CLionProjects/mySite/Index.cpp -o CMakeFiles/mySiteIndex.dir/Index.cpp.s

# Object files for target mySiteIndex
mySiteIndex_OBJECTS = \
"CMakeFiles/mySiteIndex.dir/Index.cpp.o"

# External object files for target mySiteIndex
mySiteIndex_EXTERNAL_OBJECTS =

mySiteIndex: CMakeFiles/mySiteIndex.dir/Index.cpp.o
mySiteIndex: CMakeFiles/mySiteIndex.dir/build.make
mySiteIndex: /usr/lib/libboost_system.so
mySiteIndex: /usr/lib/libboost_filesystem.so
mySiteIndex: /usr/lib/libboost_thread.so
mySiteIndex: /usr/lib/libboost_program_options.so
mySiteIndex: /usr/lib/libboost_chrono.so
mySiteIndex: /usr/lib/libboost_date_time.so
mySiteIndex: /usr/lib/libboost_atomic.so
mySiteIndex: CMakeFiles/mySiteIndex.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alovii/CLionProjects/mySite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mySiteIndex"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mySiteIndex.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mySiteIndex.dir/build: mySiteIndex

.PHONY : CMakeFiles/mySiteIndex.dir/build

CMakeFiles/mySiteIndex.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mySiteIndex.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mySiteIndex.dir/clean

CMakeFiles/mySiteIndex.dir/depend:
	cd /home/alovii/CLionProjects/mySite/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alovii/CLionProjects/mySite /home/alovii/CLionProjects/mySite /home/alovii/CLionProjects/mySite/build /home/alovii/CLionProjects/mySite/build /home/alovii/CLionProjects/mySite/build/CMakeFiles/mySiteIndex.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mySiteIndex.dir/depend

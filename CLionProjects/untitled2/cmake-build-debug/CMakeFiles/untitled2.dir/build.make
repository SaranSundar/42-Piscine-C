# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /nfs/2018/s/ssundara/CLionProjects/untitled2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /nfs/2018/s/ssundara/CLionProjects/untitled2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled2.dir/flags.make

CMakeFiles/untitled2.dir/main.c.o: CMakeFiles/untitled2.dir/flags.make
CMakeFiles/untitled2.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2018/s/ssundara/CLionProjects/untitled2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/untitled2.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled2.dir/main.c.o   -c /nfs/2018/s/ssundara/CLionProjects/untitled2/main.c

CMakeFiles/untitled2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled2.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2018/s/ssundara/CLionProjects/untitled2/main.c > CMakeFiles/untitled2.dir/main.c.i

CMakeFiles/untitled2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled2.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2018/s/ssundara/CLionProjects/untitled2/main.c -o CMakeFiles/untitled2.dir/main.c.s

CMakeFiles/untitled2.dir/main.c.o.requires:

.PHONY : CMakeFiles/untitled2.dir/main.c.o.requires

CMakeFiles/untitled2.dir/main.c.o.provides: CMakeFiles/untitled2.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/untitled2.dir/build.make CMakeFiles/untitled2.dir/main.c.o.provides.build
.PHONY : CMakeFiles/untitled2.dir/main.c.o.provides

CMakeFiles/untitled2.dir/main.c.o.provides.build: CMakeFiles/untitled2.dir/main.c.o


# Object files for target untitled2
untitled2_OBJECTS = \
"CMakeFiles/untitled2.dir/main.c.o"

# External object files for target untitled2
untitled2_EXTERNAL_OBJECTS =

untitled2: CMakeFiles/untitled2.dir/main.c.o
untitled2: CMakeFiles/untitled2.dir/build.make
untitled2: CMakeFiles/untitled2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/nfs/2018/s/ssundara/CLionProjects/untitled2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable untitled2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled2.dir/build: untitled2

.PHONY : CMakeFiles/untitled2.dir/build

CMakeFiles/untitled2.dir/requires: CMakeFiles/untitled2.dir/main.c.o.requires

.PHONY : CMakeFiles/untitled2.dir/requires

CMakeFiles/untitled2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled2.dir/clean

CMakeFiles/untitled2.dir/depend:
	cd /nfs/2018/s/ssundara/CLionProjects/untitled2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /nfs/2018/s/ssundara/CLionProjects/untitled2 /nfs/2018/s/ssundara/CLionProjects/untitled2 /nfs/2018/s/ssundara/CLionProjects/untitled2/cmake-build-debug /nfs/2018/s/ssundara/CLionProjects/untitled2/cmake-build-debug /nfs/2018/s/ssundara/CLionProjects/untitled2/cmake-build-debug/CMakeFiles/untitled2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled2.dir/depend


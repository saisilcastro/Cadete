# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Bootstrap.cmk/cmake

# The command to remove a file.
RM = /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Bootstrap.cmk/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0

# Include any dependencies generated for this target.
include Source/kwsys/CMakeFiles/cmsysTestProcess.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Source/kwsys/CMakeFiles/cmsysTestProcess.dir/compiler_depend.make

# Include the progress variables for this target.
include Source/kwsys/CMakeFiles/cmsysTestProcess.dir/progress.make

# Include the compile flags for this target's objects.
include Source/kwsys/CMakeFiles/cmsysTestProcess.dir/flags.make

Source/kwsys/CMakeFiles/cmsysTestProcess.dir/testProcess.c.o: Source/kwsys/CMakeFiles/cmsysTestProcess.dir/flags.make
Source/kwsys/CMakeFiles/cmsysTestProcess.dir/testProcess.c.o: Source/kwsys/testProcess.c
Source/kwsys/CMakeFiles/cmsysTestProcess.dir/testProcess.c.o: Source/kwsys/CMakeFiles/cmsysTestProcess.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Source/kwsys/CMakeFiles/cmsysTestProcess.dir/testProcess.c.o"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT Source/kwsys/CMakeFiles/cmsysTestProcess.dir/testProcess.c.o -MF CMakeFiles/cmsysTestProcess.dir/testProcess.c.o.d -o CMakeFiles/cmsysTestProcess.dir/testProcess.c.o -c /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/testProcess.c

Source/kwsys/CMakeFiles/cmsysTestProcess.dir/testProcess.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmsysTestProcess.dir/testProcess.c.i"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/testProcess.c > CMakeFiles/cmsysTestProcess.dir/testProcess.c.i

Source/kwsys/CMakeFiles/cmsysTestProcess.dir/testProcess.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmsysTestProcess.dir/testProcess.c.s"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/testProcess.c -o CMakeFiles/cmsysTestProcess.dir/testProcess.c.s

# Object files for target cmsysTestProcess
cmsysTestProcess_OBJECTS = \
"CMakeFiles/cmsysTestProcess.dir/testProcess.c.o"

# External object files for target cmsysTestProcess
cmsysTestProcess_EXTERNAL_OBJECTS =

Source/kwsys/cmsysTestProcess: Source/kwsys/CMakeFiles/cmsysTestProcess.dir/testProcess.c.o
Source/kwsys/cmsysTestProcess: Source/kwsys/CMakeFiles/cmsysTestProcess.dir/build.make
Source/kwsys/cmsysTestProcess: Source/kwsys/libcmsys_c.a
Source/kwsys/cmsysTestProcess: Source/kwsys/CMakeFiles/cmsysTestProcess.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cmsysTestProcess"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cmsysTestProcess.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Source/kwsys/CMakeFiles/cmsysTestProcess.dir/build: Source/kwsys/cmsysTestProcess
.PHONY : Source/kwsys/CMakeFiles/cmsysTestProcess.dir/build

Source/kwsys/CMakeFiles/cmsysTestProcess.dir/clean:
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && $(CMAKE_COMMAND) -P CMakeFiles/cmsysTestProcess.dir/cmake_clean.cmake
.PHONY : Source/kwsys/CMakeFiles/cmsysTestProcess.dir/clean

Source/kwsys/CMakeFiles/cmsysTestProcess.dir/depend:
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0 /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0 /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/CMakeFiles/cmsysTestProcess.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Source/kwsys/CMakeFiles/cmsysTestProcess.dir/depend


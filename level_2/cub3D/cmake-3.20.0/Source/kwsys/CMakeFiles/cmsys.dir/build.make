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
include Source/kwsys/CMakeFiles/cmsys.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Source/kwsys/CMakeFiles/cmsys.dir/compiler_depend.make

# Include the progress variables for this target.
include Source/kwsys/CMakeFiles/cmsys.dir/progress.make

# Include the compile flags for this target's objects.
include Source/kwsys/CMakeFiles/cmsys.dir/flags.make

Source/kwsys/CMakeFiles/cmsys.dir/ProcessUNIX.c.o: Source/kwsys/CMakeFiles/cmsys.dir/flags.make
Source/kwsys/CMakeFiles/cmsys.dir/ProcessUNIX.c.o: Source/kwsys/ProcessUNIX.c
Source/kwsys/CMakeFiles/cmsys.dir/ProcessUNIX.c.o: Source/kwsys/CMakeFiles/cmsys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Source/kwsys/CMakeFiles/cmsys.dir/ProcessUNIX.c.o"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -DKWSYS_C_HAS_PTRDIFF_T=1 -DKWSYS_C_HAS_SSIZE_T=1 -DKWSYS_C_HAS_CLOCK_GETTIME_MONOTONIC=1 -MD -MT Source/kwsys/CMakeFiles/cmsys.dir/ProcessUNIX.c.o -MF CMakeFiles/cmsys.dir/ProcessUNIX.c.o.d -o CMakeFiles/cmsys.dir/ProcessUNIX.c.o -c /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/ProcessUNIX.c

Source/kwsys/CMakeFiles/cmsys.dir/ProcessUNIX.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmsys.dir/ProcessUNIX.c.i"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -DKWSYS_C_HAS_PTRDIFF_T=1 -DKWSYS_C_HAS_SSIZE_T=1 -DKWSYS_C_HAS_CLOCK_GETTIME_MONOTONIC=1 -E /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/ProcessUNIX.c > CMakeFiles/cmsys.dir/ProcessUNIX.c.i

Source/kwsys/CMakeFiles/cmsys.dir/ProcessUNIX.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmsys.dir/ProcessUNIX.c.s"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -DKWSYS_C_HAS_PTRDIFF_T=1 -DKWSYS_C_HAS_SSIZE_T=1 -DKWSYS_C_HAS_CLOCK_GETTIME_MONOTONIC=1 -S /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/ProcessUNIX.c -o CMakeFiles/cmsys.dir/ProcessUNIX.c.s

Source/kwsys/CMakeFiles/cmsys.dir/Base64.c.o: Source/kwsys/CMakeFiles/cmsys.dir/flags.make
Source/kwsys/CMakeFiles/cmsys.dir/Base64.c.o: Source/kwsys/Base64.c
Source/kwsys/CMakeFiles/cmsys.dir/Base64.c.o: Source/kwsys/CMakeFiles/cmsys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object Source/kwsys/CMakeFiles/cmsys.dir/Base64.c.o"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT Source/kwsys/CMakeFiles/cmsys.dir/Base64.c.o -MF CMakeFiles/cmsys.dir/Base64.c.o.d -o CMakeFiles/cmsys.dir/Base64.c.o -c /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/Base64.c

Source/kwsys/CMakeFiles/cmsys.dir/Base64.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmsys.dir/Base64.c.i"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/Base64.c > CMakeFiles/cmsys.dir/Base64.c.i

Source/kwsys/CMakeFiles/cmsys.dir/Base64.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmsys.dir/Base64.c.s"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/Base64.c -o CMakeFiles/cmsys.dir/Base64.c.s

Source/kwsys/CMakeFiles/cmsys.dir/EncodingC.c.o: Source/kwsys/CMakeFiles/cmsys.dir/flags.make
Source/kwsys/CMakeFiles/cmsys.dir/EncodingC.c.o: Source/kwsys/EncodingC.c
Source/kwsys/CMakeFiles/cmsys.dir/EncodingC.c.o: Source/kwsys/CMakeFiles/cmsys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object Source/kwsys/CMakeFiles/cmsys.dir/EncodingC.c.o"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) -DKWSYS_ENCODING_DEFAULT_CODEPAGE=CP_UTF8 $(C_INCLUDES) $(C_FLAGS) -MD -MT Source/kwsys/CMakeFiles/cmsys.dir/EncodingC.c.o -MF CMakeFiles/cmsys.dir/EncodingC.c.o.d -o CMakeFiles/cmsys.dir/EncodingC.c.o -c /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/EncodingC.c

Source/kwsys/CMakeFiles/cmsys.dir/EncodingC.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmsys.dir/EncodingC.c.i"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) -DKWSYS_ENCODING_DEFAULT_CODEPAGE=CP_UTF8 $(C_INCLUDES) $(C_FLAGS) -E /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/EncodingC.c > CMakeFiles/cmsys.dir/EncodingC.c.i

Source/kwsys/CMakeFiles/cmsys.dir/EncodingC.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmsys.dir/EncodingC.c.s"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) -DKWSYS_ENCODING_DEFAULT_CODEPAGE=CP_UTF8 $(C_INCLUDES) $(C_FLAGS) -S /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/EncodingC.c -o CMakeFiles/cmsys.dir/EncodingC.c.s

Source/kwsys/CMakeFiles/cmsys.dir/MD5.c.o: Source/kwsys/CMakeFiles/cmsys.dir/flags.make
Source/kwsys/CMakeFiles/cmsys.dir/MD5.c.o: Source/kwsys/MD5.c
Source/kwsys/CMakeFiles/cmsys.dir/MD5.c.o: Source/kwsys/CMakeFiles/cmsys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object Source/kwsys/CMakeFiles/cmsys.dir/MD5.c.o"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT Source/kwsys/CMakeFiles/cmsys.dir/MD5.c.o -MF CMakeFiles/cmsys.dir/MD5.c.o.d -o CMakeFiles/cmsys.dir/MD5.c.o -c /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/MD5.c

Source/kwsys/CMakeFiles/cmsys.dir/MD5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmsys.dir/MD5.c.i"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/MD5.c > CMakeFiles/cmsys.dir/MD5.c.i

Source/kwsys/CMakeFiles/cmsys.dir/MD5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmsys.dir/MD5.c.s"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/MD5.c -o CMakeFiles/cmsys.dir/MD5.c.s

Source/kwsys/CMakeFiles/cmsys.dir/Terminal.c.o: Source/kwsys/CMakeFiles/cmsys.dir/flags.make
Source/kwsys/CMakeFiles/cmsys.dir/Terminal.c.o: Source/kwsys/Terminal.c
Source/kwsys/CMakeFiles/cmsys.dir/Terminal.c.o: Source/kwsys/CMakeFiles/cmsys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object Source/kwsys/CMakeFiles/cmsys.dir/Terminal.c.o"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT Source/kwsys/CMakeFiles/cmsys.dir/Terminal.c.o -MF CMakeFiles/cmsys.dir/Terminal.c.o.d -o CMakeFiles/cmsys.dir/Terminal.c.o -c /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/Terminal.c

Source/kwsys/CMakeFiles/cmsys.dir/Terminal.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmsys.dir/Terminal.c.i"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/Terminal.c > CMakeFiles/cmsys.dir/Terminal.c.i

Source/kwsys/CMakeFiles/cmsys.dir/Terminal.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmsys.dir/Terminal.c.s"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/Terminal.c -o CMakeFiles/cmsys.dir/Terminal.c.s

Source/kwsys/CMakeFiles/cmsys.dir/System.c.o: Source/kwsys/CMakeFiles/cmsys.dir/flags.make
Source/kwsys/CMakeFiles/cmsys.dir/System.c.o: Source/kwsys/System.c
Source/kwsys/CMakeFiles/cmsys.dir/System.c.o: Source/kwsys/CMakeFiles/cmsys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object Source/kwsys/CMakeFiles/cmsys.dir/System.c.o"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -DKWSYS_C_HAS_PTRDIFF_T=1 -DKWSYS_C_HAS_SSIZE_T=1 -DKWSYS_C_HAS_CLOCK_GETTIME_MONOTONIC=1 -MD -MT Source/kwsys/CMakeFiles/cmsys.dir/System.c.o -MF CMakeFiles/cmsys.dir/System.c.o.d -o CMakeFiles/cmsys.dir/System.c.o -c /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/System.c

Source/kwsys/CMakeFiles/cmsys.dir/System.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmsys.dir/System.c.i"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -DKWSYS_C_HAS_PTRDIFF_T=1 -DKWSYS_C_HAS_SSIZE_T=1 -DKWSYS_C_HAS_CLOCK_GETTIME_MONOTONIC=1 -E /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/System.c > CMakeFiles/cmsys.dir/System.c.i

Source/kwsys/CMakeFiles/cmsys.dir/System.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmsys.dir/System.c.s"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -DKWSYS_C_HAS_PTRDIFF_T=1 -DKWSYS_C_HAS_SSIZE_T=1 -DKWSYS_C_HAS_CLOCK_GETTIME_MONOTONIC=1 -S /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/System.c -o CMakeFiles/cmsys.dir/System.c.s

Source/kwsys/CMakeFiles/cmsys.dir/String.c.o: Source/kwsys/CMakeFiles/cmsys.dir/flags.make
Source/kwsys/CMakeFiles/cmsys.dir/String.c.o: Source/kwsys/String.c
Source/kwsys/CMakeFiles/cmsys.dir/String.c.o: Source/kwsys/CMakeFiles/cmsys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object Source/kwsys/CMakeFiles/cmsys.dir/String.c.o"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -DKWSYS_STRING_C -MD -MT Source/kwsys/CMakeFiles/cmsys.dir/String.c.o -MF CMakeFiles/cmsys.dir/String.c.o.d -o CMakeFiles/cmsys.dir/String.c.o -c /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/String.c

Source/kwsys/CMakeFiles/cmsys.dir/String.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmsys.dir/String.c.i"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -DKWSYS_STRING_C -E /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/String.c > CMakeFiles/cmsys.dir/String.c.i

Source/kwsys/CMakeFiles/cmsys.dir/String.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmsys.dir/String.c.s"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -DKWSYS_STRING_C -S /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/String.c -o CMakeFiles/cmsys.dir/String.c.s

Source/kwsys/CMakeFiles/cmsys.dir/Directory.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/flags.make
Source/kwsys/CMakeFiles/cmsys.dir/Directory.cxx.o: Source/kwsys/Directory.cxx
Source/kwsys/CMakeFiles/cmsys.dir/Directory.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object Source/kwsys/CMakeFiles/cmsys.dir/Directory.cxx.o"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Source/kwsys/CMakeFiles/cmsys.dir/Directory.cxx.o -MF CMakeFiles/cmsys.dir/Directory.cxx.o.d -o CMakeFiles/cmsys.dir/Directory.cxx.o -c /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/Directory.cxx

Source/kwsys/CMakeFiles/cmsys.dir/Directory.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmsys.dir/Directory.cxx.i"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/Directory.cxx > CMakeFiles/cmsys.dir/Directory.cxx.i

Source/kwsys/CMakeFiles/cmsys.dir/Directory.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmsys.dir/Directory.cxx.s"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/Directory.cxx -o CMakeFiles/cmsys.dir/Directory.cxx.s

Source/kwsys/CMakeFiles/cmsys.dir/DynamicLoader.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/flags.make
Source/kwsys/CMakeFiles/cmsys.dir/DynamicLoader.cxx.o: Source/kwsys/DynamicLoader.cxx
Source/kwsys/CMakeFiles/cmsys.dir/DynamicLoader.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object Source/kwsys/CMakeFiles/cmsys.dir/DynamicLoader.cxx.o"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) -DKWSYS_SUPPORTS_SHARED_LIBS=1 $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Source/kwsys/CMakeFiles/cmsys.dir/DynamicLoader.cxx.o -MF CMakeFiles/cmsys.dir/DynamicLoader.cxx.o.d -o CMakeFiles/cmsys.dir/DynamicLoader.cxx.o -c /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/DynamicLoader.cxx

Source/kwsys/CMakeFiles/cmsys.dir/DynamicLoader.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmsys.dir/DynamicLoader.cxx.i"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) -DKWSYS_SUPPORTS_SHARED_LIBS=1 $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/DynamicLoader.cxx > CMakeFiles/cmsys.dir/DynamicLoader.cxx.i

Source/kwsys/CMakeFiles/cmsys.dir/DynamicLoader.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmsys.dir/DynamicLoader.cxx.s"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) -DKWSYS_SUPPORTS_SHARED_LIBS=1 $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/DynamicLoader.cxx -o CMakeFiles/cmsys.dir/DynamicLoader.cxx.s

Source/kwsys/CMakeFiles/cmsys.dir/EncodingCXX.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/flags.make
Source/kwsys/CMakeFiles/cmsys.dir/EncodingCXX.cxx.o: Source/kwsys/EncodingCXX.cxx
Source/kwsys/CMakeFiles/cmsys.dir/EncodingCXX.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object Source/kwsys/CMakeFiles/cmsys.dir/EncodingCXX.cxx.o"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) -DKWSYS_ENCODING_DEFAULT_CODEPAGE=CP_UTF8 $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Source/kwsys/CMakeFiles/cmsys.dir/EncodingCXX.cxx.o -MF CMakeFiles/cmsys.dir/EncodingCXX.cxx.o.d -o CMakeFiles/cmsys.dir/EncodingCXX.cxx.o -c /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/EncodingCXX.cxx

Source/kwsys/CMakeFiles/cmsys.dir/EncodingCXX.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmsys.dir/EncodingCXX.cxx.i"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) -DKWSYS_ENCODING_DEFAULT_CODEPAGE=CP_UTF8 $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/EncodingCXX.cxx > CMakeFiles/cmsys.dir/EncodingCXX.cxx.i

Source/kwsys/CMakeFiles/cmsys.dir/EncodingCXX.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmsys.dir/EncodingCXX.cxx.s"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) -DKWSYS_ENCODING_DEFAULT_CODEPAGE=CP_UTF8 $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/EncodingCXX.cxx -o CMakeFiles/cmsys.dir/EncodingCXX.cxx.s

Source/kwsys/CMakeFiles/cmsys.dir/Glob.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/flags.make
Source/kwsys/CMakeFiles/cmsys.dir/Glob.cxx.o: Source/kwsys/Glob.cxx
Source/kwsys/CMakeFiles/cmsys.dir/Glob.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object Source/kwsys/CMakeFiles/cmsys.dir/Glob.cxx.o"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Source/kwsys/CMakeFiles/cmsys.dir/Glob.cxx.o -MF CMakeFiles/cmsys.dir/Glob.cxx.o.d -o CMakeFiles/cmsys.dir/Glob.cxx.o -c /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/Glob.cxx

Source/kwsys/CMakeFiles/cmsys.dir/Glob.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmsys.dir/Glob.cxx.i"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/Glob.cxx > CMakeFiles/cmsys.dir/Glob.cxx.i

Source/kwsys/CMakeFiles/cmsys.dir/Glob.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmsys.dir/Glob.cxx.s"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/Glob.cxx -o CMakeFiles/cmsys.dir/Glob.cxx.s

Source/kwsys/CMakeFiles/cmsys.dir/RegularExpression.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/flags.make
Source/kwsys/CMakeFiles/cmsys.dir/RegularExpression.cxx.o: Source/kwsys/RegularExpression.cxx
Source/kwsys/CMakeFiles/cmsys.dir/RegularExpression.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object Source/kwsys/CMakeFiles/cmsys.dir/RegularExpression.cxx.o"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Source/kwsys/CMakeFiles/cmsys.dir/RegularExpression.cxx.o -MF CMakeFiles/cmsys.dir/RegularExpression.cxx.o.d -o CMakeFiles/cmsys.dir/RegularExpression.cxx.o -c /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/RegularExpression.cxx

Source/kwsys/CMakeFiles/cmsys.dir/RegularExpression.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmsys.dir/RegularExpression.cxx.i"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/RegularExpression.cxx > CMakeFiles/cmsys.dir/RegularExpression.cxx.i

Source/kwsys/CMakeFiles/cmsys.dir/RegularExpression.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmsys.dir/RegularExpression.cxx.s"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/RegularExpression.cxx -o CMakeFiles/cmsys.dir/RegularExpression.cxx.s

Source/kwsys/CMakeFiles/cmsys.dir/SystemTools.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/flags.make
Source/kwsys/CMakeFiles/cmsys.dir/SystemTools.cxx.o: Source/kwsys/SystemTools.cxx
Source/kwsys/CMakeFiles/cmsys.dir/SystemTools.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object Source/kwsys/CMakeFiles/cmsys.dir/SystemTools.cxx.o"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) -DKWSYS_CXX_HAS_ENVIRON_IN_STDLIB_H=0 -DKWSYS_CXX_HAS_SETENV=1 -DKWSYS_CXX_HAS_UNSETENV=1 -DKWSYS_CXX_HAS_UTIMENSAT=1 -DKWSYS_CXX_HAS_UTIMES=1 -DKWSYS_CXX_STAT_HAS_ST_MTIM=1 -DKWSYS_CXX_STAT_HAS_ST_MTIMESPEC=0 $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Source/kwsys/CMakeFiles/cmsys.dir/SystemTools.cxx.o -MF CMakeFiles/cmsys.dir/SystemTools.cxx.o.d -o CMakeFiles/cmsys.dir/SystemTools.cxx.o -c /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/SystemTools.cxx

Source/kwsys/CMakeFiles/cmsys.dir/SystemTools.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmsys.dir/SystemTools.cxx.i"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) -DKWSYS_CXX_HAS_ENVIRON_IN_STDLIB_H=0 -DKWSYS_CXX_HAS_SETENV=1 -DKWSYS_CXX_HAS_UNSETENV=1 -DKWSYS_CXX_HAS_UTIMENSAT=1 -DKWSYS_CXX_HAS_UTIMES=1 -DKWSYS_CXX_STAT_HAS_ST_MTIM=1 -DKWSYS_CXX_STAT_HAS_ST_MTIMESPEC=0 $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/SystemTools.cxx > CMakeFiles/cmsys.dir/SystemTools.cxx.i

Source/kwsys/CMakeFiles/cmsys.dir/SystemTools.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmsys.dir/SystemTools.cxx.s"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) -DKWSYS_CXX_HAS_ENVIRON_IN_STDLIB_H=0 -DKWSYS_CXX_HAS_SETENV=1 -DKWSYS_CXX_HAS_UNSETENV=1 -DKWSYS_CXX_HAS_UTIMENSAT=1 -DKWSYS_CXX_HAS_UTIMES=1 -DKWSYS_CXX_STAT_HAS_ST_MTIM=1 -DKWSYS_CXX_STAT_HAS_ST_MTIMESPEC=0 $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/SystemTools.cxx -o CMakeFiles/cmsys.dir/SystemTools.cxx.s

Source/kwsys/CMakeFiles/cmsys.dir/CommandLineArguments.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/flags.make
Source/kwsys/CMakeFiles/cmsys.dir/CommandLineArguments.cxx.o: Source/kwsys/CommandLineArguments.cxx
Source/kwsys/CMakeFiles/cmsys.dir/CommandLineArguments.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object Source/kwsys/CMakeFiles/cmsys.dir/CommandLineArguments.cxx.o"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Source/kwsys/CMakeFiles/cmsys.dir/CommandLineArguments.cxx.o -MF CMakeFiles/cmsys.dir/CommandLineArguments.cxx.o.d -o CMakeFiles/cmsys.dir/CommandLineArguments.cxx.o -c /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/CommandLineArguments.cxx

Source/kwsys/CMakeFiles/cmsys.dir/CommandLineArguments.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmsys.dir/CommandLineArguments.cxx.i"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/CommandLineArguments.cxx > CMakeFiles/cmsys.dir/CommandLineArguments.cxx.i

Source/kwsys/CMakeFiles/cmsys.dir/CommandLineArguments.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmsys.dir/CommandLineArguments.cxx.s"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/CommandLineArguments.cxx -o CMakeFiles/cmsys.dir/CommandLineArguments.cxx.s

Source/kwsys/CMakeFiles/cmsys.dir/FStream.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/flags.make
Source/kwsys/CMakeFiles/cmsys.dir/FStream.cxx.o: Source/kwsys/FStream.cxx
Source/kwsys/CMakeFiles/cmsys.dir/FStream.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object Source/kwsys/CMakeFiles/cmsys.dir/FStream.cxx.o"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Source/kwsys/CMakeFiles/cmsys.dir/FStream.cxx.o -MF CMakeFiles/cmsys.dir/FStream.cxx.o.d -o CMakeFiles/cmsys.dir/FStream.cxx.o -c /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/FStream.cxx

Source/kwsys/CMakeFiles/cmsys.dir/FStream.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmsys.dir/FStream.cxx.i"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/FStream.cxx > CMakeFiles/cmsys.dir/FStream.cxx.i

Source/kwsys/CMakeFiles/cmsys.dir/FStream.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmsys.dir/FStream.cxx.s"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/FStream.cxx -o CMakeFiles/cmsys.dir/FStream.cxx.s

Source/kwsys/CMakeFiles/cmsys.dir/SystemInformation.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/flags.make
Source/kwsys/CMakeFiles/cmsys.dir/SystemInformation.cxx.o: Source/kwsys/SystemInformation.cxx
Source/kwsys/CMakeFiles/cmsys.dir/SystemInformation.cxx.o: Source/kwsys/CMakeFiles/cmsys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object Source/kwsys/CMakeFiles/cmsys.dir/SystemInformation.cxx.o"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) -DKWSYS_CXX_HAS_GETLOADAVG=1 -DKWSYS_CXX_HAS_RLIMIT64=1 -DKWSYS_SYSTEMINFORMATION_HAS_BACKTRACE=1 -DKWSYS_SYSTEMINFORMATION_HAS_CPP_DEMANGLE=1 -DKWSYS_SYSTEMINFORMATION_HAS_SYMBOL_LOOKUP=1 -DKWSYS_SYS_HAS_IFADDRS_H=1 -DSIZEOF_VOID_P=8 $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Source/kwsys/CMakeFiles/cmsys.dir/SystemInformation.cxx.o -MF CMakeFiles/cmsys.dir/SystemInformation.cxx.o.d -o CMakeFiles/cmsys.dir/SystemInformation.cxx.o -c /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/SystemInformation.cxx

Source/kwsys/CMakeFiles/cmsys.dir/SystemInformation.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmsys.dir/SystemInformation.cxx.i"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) -DKWSYS_CXX_HAS_GETLOADAVG=1 -DKWSYS_CXX_HAS_RLIMIT64=1 -DKWSYS_SYSTEMINFORMATION_HAS_BACKTRACE=1 -DKWSYS_SYSTEMINFORMATION_HAS_CPP_DEMANGLE=1 -DKWSYS_SYSTEMINFORMATION_HAS_SYMBOL_LOOKUP=1 -DKWSYS_SYS_HAS_IFADDRS_H=1 -DSIZEOF_VOID_P=8 $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/SystemInformation.cxx > CMakeFiles/cmsys.dir/SystemInformation.cxx.i

Source/kwsys/CMakeFiles/cmsys.dir/SystemInformation.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmsys.dir/SystemInformation.cxx.s"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && /usr/bin/g++ $(CXX_DEFINES) -DKWSYS_CXX_HAS_GETLOADAVG=1 -DKWSYS_CXX_HAS_RLIMIT64=1 -DKWSYS_SYSTEMINFORMATION_HAS_BACKTRACE=1 -DKWSYS_SYSTEMINFORMATION_HAS_CPP_DEMANGLE=1 -DKWSYS_SYSTEMINFORMATION_HAS_SYMBOL_LOOKUP=1 -DKWSYS_SYS_HAS_IFADDRS_H=1 -DSIZEOF_VOID_P=8 $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/SystemInformation.cxx -o CMakeFiles/cmsys.dir/SystemInformation.cxx.s

# Object files for target cmsys
cmsys_OBJECTS = \
"CMakeFiles/cmsys.dir/ProcessUNIX.c.o" \
"CMakeFiles/cmsys.dir/Base64.c.o" \
"CMakeFiles/cmsys.dir/EncodingC.c.o" \
"CMakeFiles/cmsys.dir/MD5.c.o" \
"CMakeFiles/cmsys.dir/Terminal.c.o" \
"CMakeFiles/cmsys.dir/System.c.o" \
"CMakeFiles/cmsys.dir/String.c.o" \
"CMakeFiles/cmsys.dir/Directory.cxx.o" \
"CMakeFiles/cmsys.dir/DynamicLoader.cxx.o" \
"CMakeFiles/cmsys.dir/EncodingCXX.cxx.o" \
"CMakeFiles/cmsys.dir/Glob.cxx.o" \
"CMakeFiles/cmsys.dir/RegularExpression.cxx.o" \
"CMakeFiles/cmsys.dir/SystemTools.cxx.o" \
"CMakeFiles/cmsys.dir/CommandLineArguments.cxx.o" \
"CMakeFiles/cmsys.dir/FStream.cxx.o" \
"CMakeFiles/cmsys.dir/SystemInformation.cxx.o"

# External object files for target cmsys
cmsys_EXTERNAL_OBJECTS =

Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/ProcessUNIX.c.o
Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/Base64.c.o
Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/EncodingC.c.o
Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/MD5.c.o
Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/Terminal.c.o
Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/System.c.o
Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/String.c.o
Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/Directory.cxx.o
Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/DynamicLoader.cxx.o
Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/EncodingCXX.cxx.o
Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/Glob.cxx.o
Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/RegularExpression.cxx.o
Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/SystemTools.cxx.o
Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/CommandLineArguments.cxx.o
Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/FStream.cxx.o
Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/SystemInformation.cxx.o
Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/build.make
Source/kwsys/libcmsys.a: Source/kwsys/CMakeFiles/cmsys.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX static library libcmsys.a"
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && $(CMAKE_COMMAND) -P CMakeFiles/cmsys.dir/cmake_clean_target.cmake
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cmsys.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Source/kwsys/CMakeFiles/cmsys.dir/build: Source/kwsys/libcmsys.a
.PHONY : Source/kwsys/CMakeFiles/cmsys.dir/build

Source/kwsys/CMakeFiles/cmsys.dir/clean:
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys && $(CMAKE_COMMAND) -P CMakeFiles/cmsys.dir/cmake_clean.cmake
.PHONY : Source/kwsys/CMakeFiles/cmsys.dir/clean

Source/kwsys/CMakeFiles/cmsys.dir/depend:
	cd /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0 /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0 /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys /home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Source/kwsys/CMakeFiles/cmsys.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Source/kwsys/CMakeFiles/cmsys.dir/depend


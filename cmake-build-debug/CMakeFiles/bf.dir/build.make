# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\cp\ccpworkspace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\cp\ccpworkspace\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bf.dir/flags.make

CMakeFiles/bf.dir/bf.cpp.obj: CMakeFiles/bf.dir/flags.make
CMakeFiles/bf.dir/bf.cpp.obj: bf.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\cp\ccpworkspace\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bf.dir/bf.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\bf.dir\bf.cpp.obj -c D:\cp\ccpworkspace\cmake-build-debug\bf.cpp

CMakeFiles/bf.dir/bf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bf.dir/bf.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\cp\ccpworkspace\cmake-build-debug\bf.cpp > CMakeFiles\bf.dir\bf.cpp.i

CMakeFiles/bf.dir/bf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bf.dir/bf.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\cp\ccpworkspace\cmake-build-debug\bf.cpp -o CMakeFiles\bf.dir\bf.cpp.s

# Object files for target bf
bf_OBJECTS = \
"CMakeFiles/bf.dir/bf.cpp.obj"

# External object files for target bf
bf_EXTERNAL_OBJECTS =

bf.exe: CMakeFiles/bf.dir/bf.cpp.obj
bf.exe: CMakeFiles/bf.dir/build.make
bf.exe: CMakeFiles/bf.dir/linklibs.rsp
bf.exe: CMakeFiles/bf.dir/objects1.rsp
bf.exe: CMakeFiles/bf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\cp\ccpworkspace\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bf.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\bf.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bf.dir/build: bf.exe

.PHONY : CMakeFiles/bf.dir/build

CMakeFiles/bf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\bf.dir\cmake_clean.cmake
.PHONY : CMakeFiles/bf.dir/clean

CMakeFiles/bf.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\cp\ccpworkspace D:\cp\ccpworkspace D:\cp\ccpworkspace\cmake-build-debug D:\cp\ccpworkspace\cmake-build-debug D:\cp\ccpworkspace\cmake-build-debug\CMakeFiles\bf.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bf.dir/depend


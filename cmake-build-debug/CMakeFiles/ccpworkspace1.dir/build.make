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
include CMakeFiles/ccpworkspace1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ccpworkspace1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ccpworkspace1.dir/flags.make

CMakeFiles/ccpworkspace1.dir/test.cpp.obj: CMakeFiles/ccpworkspace1.dir/flags.make
CMakeFiles/ccpworkspace1.dir/test.cpp.obj: ../test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\cp\ccpworkspace\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ccpworkspace1.dir/test.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ccpworkspace1.dir\test.cpp.obj -c D:\cp\ccpworkspace\test.cpp

CMakeFiles/ccpworkspace1.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ccpworkspace1.dir/test.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\cp\ccpworkspace\test.cpp > CMakeFiles\ccpworkspace1.dir\test.cpp.i

CMakeFiles/ccpworkspace1.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ccpworkspace1.dir/test.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\cp\ccpworkspace\test.cpp -o CMakeFiles\ccpworkspace1.dir\test.cpp.s

# Object files for target ccpworkspace1
ccpworkspace1_OBJECTS = \
"CMakeFiles/ccpworkspace1.dir/test.cpp.obj"

# External object files for target ccpworkspace1
ccpworkspace1_EXTERNAL_OBJECTS =

ccpworkspace1.exe: CMakeFiles/ccpworkspace1.dir/test.cpp.obj
ccpworkspace1.exe: CMakeFiles/ccpworkspace1.dir/build.make
ccpworkspace1.exe: CMakeFiles/ccpworkspace1.dir/linklibs.rsp
ccpworkspace1.exe: CMakeFiles/ccpworkspace1.dir/objects1.rsp
ccpworkspace1.exe: CMakeFiles/ccpworkspace1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\cp\ccpworkspace\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ccpworkspace1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ccpworkspace1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ccpworkspace1.dir/build: ccpworkspace1.exe

.PHONY : CMakeFiles/ccpworkspace1.dir/build

CMakeFiles/ccpworkspace1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ccpworkspace1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ccpworkspace1.dir/clean

CMakeFiles/ccpworkspace1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\cp\ccpworkspace D:\cp\ccpworkspace D:\cp\ccpworkspace\cmake-build-debug D:\cp\ccpworkspace\cmake-build-debug D:\cp\ccpworkspace\cmake-build-debug\CMakeFiles\ccpworkspace1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ccpworkspace1.dir/depend

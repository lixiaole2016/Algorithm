# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\code\c\0-1bag

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\code\c\0-1bag\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/0_1bag.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/0_1bag.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/0_1bag.dir/flags.make

CMakeFiles/0_1bag.dir/main.cpp.obj: CMakeFiles/0_1bag.dir/flags.make
CMakeFiles/0_1bag.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\c\0-1bag\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/0_1bag.dir/main.cpp.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\0_1bag.dir\main.cpp.obj -c D:\code\c\0-1bag\main.cpp

CMakeFiles/0_1bag.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/0_1bag.dir/main.cpp.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\code\c\0-1bag\main.cpp > CMakeFiles\0_1bag.dir\main.cpp.i

CMakeFiles/0_1bag.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/0_1bag.dir/main.cpp.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\code\c\0-1bag\main.cpp -o CMakeFiles\0_1bag.dir\main.cpp.s

# Object files for target 0_1bag
0_1bag_OBJECTS = \
"CMakeFiles/0_1bag.dir/main.cpp.obj"

# External object files for target 0_1bag
0_1bag_EXTERNAL_OBJECTS =

0_1bag.exe: CMakeFiles/0_1bag.dir/main.cpp.obj
0_1bag.exe: CMakeFiles/0_1bag.dir/build.make
0_1bag.exe: CMakeFiles/0_1bag.dir/linklibs.rsp
0_1bag.exe: CMakeFiles/0_1bag.dir/objects1.rsp
0_1bag.exe: CMakeFiles/0_1bag.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\code\c\0-1bag\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 0_1bag.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\0_1bag.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/0_1bag.dir/build: 0_1bag.exe

.PHONY : CMakeFiles/0_1bag.dir/build

CMakeFiles/0_1bag.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\0_1bag.dir\cmake_clean.cmake
.PHONY : CMakeFiles/0_1bag.dir/clean

CMakeFiles/0_1bag.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\c\0-1bag D:\code\c\0-1bag D:\code\c\0-1bag\cmake-build-debug D:\code\c\0-1bag\cmake-build-debug D:\code\c\0-1bag\cmake-build-debug\CMakeFiles\0_1bag.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/0_1bag.dir/depend


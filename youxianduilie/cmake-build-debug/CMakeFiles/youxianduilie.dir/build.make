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
CMAKE_SOURCE_DIR = D:\code\c\youxianduilie

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\code\c\youxianduilie\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/youxianduilie.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/youxianduilie.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/youxianduilie.dir/flags.make

CMakeFiles/youxianduilie.dir/main.cpp.obj: CMakeFiles/youxianduilie.dir/flags.make
CMakeFiles/youxianduilie.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\c\youxianduilie\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/youxianduilie.dir/main.cpp.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\youxianduilie.dir\main.cpp.obj -c D:\code\c\youxianduilie\main.cpp

CMakeFiles/youxianduilie.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/youxianduilie.dir/main.cpp.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\code\c\youxianduilie\main.cpp > CMakeFiles\youxianduilie.dir\main.cpp.i

CMakeFiles/youxianduilie.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/youxianduilie.dir/main.cpp.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\code\c\youxianduilie\main.cpp -o CMakeFiles\youxianduilie.dir\main.cpp.s

# Object files for target youxianduilie
youxianduilie_OBJECTS = \
"CMakeFiles/youxianduilie.dir/main.cpp.obj"

# External object files for target youxianduilie
youxianduilie_EXTERNAL_OBJECTS =

youxianduilie.exe: CMakeFiles/youxianduilie.dir/main.cpp.obj
youxianduilie.exe: CMakeFiles/youxianduilie.dir/build.make
youxianduilie.exe: CMakeFiles/youxianduilie.dir/linklibs.rsp
youxianduilie.exe: CMakeFiles/youxianduilie.dir/objects1.rsp
youxianduilie.exe: CMakeFiles/youxianduilie.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\code\c\youxianduilie\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable youxianduilie.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\youxianduilie.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/youxianduilie.dir/build: youxianduilie.exe

.PHONY : CMakeFiles/youxianduilie.dir/build

CMakeFiles/youxianduilie.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\youxianduilie.dir\cmake_clean.cmake
.PHONY : CMakeFiles/youxianduilie.dir/clean

CMakeFiles/youxianduilie.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\c\youxianduilie D:\code\c\youxianduilie D:\code\c\youxianduilie\cmake-build-debug D:\code\c\youxianduilie\cmake-build-debug D:\code\c\youxianduilie\cmake-build-debug\CMakeFiles\youxianduilie.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/youxianduilie.dir/depend


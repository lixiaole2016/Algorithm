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
CMAKE_SOURCE_DIR = D:\code\c\prime

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\code\c\prime\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/prime.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/prime.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prime.dir/flags.make

CMakeFiles/prime.dir/main.cpp.obj: CMakeFiles/prime.dir/flags.make
CMakeFiles/prime.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\c\prime\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/prime.dir/main.cpp.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\prime.dir\main.cpp.obj -c D:\code\c\prime\main.cpp

CMakeFiles/prime.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prime.dir/main.cpp.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\code\c\prime\main.cpp > CMakeFiles\prime.dir\main.cpp.i

CMakeFiles/prime.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prime.dir/main.cpp.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\code\c\prime\main.cpp -o CMakeFiles\prime.dir\main.cpp.s

# Object files for target prime
prime_OBJECTS = \
"CMakeFiles/prime.dir/main.cpp.obj"

# External object files for target prime
prime_EXTERNAL_OBJECTS =

prime.exe: CMakeFiles/prime.dir/main.cpp.obj
prime.exe: CMakeFiles/prime.dir/build.make
prime.exe: CMakeFiles/prime.dir/linklibs.rsp
prime.exe: CMakeFiles/prime.dir/objects1.rsp
prime.exe: CMakeFiles/prime.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\code\c\prime\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable prime.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\prime.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prime.dir/build: prime.exe

.PHONY : CMakeFiles/prime.dir/build

CMakeFiles/prime.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\prime.dir\cmake_clean.cmake
.PHONY : CMakeFiles/prime.dir/clean

CMakeFiles/prime.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\c\prime D:\code\c\prime D:\code\c\prime\cmake-build-debug D:\code\c\prime\cmake-build-debug D:\code\c\prime\cmake-build-debug\CMakeFiles\prime.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prime.dir/depend


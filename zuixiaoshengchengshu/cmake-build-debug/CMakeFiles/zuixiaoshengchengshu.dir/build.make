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
CMAKE_SOURCE_DIR = D:\code\c\zuixiaoshengchengshu

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\code\c\zuixiaoshengchengshu\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/zuixiaoshengchengshu.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/zuixiaoshengchengshu.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/zuixiaoshengchengshu.dir/flags.make

CMakeFiles/zuixiaoshengchengshu.dir/main.cpp.obj: CMakeFiles/zuixiaoshengchengshu.dir/flags.make
CMakeFiles/zuixiaoshengchengshu.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\c\zuixiaoshengchengshu\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/zuixiaoshengchengshu.dir/main.cpp.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\zuixiaoshengchengshu.dir\main.cpp.obj -c D:\code\c\zuixiaoshengchengshu\main.cpp

CMakeFiles/zuixiaoshengchengshu.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zuixiaoshengchengshu.dir/main.cpp.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\code\c\zuixiaoshengchengshu\main.cpp > CMakeFiles\zuixiaoshengchengshu.dir\main.cpp.i

CMakeFiles/zuixiaoshengchengshu.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zuixiaoshengchengshu.dir/main.cpp.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\code\c\zuixiaoshengchengshu\main.cpp -o CMakeFiles\zuixiaoshengchengshu.dir\main.cpp.s

# Object files for target zuixiaoshengchengshu
zuixiaoshengchengshu_OBJECTS = \
"CMakeFiles/zuixiaoshengchengshu.dir/main.cpp.obj"

# External object files for target zuixiaoshengchengshu
zuixiaoshengchengshu_EXTERNAL_OBJECTS =

zuixiaoshengchengshu.exe: CMakeFiles/zuixiaoshengchengshu.dir/main.cpp.obj
zuixiaoshengchengshu.exe: CMakeFiles/zuixiaoshengchengshu.dir/build.make
zuixiaoshengchengshu.exe: CMakeFiles/zuixiaoshengchengshu.dir/linklibs.rsp
zuixiaoshengchengshu.exe: CMakeFiles/zuixiaoshengchengshu.dir/objects1.rsp
zuixiaoshengchengshu.exe: CMakeFiles/zuixiaoshengchengshu.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\code\c\zuixiaoshengchengshu\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable zuixiaoshengchengshu.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\zuixiaoshengchengshu.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/zuixiaoshengchengshu.dir/build: zuixiaoshengchengshu.exe

.PHONY : CMakeFiles/zuixiaoshengchengshu.dir/build

CMakeFiles/zuixiaoshengchengshu.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\zuixiaoshengchengshu.dir\cmake_clean.cmake
.PHONY : CMakeFiles/zuixiaoshengchengshu.dir/clean

CMakeFiles/zuixiaoshengchengshu.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\c\zuixiaoshengchengshu D:\code\c\zuixiaoshengchengshu D:\code\c\zuixiaoshengchengshu\cmake-build-debug D:\code\c\zuixiaoshengchengshu\cmake-build-debug D:\code\c\zuixiaoshengchengshu\cmake-build-debug\CMakeFiles\zuixiaoshengchengshu.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/zuixiaoshengchengshu.dir/depend


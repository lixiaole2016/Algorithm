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
CMAKE_SOURCE_DIR = D:\code\c\danyuanzuiduanlujing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\code\c\danyuanzuiduanlujing\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/danyuanzuiduanlujing.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/danyuanzuiduanlujing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/danyuanzuiduanlujing.dir/flags.make

CMakeFiles/danyuanzuiduanlujing.dir/main.c.obj: CMakeFiles/danyuanzuiduanlujing.dir/flags.make
CMakeFiles/danyuanzuiduanlujing.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\c\danyuanzuiduanlujing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/danyuanzuiduanlujing.dir/main.c.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\danyuanzuiduanlujing.dir\main.c.obj   -c D:\code\c\danyuanzuiduanlujing\main.c

CMakeFiles/danyuanzuiduanlujing.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/danyuanzuiduanlujing.dir/main.c.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\code\c\danyuanzuiduanlujing\main.c > CMakeFiles\danyuanzuiduanlujing.dir\main.c.i

CMakeFiles/danyuanzuiduanlujing.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/danyuanzuiduanlujing.dir/main.c.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\code\c\danyuanzuiduanlujing\main.c -o CMakeFiles\danyuanzuiduanlujing.dir\main.c.s

# Object files for target danyuanzuiduanlujing
danyuanzuiduanlujing_OBJECTS = \
"CMakeFiles/danyuanzuiduanlujing.dir/main.c.obj"

# External object files for target danyuanzuiduanlujing
danyuanzuiduanlujing_EXTERNAL_OBJECTS =

danyuanzuiduanlujing.exe: CMakeFiles/danyuanzuiduanlujing.dir/main.c.obj
danyuanzuiduanlujing.exe: CMakeFiles/danyuanzuiduanlujing.dir/build.make
danyuanzuiduanlujing.exe: CMakeFiles/danyuanzuiduanlujing.dir/linklibs.rsp
danyuanzuiduanlujing.exe: CMakeFiles/danyuanzuiduanlujing.dir/objects1.rsp
danyuanzuiduanlujing.exe: CMakeFiles/danyuanzuiduanlujing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\code\c\danyuanzuiduanlujing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable danyuanzuiduanlujing.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\danyuanzuiduanlujing.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/danyuanzuiduanlujing.dir/build: danyuanzuiduanlujing.exe

.PHONY : CMakeFiles/danyuanzuiduanlujing.dir/build

CMakeFiles/danyuanzuiduanlujing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\danyuanzuiduanlujing.dir\cmake_clean.cmake
.PHONY : CMakeFiles/danyuanzuiduanlujing.dir/clean

CMakeFiles/danyuanzuiduanlujing.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\c\danyuanzuiduanlujing D:\code\c\danyuanzuiduanlujing D:\code\c\danyuanzuiduanlujing\cmake-build-debug D:\code\c\danyuanzuiduanlujing\cmake-build-debug D:\code\c\danyuanzuiduanlujing\cmake-build-debug\CMakeFiles\danyuanzuiduanlujing.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/danyuanzuiduanlujing.dir/depend

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
CMAKE_SOURCE_DIR = D:\code\c\zuichangdandiaozixulie

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\code\c\zuichangdandiaozixulie\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/zuichangdandiaozixulie.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/zuichangdandiaozixulie.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/zuichangdandiaozixulie.dir/flags.make

CMakeFiles/zuichangdandiaozixulie.dir/main.c.obj: CMakeFiles/zuichangdandiaozixulie.dir/flags.make
CMakeFiles/zuichangdandiaozixulie.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\c\zuichangdandiaozixulie\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/zuichangdandiaozixulie.dir/main.c.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\zuichangdandiaozixulie.dir\main.c.obj   -c D:\code\c\zuichangdandiaozixulie\main.c

CMakeFiles/zuichangdandiaozixulie.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/zuichangdandiaozixulie.dir/main.c.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\code\c\zuichangdandiaozixulie\main.c > CMakeFiles\zuichangdandiaozixulie.dir\main.c.i

CMakeFiles/zuichangdandiaozixulie.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/zuichangdandiaozixulie.dir/main.c.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\code\c\zuichangdandiaozixulie\main.c -o CMakeFiles\zuichangdandiaozixulie.dir\main.c.s

# Object files for target zuichangdandiaozixulie
zuichangdandiaozixulie_OBJECTS = \
"CMakeFiles/zuichangdandiaozixulie.dir/main.c.obj"

# External object files for target zuichangdandiaozixulie
zuichangdandiaozixulie_EXTERNAL_OBJECTS =

zuichangdandiaozixulie.exe: CMakeFiles/zuichangdandiaozixulie.dir/main.c.obj
zuichangdandiaozixulie.exe: CMakeFiles/zuichangdandiaozixulie.dir/build.make
zuichangdandiaozixulie.exe: CMakeFiles/zuichangdandiaozixulie.dir/linklibs.rsp
zuichangdandiaozixulie.exe: CMakeFiles/zuichangdandiaozixulie.dir/objects1.rsp
zuichangdandiaozixulie.exe: CMakeFiles/zuichangdandiaozixulie.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\code\c\zuichangdandiaozixulie\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable zuichangdandiaozixulie.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\zuichangdandiaozixulie.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/zuichangdandiaozixulie.dir/build: zuichangdandiaozixulie.exe

.PHONY : CMakeFiles/zuichangdandiaozixulie.dir/build

CMakeFiles/zuichangdandiaozixulie.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\zuichangdandiaozixulie.dir\cmake_clean.cmake
.PHONY : CMakeFiles/zuichangdandiaozixulie.dir/clean

CMakeFiles/zuichangdandiaozixulie.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\c\zuichangdandiaozixulie D:\code\c\zuichangdandiaozixulie D:\code\c\zuichangdandiaozixulie\cmake-build-debug D:\code\c\zuichangdandiaozixulie\cmake-build-debug D:\code\c\zuichangdandiaozixulie\cmake-build-debug\CMakeFiles\zuichangdandiaozixulie.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/zuichangdandiaozixulie.dir/depend

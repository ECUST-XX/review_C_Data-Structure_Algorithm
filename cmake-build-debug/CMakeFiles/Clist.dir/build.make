# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = "D:\Clion\CLion 2017.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Clion\CLion 2017.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\XX\Desktop\CCC\Clist

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\XX\Desktop\CCC\Clist\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Clist.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Clist.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Clist.dir/flags.make

CMakeFiles/Clist.dir/main.c.obj: CMakeFiles/Clist.dir/flags.make
CMakeFiles/Clist.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\XX\Desktop\CCC\Clist\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Clist.dir/main.c.obj"
	D:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Clist.dir\main.c.obj   -c C:\Users\XX\Desktop\CCC\Clist\main.c

CMakeFiles/Clist.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Clist.dir/main.c.i"
	D:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\XX\Desktop\CCC\Clist\main.c > CMakeFiles\Clist.dir\main.c.i

CMakeFiles/Clist.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Clist.dir/main.c.s"
	D:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\XX\Desktop\CCC\Clist\main.c -o CMakeFiles\Clist.dir\main.c.s

CMakeFiles/Clist.dir/main.c.obj.requires:

.PHONY : CMakeFiles/Clist.dir/main.c.obj.requires

CMakeFiles/Clist.dir/main.c.obj.provides: CMakeFiles/Clist.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\Clist.dir\build.make CMakeFiles/Clist.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/Clist.dir/main.c.obj.provides

CMakeFiles/Clist.dir/main.c.obj.provides.build: CMakeFiles/Clist.dir/main.c.obj


# Object files for target Clist
Clist_OBJECTS = \
"CMakeFiles/Clist.dir/main.c.obj"

# External object files for target Clist
Clist_EXTERNAL_OBJECTS =

Clist.exe: CMakeFiles/Clist.dir/main.c.obj
Clist.exe: CMakeFiles/Clist.dir/build.make
Clist.exe: CMakeFiles/Clist.dir/linklibs.rsp
Clist.exe: CMakeFiles/Clist.dir/objects1.rsp
Clist.exe: CMakeFiles/Clist.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\XX\Desktop\CCC\Clist\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Clist.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Clist.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Clist.dir/build: Clist.exe

.PHONY : CMakeFiles/Clist.dir/build

CMakeFiles/Clist.dir/requires: CMakeFiles/Clist.dir/main.c.obj.requires

.PHONY : CMakeFiles/Clist.dir/requires

CMakeFiles/Clist.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Clist.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Clist.dir/clean

CMakeFiles/Clist.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\XX\Desktop\CCC\Clist C:\Users\XX\Desktop\CCC\Clist C:\Users\XX\Desktop\CCC\Clist\cmake-build-debug C:\Users\XX\Desktop\CCC\Clist\cmake-build-debug C:\Users\XX\Desktop\CCC\Clist\cmake-build-debug\CMakeFiles\Clist.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Clist.dir/depend

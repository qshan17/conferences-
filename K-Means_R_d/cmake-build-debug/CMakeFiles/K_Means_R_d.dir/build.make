
# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Marius\Desktop\K-Means_R_d

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Marius\Desktop\K-Means_R_d\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/K_Means_R_d.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/K_Means_R_d.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/K_Means_R_d.dir/flags.make

CMakeFiles/K_Means_R_d.dir/main.c.obj: CMakeFiles/K_Means_R_d.dir/flags.make
CMakeFiles/K_Means_R_d.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Marius\Desktop\K-Means_R_d\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/K_Means_R_d.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\K_Means_R_d.dir\main.c.obj   -c C:\Users\Marius\Desktop\K-Means_R_d\main.c

CMakeFiles/K_Means_R_d.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/K_Means_R_d.dir/main.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Marius\Desktop\K-Means_R_d\main.c > CMakeFiles\K_Means_R_d.dir\main.c.i

CMakeFiles/K_Means_R_d.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/K_Means_R_d.dir/main.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Marius\Desktop\K-Means_R_d\main.c -o CMakeFiles\K_Means_R_d.dir\main.c.s

CMakeFiles/K_Means_R_d.dir/main.c.obj.requires:

.PHONY : CMakeFiles/K_Means_R_d.dir/main.c.obj.requires

CMakeFiles/K_Means_R_d.dir/main.c.obj.provides: CMakeFiles/K_Means_R_d.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\K_Means_R_d.dir\build.make CMakeFiles/K_Means_R_d.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/K_Means_R_d.dir/main.c.obj.provides

CMakeFiles/K_Means_R_d.dir/main.c.obj.provides.build: CMakeFiles/K_Means_R_d.dir/main.c.obj


CMakeFiles/K_Means_R_d.dir/utils.c.obj: CMakeFiles/K_Means_R_d.dir/flags.make
CMakeFiles/K_Means_R_d.dir/utils.c.obj: ../utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Marius\Desktop\K-Means_R_d\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/K_Means_R_d.dir/utils.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\K_Means_R_d.dir\utils.c.obj   -c C:\Users\Marius\Desktop\K-Means_R_d\utils.c

CMakeFiles/K_Means_R_d.dir/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/K_Means_R_d.dir/utils.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Marius\Desktop\K-Means_R_d\utils.c > CMakeFiles\K_Means_R_d.dir\utils.c.i

CMakeFiles/K_Means_R_d.dir/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/K_Means_R_d.dir/utils.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Marius\Desktop\K-Means_R_d\utils.c -o CMakeFiles\K_Means_R_d.dir\utils.c.s

CMakeFiles/K_Means_R_d.dir/utils.c.obj.requires:

.PHONY : CMakeFiles/K_Means_R_d.dir/utils.c.obj.requires

CMakeFiles/K_Means_R_d.dir/utils.c.obj.provides: CMakeFiles/K_Means_R_d.dir/utils.c.obj.requires
	$(MAKE) -f CMakeFiles\K_Means_R_d.dir\build.make CMakeFiles/K_Means_R_d.dir/utils.c.obj.provides.build
.PHONY : CMakeFiles/K_Means_R_d.dir/utils.c.obj.provides

CMakeFiles/K_Means_R_d.dir/utils.c.obj.provides.build: CMakeFiles/K_Means_R_d.dir/utils.c.obj


# Object files for target K_Means_R_d
K_Means_R_d_OBJECTS = \
"CMakeFiles/K_Means_R_d.dir/main.c.obj" \
"CMakeFiles/K_Means_R_d.dir/utils.c.obj"

# External object files for target K_Means_R_d
K_Means_R_d_EXTERNAL_OBJECTS =

K_Means_R_d.exe: CMakeFiles/K_Means_R_d.dir/main.c.obj
K_Means_R_d.exe: CMakeFiles/K_Means_R_d.dir/utils.c.obj
K_Means_R_d.exe: CMakeFiles/K_Means_R_d.dir/build.make
K_Means_R_d.exe: CMakeFiles/K_Means_R_d.dir/linklibs.rsp
K_Means_R_d.exe: CMakeFiles/K_Means_R_d.dir/objects1.rsp
K_Means_R_d.exe: CMakeFiles/K_Means_R_d.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Marius\Desktop\K-Means_R_d\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable K_Means_R_d.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\K_Means_R_d.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/K_Means_R_d.dir/build: K_Means_R_d.exe

.PHONY : CMakeFiles/K_Means_R_d.dir/build

CMakeFiles/K_Means_R_d.dir/requires: CMakeFiles/K_Means_R_d.dir/main.c.obj.requires
CMakeFiles/K_Means_R_d.dir/requires: CMakeFiles/K_Means_R_d.dir/utils.c.obj.requires

.PHONY : CMakeFiles/K_Means_R_d.dir/requires

CMakeFiles/K_Means_R_d.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\K_Means_R_d.dir\cmake_clean.cmake
.PHONY : CMakeFiles/K_Means_R_d.dir/clean

CMakeFiles/K_Means_R_d.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Marius\Desktop\K-Means_R_d C:\Users\Marius\Desktop\K-Means_R_d C:\Users\Marius\Desktop\K-Means_R_d\cmake-build-debug C:\Users\Marius\Desktop\K-Means_R_d\cmake-build-debug C:\Users\Marius\Desktop\K-Means_R_d\cmake-build-debug\CMakeFiles\K_Means_R_d.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/K_Means_R_d.dir/depend
# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.3.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.3.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\MySourceCode\DDSA-1-Zoom\DDSA-Diploma-In-Datastructures-and-Algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\MySourceCode\DDSA-1-Zoom\DDSA-Diploma-In-Datastructures-and-Algorithms\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DDSA_1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/DDSA_1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/DDSA_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DDSA_1.dir/flags.make

CMakeFiles/DDSA_1.dir/15-Day/15.2-OurProgram.c.obj: CMakeFiles/DDSA_1.dir/flags.make
CMakeFiles/DDSA_1.dir/15-Day/15.2-OurProgram.c.obj: F:/MySourceCode/DDSA-1-Zoom/DDSA-Diploma-In-Datastructures-and-Algorithms/15-Day/15.2-OurProgram.c
CMakeFiles/DDSA_1.dir/15-Day/15.2-OurProgram.c.obj: CMakeFiles/DDSA_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=F:\MySourceCode\DDSA-1-Zoom\DDSA-Diploma-In-Datastructures-and-Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/DDSA_1.dir/15-Day/15.2-OurProgram.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/DDSA_1.dir/15-Day/15.2-OurProgram.c.obj -MF CMakeFiles\DDSA_1.dir\15-Day\15.2-OurProgram.c.obj.d -o CMakeFiles\DDSA_1.dir\15-Day\15.2-OurProgram.c.obj -c F:\MySourceCode\DDSA-1-Zoom\DDSA-Diploma-In-Datastructures-and-Algorithms\15-Day\15.2-OurProgram.c

CMakeFiles/DDSA_1.dir/15-Day/15.2-OurProgram.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/DDSA_1.dir/15-Day/15.2-OurProgram.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\MySourceCode\DDSA-1-Zoom\DDSA-Diploma-In-Datastructures-and-Algorithms\15-Day\15.2-OurProgram.c > CMakeFiles\DDSA_1.dir\15-Day\15.2-OurProgram.c.i

CMakeFiles/DDSA_1.dir/15-Day/15.2-OurProgram.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/DDSA_1.dir/15-Day/15.2-OurProgram.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\MySourceCode\DDSA-1-Zoom\DDSA-Diploma-In-Datastructures-and-Algorithms\15-Day\15.2-OurProgram.c -o CMakeFiles\DDSA_1.dir\15-Day\15.2-OurProgram.c.s

# Object files for target DDSA_1
DDSA_1_OBJECTS = \
"CMakeFiles/DDSA_1.dir/15-Day/15.2-OurProgram.c.obj"

# External object files for target DDSA_1
DDSA_1_EXTERNAL_OBJECTS =

DDSA_1.exe: CMakeFiles/DDSA_1.dir/15-Day/15.2-OurProgram.c.obj
DDSA_1.exe: CMakeFiles/DDSA_1.dir/build.make
DDSA_1.exe: CMakeFiles/DDSA_1.dir/linkLibs.rsp
DDSA_1.exe: CMakeFiles/DDSA_1.dir/objects1.rsp
DDSA_1.exe: CMakeFiles/DDSA_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=F:\MySourceCode\DDSA-1-Zoom\DDSA-Diploma-In-Datastructures-and-Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable DDSA_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\DDSA_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DDSA_1.dir/build: DDSA_1.exe
.PHONY : CMakeFiles/DDSA_1.dir/build

CMakeFiles/DDSA_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\DDSA_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/DDSA_1.dir/clean

CMakeFiles/DDSA_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\MySourceCode\DDSA-1-Zoom\DDSA-Diploma-In-Datastructures-and-Algorithms F:\MySourceCode\DDSA-1-Zoom\DDSA-Diploma-In-Datastructures-and-Algorithms F:\MySourceCode\DDSA-1-Zoom\DDSA-Diploma-In-Datastructures-and-Algorithms\cmake-build-debug F:\MySourceCode\DDSA-1-Zoom\DDSA-Diploma-In-Datastructures-and-Algorithms\cmake-build-debug F:\MySourceCode\DDSA-1-Zoom\DDSA-Diploma-In-Datastructures-and-Algorithms\cmake-build-debug\CMakeFiles\DDSA_1.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/DDSA_1.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/angelamunozc/Descargas/practica2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/angelamunozc/Descargas/practica2/build

# Include any dependencies generated for this target.
include CMakeFiles/testmru.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/testmru.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/testmru.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testmru.dir/flags.make

CMakeFiles/testmru.dir/src/testmru.cpp.o: CMakeFiles/testmru.dir/flags.make
CMakeFiles/testmru.dir/src/testmru.cpp.o: ../src/testmru.cpp
CMakeFiles/testmru.dir/src/testmru.cpp.o: CMakeFiles/testmru.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/angelamunozc/Descargas/practica2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testmru.dir/src/testmru.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/testmru.dir/src/testmru.cpp.o -MF CMakeFiles/testmru.dir/src/testmru.cpp.o.d -o CMakeFiles/testmru.dir/src/testmru.cpp.o -c /home/angelamunozc/Descargas/practica2/src/testmru.cpp

CMakeFiles/testmru.dir/src/testmru.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testmru.dir/src/testmru.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/angelamunozc/Descargas/practica2/src/testmru.cpp > CMakeFiles/testmru.dir/src/testmru.cpp.i

CMakeFiles/testmru.dir/src/testmru.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testmru.dir/src/testmru.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/angelamunozc/Descargas/practica2/src/testmru.cpp -o CMakeFiles/testmru.dir/src/testmru.cpp.s

# Object files for target testmru
testmru_OBJECTS = \
"CMakeFiles/testmru.dir/src/testmru.cpp.o"

# External object files for target testmru
testmru_EXTERNAL_OBJECTS =

testmru: CMakeFiles/testmru.dir/src/testmru.cpp.o
testmru: CMakeFiles/testmru.dir/build.make
testmru: libcinematica.a
testmru: CMakeFiles/testmru.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/angelamunozc/Descargas/practica2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testmru"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testmru.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testmru.dir/build: testmru
.PHONY : CMakeFiles/testmru.dir/build

CMakeFiles/testmru.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testmru.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testmru.dir/clean

CMakeFiles/testmru.dir/depend:
	cd /home/angelamunozc/Descargas/practica2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/angelamunozc/Descargas/practica2 /home/angelamunozc/Descargas/practica2 /home/angelamunozc/Descargas/practica2/build /home/angelamunozc/Descargas/practica2/build /home/angelamunozc/Descargas/practica2/build/CMakeFiles/testmru.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testmru.dir/depend


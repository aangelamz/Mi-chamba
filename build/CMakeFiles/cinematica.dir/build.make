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
include CMakeFiles/cinematica.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cinematica.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cinematica.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cinematica.dir/flags.make

CMakeFiles/cinematica.dir/src/vector2d.cpp.o: CMakeFiles/cinematica.dir/flags.make
CMakeFiles/cinematica.dir/src/vector2d.cpp.o: ../src/vector2d.cpp
CMakeFiles/cinematica.dir/src/vector2d.cpp.o: CMakeFiles/cinematica.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/angelamunozc/Descargas/practica2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cinematica.dir/src/vector2d.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cinematica.dir/src/vector2d.cpp.o -MF CMakeFiles/cinematica.dir/src/vector2d.cpp.o.d -o CMakeFiles/cinematica.dir/src/vector2d.cpp.o -c /home/angelamunozc/Descargas/practica2/src/vector2d.cpp

CMakeFiles/cinematica.dir/src/vector2d.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cinematica.dir/src/vector2d.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/angelamunozc/Descargas/practica2/src/vector2d.cpp > CMakeFiles/cinematica.dir/src/vector2d.cpp.i

CMakeFiles/cinematica.dir/src/vector2d.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cinematica.dir/src/vector2d.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/angelamunozc/Descargas/practica2/src/vector2d.cpp -o CMakeFiles/cinematica.dir/src/vector2d.cpp.s

CMakeFiles/cinematica.dir/src/particula.cpp.o: CMakeFiles/cinematica.dir/flags.make
CMakeFiles/cinematica.dir/src/particula.cpp.o: ../src/particula.cpp
CMakeFiles/cinematica.dir/src/particula.cpp.o: CMakeFiles/cinematica.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/angelamunozc/Descargas/practica2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cinematica.dir/src/particula.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cinematica.dir/src/particula.cpp.o -MF CMakeFiles/cinematica.dir/src/particula.cpp.o.d -o CMakeFiles/cinematica.dir/src/particula.cpp.o -c /home/angelamunozc/Descargas/practica2/src/particula.cpp

CMakeFiles/cinematica.dir/src/particula.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cinematica.dir/src/particula.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/angelamunozc/Descargas/practica2/src/particula.cpp > CMakeFiles/cinematica.dir/src/particula.cpp.i

CMakeFiles/cinematica.dir/src/particula.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cinematica.dir/src/particula.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/angelamunozc/Descargas/practica2/src/particula.cpp -o CMakeFiles/cinematica.dir/src/particula.cpp.s

CMakeFiles/cinematica.dir/src/matematicas.cpp.o: CMakeFiles/cinematica.dir/flags.make
CMakeFiles/cinematica.dir/src/matematicas.cpp.o: ../src/matematicas.cpp
CMakeFiles/cinematica.dir/src/matematicas.cpp.o: CMakeFiles/cinematica.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/angelamunozc/Descargas/practica2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cinematica.dir/src/matematicas.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cinematica.dir/src/matematicas.cpp.o -MF CMakeFiles/cinematica.dir/src/matematicas.cpp.o.d -o CMakeFiles/cinematica.dir/src/matematicas.cpp.o -c /home/angelamunozc/Descargas/practica2/src/matematicas.cpp

CMakeFiles/cinematica.dir/src/matematicas.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cinematica.dir/src/matematicas.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/angelamunozc/Descargas/practica2/src/matematicas.cpp > CMakeFiles/cinematica.dir/src/matematicas.cpp.i

CMakeFiles/cinematica.dir/src/matematicas.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cinematica.dir/src/matematicas.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/angelamunozc/Descargas/practica2/src/matematicas.cpp -o CMakeFiles/cinematica.dir/src/matematicas.cpp.s

# Object files for target cinematica
cinematica_OBJECTS = \
"CMakeFiles/cinematica.dir/src/vector2d.cpp.o" \
"CMakeFiles/cinematica.dir/src/particula.cpp.o" \
"CMakeFiles/cinematica.dir/src/matematicas.cpp.o"

# External object files for target cinematica
cinematica_EXTERNAL_OBJECTS =

libcinematica.a: CMakeFiles/cinematica.dir/src/vector2d.cpp.o
libcinematica.a: CMakeFiles/cinematica.dir/src/particula.cpp.o
libcinematica.a: CMakeFiles/cinematica.dir/src/matematicas.cpp.o
libcinematica.a: CMakeFiles/cinematica.dir/build.make
libcinematica.a: CMakeFiles/cinematica.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/angelamunozc/Descargas/practica2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libcinematica.a"
	$(CMAKE_COMMAND) -P CMakeFiles/cinematica.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cinematica.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cinematica.dir/build: libcinematica.a
.PHONY : CMakeFiles/cinematica.dir/build

CMakeFiles/cinematica.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cinematica.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cinematica.dir/clean

CMakeFiles/cinematica.dir/depend:
	cd /home/angelamunozc/Descargas/practica2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/angelamunozc/Descargas/practica2 /home/angelamunozc/Descargas/practica2 /home/angelamunozc/Descargas/practica2/build /home/angelamunozc/Descargas/practica2/build /home/angelamunozc/Descargas/practica2/build/CMakeFiles/cinematica.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cinematica.dir/depend


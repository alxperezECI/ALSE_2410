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
CMAKE_SOURCE_DIR = /home/fedec/exmpl/ALSE_2410/parcial_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fedec/exmpl/ALSE_2410/parcial_1/build

# Include any dependencies generated for this target.
include CMakeFiles/lectura_coef.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lectura_coef.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lectura_coef.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lectura_coef.dir/flags.make

CMakeFiles/lectura_coef.dir/parcial.cpp.o: CMakeFiles/lectura_coef.dir/flags.make
CMakeFiles/lectura_coef.dir/parcial.cpp.o: ../parcial.cpp
CMakeFiles/lectura_coef.dir/parcial.cpp.o: CMakeFiles/lectura_coef.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fedec/exmpl/ALSE_2410/parcial_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lectura_coef.dir/parcial.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lectura_coef.dir/parcial.cpp.o -MF CMakeFiles/lectura_coef.dir/parcial.cpp.o.d -o CMakeFiles/lectura_coef.dir/parcial.cpp.o -c /home/fedec/exmpl/ALSE_2410/parcial_1/parcial.cpp

CMakeFiles/lectura_coef.dir/parcial.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lectura_coef.dir/parcial.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fedec/exmpl/ALSE_2410/parcial_1/parcial.cpp > CMakeFiles/lectura_coef.dir/parcial.cpp.i

CMakeFiles/lectura_coef.dir/parcial.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lectura_coef.dir/parcial.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fedec/exmpl/ALSE_2410/parcial_1/parcial.cpp -o CMakeFiles/lectura_coef.dir/parcial.cpp.s

# Object files for target lectura_coef
lectura_coef_OBJECTS = \
"CMakeFiles/lectura_coef.dir/parcial.cpp.o"

# External object files for target lectura_coef
lectura_coef_EXTERNAL_OBJECTS =

lectura_coef: CMakeFiles/lectura_coef.dir/parcial.cpp.o
lectura_coef: CMakeFiles/lectura_coef.dir/build.make
lectura_coef: CMakeFiles/lectura_coef.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fedec/exmpl/ALSE_2410/parcial_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lectura_coef"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lectura_coef.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lectura_coef.dir/build: lectura_coef
.PHONY : CMakeFiles/lectura_coef.dir/build

CMakeFiles/lectura_coef.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lectura_coef.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lectura_coef.dir/clean

CMakeFiles/lectura_coef.dir/depend:
	cd /home/fedec/exmpl/ALSE_2410/parcial_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fedec/exmpl/ALSE_2410/parcial_1 /home/fedec/exmpl/ALSE_2410/parcial_1 /home/fedec/exmpl/ALSE_2410/parcial_1/build /home/fedec/exmpl/ALSE_2410/parcial_1/build /home/fedec/exmpl/ALSE_2410/parcial_1/build/CMakeFiles/lectura_coef.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lectura_coef.dir/depend


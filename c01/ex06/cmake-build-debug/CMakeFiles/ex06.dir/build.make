# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sglossu/Desktop/CPP-Modules/c01/ex06

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sglossu/Desktop/CPP-Modules/c01/ex06/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex06.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ex06.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex06.dir/flags.make

CMakeFiles/ex06.dir/main.cpp.o: CMakeFiles/ex06.dir/flags.make
CMakeFiles/ex06.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sglossu/Desktop/CPP-Modules/c01/ex06/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex06.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex06.dir/main.cpp.o -c /Users/sglossu/Desktop/CPP-Modules/c01/ex06/main.cpp

CMakeFiles/ex06.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex06.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sglossu/Desktop/CPP-Modules/c01/ex06/main.cpp > CMakeFiles/ex06.dir/main.cpp.i

CMakeFiles/ex06.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex06.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sglossu/Desktop/CPP-Modules/c01/ex06/main.cpp -o CMakeFiles/ex06.dir/main.cpp.s

CMakeFiles/ex06.dir/Karen.cpp.o: CMakeFiles/ex06.dir/flags.make
CMakeFiles/ex06.dir/Karen.cpp.o: ../Karen.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sglossu/Desktop/CPP-Modules/c01/ex06/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex06.dir/Karen.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex06.dir/Karen.cpp.o -c /Users/sglossu/Desktop/CPP-Modules/c01/ex06/Karen.cpp

CMakeFiles/ex06.dir/Karen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex06.dir/Karen.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sglossu/Desktop/CPP-Modules/c01/ex06/Karen.cpp > CMakeFiles/ex06.dir/Karen.cpp.i

CMakeFiles/ex06.dir/Karen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex06.dir/Karen.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sglossu/Desktop/CPP-Modules/c01/ex06/Karen.cpp -o CMakeFiles/ex06.dir/Karen.cpp.s

# Object files for target ex06
ex06_OBJECTS = \
"CMakeFiles/ex06.dir/main.cpp.o" \
"CMakeFiles/ex06.dir/Karen.cpp.o"

# External object files for target ex06
ex06_EXTERNAL_OBJECTS =

ex06: CMakeFiles/ex06.dir/main.cpp.o
ex06: CMakeFiles/ex06.dir/Karen.cpp.o
ex06: CMakeFiles/ex06.dir/build.make
ex06: CMakeFiles/ex06.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sglossu/Desktop/CPP-Modules/c01/ex06/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ex06"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex06.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex06.dir/build: ex06
.PHONY : CMakeFiles/ex06.dir/build

CMakeFiles/ex06.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex06.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex06.dir/clean

CMakeFiles/ex06.dir/depend:
	cd /Users/sglossu/Desktop/CPP-Modules/c01/ex06/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sglossu/Desktop/CPP-Modules/c01/ex06 /Users/sglossu/Desktop/CPP-Modules/c01/ex06 /Users/sglossu/Desktop/CPP-Modules/c01/ex06/cmake-build-debug /Users/sglossu/Desktop/CPP-Modules/c01/ex06/cmake-build-debug /Users/sglossu/Desktop/CPP-Modules/c01/ex06/cmake-build-debug/CMakeFiles/ex06.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex06.dir/depend


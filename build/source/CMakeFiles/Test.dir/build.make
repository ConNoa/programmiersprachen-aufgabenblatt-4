# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.7.2_1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.7.2_1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4/build

# Include any dependencies generated for this target.
include source/CMakeFiles/Test.dir/depend.make

# Include the progress variables for this target.
include source/CMakeFiles/Test.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/Test.dir/flags.make

source/CMakeFiles/Test.dir/TestList.cpp.o: source/CMakeFiles/Test.dir/flags.make
source/CMakeFiles/Test.dir/TestList.cpp.o: ../source/TestList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/Test.dir/TestList.cpp.o"
	cd /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4/build/source && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/TestList.cpp.o -c /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4/source/TestList.cpp

source/CMakeFiles/Test.dir/TestList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/TestList.cpp.i"
	cd /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4/build/source && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4/source/TestList.cpp > CMakeFiles/Test.dir/TestList.cpp.i

source/CMakeFiles/Test.dir/TestList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/TestList.cpp.s"
	cd /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4/build/source && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4/source/TestList.cpp -o CMakeFiles/Test.dir/TestList.cpp.s

source/CMakeFiles/Test.dir/TestList.cpp.o.requires:

.PHONY : source/CMakeFiles/Test.dir/TestList.cpp.o.requires

source/CMakeFiles/Test.dir/TestList.cpp.o.provides: source/CMakeFiles/Test.dir/TestList.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/Test.dir/build.make source/CMakeFiles/Test.dir/TestList.cpp.o.provides.build
.PHONY : source/CMakeFiles/Test.dir/TestList.cpp.o.provides

source/CMakeFiles/Test.dir/TestList.cpp.o.provides.build: source/CMakeFiles/Test.dir/TestList.cpp.o


# Object files for target Test
Test_OBJECTS = \
"CMakeFiles/Test.dir/TestList.cpp.o"

# External object files for target Test
Test_EXTERNAL_OBJECTS =

source/Test: source/CMakeFiles/Test.dir/TestList.cpp.o
source/Test: source/CMakeFiles/Test.dir/build.make
source/Test: source/CMakeFiles/Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Test"
	cd /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4/build/source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/Test.dir/build: source/Test

.PHONY : source/CMakeFiles/Test.dir/build

source/CMakeFiles/Test.dir/requires: source/CMakeFiles/Test.dir/TestList.cpp.o.requires

.PHONY : source/CMakeFiles/Test.dir/requires

source/CMakeFiles/Test.dir/clean:
	cd /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4/build/source && $(CMAKE_COMMAND) -P CMakeFiles/Test.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/Test.dir/clean

source/CMakeFiles/Test.dir/depend:
	cd /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4 /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4/source /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4/build /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4/build/source /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen-aufgabenblatt-4/build/source/CMakeFiles/Test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/CMakeFiles/Test.dir/depend


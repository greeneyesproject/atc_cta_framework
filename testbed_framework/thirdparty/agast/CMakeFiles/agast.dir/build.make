# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tony/Scrivania/st-evaluation-dist_NEW

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tony/Scrivania/st-evaluation-dist_NEW

# Include any dependencies generated for this target.
include thirdparty/agast/CMakeFiles/agast.dir/depend.make

# Include the progress variables for this target.
include thirdparty/agast/CMakeFiles/agast.dir/progress.make

# Include the compile flags for this target's objects.
include thirdparty/agast/CMakeFiles/agast.dir/flags.make

thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8.o: thirdparty/agast/CMakeFiles/agast.dir/flags.make
thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8.o: thirdparty/agast/src/agast5_8.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tony/Scrivania/st-evaluation-dist_NEW/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8.o"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/agast.dir/src/agast5_8.o -c /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast5_8.cc

thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/agast.dir/src/agast5_8.i"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast5_8.cc > CMakeFiles/agast.dir/src/agast5_8.i

thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/agast.dir/src/agast5_8.s"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast5_8.cc -o CMakeFiles/agast.dir/src/agast5_8.s

thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8.o.requires:
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8.o.requires

thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8.o.provides: thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8.o.requires
	$(MAKE) -f thirdparty/agast/CMakeFiles/agast.dir/build.make thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8.o.provides.build
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8.o.provides

thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8.o.provides.build: thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8.o

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d_nms.o: thirdparty/agast/CMakeFiles/agast.dir/flags.make
thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d_nms.o: thirdparty/agast/src/agast7_12d_nms.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tony/Scrivania/st-evaluation-dist_NEW/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d_nms.o"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/agast.dir/src/agast7_12d_nms.o -c /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast7_12d_nms.cc

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d_nms.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/agast.dir/src/agast7_12d_nms.i"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast7_12d_nms.cc > CMakeFiles/agast.dir/src/agast7_12d_nms.i

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d_nms.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/agast.dir/src/agast7_12d_nms.s"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast7_12d_nms.cc -o CMakeFiles/agast.dir/src/agast7_12d_nms.s

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d_nms.o.requires:
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d_nms.o.requires

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d_nms.o.provides: thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d_nms.o.requires
	$(MAKE) -f thirdparty/agast/CMakeFiles/agast.dir/build.make thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d_nms.o.provides.build
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d_nms.o.provides

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d_nms.o.provides.build: thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d_nms.o

thirdparty/agast/CMakeFiles/agast.dir/src/nonMaximumSuppression.o: thirdparty/agast/CMakeFiles/agast.dir/flags.make
thirdparty/agast/CMakeFiles/agast.dir/src/nonMaximumSuppression.o: thirdparty/agast/src/nonMaximumSuppression.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tony/Scrivania/st-evaluation-dist_NEW/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object thirdparty/agast/CMakeFiles/agast.dir/src/nonMaximumSuppression.o"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/agast.dir/src/nonMaximumSuppression.o -c /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/nonMaximumSuppression.cc

thirdparty/agast/CMakeFiles/agast.dir/src/nonMaximumSuppression.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/agast.dir/src/nonMaximumSuppression.i"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/nonMaximumSuppression.cc > CMakeFiles/agast.dir/src/nonMaximumSuppression.i

thirdparty/agast/CMakeFiles/agast.dir/src/nonMaximumSuppression.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/agast.dir/src/nonMaximumSuppression.s"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/nonMaximumSuppression.cc -o CMakeFiles/agast.dir/src/nonMaximumSuppression.s

thirdparty/agast/CMakeFiles/agast.dir/src/nonMaximumSuppression.o.requires:
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/nonMaximumSuppression.o.requires

thirdparty/agast/CMakeFiles/agast.dir/src/nonMaximumSuppression.o.provides: thirdparty/agast/CMakeFiles/agast.dir/src/nonMaximumSuppression.o.requires
	$(MAKE) -f thirdparty/agast/CMakeFiles/agast.dir/build.make thirdparty/agast/CMakeFiles/agast.dir/src/nonMaximumSuppression.o.provides.build
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/nonMaximumSuppression.o.provides

thirdparty/agast/CMakeFiles/agast.dir/src/nonMaximumSuppression.o.provides.build: thirdparty/agast/CMakeFiles/agast.dir/src/nonMaximumSuppression.o

thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16_nms.o: thirdparty/agast/CMakeFiles/agast.dir/flags.make
thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16_nms.o: thirdparty/agast/src/oast9_16_nms.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tony/Scrivania/st-evaluation-dist_NEW/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16_nms.o"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/agast.dir/src/oast9_16_nms.o -c /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/oast9_16_nms.cc

thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16_nms.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/agast.dir/src/oast9_16_nms.i"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/oast9_16_nms.cc > CMakeFiles/agast.dir/src/oast9_16_nms.i

thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16_nms.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/agast.dir/src/oast9_16_nms.s"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/oast9_16_nms.cc -o CMakeFiles/agast.dir/src/oast9_16_nms.s

thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16_nms.o.requires:
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16_nms.o.requires

thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16_nms.o.provides: thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16_nms.o.requires
	$(MAKE) -f thirdparty/agast/CMakeFiles/agast.dir/build.make thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16_nms.o.provides.build
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16_nms.o.provides

thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16_nms.o.provides.build: thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16_nms.o

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d.o: thirdparty/agast/CMakeFiles/agast.dir/flags.make
thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d.o: thirdparty/agast/src/agast7_12d.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tony/Scrivania/st-evaluation-dist_NEW/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d.o"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/agast.dir/src/agast7_12d.o -c /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast7_12d.cc

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/agast.dir/src/agast7_12d.i"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast7_12d.cc > CMakeFiles/agast.dir/src/agast7_12d.i

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/agast.dir/src/agast7_12d.s"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast7_12d.cc -o CMakeFiles/agast.dir/src/agast7_12d.s

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d.o.requires:
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d.o.requires

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d.o.provides: thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d.o.requires
	$(MAKE) -f thirdparty/agast/CMakeFiles/agast.dir/build.make thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d.o.provides.build
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d.o.provides

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d.o.provides.build: thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d.o

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s_nms.o: thirdparty/agast/CMakeFiles/agast.dir/flags.make
thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s_nms.o: thirdparty/agast/src/agast7_12s_nms.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tony/Scrivania/st-evaluation-dist_NEW/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s_nms.o"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/agast.dir/src/agast7_12s_nms.o -c /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast7_12s_nms.cc

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s_nms.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/agast.dir/src/agast7_12s_nms.i"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast7_12s_nms.cc > CMakeFiles/agast.dir/src/agast7_12s_nms.i

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s_nms.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/agast.dir/src/agast7_12s_nms.s"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast7_12s_nms.cc -o CMakeFiles/agast.dir/src/agast7_12s_nms.s

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s_nms.o.requires:
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s_nms.o.requires

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s_nms.o.provides: thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s_nms.o.requires
	$(MAKE) -f thirdparty/agast/CMakeFiles/agast.dir/build.make thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s_nms.o.provides.build
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s_nms.o.provides

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s_nms.o.provides.build: thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s_nms.o

thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8_nms.o: thirdparty/agast/CMakeFiles/agast.dir/flags.make
thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8_nms.o: thirdparty/agast/src/agast5_8_nms.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tony/Scrivania/st-evaluation-dist_NEW/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8_nms.o"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/agast.dir/src/agast5_8_nms.o -c /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast5_8_nms.cc

thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8_nms.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/agast.dir/src/agast5_8_nms.i"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast5_8_nms.cc > CMakeFiles/agast.dir/src/agast5_8_nms.i

thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8_nms.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/agast.dir/src/agast5_8_nms.s"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast5_8_nms.cc -o CMakeFiles/agast.dir/src/agast5_8_nms.s

thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8_nms.o.requires:
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8_nms.o.requires

thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8_nms.o.provides: thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8_nms.o.requires
	$(MAKE) -f thirdparty/agast/CMakeFiles/agast.dir/build.make thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8_nms.o.provides.build
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8_nms.o.provides

thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8_nms.o.provides.build: thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8_nms.o

thirdparty/agast/CMakeFiles/agast.dir/src/AstDetector.o: thirdparty/agast/CMakeFiles/agast.dir/flags.make
thirdparty/agast/CMakeFiles/agast.dir/src/AstDetector.o: thirdparty/agast/src/AstDetector.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tony/Scrivania/st-evaluation-dist_NEW/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object thirdparty/agast/CMakeFiles/agast.dir/src/AstDetector.o"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/agast.dir/src/AstDetector.o -c /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/AstDetector.cc

thirdparty/agast/CMakeFiles/agast.dir/src/AstDetector.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/agast.dir/src/AstDetector.i"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/AstDetector.cc > CMakeFiles/agast.dir/src/AstDetector.i

thirdparty/agast/CMakeFiles/agast.dir/src/AstDetector.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/agast.dir/src/AstDetector.s"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/AstDetector.cc -o CMakeFiles/agast.dir/src/AstDetector.s

thirdparty/agast/CMakeFiles/agast.dir/src/AstDetector.o.requires:
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/AstDetector.o.requires

thirdparty/agast/CMakeFiles/agast.dir/src/AstDetector.o.provides: thirdparty/agast/CMakeFiles/agast.dir/src/AstDetector.o.requires
	$(MAKE) -f thirdparty/agast/CMakeFiles/agast.dir/build.make thirdparty/agast/CMakeFiles/agast.dir/src/AstDetector.o.provides.build
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/AstDetector.o.provides

thirdparty/agast/CMakeFiles/agast.dir/src/AstDetector.o.provides.build: thirdparty/agast/CMakeFiles/agast.dir/src/AstDetector.o

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s.o: thirdparty/agast/CMakeFiles/agast.dir/flags.make
thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s.o: thirdparty/agast/src/agast7_12s.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tony/Scrivania/st-evaluation-dist_NEW/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s.o"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/agast.dir/src/agast7_12s.o -c /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast7_12s.cc

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/agast.dir/src/agast7_12s.i"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast7_12s.cc > CMakeFiles/agast.dir/src/agast7_12s.i

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/agast.dir/src/agast7_12s.s"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/agast7_12s.cc -o CMakeFiles/agast.dir/src/agast7_12s.s

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s.o.requires:
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s.o.requires

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s.o.provides: thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s.o.requires
	$(MAKE) -f thirdparty/agast/CMakeFiles/agast.dir/build.make thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s.o.provides.build
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s.o.provides

thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s.o.provides.build: thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s.o

thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16.o: thirdparty/agast/CMakeFiles/agast.dir/flags.make
thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16.o: thirdparty/agast/src/oast9_16.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tony/Scrivania/st-evaluation-dist_NEW/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16.o"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/agast.dir/src/oast9_16.o -c /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/oast9_16.cc

thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/agast.dir/src/oast9_16.i"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/oast9_16.cc > CMakeFiles/agast.dir/src/oast9_16.i

thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/agast.dir/src/oast9_16.s"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/src/oast9_16.cc -o CMakeFiles/agast.dir/src/oast9_16.s

thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16.o.requires:
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16.o.requires

thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16.o.provides: thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16.o.requires
	$(MAKE) -f thirdparty/agast/CMakeFiles/agast.dir/build.make thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16.o.provides.build
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16.o.provides

thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16.o.provides.build: thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16.o

# Object files for target agast
agast_OBJECTS = \
"CMakeFiles/agast.dir/src/agast5_8.o" \
"CMakeFiles/agast.dir/src/agast7_12d_nms.o" \
"CMakeFiles/agast.dir/src/nonMaximumSuppression.o" \
"CMakeFiles/agast.dir/src/oast9_16_nms.o" \
"CMakeFiles/agast.dir/src/agast7_12d.o" \
"CMakeFiles/agast.dir/src/agast7_12s_nms.o" \
"CMakeFiles/agast.dir/src/agast5_8_nms.o" \
"CMakeFiles/agast.dir/src/AstDetector.o" \
"CMakeFiles/agast.dir/src/agast7_12s.o" \
"CMakeFiles/agast.dir/src/oast9_16.o"

# External object files for target agast
agast_EXTERNAL_OBJECTS =

thirdparty/agast/libagast.so: thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8.o
thirdparty/agast/libagast.so: thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d_nms.o
thirdparty/agast/libagast.so: thirdparty/agast/CMakeFiles/agast.dir/src/nonMaximumSuppression.o
thirdparty/agast/libagast.so: thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16_nms.o
thirdparty/agast/libagast.so: thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d.o
thirdparty/agast/libagast.so: thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s_nms.o
thirdparty/agast/libagast.so: thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8_nms.o
thirdparty/agast/libagast.so: thirdparty/agast/CMakeFiles/agast.dir/src/AstDetector.o
thirdparty/agast/libagast.so: thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s.o
thirdparty/agast/libagast.so: thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16.o
thirdparty/agast/libagast.so: thirdparty/agast/CMakeFiles/agast.dir/build.make
thirdparty/agast/libagast.so: thirdparty/agast/CMakeFiles/agast.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libagast.so"
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/agast.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
thirdparty/agast/CMakeFiles/agast.dir/build: thirdparty/agast/libagast.so
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/build

thirdparty/agast/CMakeFiles/agast.dir/requires: thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8.o.requires
thirdparty/agast/CMakeFiles/agast.dir/requires: thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d_nms.o.requires
thirdparty/agast/CMakeFiles/agast.dir/requires: thirdparty/agast/CMakeFiles/agast.dir/src/nonMaximumSuppression.o.requires
thirdparty/agast/CMakeFiles/agast.dir/requires: thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16_nms.o.requires
thirdparty/agast/CMakeFiles/agast.dir/requires: thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12d.o.requires
thirdparty/agast/CMakeFiles/agast.dir/requires: thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s_nms.o.requires
thirdparty/agast/CMakeFiles/agast.dir/requires: thirdparty/agast/CMakeFiles/agast.dir/src/agast5_8_nms.o.requires
thirdparty/agast/CMakeFiles/agast.dir/requires: thirdparty/agast/CMakeFiles/agast.dir/src/AstDetector.o.requires
thirdparty/agast/CMakeFiles/agast.dir/requires: thirdparty/agast/CMakeFiles/agast.dir/src/agast7_12s.o.requires
thirdparty/agast/CMakeFiles/agast.dir/requires: thirdparty/agast/CMakeFiles/agast.dir/src/oast9_16.o.requires
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/requires

thirdparty/agast/CMakeFiles/agast.dir/clean:
	cd /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast && $(CMAKE_COMMAND) -P CMakeFiles/agast.dir/cmake_clean.cmake
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/clean

thirdparty/agast/CMakeFiles/agast.dir/depend:
	cd /home/tony/Scrivania/st-evaluation-dist_NEW && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tony/Scrivania/st-evaluation-dist_NEW /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast /home/tony/Scrivania/st-evaluation-dist_NEW /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast /home/tony/Scrivania/st-evaluation-dist_NEW/thirdparty/agast/CMakeFiles/agast.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : thirdparty/agast/CMakeFiles/agast.dir/depend

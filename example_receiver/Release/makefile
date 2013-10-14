################################################################################
# Automatically-generated file. Do not edit!
################################################################################

#SOME USEFUL VARIABLES
FRAMEWORK_FOLDER = ../../testbed_framework
OPENCV_INCLUDE_FOLDER = /home/tony/OpenCV/2.4.3/include
OPENCV_LIB_FOLDER = /home/tony/OpenCV/2.4.3/lib
USR_LIB_FOLDER = /usr/local/lib
INSTALL_FOLDER = /home/tony/Scrivania/example


-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include testbed_framework/thirdparty/coder/subdir.mk
-include testbed_framework/thirdparty/agast/src/subdir.mk
-include testbed_framework/thirdparty/agast/CMakeFiles/agast.dir/src/subdir.mk
-include testbed_framework/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: example_receiver

# Tool invocations
example_receiver: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C++ Linker'
	g++ -L$(USR_LIB_FOLDER) -L$(OPENCV_LIB_FOLDER) -Xlinker -rpath='$(OPENCV_LIB_FOLDER)' -Xlinker -rpath='$(USR_LIB_FOLDER)' -o "example_receiver" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C++_DEPS)$(C_DEPS)$(CC_DEPS)$(CPP_DEPS)$(EXECUTABLES)$(CXX_DEPS)$(C_UPPER_DEPS) example_receiver
	-@echo ' '

install: 
	@echo 'Installing the program in the folder $(INSTALL_FOLDER)'
	mkdir -p $(INSTALL_FOLDER)		
	cp example_receiver $(INSTALL_FOLDER)
	cp -r $(FRAMEWORK_FOLDER)/thirdparty/coder/brisk $(INSTALL_FOLDER)


.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

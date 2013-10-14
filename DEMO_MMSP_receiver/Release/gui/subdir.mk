################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../gui/testbed_gui.cpp 

OBJS += \
./gui/testbed_gui.o 

CPP_DEPS += \
./gui/testbed_gui.d 


# Each subdirectory must supply rules for building sources it contributes
gui/%.o: ../gui/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I$(OPENCV_INCLUDE_FOLDER) -I"../include" -I"$(FRAMEWORK_FOLDER)/includes" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include/agast" -O3 -Wall -c -fmessage-length=0 -msse4.2 `wx-config --cxxflags` -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



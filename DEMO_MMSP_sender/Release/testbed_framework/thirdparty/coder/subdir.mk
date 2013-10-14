################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
$(FRAMEWORK_FOLDER)/thirdparty/coder/ac_extended.cpp 

OBJS += \
./testbed_framework/thirdparty/coder/ac_extended.o 

CPP_DEPS += \
./testbed_framework/thirdparty/coder/ac_extended.d 


# Each subdirectory must supply rules for building sources it contributes
testbed_framework/thirdparty/coder/ac_extended.o: $(FRAMEWORK_FOLDER)/thirdparty/coder/ac_extended.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I$(OPENCV_INCLUDE_FOLDER) -I"../include" -I"$(FRAMEWORK_FOLDER)/includes" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include/agast" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



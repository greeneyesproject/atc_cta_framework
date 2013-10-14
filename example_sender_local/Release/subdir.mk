################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../brisk_with_lookup.cpp \
../example_sender.cpp 

OBJS += \
./brisk_with_lookup.o \
./example_sender.o 

CPP_DEPS += \
./brisk_with_lookup.d \
./example_sender.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I$(OPENCV_INCLUDE_FOLDER) -I"../include" -I"$(FRAMEWORK_FOLDER)/includes" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include/agast" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



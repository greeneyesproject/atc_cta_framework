################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
$(FRAMEWORK_FOLDER)/thirdparty/agast/src/AstDetector.cc \
$(FRAMEWORK_FOLDER)/thirdparty/agast/src/agast5_8.cc \
$(FRAMEWORK_FOLDER)/thirdparty/agast/src/agast5_8_nms.cc \
$(FRAMEWORK_FOLDER)/thirdparty/agast/src/agast7_12d.cc \
$(FRAMEWORK_FOLDER)/thirdparty/agast/src/agast7_12d_nms.cc \
$(FRAMEWORK_FOLDER)/thirdparty/agast/src/agast7_12s.cc \
$(FRAMEWORK_FOLDER)/thirdparty/agast/src/agast7_12s_nms.cc \
$(FRAMEWORK_FOLDER)/thirdparty/agast/src/nonMaximumSuppression.cc \
$(FRAMEWORK_FOLDER)/thirdparty/agast/src/oast9_16.cc \
$(FRAMEWORK_FOLDER)/thirdparty/agast/src/oast9_16_nms.cc 

OBJS += \
./testbed_framework/thirdparty/agast/src/AstDetector.o \
./testbed_framework/thirdparty/agast/src/agast5_8.o \
./testbed_framework/thirdparty/agast/src/agast5_8_nms.o \
./testbed_framework/thirdparty/agast/src/agast7_12d.o \
./testbed_framework/thirdparty/agast/src/agast7_12d_nms.o \
./testbed_framework/thirdparty/agast/src/agast7_12s.o \
./testbed_framework/thirdparty/agast/src/agast7_12s_nms.o \
./testbed_framework/thirdparty/agast/src/nonMaximumSuppression.o \
./testbed_framework/thirdparty/agast/src/oast9_16.o \
./testbed_framework/thirdparty/agast/src/oast9_16_nms.o 

CC_DEPS += \
./testbed_framework/thirdparty/agast/src/AstDetector.d \
./testbed_framework/thirdparty/agast/src/agast5_8.d \
./testbed_framework/thirdparty/agast/src/agast5_8_nms.d \
./testbed_framework/thirdparty/agast/src/agast7_12d.d \
./testbed_framework/thirdparty/agast/src/agast7_12d_nms.d \
./testbed_framework/thirdparty/agast/src/agast7_12s.d \
./testbed_framework/thirdparty/agast/src/agast7_12s_nms.d \
./testbed_framework/thirdparty/agast/src/nonMaximumSuppression.d \
./testbed_framework/thirdparty/agast/src/oast9_16.d \
./testbed_framework/thirdparty/agast/src/oast9_16_nms.d 


# Each subdirectory must supply rules for building sources it contributes
testbed_framework/thirdparty/agast/src/AstDetector.o: $(FRAMEWORK_FOLDER)/thirdparty/agast/src/AstDetector.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I$(OPENCV_INCLUDE_FOLDER) -I"../include" -I"$(FRAMEWORK_FOLDER)/includes" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include/agast" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

testbed_framework/thirdparty/agast/src/agast5_8.o: $(FRAMEWORK_FOLDER)/thirdparty/agast/src/agast5_8.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I$(OPENCV_INCLUDE_FOLDER) -I"../include" -I"$(FRAMEWORK_FOLDER)/includes" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include/agast" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

testbed_framework/thirdparty/agast/src/agast5_8_nms.o: $(FRAMEWORK_FOLDER)/thirdparty/agast/src/agast5_8_nms.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I$(OPENCV_INCLUDE_FOLDER) -I"../include" -I"$(FRAMEWORK_FOLDER)/includes" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include/agast" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

testbed_framework/thirdparty/agast/src/agast7_12d.o: $(FRAMEWORK_FOLDER)/thirdparty/agast/src/agast7_12d.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I$(OPENCV_INCLUDE_FOLDER) -I"../include" -I"$(FRAMEWORK_FOLDER)/includes" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include/agast" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

testbed_framework/thirdparty/agast/src/agast7_12d_nms.o: $(FRAMEWORK_FOLDER)/thirdparty/agast/src/agast7_12d_nms.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I$(OPENCV_INCLUDE_FOLDER) -I"../include" -I"$(FRAMEWORK_FOLDER)/includes" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include/agast" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

testbed_framework/thirdparty/agast/src/agast7_12s.o: $(FRAMEWORK_FOLDER)/thirdparty/agast/src/agast7_12s.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I$(OPENCV_INCLUDE_FOLDER) -I"../include" -I"$(FRAMEWORK_FOLDER)/includes" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include/agast" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

testbed_framework/thirdparty/agast/src/agast7_12s_nms.o: $(FRAMEWORK_FOLDER)/thirdparty/agast/src/agast7_12s_nms.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I$(OPENCV_INCLUDE_FOLDER) -I"../include" -I"$(FRAMEWORK_FOLDER)/includes" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include/agast" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

testbed_framework/thirdparty/agast/src/nonMaximumSuppression.o: $(FRAMEWORK_FOLDER)/thirdparty/agast/src/nonMaximumSuppression.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I$(OPENCV_INCLUDE_FOLDER) -I"../include" -I"$(FRAMEWORK_FOLDER)/includes" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include/agast" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

testbed_framework/thirdparty/agast/src/oast9_16.o: $(FRAMEWORK_FOLDER)/thirdparty/agast/src/oast9_16.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I$(OPENCV_INCLUDE_FOLDER) -I"../include" -I"$(FRAMEWORK_FOLDER)/includes" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include/agast" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

testbed_framework/thirdparty/agast/src/oast9_16_nms.o: $(FRAMEWORK_FOLDER)/thirdparty/agast/src/oast9_16_nms.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I$(OPENCV_INCLUDE_FOLDER) -I"../include" -I"$(FRAMEWORK_FOLDER)/includes" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include" -I"$(FRAMEWORK_FOLDER)/thirdparty/agast/include/agast" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



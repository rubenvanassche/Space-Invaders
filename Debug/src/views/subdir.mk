################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/views/AlienView.cpp \
../src/views/GunView.cpp 

OBJS += \
./src/views/AlienView.o \
./src/views/GunView.o 

CPP_DEPS += \
./src/views/AlienView.d \
./src/views/GunView.d 


# Each subdirectory must supply rules for building sources it contributes
src/views/%.o: ../src/views/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



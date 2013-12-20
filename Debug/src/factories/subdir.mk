################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/factories/AlienFactory.cpp \
../src/factories/GunFactory.cpp 

OBJS += \
./src/factories/AlienFactory.o \
./src/factories/GunFactory.o 

CPP_DEPS += \
./src/factories/AlienFactory.d \
./src/factories/GunFactory.d 


# Each subdirectory must supply rules for building sources it contributes
src/factories/%.o: ../src/factories/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



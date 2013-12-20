################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/models/Alien.cpp \
../src/models/Bullet.cpp \
../src/models/Gun.cpp 

OBJS += \
./src/models/Alien.o \
./src/models/Bullet.o \
./src/models/Gun.o 

CPP_DEPS += \
./src/models/Alien.d \
./src/models/Bullet.d \
./src/models/Gun.d 


# Each subdirectory must supply rules for building sources it contributes
src/models/%.o: ../src/models/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



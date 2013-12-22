################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/entities/Alien.cpp \
../src/entities/Bullet.cpp \
../src/entities/Gun.cpp \
../src/entities/Wall.cpp 

OBJS += \
./src/entities/Alien.o \
./src/entities/Bullet.o \
./src/entities/Gun.o \
./src/entities/Wall.o 

CPP_DEPS += \
./src/entities/Alien.d \
./src/entities/Bullet.d \
./src/entities/Gun.d \
./src/entities/Wall.d 


# Each subdirectory must supply rules for building sources it contributes
src/entities/%.o: ../src/entities/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



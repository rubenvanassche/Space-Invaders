################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/views/AlienView.cpp \
../src/views/BulletView.cpp \
../src/views/GunView.cpp \
../src/views/StartScreenView.cpp \
../src/views/WallView.cpp 

OBJS += \
./src/views/AlienView.o \
./src/views/BulletView.o \
./src/views/GunView.o \
./src/views/StartScreenView.o \
./src/views/WallView.o 

CPP_DEPS += \
./src/views/AlienView.d \
./src/views/BulletView.d \
./src/views/GunView.d \
./src/views/StartScreenView.d \
./src/views/WallView.d 


# Each subdirectory must supply rules for building sources it contributes
src/views/%.o: ../src/views/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



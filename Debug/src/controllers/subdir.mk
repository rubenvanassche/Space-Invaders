################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/controllers/AlienController.cpp \
../src/controllers/BulletController.cpp \
../src/controllers/GunController.cpp 

OBJS += \
./src/controllers/AlienController.o \
./src/controllers/BulletController.o \
./src/controllers/GunController.o 

CPP_DEPS += \
./src/controllers/AlienController.d \
./src/controllers/BulletController.d \
./src/controllers/GunController.d 


# Each subdirectory must supply rules for building sources it contributes
src/controllers/%.o: ../src/controllers/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



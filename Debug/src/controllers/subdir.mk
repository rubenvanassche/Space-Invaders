################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/controllers/EventController.cpp \
../src/controllers/GameController.cpp \
../src/controllers/MotionController.cpp \
../src/controllers/ScreenController.cpp 

OBJS += \
./src/controllers/EventController.o \
./src/controllers/GameController.o \
./src/controllers/MotionController.o \
./src/controllers/ScreenController.o 

CPP_DEPS += \
./src/controllers/EventController.d \
./src/controllers/GameController.d \
./src/controllers/MotionController.d \
./src/controllers/ScreenController.d 


# Each subdirectory must supply rules for building sources it contributes
src/controllers/%.o: ../src/controllers/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



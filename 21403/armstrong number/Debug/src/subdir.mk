################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/armstrong\ number.cpp 

OBJS += \
./src/armstrong\ number.o 

CPP_DEPS += \
./src/armstrong\ number.d 


# Each subdirectory must supply rules for building sources it contributes
src/armstrong\ number.o: ../src/armstrong\ number.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/armstrong number.d" -MT"src/armstrong\ number.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



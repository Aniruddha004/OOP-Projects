################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/calculator\ ass1.cpp 

OBJS += \
./src/calculator\ ass1.o 

CPP_DEPS += \
./src/calculator\ ass1.d 


# Each subdirectory must supply rules for building sources it contributes
src/calculator\ ass1.o: ../src/calculator\ ass1.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/calculator ass1.d" -MT"src/calculator\ ass1.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



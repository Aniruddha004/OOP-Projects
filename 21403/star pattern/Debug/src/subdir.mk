################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/star\ pattern.cpp 

OBJS += \
./src/star\ pattern.o 

CPP_DEPS += \
./src/star\ pattern.d 


# Each subdirectory must supply rules for building sources it contributes
src/star\ pattern.o: ../src/star\ pattern.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/star pattern.d" -MT"src/star\ pattern.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Seperate\ Array.cpp 

OBJS += \
./src/Seperate\ Array.o 

CPP_DEPS += \
./src/Seperate\ Array.d 


# Each subdirectory must supply rules for building sources it contributes
src/Seperate\ Array.o: ../src/Seperate\ Array.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Seperate Array.d" -MT"src/Seperate\ Array.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



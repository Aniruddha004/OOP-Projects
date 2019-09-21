################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/array\ sort\ even\ and\ odd.cpp 

OBJS += \
./src/array\ sort\ even\ and\ odd.o 

CPP_DEPS += \
./src/array\ sort\ even\ and\ odd.d 


# Each subdirectory must supply rules for building sources it contributes
src/array\ sort\ even\ and\ odd.o: ../src/array\ sort\ even\ and\ odd.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/array sort even and odd.d" -MT"src/array\ sort\ even\ and\ odd.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



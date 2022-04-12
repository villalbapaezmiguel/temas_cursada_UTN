################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/laboratorio\ I.c 

OBJS += \
./src/laboratorio\ I.o 

C_DEPS += \
./src/laboratorio\ I.d 


# Each subdirectory must supply rules for building sources it contributes
src/laboratorio\ I.o: ../src/laboratorio\ I.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/laboratorio I.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Tema3_Funciones_\ 3-3.c 

OBJS += \
./src/Tema3_Funciones_\ 3-3.o 

C_DEPS += \
./src/Tema3_Funciones_\ 3-3.d 


# Each subdirectory must supply rules for building sources it contributes
src/Tema3_Funciones_\ 3-3.o: ../src/Tema3_Funciones_\ 3-3.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Tema3_Funciones_ 3-3.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Funciones.c \
../src/Tema5_VectoresYFunciones_5-2.c 

OBJS += \
./src/Funciones.o \
./src/Tema5_VectoresYFunciones_5-2.o 

C_DEPS += \
./src/Funciones.d \
./src/Tema5_VectoresYFunciones_5-2.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../A.Bahaa\ COTS/APP/main.c 

OBJS += \
./A.Bahaa\ COTS/APP/main.o 

C_DEPS += \
./A.Bahaa\ COTS/APP/main.d 


# Each subdirectory must supply rules for building sources it contributes
A.Bahaa\ COTS/APP/main.o: ../A.Bahaa\ COTS/APP/main.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"A.Bahaa COTS/APP/main.d" -MT"A.Bahaa\ COTS/APP/main.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../A.Bahaa\ COTS/HAL/LED/LED_Program.c 

OBJS += \
./A.Bahaa\ COTS/HAL/LED/LED_Program.o 

C_DEPS += \
./A.Bahaa\ COTS/HAL/LED/LED_Program.d 


# Each subdirectory must supply rules for building sources it contributes
A.Bahaa\ COTS/HAL/LED/LED_Program.o: ../A.Bahaa\ COTS/HAL/LED/LED_Program.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"A.Bahaa COTS/HAL/LED/LED_Program.d" -MT"A.Bahaa\ COTS/HAL/LED/LED_Program.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



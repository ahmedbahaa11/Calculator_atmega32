################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include A.Bahaa\ COTS/MCAL/DIO/subdir.mk
-include A.Bahaa\ COTS/HAL/LED/subdir.mk
-include A.Bahaa\ COTS/HAL/LCD/subdir.mk
-include A.Bahaa\ COTS/HAL/KPAD/subdir.mk
-include A.Bahaa\ COTS/HAL/Button/subdir.mk
-include A.Bahaa\ COTS/HAL/7-Segment/subdir.mk
-include A.Bahaa\ COTS/APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
S21_Calculator.lss \

FLASH_IMAGE += \
S21_Calculator.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: S21_Calculator.elf secondary-outputs

# Tool invocations
S21_Calculator.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,S21_Calculator.map -mmcu=atmega32 -o "S21_Calculator.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

S21_Calculator.lss: S21_Calculator.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S S21_Calculator.elf  >"S21_Calculator.lss"
	@echo 'Finished building: $@'
	@echo ' '

S21_Calculator.hex: S21_Calculator.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex S21_Calculator.elf  "S21_Calculator.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: S21_Calculator.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 S21_Calculator.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) S21_Calculator.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

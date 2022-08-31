################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/core_riscv.c 

OBJS += \
./Core/core_riscv.o 

C_DEPS += \
./Core/core_riscv.d 


# Each subdirectory must supply rules for building sources it contributes
Core/%.o: ../Core/%.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\hulcn\OneDrive\Desktop\coding projects\girtty city\Explorer-Backpack\Programming\MounRiver Studio\Main\CH32V307VCT6\Debug" -I"C:\Users\hulcn\OneDrive\Desktop\coding projects\girtty city\Explorer-Backpack\Programming\MounRiver Studio\Main\CH32V307VCT6\Core" -I"C:\Users\hulcn\OneDrive\Desktop\coding projects\girtty city\Explorer-Backpack\Programming\MounRiver Studio\Main\CH32V307VCT6\User" -I"C:\Users\hulcn\OneDrive\Desktop\coding projects\girtty city\Explorer-Backpack\Programming\MounRiver Studio\Main\CH32V307VCT6\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@


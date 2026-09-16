################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Guna/AUG4/sdk/Core/component/serial_manager/fsl_component_serial_manager.c \
C:/Guna/AUG4/sdk/Core/component/serial_manager/fsl_component_serial_port_uart.c 

C_DEPS += \
./component/serial_manager/fsl_component_serial_manager.d \
./component/serial_manager/fsl_component_serial_port_uart.d 

OBJS += \
./component/serial_manager/fsl_component_serial_manager.o \
./component/serial_manager/fsl_component_serial_port_uart.o 


# Each subdirectory must supply rules for building sources it contributes
component/serial_manager/fsl_component_serial_manager.o: C:/Guna/AUG4/sdk/Core/component/serial_manager/fsl_component_serial_manager.c component/serial_manager/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__NEWLIB__ -DCPU_MIMXRT1176DVMAA -DCPU_MIMXRT1176DVMAA_cm7 -DXIP_BOOT_HEADER_DCD_ENABLE=1 -DUSE_SDRAM -DDATA_SECTION_IS_CACHEABLE=1 -DSDK_DEBUGCONSOLE=1 -DXIP_EXTERNAL_FLASH=1 -DXIP_BOOT_HEADER_ENABLE=1 -DFSL_SDK_ENABLE_DRIVER_CACHE_CONTROL=1 -DLV_CONF_INCLUDE_SIMPLE=1 -DFSL_SDK_DRIVER_QUICK_ACCESS_ENABLE=1 -DTRIOX_BOARD_CONFIG=1 -DMCUXPRESSO_SDK -DSD_ENABLED -DSDK_I2C_BASED_COMPONENT_USED=1 -DVG_COMMAND_CALL=1 -DVG_TARGET_FAST_CLEAR=0 -DSERIAL_PORT_TYPE_UART=1 -DSDK_OS_FREE_RTOS -D__NXP_MSDK__ -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Guna\AUG4\sdk\Core\source" -I"C:\Guna\AUG4\sdk\Core\video" -I"C:\Guna\AUG4\sdk\Core\drivers" -I"C:\Guna\AUG4\sdk\Core\touchpanel" -I"C:\Guna\AUG4\sdk\Core\sdmmc\host" -I"C:\Guna\AUG4\sdk\Core\sdmmc\inc" -I"C:\Guna\AUG4\sdk\Core\component\gpio" -I"C:\Guna\AUG4\sdk\Core\fatfs\source\fsl_sd_disk" -I"C:\Guna\AUG4\sdk\Core\fatfs\source" -I"C:\Guna\AUG4\sdk\Core\openh264\codec\decoder\core\inc" -I"C:\Guna\AUG4\sdk\Core\openh264\codec\decoder\plus\inc" -I"C:\Guna\AUG4\sdk\Core\vglite\inc" -I"C:\Guna\AUG4\sdk\Core\vglite\font" -I"C:\Guna\AUG4\sdk\Core\vglite\font\mcufont\decoder" -I"C:\Guna\AUG4\sdk\Core\vglite\VGLite\rtos" -I"C:\Guna\AUG4\sdk\Core\vglite\VGLiteKernel" -I"C:\Guna\AUG4\sdk\Core\vglite\VGLiteKernel\rtos" -I"C:\Guna\AUG4\sdk\Core\lvgl\lvgl" -I"C:\Guna\AUG4\sdk\Core\lvgl\lvgl\src" -I"C:\Guna\AUG4\sdk\Core\lvgl\lvgl\src\font" -I"C:\Guna\AUG4\sdk\Core\lvgl" -I"C:\Guna\AUG4\sdk\Core\device" -I"C:\Guna\AUG4\sdk\Core\utilities" -I"C:\Guna\AUG4\sdk\Core\component\uart" -I"C:\Guna\AUG4\sdk\Core\component\serial_manager" -I"C:\Guna\AUG4\sdk\Core\component\lists" -I"C:\Guna\AUG4\sdk\mcuxpresso\startup" -I"C:\Guna\AUG4\sdk\Core\xip" -I"C:\Guna\AUG4\sdk\Core\sdmmc\osa" -I"C:\Guna\AUG4\sdk\Core\component\osa" -I"C:\Guna\AUG4\sdk\Core\board" -I"C:\Guna\AUG4\sdk\Core\freertos\freertos-kernel\include" -I"C:\Guna\AUG4\sdk\Core\freertos\freertos-kernel\portable\GCC\ARM_CM4F" -I"C:\Guna\AUG4\sdk\Core\openh264\codec\api\svc" -I"C:\Guna\AUG4\sdk\Core\openh264\codec\common\inc" -I"C:\Guna\AUG4\sdk\Core\CMSIS" -I"C:\Guna\AUG4\sdk\Core\source\freertos_libraries\abstractions\posix\include" -I"C:\Guna\AUG4\sdk\Core\source\freertos_libraries\freertos_plus\standard\freertos_plus_posix\include" -I"C:\Guna\AUG4\sdk\Core\source\freertos_libraries\c_sdk\standard\common\include\private" -I"C:\Guna\AUG4\generated" -I"C:\Guna\AUG4\custom" -I"C:\Guna\AUG4\generated\guider_customer_fonts" -I"C:\Guna\AUG4\generated\guider_fonts" -I"C:\Guna\AUG4\sdk\Core\rlottie" -O0 -fno-common -g3 -gdwarf-4 -Wall -c -ffunction-sections -fdata-sections -fno-builtin -Wno-format -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m7 -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

component/serial_manager/fsl_component_serial_port_uart.o: C:/Guna/AUG4/sdk/Core/component/serial_manager/fsl_component_serial_port_uart.c component/serial_manager/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__NEWLIB__ -DCPU_MIMXRT1176DVMAA -DCPU_MIMXRT1176DVMAA_cm7 -DXIP_BOOT_HEADER_DCD_ENABLE=1 -DUSE_SDRAM -DDATA_SECTION_IS_CACHEABLE=1 -DSDK_DEBUGCONSOLE=1 -DXIP_EXTERNAL_FLASH=1 -DXIP_BOOT_HEADER_ENABLE=1 -DFSL_SDK_ENABLE_DRIVER_CACHE_CONTROL=1 -DLV_CONF_INCLUDE_SIMPLE=1 -DFSL_SDK_DRIVER_QUICK_ACCESS_ENABLE=1 -DTRIOX_BOARD_CONFIG=1 -DMCUXPRESSO_SDK -DSD_ENABLED -DSDK_I2C_BASED_COMPONENT_USED=1 -DVG_COMMAND_CALL=1 -DVG_TARGET_FAST_CLEAR=0 -DSERIAL_PORT_TYPE_UART=1 -DSDK_OS_FREE_RTOS -D__NXP_MSDK__ -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Guna\AUG4\sdk\Core\source" -I"C:\Guna\AUG4\sdk\Core\video" -I"C:\Guna\AUG4\sdk\Core\drivers" -I"C:\Guna\AUG4\sdk\Core\touchpanel" -I"C:\Guna\AUG4\sdk\Core\sdmmc\host" -I"C:\Guna\AUG4\sdk\Core\sdmmc\inc" -I"C:\Guna\AUG4\sdk\Core\component\gpio" -I"C:\Guna\AUG4\sdk\Core\fatfs\source\fsl_sd_disk" -I"C:\Guna\AUG4\sdk\Core\fatfs\source" -I"C:\Guna\AUG4\sdk\Core\openh264\codec\decoder\core\inc" -I"C:\Guna\AUG4\sdk\Core\openh264\codec\decoder\plus\inc" -I"C:\Guna\AUG4\sdk\Core\vglite\inc" -I"C:\Guna\AUG4\sdk\Core\vglite\font" -I"C:\Guna\AUG4\sdk\Core\vglite\font\mcufont\decoder" -I"C:\Guna\AUG4\sdk\Core\vglite\VGLite\rtos" -I"C:\Guna\AUG4\sdk\Core\vglite\VGLiteKernel" -I"C:\Guna\AUG4\sdk\Core\vglite\VGLiteKernel\rtos" -I"C:\Guna\AUG4\sdk\Core\lvgl\lvgl" -I"C:\Guna\AUG4\sdk\Core\lvgl\lvgl\src" -I"C:\Guna\AUG4\sdk\Core\lvgl\lvgl\src\font" -I"C:\Guna\AUG4\sdk\Core\lvgl" -I"C:\Guna\AUG4\sdk\Core\device" -I"C:\Guna\AUG4\sdk\Core\utilities" -I"C:\Guna\AUG4\sdk\Core\component\uart" -I"C:\Guna\AUG4\sdk\Core\component\serial_manager" -I"C:\Guna\AUG4\sdk\Core\component\lists" -I"C:\Guna\AUG4\sdk\mcuxpresso\startup" -I"C:\Guna\AUG4\sdk\Core\xip" -I"C:\Guna\AUG4\sdk\Core\sdmmc\osa" -I"C:\Guna\AUG4\sdk\Core\component\osa" -I"C:\Guna\AUG4\sdk\Core\board" -I"C:\Guna\AUG4\sdk\Core\freertos\freertos-kernel\include" -I"C:\Guna\AUG4\sdk\Core\freertos\freertos-kernel\portable\GCC\ARM_CM4F" -I"C:\Guna\AUG4\sdk\Core\openh264\codec\api\svc" -I"C:\Guna\AUG4\sdk\Core\openh264\codec\common\inc" -I"C:\Guna\AUG4\sdk\Core\CMSIS" -I"C:\Guna\AUG4\sdk\Core\source\freertos_libraries\abstractions\posix\include" -I"C:\Guna\AUG4\sdk\Core\source\freertos_libraries\freertos_plus\standard\freertos_plus_posix\include" -I"C:\Guna\AUG4\sdk\Core\source\freertos_libraries\c_sdk\standard\common\include\private" -I"C:\Guna\AUG4\generated" -I"C:\Guna\AUG4\custom" -I"C:\Guna\AUG4\generated\guider_customer_fonts" -I"C:\Guna\AUG4\generated\guider_fonts" -I"C:\Guna\AUG4\sdk\Core\rlottie" -O0 -fno-common -g3 -gdwarf-4 -Wall -c -ffunction-sections -fdata-sections -fno-builtin -Wno-format -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m7 -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-component-2f-serial_manager

clean-component-2f-serial_manager:
	-$(RM) ./component/serial_manager/fsl_component_serial_manager.d ./component/serial_manager/fsl_component_serial_manager.o ./component/serial_manager/fsl_component_serial_port_uart.d ./component/serial_manager/fsl_component_serial_port_uart.o

.PHONY: clean-component-2f-serial_manager


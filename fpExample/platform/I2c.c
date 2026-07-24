#include "I2C.h"

bool I2cRead_real(const uint16_t address, int *temp)
{
    // actual i2c read 

    return false;
}
// Initially it points to the real implementation.
bool (*I2cRead)(const uint16_t address, int *temp) = I2cRead_real;


// // Actual hardware-dependent function
// static int16_t RealHardware_ReadI2C(uint8_t reg_addr) {
//     // Real driver code targeting hardware registers goes here
//     return 0; 
// }

// // Global function pointer initialized to the real implementation
// ReadSensor_f ReadSensor = RealHardware_ReadI2C;

// void HAL_Sensor_Init(void) {
//     ReadSensor = RealHardware_ReadI2C;
// }
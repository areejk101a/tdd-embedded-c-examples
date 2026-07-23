#include "ThermalController.h"
#include "I2C.h"

#define SENSOR_1 0x48

bool Thermal_Update(bool *alarm)
{
    int temp = 0;
    bool ret = I2cRead(SENSOR_1, &temp); // DOC
    
    return false;
}

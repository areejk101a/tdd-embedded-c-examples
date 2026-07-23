#include "TemperatureController.h"
#include "i2c.h"


bool TemperatureController_Update(void)
{
   int temp = I2C_ReadTemperature();
   if(temp > 80)
       return true;
    return false;
}

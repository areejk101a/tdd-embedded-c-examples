#include "ThermalController.h"
#include "I2C.h"

#define SENSOR_1 0x48

void update_sensor()
{
    bool *alarm;
    Thermal_Update(alarm);

}


bool Thermal_Update(bool *alarm)
{
    // if (alarm == nullptr )
    //     return false;
    
    int temp = 0;
    bool ret = I2cRead(SENSOR_1, &temp); // DOC
    
    
    return true;
}



// bool TempController_IsOverheating(void) {
//     // Calling the function pointer hook
//     int16_t current_temp = ReadSensor(REG_TEMP_DATA);
    
//     if (current_temp > 85) {
//         return true;
//     }
//     return false;
// }
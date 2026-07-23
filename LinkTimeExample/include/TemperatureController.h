#ifndef TEMPERATURE_CONTROLLER_H
#define TEMPERATURE_CONTROLLER_H
#include <stdbool.h>

bool TemperatureController_Update(void);
void Fan_On(void);

#endif // TEMPERATURE_CONTROLLER_H
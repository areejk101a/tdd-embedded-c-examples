#ifndef LEDDRIVER_H
#define LEDDRIVER_H

#include <stdint.h>
void LedDriver_Create(uint16_t *address);
void LedDriver_TurnOnOneLed(uint16_t *address);

#endif
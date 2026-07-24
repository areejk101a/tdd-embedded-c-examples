#ifndef MOCK_I2C_H
#define MOCK_I2C_H

#include <stdint.h>
#include <stdbool.h>

void FakeI2C_Reset(void);

void FakeI2C_SetTemperature(int temp);
void FakeI2C_SetReturnValue(bool success);

uint16_t FakeI2C_GetLastAddress(void);
int FakeI2C_GetCallCount(void);

#endif
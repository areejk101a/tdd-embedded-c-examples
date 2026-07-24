#ifndef I2C_H
#define I2C_H

#include <stdbool.h>
#include <stdint.h>

bool I2cRead(const uint16_t address, int *temp);

#endif
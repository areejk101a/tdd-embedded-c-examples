#include "i2c.h"

int i2c_read(int address, int reg)
{
    // some actual implementation that reads from the I2C bus
    // open file
    // read 
    // blah blah
    return 0;
}

int I2C_ReadTemperature(void)
{
    return i2c_read(0x48, 0);
}
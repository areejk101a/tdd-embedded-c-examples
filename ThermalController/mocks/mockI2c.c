#include "I2C.h"
#include "mockI2c.h"

static bool retI2cRead = false;  // stub
static int stubReadData = 81;  // stub
static int lastI2cRead = 0;  // spy
static int callCountI2cRead = 0; // spy

bool I2cRead(const uint16_t address, int *temp)
{
    callCountI2cRead++;
    lastI2cRead = address;
    *temp = stubReadData;
    return retI2cRead;
}

void FakeI2C_Reset(void)
{
    retI2cRead = false;  // stub
    stubReadData = 0;  // stub
    lastI2cRead = 0;  // spy
    callCountI2cRead = 0;
}

void FakeI2C_SetTemperature(int temp)
{
    stubReadData = temp;
}

void FakeI2C_SetReturnValue(bool returnVal)
{
    retI2cRead = returnVal;
}

uint16_t FakeI2C_GetLastAddress(void)
{
    return lastI2cRead;
}

int FakeI2C_GetCallCount(void)
{
    return callCountI2cRead;
}





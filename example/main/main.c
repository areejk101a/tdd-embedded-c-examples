#include "LedDriver.h"
#define HW_LED_REG 0x189992323

int main ()
{
    LedDriver_Create(HW_LED_REG);
    return 0;
}
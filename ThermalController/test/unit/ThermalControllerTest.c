#include "unity_fixture.h"
#include "ThermalController.h"
#include "mockI2c.h"


TEST_GROUP_RUNNER(ThermalControllerTestGroup)
{
    RUN_TEST_CASE(ThermalControllerTestGroup, thermalUpdate_ReadsI2C);
    // RUN_TEST_CASE(ThermalControllerTestGroup, thermalUpdate_AlarmReturnsTrue_WhenTempExceedsLimit);
    // RUN_TEST_CASE(ThermalControllerTestGroup, thermalUpdate_ReturnsFalse_WhenTempIsLowerLimit);
}

TEST_GROUP(ThermalControllerTestGroup);

TEST_SETUP(ThermalControllerTestGroup)
{
}

TEST_TEAR_DOWN(ThermalControllerTestGroup)
{
}


/*
Returns true when temp reaches 80 or higher 
Returns true when temp is lower than 80
Reads Temp
Temp in bounds

range <0 100>
alarm <80 +>

Reads I2C

Temp within bounds (20 - 80) - false
Temp on limit ( 80) - false
Temp out of bounds ( 80) - true
Temp on lower ( 20)
Temp below lower ( 20)

Invalid (extremely large) - return fail

i2c Address passed correctly 
i2c not working properly - return fail

alarm value not changed on fail <>

null 

*/


// CodeUnderTest_ExpectedBehaviour_Condition

TEST(ThermalControllerTestGroup ,  thermalUpdate_ReadsI2C)
{
    bool alarm;
    FakeI2C_Reset();
    
    Thermal_Update(&alarm);
    int callCount = FakeI2C_GetCallCount();

    TEST_ASSERT_EQUAL(1 , callCount);

}



// TEST(ThermalControllerTestGroup ,  thermalUpdate_AlarmReturnsTrue_WhenTempExceedsLimit)
// {

//     bool ret = false;
//     bool alarm = false;

//     ret = Thermal_Update(&alarm);
    
//     TEST_ASSERT_EQUAL(true, alarm);


// }

// TEST(ThermalControllerTestGroup ,  thermalUpdate_ReturnsFalse_WhenTempIsLowerLimit)
// {
//     bool ret = true;
//     ret = Thermal_Update();
//     TEST_ASSERT_EQUAL(false, ret);
// }

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

range <0 100>
alarm <80 +>

null 
Reads I2C
i2c Address passed correctly 
i2c not working properly - return fail

Temp within bounds  - false
Temp on limit  - false
Temp out of bounds  - true
Temp on lower 
Temp below lower 

Invalid (extremely large) - return fail


alarm value not changed on fail <>


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

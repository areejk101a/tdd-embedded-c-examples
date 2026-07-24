#include "unity_fixture.h"
#include "ThermalController.h"
#include "I2C.h"
// #include "mockI2c.h"

static bool (*savedI2cRead)(const uint16_t, int *);


static bool Fake_I2cRead2(const uint16_t address, int *temp)
{
    *temp = 42;
    return true;
}

/* This is the actual definition */
bool (*I2cRead)(const uint16_t, int *) = Fake_I2cRead2;

TEST_GROUP_RUNNER(ThermalControllerTestGroup)
{
    RUN_TEST_CASE(ThermalControllerTestGroup, thermalUpdate_ReadsI2C);
}

TEST_GROUP(ThermalControllerTestGroup);

TEST_SETUP(ThermalControllerTestGroup)
{
    savedI2cRead = I2cRead;
    I2cRead = Fake_I2cRead2;
}

TEST_TEAR_DOWN(ThermalControllerTestGroup)
{
    I2cRead = savedI2cRead;
}


TEST(ThermalControllerTestGroup ,  thermalUpdate_ReadsI2C)
{
    bool alarm;
    // FakeI2C_Reset();
    
    bool ret = Thermal_Update(&alarm);
    // int callCount = FakeI2C_GetCallCount();

    TEST_ASSERT_EQUAL(true , ret);
    // TEST_ASSERT_EQUAL(1 , callCount);

}


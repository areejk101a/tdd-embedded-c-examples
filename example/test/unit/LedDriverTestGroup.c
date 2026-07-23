#include "unity_fixture.h"
#include "LedDriver.h"


TEST_GROUP_RUNNER(LedDriverTestGroup)
{
    RUN_TEST_CASE(LedDriverTestGroup, LedsOffAfterCreate);
    RUN_TEST_CASE(LedDriverTestGroup, TurnOnOneLed);
}

TEST_GROUP(LedDriverTestGroup);

TEST_SETUP(LedDriverTestGroup)
{
}

TEST_TEAR_DOWN(LedDriverTestGroup)
{
}

TEST(LedDriverTestGroup, LedsOffAfterCreate)
{
    uint16_t virtualLeds = 0xffff;
    LedDriver_Create( &virtualLeds );
    TEST_ASSERT_EQUAL(0 , virtualLeds);
}


TEST(LedDriverTestGroup, TurnOnOneLed)
{
    uint16_t virtualLeds = 0;
    LedDriver_TurnOnOneLed( &virtualLeds );
    TEST_ASSERT_EQUAL(1 , virtualLeds);
}
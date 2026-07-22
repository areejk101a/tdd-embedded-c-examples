#include "unity_fixture.h"
#include "LedDriver.h"

TEST_GROUP_RUNNER(LedDriverTestGroup)
{
    RUN_TEST_CASE(LedDriverTestGroup, LedsOffAfterCreate);
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

    TEST_ASSERT_EQUAL_HEX16( 0, virtualLeds );
}

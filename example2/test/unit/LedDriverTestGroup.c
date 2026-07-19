#include "unity_fixture.h"

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
    TEST_FAIL_MESSAGE("Start here");
}

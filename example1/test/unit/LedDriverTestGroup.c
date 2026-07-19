#include "unity_fixture.h"

TEST_GROUP(LedDriverTestGroup);

TEST_SETUP(LedDriverTestGroup)
{
}

TEST_TEAR_DOWN(LedDriverTestGroup)
{
}

TEST(LedDriverTestGroup, FirstTest)
{
    TEST_ASSERT_EQUAL_INT(1, 1);
}

TEST_GROUP_RUNNER(LedDriverTestGroup)
{
    RUN_TEST_CASE(LedDriverTestGroup, FirstTest);
}
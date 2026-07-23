#include "unity_fixture.h"


TEST_GROUP_RUNNER(LedDriverTestGroup)
{
    RUN_TEST_CASE(LedDriverTestGroup, FirstTest);
    RUN_TEST_CASE(LedDriverTestGroup, SecondTest);
    RUN_TEST_CASE(LedDriverTestGroup, ThirdTest);
}

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

TEST(LedDriverTestGroup, SecondTest)
{
    
    TEST_ASSERT_EQUAL_INT(2, 4);
    TEST_ASSERT_EQUAL_INT(4, 4);
}

TEST(LedDriverTestGroup, ThirdTest)
{
    
    TEST_ASSERT_EQUAL_INT(2, 4);
    TEST_ASSERT_EQUAL_INT(4, 4);
}

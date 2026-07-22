#include "unity_fixture.h"
#include "TemperatureController.h"

TEST_GROUP_RUNNER(TemperatureControllerTestGroup)
{
    RUN_TEST_CASE(TemperatureControllerTestGroup, TemperatureController_ReturnsTrueWhenTemperatureIsAbove80);
}
TEST_GROUP(TemperatureControllerTestGroup);

TEST_SETUP(TemperatureControllerTestGroup)
{
}

TEST_TEAR_DOWN(TemperatureControllerTestGroup)
{
}

TEST(TemperatureControllerTestGroup, TemperatureController_ReturnsTrueWhenTemperatureIsAbove80)
{
    bool result = TemperatureController_Update();
    TEST_ASSERT_TRUE(result);
}

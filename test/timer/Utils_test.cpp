#include <gtest/gtest.h>
#include <timer/Utils.hpp>

using namespace ng::timer;

uint32_t SystemCoreClock = 16000000;

TEST(TimerUtils, getParamsByPeriod) {
    SystemCoreClock = 16000000;
    auto params = getParamsByPeriod(10);
    ASSERT_EQ(params.prescaler, 0);
    ASSERT_EQ(params.period, 159);
    
    SystemCoreClock = 16000000;
    params = getParamsByPeriod(1000);
    ASSERT_EQ(params.prescaler, 999);
    ASSERT_EQ(params.period, 15);
    
    SystemCoreClock = 32000;
    params = getParamsByPeriod(10);
    ASSERT_EQ(params.prescaler, 0);
    ASSERT_EQ(params.period, 0);
    
    SystemCoreClock = 32000;
    params = getParamsByPeriod(1000);
    ASSERT_EQ(params.prescaler, 0);
    ASSERT_EQ(params.period, 31);
}

TEST(TimerUtils, getParamsByFrequency) {
    SystemCoreClock = 4000000;
    auto params = getParamsByFrequency(10000, 100);
    ASSERT_EQ(params.prescaler, 3);
    ASSERT_EQ(params.period, 99);
    
    // the frequency is too fast
    SystemCoreClock = 4000000;
    params = getParamsByFrequency(100000, 100);
    ASSERT_EQ(params.prescaler, 0);
    ASSERT_EQ(params.period, 0);
}

TEST(TimerParams, isOk) {
    auto res = TimerParams{0, 0};
    ASSERT_FALSE(res.isOk());
    
    res = TimerParams{0, 1};
    ASSERT_TRUE(res.isOk());
    
    res = TimerParams{1, 0};
    ASSERT_TRUE(res.isOk());
    
    res = TimerParams{1, 1};
    ASSERT_TRUE(res.isOk());
}
#include <gtest/gtest.h>
#include "millis.hpp"

using namespace ng::time;

void executeTicks(uint32_t times) {
    for (uint32_t i = 0; i < times; i++) {
        tick();
    }
}

TEST(millis, incMilliseconds) {
    setMillis(0);
    tick();

    EXPECT_EQ(millis(), 1);
}

TEST(millis, roundMilliseconds) {
    setMillis(UINT32_MAX - 297);

    tick();

    EXPECT_EQ(millis(), 0);
}

TEST(millis, runSecondsIncrement) {
    executeTicks(MILLIS_IN_SECOND);

    EXPECT_EQ(seconds(), 1);
}


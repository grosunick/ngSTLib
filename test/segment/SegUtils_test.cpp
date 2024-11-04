#include <gtest/gtest.h>
#include <segment/SegmentUtils.hpp>

using namespace ng;

TEST(SegUtils, getCharCode) {
    EXPECT_EQ(SegmentUtils::getCharCode(31), 0U);
    EXPECT_EQ(SegmentUtils::getCharCode(127), 0U);

    EXPECT_EQ(SegmentUtils::getCharCode('a'), 0x77U);
    EXPECT_EQ(SegmentUtils::getCharCode('A'), 0x77U);
    EXPECT_EQ(SegmentUtils::getCharCode('0'), 0x3FU);

    EXPECT_EQ(SegmentUtils::getCharCode(124), 0x6U);
}

TEST(SegUtils, intLen) {
    EXPECT_EQ(SegmentUtils::intLen(31), 2U);
    EXPECT_EQ(SegmentUtils::intLen(1), 1U);
    EXPECT_EQ(SegmentUtils::intLen(321), 3U);
}

TEST(SegUtils, floatLen) {
    EXPECT_EQ(SegmentUtils::floatLen(34.23, 2), 4U);
    EXPECT_EQ(SegmentUtils::floatLen(1.567, 3), 4U);
}
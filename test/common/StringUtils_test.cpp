#include <gtest/gtest.h>
#include <common/StringUtils.hpp>

using namespace std;

TEST(StringUtils, itoa) {
    char str1[5] = "";
    ng::StringUtils::itoa(10, str1, sizeof(str1));
    ASSERT_STREQ(str1, "  10");

    ng::StringUtils::itoa(-10, str1, sizeof(str1));
    ASSERT_STREQ(str1, " -10");

    ng::StringUtils::itoa(-100, str1, sizeof(str1));
    ASSERT_STREQ(str1, "-100");

    ng::StringUtils::itoa(-1000, str1, sizeof(str1));
    ASSERT_STREQ(str1, "1000");
}

TEST(StringUtils, itoaBench1) {
    char str1[10] = "";

    for (int j = 0; j < 1000000; ++j) {
        ng::StringUtils::itoa(j, str1, sizeof(str1));
    }

    ASSERT_TRUE(true);
}
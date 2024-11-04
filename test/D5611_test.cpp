#include <gtest/gtest.h>
#include "driver/D5611.hpp"

class D5611Fixture : public ::testing::Test {
protected:
    virtual void TearDown() {
        delete indicator1;
    }

    virtual void SetUp() {
        indicator1 = new ng::D5611();
    }

    ng::D5611 *indicator1{};
};

TEST_F(D5611Fixture, setValidDigit) {
    EXPECT_EQ(indicator1->setDigit(0), 0);
    EXPECT_EQ(indicator1->setDigit(9), 0);
}

TEST_F(D5611Fixture, setInvalidDigit) {
    EXPECT_EQ(indicator1->setDigit(10), -1);
}

TEST_F(D5611Fixture, getPortVal) {
    indicator1->setDigit(1);
    EXPECT_EQ(indicator1->getPortVal(), 0b00000110);

    indicator1->setDigit(2);
    EXPECT_EQ(indicator1->getPortVal(), 0b01011011);
}

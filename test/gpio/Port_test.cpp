#include <gtest/gtest.h>
#include <gpio/Port.hpp>

using namespace ng;

constexpr uint32_t TPORT = 1U;

TEST(Port, set) {
    Port<TPORT>::set(0b11);

    EXPECT_EQ(ng::testPort1.BSRR.getValue(), 0b11);
}

TEST(Port, reset) {
    Port<TPORT>::reset(0b11);

    EXPECT_EQ(ng::testPort1.BSRR.getValue(), (0b11 << 16U));
}

TEST(Port, toggle) {
    ng::testPort1.ODR = 0b101;
    Port<TPORT>::toggle(0b111);

    EXPECT_EQ(ng::testPort1.ODR.getValue(), 0b010);
}

TEST(Port, get) {
    ng::testPort1.IDR = 0U;
    EXPECT_EQ(Port<TPORT>::get(), 0U);

    ng::testPort1.IDR = 1U;
    EXPECT_EQ(Port<TPORT>::get(), 1U);
}

TEST(Port, validValue) {
    EXPECT_EQ(Port<TPORT>::set(1), true);
    EXPECT_EQ(Port<TPORT>::reset(1), true);
    EXPECT_EQ(Port<TPORT>::toggle(1), true);
    EXPECT_EQ(Port<TPORT>::set(1 << 16U), true);

    EXPECT_EQ(Port<TPORT>::set(1 << 17U), false);
    EXPECT_EQ(Port<TPORT>::reset(1 << 17U), false);
    EXPECT_EQ(Port<TPORT>::toggle(1 << 17U), false);
}

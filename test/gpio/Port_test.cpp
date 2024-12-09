#include <gtest/gtest.h>
#include <gpio/Port.hpp>

using namespace ng;

constexpr uint32_t TPort = 1U;

TEST(Port, set) {
    Port<TPort>::set(0b11);

    EXPECT_EQ(ng::testPort1.BSRR.getValue(), 0b11);
}

TEST(Port, reset) {
    Port<TPort>::reset(0b11);

    EXPECT_EQ(ng::testPort1.BSRR.getValue(), (0b11 << 16U));
}

TEST(Port, toggle) {
    ng::testPort1.ODR = 0b101;
    Port<TPort>::toggle(0b111);

    EXPECT_EQ(ng::testPort1.ODR.getValue(), 0b010);
}

TEST(Port, get) {
    ng::testPort1.IDR = 0U;
    EXPECT_EQ(Port<TPort>::get(), 0U);

    ng::testPort1.IDR = 1U;
    EXPECT_EQ(Port<TPort>::get(), 1U);
}

TEST(Port, validValue) {
    EXPECT_EQ(Port<TPort>::set(1), true);
    EXPECT_EQ(Port<TPort>::reset(1), true);
    EXPECT_EQ(Port<TPort>::toggle(1), true);
    EXPECT_EQ(Port<TPort>::set(1 << 16U), true);

    EXPECT_EQ(Port<TPort>::set(1 << 17U), false);
    EXPECT_EQ(Port<TPort>::reset(1 << 17U), false);
    EXPECT_EQ(Port<TPort>::toggle(1 << 17U), false);
}

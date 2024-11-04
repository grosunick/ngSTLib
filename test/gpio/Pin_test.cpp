#include <gtest/gtest.h>
#include <gpio/Pin.hpp>

using namespace ng;

constexpr uint32_t TPORT = 1U;

TEST(Pin, get) {
    ng::testPort1.IDR = 1U;
    EXPECT_EQ((Pin<TPORT, 0>::get()), 1U);

    ng::testPort1.IDR = 0b10U;
    EXPECT_EQ((Pin<TPORT, 0>::get()), 0U);
}

TEST(Pin, set) {
    Pin<TPORT, 1>::set();
    EXPECT_EQ(ng::testPort1.BSRR.getValue(), 0b10U);
}

TEST(Pin, reset) {
    Pin<TPORT, 1>::reset();
    EXPECT_EQ(ng::testPort1.BSRR.getValue(), (0b10U << 16));
}

TEST(Pin, toggle) {
    ng::testPort1.ODR = 0b10U;
    Pin<TPORT, 1>::toggle();

    EXPECT_EQ(ng::testPort1.ODR.getValue(), 0U);
}

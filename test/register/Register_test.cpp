#include <gtest/gtest.h>
#include <register/Register.hpp>

using namespace ng;

constexpr uint32_t TPORT = 1U;

TEST(Register, write) {
    Register<TPORT, Write>::write(0b1);
    EXPECT_EQ(getRegister(TPORT).getValue(), 0b1);
}

TEST(Register, set) {
    Register<TPORT, Write>::write(0b10);
    Register<TPORT, Write>::set(0b1);

    EXPECT_EQ(getRegister(TPORT).getValue(), 0b11);
}

TEST(Register, toggle) {
    getRegister(TPORT) = 0b101;
    Register<TPORT, Write>::toggle(0b111);

    EXPECT_EQ(getRegister(TPORT).getValue(), 0b010);
}

TEST(Register, get) {
    getRegister(TPORT) = 0U;
    EXPECT_EQ((Register<TPORT, Read>::get()), 0U);

    getRegister(TPORT) = 1U;
    EXPECT_EQ((Register<TPORT, Read>::get()), 1U);
}
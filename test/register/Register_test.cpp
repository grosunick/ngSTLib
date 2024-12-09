#include <gtest/gtest.h>
#include <register/Register.hpp>

using namespace ng;

constexpr uint32_t TPort = 1U;

TEST(Register, write) {
    Register<TPort, Write>::write(0b1);
    EXPECT_EQ(getRegister(TPort).getValue(), 0b1);
}

TEST(Register, set) {
    Register<TPort, Write>::write(0b10);
    Register<TPort, Write>::set(0b1);

    EXPECT_EQ(getRegister(TPort).getValue(), 0b11);
}

TEST(Register, toggle) {
    getRegister(TPort) = 0b101;
    Register<TPort, Write>::toggle(0b111);

    EXPECT_EQ(getRegister(TPort).getValue(), 0b010);
}

TEST(Register, get) {
    getRegister(TPort) = 0U;
    EXPECT_EQ((Register<TPort, Read>::get()), 0U);

    getRegister(TPort) = 1U;
    EXPECT_EQ((Register<TPort, Read>::get()), 1U);
}
#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <register/RegisterField.hpp>

using namespace ng;

constexpr uint32_t TPort = 1U;
using wReg = Register<TPort, Write>;
using rwReg = Register<TPort, ReadWrite>;

TEST(RegisterField, write) {
    using Field1 = RegisterField<wReg, 0, 1, Write>;
    using Field2 = RegisterField<wReg, 1, 2, Write>;

    Field1::template write<Write, 0b1U>();
    EXPECT_EQ(getRegister(TPort).getValue(), 0b1U);

    Field2::template write<Write, 0b11U>();
    EXPECT_EQ(getRegister(TPort).getValue(), 0b110U);

    Field1::write(0b1U);
    EXPECT_EQ(getRegister(TPort).getValue(), 0b1U);

    Field2::write(0b1U);
    EXPECT_EQ(getRegister(TPort).getValue(), 0b10U);
}

TEST(RegisterField, set) {
    using regField = RegisterField<wReg, 2, 2, Write>;

    wReg::write(1U);
    EXPECT_EQ(getRegister(TPort).getValue(), 0b1U);

    regField::set(0b1U);
    EXPECT_EQ(getRegister(TPort).getValue(), 0b0101U);

    regField::template set<Write, 0b11U>();
    EXPECT_EQ(getRegister(TPort).getValue(), 0b1101U);
}

TEST(RegisterField, get) {
    using regField = RegisterField<rwReg, 2, 2, ReadWrite>;

    wReg::write(0U);
    regField::set(0b11U);
    EXPECT_EQ((regField::get()), 0b11U);
    EXPECT_EQ((rwReg::get()), 0b1100U);
}
#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <register/FieldValue.hpp>
#include <register/FieldsPack.hpp>

using namespace ng;

constexpr uint32_t TPort = 1U;

class CBaseReg {};

using rwReg = Register<TPort, ReadWrite>;
using rwFieldValue1 = FieldValue<RegisterField<rwReg, 1, 1, ReadWrite>, 0b1, CBaseReg>;
using rwFieldValue2 = FieldValue<RegisterField<rwReg, 3, 2, Write>, 0b10, CBaseReg>;

template <typename... T>
using rwFieldsPack = FieldsPack<TPort, 32, Write, CBaseReg, T...>;


TEST(FieldsPack, set) {
    rwReg::write(0b00001U);
    EXPECT_EQ(getRegister(TPort).getValue(), 0b00001U);

    rwFieldsPack<rwFieldValue1, rwFieldValue2>::set();
    EXPECT_EQ(getRegister(TPort).getValue(), 0b10011U);
}

TEST(FieldsPack, write) {
    rwReg::write(0b0U);
    rwFieldsPack<rwFieldValue1, rwFieldValue2>::set();
    EXPECT_EQ(getRegister(TPort).getValue(), 0b10010U);
}

TEST(FieldsPack, isSet) {
    rwReg::write(0b10010U);
    EXPECT_EQ((rwFieldsPack<rwFieldValue1, rwFieldValue2>::isSet()), true);

    rwReg::write(0b10011U);
    EXPECT_EQ((rwFieldsPack<rwFieldValue1, rwFieldValue2>::isSet()), true);
}
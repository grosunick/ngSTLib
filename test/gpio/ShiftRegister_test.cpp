#include <cstdint>
#include <gtest/gtest.h>
#include <gpio/ShiftRegister.hpp>
#include <vector>

using namespace ng;

constexpr uint32_t TPORT1 = 0x1U;
constexpr vector<tuple<RegName, uint32_t>>& registerLog = testPort1.eventLog;

using ShiftRegMSB = ShiftRegister<TPORT1, 0, TPORT1, 1, TPORT1, 2>;

void clkTest(uint16_t pos) {
    EXPECT_EQ(registerLog[pos], make_tuple(RegName::BSRR, 0b10U));
    EXPECT_EQ(registerLog[pos + 1], make_tuple(RegName::BSRR, (0b10U << 16U)));
}

void checkBits(int from, int to, uint32_t val) {
    for (int i = from; i < to; i++) { // check left 4 bits
        EXPECT_EQ(registerLog[i * 3], make_tuple(RegName::BSRR, val));
        clkTest(i * 3 + 1);
    }
}

void checkBit(int bitNum, uint32_t val) {
    EXPECT_EQ(registerLog[bitNum], make_tuple(RegName::BSRR, val));
}

TEST(ShiftRegister, clk) {
    testPort1.eventLog.clear();
    ShiftRegMSB::clk();

    clkTest(0);
}

TEST(ShiftRegister, shiftMSB) {
    registerLog.clear();

    ShiftRegMSB::shiftMSB(0b11110000);

    checkBits(0, 4, 0b100U);
    checkBits(4, 8, (0b100U << 16U));
}

TEST(ShiftRegister, shiftLSB) {
    registerLog.clear();

    ShiftRegMSB::shiftLSB(0b11110000);

    checkBits(0, 4, (0b100U << 16U));
    checkBits(4, 8, 0b100U);
}

TEST(ShiftRegister, send) {
    registerLog.clear();
    uint8_t data[] = {0b11110000, 0b00000001};

    ShiftRegMSB::send(data, 2);

    checkBits(0, 4, 0b100U);
    checkBits(4, 8, (0b100U << 16U));
    checkBit(24, (0b100U << 16U));

    registerLog.erase(registerLog.cbegin(), registerLog.cbegin() + 25);

    checkBits(0, 7, (0b100U << 16U));
    checkBits(7, 8, 0b100U);
    checkBit(24, (0b100U << 16U));
}

TEST(ShiftRegister, sendCS) {
    registerLog.clear();
    uint8_t data[] = {0b11110000, 0b00000001};

    ShiftRegMSB::sendCS(data, 2);
    checkBit(0, 0b1U);

    registerLog.erase(registerLog.cbegin(), registerLog.cbegin() + 1);

    checkBits(0, 4, 0b100U);
    checkBits(4, 8, (0b100U << 16U));
    checkBit(25, (0b100U << 16U));

    registerLog.erase(registerLog.cbegin(), registerLog.cbegin() + 25);

    checkBits(0, 7, (0b100U << 16U));
    checkBits(7, 8, 0b100U);
    checkBit(24, (0b100U << 16U));

    registerLog.erase(registerLog.cbegin(), registerLog.cbegin() + 25);

    checkBit(0, (0b1U << 16U));
}
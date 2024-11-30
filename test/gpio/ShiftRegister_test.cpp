#include <cstdint>
#include <gtest/gtest.h>
#include <gpio/ShiftRegister.hpp>
#include <vector>

using namespace ng;

constexpr uint32_t TPORT1 = 0x1U;
constexpr auto& registerLog = testPort1.eventLog;

using ShiftRegMSB = ShiftRegister<TPORT1, 0, TPORT1, 1, TPORT1, 2>;

constexpr uint32_t DATA_PIN_SET = 0b100U;
constexpr uint32_t DATA_PIN_RESET = 0b100U << 16;
constexpr uint32_t CS_PIN_SET = 0b1U;
constexpr uint32_t CS_PIN_RESET = 0b1U << 16;
constexpr uint32_t CLK_PIN_SET = 0b10U;
constexpr uint32_t CLK_PIN_RESET = 0b10U << 16;

void clkTest(uint16_t pos) {
    EXPECT_EQ(registerLog[pos], make_tuple(RegName::BSRR, CLK_PIN_SET));
    EXPECT_EQ(registerLog[pos + 1], make_tuple(RegName::BSRR, CLK_PIN_RESET));
}

void checkBits(int from, int to, uint32_t val) {
    for (int i = from; i < to; i++) { // check left 4 bits
        EXPECT_EQ(registerLog[i * 3], make_tuple(RegName::BSRR, val));
        clkTest(i * 3 + 1);
    }
}

void checkBit(int pos, uint32_t val) {
    EXPECT_EQ(registerLog[pos], make_tuple(RegName::BSRR, val));
}

TEST(ShiftRegister, clk) {
    testPort1.eventLog.clear();
    ShiftRegMSB::clk();

    clkTest(0);
}

TEST(ShiftRegister, shiftMSB) {
    registerLog.clear();

    ShiftRegMSB::shiftMSB(0b11110000);

    checkBits(0, 4, DATA_PIN_SET);
    checkBits(4, 8, DATA_PIN_RESET);
}

TEST(ShiftRegister, shiftLSB) {
    registerLog.clear();

    ShiftRegMSB::shiftLSB(0b11110000);

    checkBits(0, 4, DATA_PIN_RESET);
    checkBits(4, 8, DATA_PIN_SET);
}

TEST(ShiftRegister, send) {
    registerLog.clear();
    uint8_t data[] = {0b11110000, 0b00000001};

    ShiftRegMSB::send(data, 2);

    checkBits(0, 4, DATA_PIN_SET);
    checkBits(4, 8, DATA_PIN_RESET);
    checkBit(24, DATA_PIN_RESET);

    registerLog.erase(registerLog.cbegin(), registerLog.cbegin() + 25);

    checkBits(0, 7, DATA_PIN_RESET);
    checkBits(7, 8, DATA_PIN_SET);
    checkBit(24, DATA_PIN_RESET);
}

TEST(ShiftRegister, sendCS) {
    registerLog.clear();
    uint8_t data[] = {0b11110000, 0b00000001};

    ShiftRegMSB::sendCS(data, 2);
    checkBit(0, CS_PIN_RESET);

    registerLog.erase(registerLog.cbegin(), registerLog.cbegin() + 1);

    checkBits(0, 4, DATA_PIN_SET);
    checkBits(4, 8, DATA_PIN_RESET);
    checkBit(25, DATA_PIN_RESET);

    registerLog.erase(registerLog.cbegin(), registerLog.cbegin() + 25);

    checkBits(0, 7, DATA_PIN_RESET);
    checkBits(7, 8, DATA_PIN_SET);
    checkBit(24, DATA_PIN_RESET);

    registerLog.erase(registerLog.cbegin(), registerLog.cbegin() + 25);

    checkBit(0, CS_PIN_SET);
}
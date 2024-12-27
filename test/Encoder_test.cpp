#define NG_ENC_DEBOUNCE 1

#include <gtest/gtest.h>
#include <millis.hpp>
#include <register/Register.hpp>
#include <gpio/Pin.hpp>
#include <Encoder.hpp>

using namespace ng;

constexpr uint32_t TPortR = 0U;
constexpr uint32_t TPortW = 1U;

struct TGpioReg {
    struct IDR: public Register<TPortR, Read> {};
    struct BSRR: public Register<TPortW, Read> {};
};

using PinA = Pin<TGpioReg, 0>;
using PinB = Pin<TGpioReg, 1>;

using TEncoderPullUp =  Encoder<PinA, PinB, PULL_UP>;
using TEncoderPullDown =  Encoder<PinA, PinB, PULL_DOWN>;

void next(uint8_t state) {
    static uint8_t step = 0;

    uint8_t nextBState = (state & 0b1);
    uint8_t nextAState = (state & 0b10) >> 1;
    getRegister(TPortR) = (nextBState << 1) | nextAState; // set pins encoderState

    step++;
    if (step > 3)
        step = 0;
}

void forward() {
    next(0xBU);
}

void backward() {
    next(0x7U);
}

TEST(Encoder, readPins) {
    getRegister(TPortR) = 0b00U; // set pins encoderState
    EXPECT_EQ(TEncoderPullUp::readPins(), 0b11U);
    getRegister(TPortR) = 0b10U; // set pins encoderState
    EXPECT_EQ(TEncoderPullUp::readPins(), 0b01U);

    getRegister(TPortR) = 0b11U; // set pins encoderState
    EXPECT_EQ(TEncoderPullDown ::readPins(), 0b11U);
    getRegister(TPortR) = 0b01U; // set pins encoderState
    EXPECT_EQ(TEncoderPullDown::readPins(), 0b01U);
}

TEST(Encoder, getForwardState) {
    getRegister(TPortR) = 0b10U; // set pins encoderState
    TEncoderPullDown::init();

    forward();
    TEncoderPullDown::tick();

    for (int i = 0; i < 3; i++) {
        setMillis(millis() + 1U);
        TEncoderPullDown::tick();
    }

    EXPECT_EQ(TEncoderPullDown::isForward(), true);
}

TEST(Encoder, getBackwardState) {
    getRegister(TPortR) = 0b01U; // set pins encoderState
    TEncoderPullDown::init();

    backward();
    TEncoderPullDown::tick();

    for (int j = 0; j < 3; j++) {
        setMillis(millis() + 1U);
        TEncoderPullDown::tick();
    }

    EXPECT_EQ(TEncoderPullDown::isBackward(), true);
}

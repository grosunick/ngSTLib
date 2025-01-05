#include <gtest/gtest.h>
#include <millis.hpp>
#include <register/Register.hpp>
#include <gpio/Pin.hpp>
#include <button/Button.hpp>

using namespace ng;
using namespace ng::button;
using namespace ng::time;

constexpr uint32_t TPortW = 1U;
constexpr uint32_t TPortR = 2U;

struct TGpioReg {
    struct BSRR: public Register<TPortW, ReadWrite> {};
    struct IDR: public Register<TPortR, Read> {};
};

using TPin = Pin<TGpioReg, 0>;

using TPullUpButton = PinButton<TPin>;
using TPullDownButton = PinButton<TPin, InputPullUp::Down>;
using TButton = PinButton<TPin, InputPullUp::Down>;

void prepareDebounceState() {
    setMillis(1); // init timer
    getRegister(TPortR) = 1U; // press button
    TButton::tick(); // init debounce mode
    setMillis(millis() + 6U); // increase time
    TButton::tick(); // init checking press mode
}

void countTicks(uint8_t cnt = 5) {
    for (int i = 0; i < cnt; i++) {
        setMillis(millis() + 6U); // increase time
        TButton::tick();
    }
}

void preparePressState() {
    getRegister(TPortR) = 1U; // press button
    countTicks(5);
}

void prepareReleaseState() {
    getRegister(TPortR) = 0U; // release button
    countTicks(5);
}

void clearState() {
    prepareDebounceState();
    preparePressState();
    prepareReleaseState();
    
    TButton::isPressed();
    TButton::isHeld();
    TButton::isClicked();
    TButton::isDoubleClicked();
}

TEST(PinButton, isPressedState) {
    getRegister(TPortR) = 1U; // set the first pin

    EXPECT_EQ(TPullUpButton::isPressedState(), false);
    EXPECT_EQ(TPullDownButton::isPressedState(), true);
}

TEST(PinButton, pressFlap) {
    clearState();
    prepareDebounceState();

    getRegister(TPortR) = 0U; // release button
    countTicks(12);

    EXPECT_EQ(TButton::isPressed(), false);
    clearState();
}

TEST(PinButton, isPressed) {
    prepareDebounceState();
    preparePressState();

    EXPECT_EQ(TButton::isPressed(), true);

    getRegister(TPortR) = 0U; // release button
    countTicks(5);

    clearState();
}

TEST(PinButton, release) {
    prepareDebounceState();
    preparePressState();
    prepareReleaseState();

    EXPECT_EQ(TButton::isClicked(), true);
    EXPECT_EQ(TButton::isClicked(), false);
    clearState();
}

TEST(PinButton, isDoubleClicked) {
    prepareDebounceState();
    preparePressState();
    prepareReleaseState();

    prepareDebounceState();
    preparePressState();
    prepareReleaseState();

    EXPECT_EQ(TButton::isClicked(), true);
    EXPECT_EQ(TButton::isClicked(), false);
    EXPECT_EQ(TButton::isDoubleClicked(), true);
    EXPECT_EQ(TButton::isDoubleClicked(), false);
    clearState();
}

TEST(PinButton, isHolded) {
    prepareDebounceState();
    preparePressState();

    setMillis(millis() + 2000); // increase time
    countTicks(100);

    EXPECT_EQ(TButton::isHeld(), true);
    EXPECT_EQ(TButton::isHeld(), false);
    clearState();
}
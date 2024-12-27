#define NG_BUTTON_DEBOUNCE  1

#include <gtest/gtest.h>
#include <millis.hpp>
#include <register/Register.hpp>
#include <gpio/Pin.hpp>
#include <Button.hpp>

using namespace ng;

constexpr uint32_t TPortW = 1U;
constexpr uint32_t TPortR = 2U;

struct TGpioReg {
    struct BSRR: public Register<TPortW, ReadWrite> {};
    struct IDR: public Register<TPortR, Read> {};
};

using TPin = Pin<TGpioReg, 0>;

using TPullUpButton =  Button<TPin>;
using TPullDownButton =  Button<TPin, ng::PULL_DOWN>;
using TButton = Button<TPin, ng::PULL_DOWN>;

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

    TButton::press();
    TButton::hold();
    TButton::click();
    TButton::doubleClick();
}

TEST(Button, isPressedState) {
    getRegister(TPortR) = 1U; // set the first pin

    EXPECT_EQ(TPullUpButton::isPressedState(), false);
    EXPECT_EQ(TPullDownButton::isPressedState(), true);
}

TEST(Button, pressFlap) {
    clearState();
    prepareDebounceState();

    getRegister(TPortR) = 0U; // release button
    countTicks(12);

    EXPECT_EQ(TButton::press(), false);
    clearState();
}

TEST(Button, press) {
    prepareDebounceState();
    preparePressState();

    EXPECT_EQ(TButton::press(), true);

    getRegister(TPortR) = 0U; // release button
    countTicks(5);

    clearState();
}

TEST(Button, release) {
    prepareDebounceState();
    preparePressState();
    prepareReleaseState();

    EXPECT_EQ(TButton::click(), true);
    EXPECT_EQ(TButton::click(), false);
    clearState();
}

TEST(Button, doubleClick) {
    prepareDebounceState();
    preparePressState();
    prepareReleaseState();

    prepareDebounceState();
    preparePressState();
    prepareReleaseState();

    EXPECT_EQ(TButton::click(), true);
    EXPECT_EQ(TButton::click(), false);
    EXPECT_EQ(TButton::doubleClick(), true);
    EXPECT_EQ(TButton::doubleClick(), false);
    clearState();
}

TEST(Button, hold) {
    prepareDebounceState();
    preparePressState();

    setMillis(millis() + 2000); // increase time
    countTicks(100);

    EXPECT_EQ(TButton::hold(), true);
    EXPECT_EQ(TButton::hold(), false);
    clearState();
}
#define NG_BUTTON_DEBOUNCE  1

#include <gtest/gtest.h>
#include <millis.hpp>
#include <Button.hpp>

using namespace ng;

using TPullUpButton =  Button<1U, 0>;
using TPullDownButton =  Button<1U, 0, ng::PULL_DOWN>;
using TButton = Button<1U, 0, ng::PULL_DOWN>;

void prepareDebounceState() {
    setMillis(1); // init timer
    ng::testPort1.IDR = 1U; // press button
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
    ng::testPort1.IDR = 1U; // press button
    countTicks(5);
}

void prepareReleaseState() {
    ng::testPort1.IDR = 0U; // release button
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
    ng::testPort1.IDR = 1U; // set the first pin

    EXPECT_EQ(TPullUpButton::isPressedState(), false);
    EXPECT_EQ(TPullDownButton::isPressedState(), true);
}

TEST(Button, pressFlap) {
    clearState();
    prepareDebounceState();

    ng::testPort1.IDR = 0U; // release button
    countTicks(12);

    EXPECT_EQ(TButton::press(), false);
    clearState();
}

TEST(Button, press) {
    prepareDebounceState();
    preparePressState();

    EXPECT_EQ(TButton::press(), true);

    ng::testPort1.IDR = 0U; // release button
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



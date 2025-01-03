#include <gtest/gtest.h>
#include <millis.hpp>
#include <app/TimerTask.hpp>

using namespace ng;

uint32_t fnRunCnt = 0; // width of running callback function
class TestTask {
public:
    static void run() {
        fnRunCnt++;
    }
};


TEST(TimerTask, runImmediately) {
    // we can't reach this period, but function will be executed at the beginning
    TimerTask<TestTask, 10> task;

    for (int i = 0; i < 5; i++) {
        tick();
        task.tick();
    }

    EXPECT_EQ(fnRunCnt, 1);
}

TEST(TimerTask, runAfterPeriod) {
    // with this period function will be executed only once after period ending
    TimerTask<TestTask, 1, false> task;

    tick();
    task.tick();

    EXPECT_EQ(fnRunCnt, 1);
}

TEST(TimerTask, runPeriodically) {
    TimerTask<TestTask, 5, false> task;

    for (int i = 0; i < 10; i++) {
        tick();
        task.tick();
    }

    EXPECT_EQ(fnRunCnt, 2);
}

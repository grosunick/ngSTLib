#pragma once

#include <cstdint>
#include <millis.hpp>

using namespace ng::time;

namespace ng
{
    /**
     * Runs task {Task} periodically after {period} of milliseconds.
     * Task must implements method run
     *
     * Example:
     *
     * class MyTask {
     *      void run() {
     *          ButtonPin<GPIOA_BASE, 1>::toggle();
     *      }
     * }
     *
     * // ......
     *
     * while (1) {
     *      timerTick<MyTask, 500>::tick();
     * }
     *
     */
    template <typename Task, uint32_t period = 1, bool runImmediately = true>
    static void timerTick() {
        static uint32_t timer = millis();
        static bool immediately = runImmediately;

        if (immediately) {
            Task::run();
            immediately = false;
        }

        auto tmp = millis();
        if (tmp - timer >= period) {
            timer = millis();
            Task::run();
        }
    }

    /**
     * Runs task {Task} periodically after {period} of milliseconds.
     */
    template <typename Task, uint32_t period = 1, bool runImmediately = true>
    class TimerTask
    {
    public:
        static void tick() {
            timerTick<Task, period, runImmediately>();
        }
    };

    /**
     * Runs function {fn} periodically after {period} of milliseconds.
     */
    template <auto fn, uint32_t period = 1, bool runImmediately = true>
    class TimerFn
    {
        class Task {
        public:
            static inline void run() {
                fn();
            }
        };
    public:
        static void tick() {
            timerTick<Task, period, runImmediately>();
        }
    };
}



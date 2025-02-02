#pragma once

#include "TimerTask.hpp"
#include <cstdint>

namespace ng
{
    template <typename ... T> class App
    {
    public:
        /** Runs all tasks */
        constexpr static void run() {
            (T::tick(), ...);
        }
    };
}

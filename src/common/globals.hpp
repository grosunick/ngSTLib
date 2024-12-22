#pragma once

#include "stdlib.h"

extern uint32_t SystemCoreClock; /*!< System Clock Frequency (Core Clock) */

namespace ng {
    namespace time {
        extern volatile uint32_t sec; // seconds from app start
        extern volatile uint32_t milliseconds; // milliseconds from app start
    }
}

#pragma once

#include <common/defines.h>
#include <RccRegisters.hpp>

namespace ng
{
    enum class MSIRange {
        Range0 = 0b00,  // around 65.536 kHz
        Range1 = 0b001, // around 131.072 kHz
        Range2 = 0b010, // around 262.144 kHz
        Range3 = 0b011, // around 524.288 kHz
        Range4 = 0b100, // around 1.048 MHz
        Range5 = 0b101, // around 2.097 MHz (reset value)
        Range6 = 0b110  // around 4.194 MHz
    };

    class SysClock {
    public:
        /** system configuration controller clock enable */
        __force_inline void systemConfigClockEnable() {
            ngRCC::APB2ENR::SYSCFGEN::Enable::set();
        }

        /** select MSI as system clock source */
        __force_inline void selectMSIAsSystemClock() {
            ngRCC::CFGR::SW::MSI::set();
            while(!ngRCC::CFGR::SWS::MSI::isSet());
        }

        /** enable msi clock source */
        template<MSIRange range> __force_inline void enableMSIClockSource() {
            ngRCC::CR::MSION::On::set();
            while(!ngRCC::CR::MSIRDY::Ready::isSet());

            // select msi clock divider
            if constexpr (range == MSIRange::Range0) {
                ngRCC::ICSCR::MSIRANGE::Range0::set();
            } else if constexpr (range == MSIRange::Range1) {
                ngRCC::ICSCR::MSIRANGE::Range1::set();
            } else if constexpr (range == MSIRange::Range2) {
                ngRCC::ICSCR::MSIRANGE::Range2::set();
            } else if constexpr (range == MSIRange::Range3) {
                ngRCC::ICSCR::MSIRANGE::Range3::set();
            } else if constexpr (range == MSIRange::Range4) {
                ngRCC::ICSCR::MSIRANGE::Range4::set();
            } else if constexpr (range == MSIRange::Range5) {
                ngRCC::ICSCR::MSIRANGE::Range5::set();
            } else if constexpr (range == MSIRange::Range6) {
                ngRCC::ICSCR::MSIRANGE::Range6::set();
            }

            ngRCC::ICSCR::MSITRIM::set(0); // calibrate msi
        }
    };
}
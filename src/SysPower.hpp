#pragma once

#include <common/defines.h>
#include <PwrRegisters.hpp>

namespace ng
{
    /** CPU voltage scaling range selection */
    enum class PWRRange {
        Range1 = 0b01,  // 1.8 V
        Range2 = 0b10,  // 1.5 V (range 2)
        Range3 = 0b11   // 1.2 V (range 3)
    };

    class SysPower {
    public:
        /** setting the processor power mode */
        template<PWRRange range> __force_inline void selectCPUPower() {
            if constexpr (range == PWRRange::Range1) {
                ngPWR::CR::VOS::Range1::set();
            } else if constexpr (range == PWRRange::Range2) {
                ngPWR::CR::VOS::Range2::set();
            } else if constexpr (range == PWRRange::Range3) {
                ngPWR::CR::VOS::Range3::set();
            }

            while(ngPWR::CSR::VOSF::Ready::isSet());
        }
    };
}
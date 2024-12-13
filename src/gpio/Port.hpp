#pragma once

#include <cstdint>
#include <type_traits>
#include <register/Access.hpp>
#include <register/getPort.h>

namespace ng
{
    template <typename T>
    class Port
    {
        __force_inline bool validValue(uint32_t val) {
            return (val <= (1 << 16U));
        }

    public:
        __force_inline bool set(uint32_t value) {
            if (!validValue(value)) return false;

            T::BSRR::write(value);
            return true;
        }

        __force_inline bool reset(uint32_t value) {
            if (!validValue(value)) return false;

            T::BSRR::write(value << 16);
            return true;
        }

        __force_inline bool toggle(uint32_t value) {
            if (!validValue(value)) return false;

            T::BSRR::toggle(value);
            return true;
        }

        __force_inline uint32_t get() {
            return T::IDR::get();
        }
    };

    constexpr uint32_t PORT_FAKE = 0;
}

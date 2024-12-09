#pragma once

#include <cstdint>
#include <type_traits>
#include <register/Access.hpp>
#include <register/getPort.h>

namespace ng
{
    template <uint32_t PORT, typename AccessMode = ReadWrite>
    class Port
    {
        __force_inline bool validValue(uint32_t val) {
            return (val <= (1 << 16U));
        }

    public:
        static_assert(PORT > 0U, "There are only 16 pins on port");

        template <writable T = AccessMode>
        __force_inline bool set(uint32_t value) {
            if (!validValue(value)) return false;
            volatile auto GPIOPort = GET_PORT(PORT);

            GPIOPort->BSRR = value;
            return true;
        }

        template <writable T = AccessMode>
        __force_inline bool reset(uint32_t value) {
            if (!validValue(value)) return false;
            volatile auto GPIOPort = GET_PORT(PORT);

            GPIOPort->BSRR = value << 16;
            return true;
        }

        template <writable T = AccessMode>
        __force_inline bool toggle(uint32_t value) {
            if (!validValue(value)) return false;
            volatile auto GPIOPort = GET_PORT(PORT);

            GPIOPort->ODR ^= value;
            return true;
        }

        template <readable T = AccessMode>
        __force_inline uint32_t get() {
            volatile auto GPIOPort = GET_PORT(PORT);
            return GET_IDR_REGISTER(GPIOPort);
        }
    };

    constexpr uint32_t PORT_FAKE = 0;
}

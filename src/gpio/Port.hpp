#pragma once

#include <type_traits>
#include <cstdint>
#include <gpio/AccessMode.h>
#include <gpio/getPort.h>

namespace ng
{
    template <uint32_t PORT, typename AccessMode = ReadWrite>
    class Port
    {
        static bool validValue(uint32_t val) {
            return (val <= (1 << 16U));
        }

    public:
        template<typename T = AccessMode, class = typename std::enable_if_t<std::is_base_of<Write, T>::value>>
        static inline bool set(uint32_t value) {
            if (!validValue(value)) return false;
            volatile auto GPIOPort = GET_PORT(PORT);

            if (PORT) GPIOPort->BSRR = value;
            return true;
        }

        template<typename T = AccessMode, class = typename std::enable_if_t<std::is_base_of<Write, T>::value>>
        static inline bool reset(uint32_t value) {
            if (!validValue(value)) return false;
            volatile auto GPIOPort = GET_PORT(PORT);

            if (PORT) GPIOPort->BSRR = value << 16;
            return true;
        }

        template<typename T = AccessMode, class = typename std::enable_if_t<std::is_base_of<Write, T>::value>>
        static inline bool toggle(uint32_t value) {
            if (!validValue(value)) return false;
            volatile auto GPIOPort = GET_PORT(PORT);

            if (PORT) GPIOPort->ODR ^= value;
            return true;
        }

        template<typename T = AccessMode, class = typename std::enable_if_t<std::is_base_of<Read, T>::value>>
        static inline uint32_t get() {
            volatile auto GPIOPort = GET_PORT(PORT);
            if (PORT) return GET_IDR_REGISTER(GPIOPort);
        }
    };

    constexpr uint32_t PORT_FAKE = 0;
}

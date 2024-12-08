#pragma once

#include <cstdint>
#include <type_traits>
#include <gpio/Port.hpp>

namespace ng
{
    template<uint32_t PORT, uint8_t pinNum, typename AccessMode = ReadWrite>
    class Pin
    {
    public:
        using PortType = Port<PORT, AccessMode>;
        static constexpr uint32_t pin = pinNum;

        static_assert(pinNum <= 15U, "There are only 16 pins on port");
        static_assert(PORT > 0U, "There are only 16 pins on port");

        template <writable T = AccessMode>
        __attribute__((always_inline)) static inline void set() {
            PortType::set(1U << pinNum);
        }

        template <writable T = AccessMode>
        __attribute__((always_inline)) static inline void reset() {
            PortType::reset(1U << pinNum);
        }

        template <writable T = AccessMode>
        __attribute__((always_inline)) static inline void write(bool value) {
            if (value) {
                set();
            } else {
                reset();
            }
        }

        template <writable T = AccessMode>
        __attribute__((always_inline)) static inline void toggle() {
            PortType::toggle(1U << pinNum);
        }

        template <readable T = AccessMode>
        __attribute__((always_inline)) static inline bool get() {
            return (PortType::get() & (1U << pinNum)) >> pinNum;
        }

        template <readable T = AccessMode>
        __attribute__((always_inline)) static inline auto isSet() {
            return (PortType::get() & (1U << pinNum)) != 0;
        }
    };
}


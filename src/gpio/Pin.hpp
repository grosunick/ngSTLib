#pragma once

#include <cstdint>
#include <gpio/Port.hpp>

namespace ng
{
    template<typename Port, uint8_t pinNum>
    class Pin
    {
    public:
        using PortType = Port;
        static constexpr uint32_t pin = pinNum;

        static_assert(pinNum <= 15U, "There are only 16 pins on port");

        __force_inline void set() {
            PortType::set(1U << pinNum);
        }

        __force_inline void reset() {
            PortType::reset(1U << pinNum);
        }

        __force_inline void write(bool value) {
            if (value) {
                set();
            } else {
                reset();
            }
        }

        __force_inline void toggle() {
            PortType::toggle(1U << pinNum);
        }

        __force_inline bool get() {
            return (PortType::get() & (1U << pinNum)) >> pinNum;
        }

        __force_inline auto isSet() {
            return (PortType::get() & (1U << pinNum)) != 0;
        }
    };
}


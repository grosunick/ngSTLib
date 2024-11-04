#pragma once

#include <cstdint>
#include <type_traits>
#include <gpio/Port.hpp>

namespace ng
{
    template<
            uint32_t PORT, uint8_t pinNum,
            typename AccessMode = ReadWrite,
            class = typename std::enable_if_t<(pinNum <= 15U)>>
    class Pin
    {
    public:
        static constexpr uint32_t pin = pinNum;
        static constexpr uint32_t port = PORT;

        using PortType = Port<PORT, AccessMode>;

        static_assert(pin <= 15U, "There are only 16 pins on port");

        template<typename T = AccessMode, class = typename std::enable_if_t<std::is_base_of<Write, T>::value>>
        static void set() {
            if (PORT) PortType::set(1U << pin);
        }

        template<typename T = AccessMode, class = typename std::enable_if_t<std::is_base_of<Write, T>::value>>
        static void reset() {
            if (PORT) PortType::reset(1U << pin);
        }

        template<typename T = AccessMode, class = typename std::enable_if_t<std::is_base_of<Write, T>::value>>
        static void write(bool value) {
            if (value) {
                set();
            } else {
                reset();
            }
        }

        template<typename T = AccessMode, class = typename std::enable_if_t<std::is_base_of<Write, T>::value>>
        static void toggle() {
            if (PORT) PortType::toggle(1U << pin);
        }

        template<typename T = AccessMode, class = typename std::enable_if_t<std::is_base_of<Read, T>::value>>
        static bool get() {
            return (PORT) != 0 && ((PortType::get() & (1U << pin)) >> pin);
        }

        template<typename T = AccessMode, class = typename std::enable_if_t<std::is_base_of<Read, T>::value>>
        static auto isSet() {
            return PORT && ((PortType::get() & (1U << pin)) != 0);
        }
    };
}


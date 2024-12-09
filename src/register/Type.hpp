#pragma once

#include <cstdint>

namespace ng {
    template <uint32_t size> struct RegisterType {};

    template<> struct RegisterType<8> {
        using Type = uint8_t;
    };

    template<> struct RegisterType<16> {
        using Type = uint16_t;
    };

    template<> struct RegisterType<32> {
        using Type = uint32_t;
    };

    template<> struct RegisterType<64> {
        using Type = uint64_t;
    };
}

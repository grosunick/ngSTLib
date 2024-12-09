#pragma once

#include <cassert>
#include <limits>
#include "Access.hpp"
#include "getPort.h"

namespace ng
{
    template<typename Reg, uint32_t offset, uint32_t size, typename AccessMode>
    class RegisterField
    {
        using Type = typename Reg::Type;
        using Register = Reg;

        __force_inline void check(Type value) {
            assert(
                (size < sizeof(Type) * 8U)?
                    (value <= ((1U << size) - 1U)):
                    (value <= std::numeric_limits<Type>::max())
            );
        }
    public:
        static constexpr Type Offset = offset;
        static constexpr Type Size = size;
        static constexpr Type Mask = (size < sizeof(Type) * 8U)? ((1U << size) - 1U): std::numeric_limits<Type>::max();

        template<writable T = AccessMode>
        __force_inline void write(Type value) {
            check(value);
            GET_REGISTER(Reg::Address) = (value << offset);
        }

        template<writable T = AccessMode>
        __force_inline void set(Type value) {
            check(value);
            Type val = GET_REGISTER_VAL(Reg::Address);

            val &= ~(Mask << offset); // Clearing the necessary bits of the register
            val |= (value << offset); // Setting the new value for the register bits

            GET_REGISTER(Reg::Address) = val; // Write a new value for the register.
        }

        template<readable T = AccessMode>
        __force_inline Type get() {
            return ((GET_REGISTER_VAL(Reg::Address)) & (Mask << offset)) >> offset;
        }
    };
}
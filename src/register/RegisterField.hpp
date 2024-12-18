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
    public:
        using Type = typename Reg::Type;
        using Access = AccessMode;
        using Register = Reg;

        static constexpr Type Offset = offset;
        static constexpr Type Size = size;
        static constexpr Type Mask = (size < sizeof(Type) * 8U)? ((1U << size) - 1U): std::numeric_limits<Type>::max();

        template<writable T = Access> __force_inline void write(Type value) {
            GET_REGISTER(Reg::Address) = (value << offset);
        }

        template<writable T = Access, Type value> __force_inline void write() {
            GET_REGISTER(Reg::Address) = (value << offset);
        }

        template<writable T = Access> __force_inline void set(Type value) {
            GET_REGISTER(Reg::Address) =
                    (GET_REGISTER_VAL(Reg::Address) & ~(Mask << offset)) | (value << offset);
        }

        template<writable T = Access, Type value> __force_inline void set() {
            GET_REGISTER(Reg::Address) =
                    (GET_REGISTER_VAL(Reg::Address) & ~(Mask << offset)) | (value << offset);
        }

        template<writable T = Access> __force_inline void toggle() {
            GET_REGISTER(Reg::Address) = GET_REGISTER_VAL(Reg::Address) ^ (((1U << size) - 1U) << offset);
        }

        template<readable T = Access> __force_inline Type get() {
            return ((GET_REGISTER_VAL(Reg::Address)) & (Mask << offset)) >> offset;
        }
    };
}
#pragma once

#include <cstddef>
#include <type_traits>
#include "Access.hpp"
#include "RegisterField.hpp"

namespace ng
{
    template<typename Field, typename Field::Register::Type value, typename Base>
    class FieldValue
    {
    public:
        using Type = typename Field::Register::Type;
        using Access = typename Field::Access;
        using BaseType = Base;

        static constexpr Type Value = value;
        static constexpr Type Address = Field::Register::Address;
        static constexpr Type Mask = Field::Mask;
        static constexpr Type Offset = Field::Offset;

        template<writable T = Access> __force_inline void set() {
            Field::set(value);
        }

        template<writable T = Access> __force_inline void write() {
            Field::write(value);
        }

        template<readable T = Access> __force_inline bool isSet() {
            return Field::get() == value;
        }
    };
}
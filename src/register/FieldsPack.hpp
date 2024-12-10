#pragma once

#include "getPort.h"
#include "Type.hpp"
#include "Access.hpp"

namespace ng
{
    template <typename T, typename U> concept same = std::is_same_v<typename T::BaseType, U>;
    template <typename T, typename U> concept sameAccess = std::is_same_v<typename T::Access, U> ||
            std::is_same_v<typename T::Access, ReadWrite>;

    template<std::uintptr_t address, size_t size, typename AccessMode, typename Base, typename ...Args>
    class FieldsPack
    {
    public:
        static constexpr auto Address = address;
        using Type = typename RegisterType<size>::Type;
        using Access = AccessMode;
        using BaseType = Base;

        template<writable T = Access> __force_inline void set() {
            Type newRegValue = GET_REGISTER_VAL(Address);
            constexpr auto mask = getMask();
            constexpr auto value = getValue();

            newRegValue &= ~mask;
            newRegValue |= value;

            GET_REGISTER(Address) = newRegValue;
        }

        template<writable T = Access> __force_inline void write() {
            constexpr auto value = getValue();
            GET_REGISTER(Address) = value;
        }

        template<writable T = Access> __force_inline bool isSet() {
            constexpr auto mask = getMask();
            constexpr auto value = getValue();

            Type newRegValue = GET_REGISTER_VAL(Address);
            return ((newRegValue & mask) == value);
        }

    private:
        __force_inline auto getMask() {
            checkAccess();
            return (getIndividualMask<Args>() | ...);
        }

        template<same<BaseType> T> __force_inline auto getIndividualMask() {
            constexpr Type result = T::Mask << T::Offset;
            return result;
        }

        __force_inline auto getValue() {
            checkAccess();
            return (getIndividualValue<Args>() | ...);
        }

        template<same<BaseType> T> __force_inline auto getIndividualValue() {
            constexpr Type result = T::Value << T::Offset;
            return result;
        }

        __force_inline auto checkAccess() {
            return (checkIndividualAccess<Args>() | ...);
        }

        template<sameAccess<Access> T> __force_inline auto checkIndividualAccess() {
            return true;
        }
    };
}
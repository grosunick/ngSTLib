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
            GET_REGISTER(Address) = (GET_REGISTER_VAL(Address) & ~getMask()) | getValue();
        }

        template<writable T = Access> __force_inline void write() {
            GET_REGISTER(Address) = getValue();
        }

        template<writable T = Access> __force_inline bool isSet() {
            return ((GET_REGISTER_VAL(Address) & getMask()) == getValue());
        }

    private:
        __force_inline auto getMask() {
            checkAccess();
            return (getIndividualMask<Args>() | ...);
        }

        template<same<BaseType> T> __force_inline auto getIndividualMask() {
            return T::Mask << T::Offset;
        }

        __force_inline auto getValue() {
            checkAccess();
            return (getIndividualValue<Args>() | ...);
        }

        template<same<BaseType> T> __force_inline auto getIndividualValue() {
            return T::Value << T::Offset;
        }

        __force_inline auto checkAccess() {
            return (checkIndividualAccess<Args>() | ...);
        }

        template<sameAccess<Access> T> __force_inline auto checkIndividualAccess() {
            return true;
        }
    };
}
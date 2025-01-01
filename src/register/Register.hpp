#pragma once

#include "Type.hpp"
#include "Access.hpp"
#include "getPort.h"

namespace ng
{
    using namespace std;

    /**
     * Base class for working with register
     *
     * @tparam address Register Address in the microcontroller's memory
     * @tparam size Register size: 8, 16, 32, 64
     * @tparam AccessMode Register access mode: Read | Write | ReadWrite
     */
    template<uintptr_t address, typename AccessMode, uint32_t size = 32>
    class Register
    {
    public:
        static constexpr auto Address = address;
        using Type = typename RegisterType<size>::Type;

        template <writable T = AccessMode> __force_inline void write(Type value) {
            GET_REGISTER(Address) = value;
        }

        template <writable T = AccessMode> __force_inline void set(Type value) {
            GET_REGISTER(Address) = GET_REGISTER_VAL(Address) | value;
        }

        template <writable T = AccessMode> __force_inline void toggle(Type value) {
            GET_REGISTER(Address) ^= value;
        }

        template <readable T = AccessMode> __force_inline Type get() {
            return GET_REGISTER_VAL(Address);
        }
    };
}
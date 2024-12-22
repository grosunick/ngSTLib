#pragma once

#include <common/defines.h>

namespace ng {
    template<auto... TSubscriber> class Observer {
    public:
        static void notify() {
            (TSubscriber(), ...);
        }
    };

    template <auto fn> class Func {
    public:
        static void notify() {
            fn();
        }
    };
}

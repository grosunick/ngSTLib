#pragma once

#include <common/defines.h>

namespace ng {
    template<typename ...TSubscriber> class Observer {
    public:
        static void notify() {
            (TSubscriber::updateCallback(), ...);
        }
    };

    template <auto fn> class Func {
    public:
        static void notify() {
            fn();
        }
    };
}

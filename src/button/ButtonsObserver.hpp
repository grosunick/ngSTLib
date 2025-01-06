#pragma once

#include <common/defines.h>
#include <common/Observer.hpp>

namespace ng::button
{
    template<typename ...TSubscriber> class ButtonsObserver: public Observer<TSubscriber...> {
    public:
        __force_inline void callback() {
            (TSubscriber::inpCaptCallback(), ...);
        }
    };
}

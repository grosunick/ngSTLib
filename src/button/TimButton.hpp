#pragma once

#include <button/State.hpp>
#include <timer/ICC.hpp>
#include <timer/TimGeneral.hpp>

namespace ng
{
    namespace button
    {
        #define TTimButtonParams T, channel, pullUp, Pin
        #define TTimButton template <typename T, timer::TimChannel channel, InputPullUp pullUp, typename Pin>
        
        template<typename T, timer::TimChannel channel, InputPullUp pullUp, typename Pin> class TimButton {
            static ButtonState btnState;
            static uint8_t risingFront;
            
        public:
            using ICC = timer::ICC<T, channel, Pin>;
            
            __force_inline void init() {
                if (pullUp == InputPullUp::Down) {
                    risingFront = 1;
                }
                
                ICC::template init<pullUp>(1000);
            }
            
            __force_inline void callback() {
                if (ICC::isEventTriggered()) {
                    if (pullUp == InputPullUp::Up) {
                        if (!risingFront) { // press button handler
                            risingFront = 1;
                            ICC::TIM::setCounter(0);
                            btnState.press();
                            ICC::TIM::template setInputPolarity<timer::InpCaptCmpPolarity::Rising>();
                        } else { // release button handler
                            risingFront = 0;
                            btnState.click();
                            ICC::TIM::template setInputPolarity<timer::InpCaptCmpPolarity::Falling>();
                        }
                    }
                    
                    ICC::clearEventFlag();
                }
            }
    
            __force_inline bool isPressed() {
                return btnState.isPressed();
            }
    
            __force_inline bool isClicked() {
                return btnState.isClicked();
            }
    
            __force_inline bool isDoubleClicked() {
                return btnState.isDoubleClicked();
            }
    
            __force_inline bool isHeld() {
                return btnState.isHeld();
            }
        };
        
        TTimButton ButtonState TimButton<TTimButtonParams>::btnState = ButtonState();
        TTimButton uint8_t TimButton<TTimButtonParams>::risingFront = 0;
    }
}
#pragma once

#include <button/State.hpp>
#include <timer/ICC.hpp>
#include <timer/TimGeneral.hpp>

namespace ng::button
{
    #define TTimButtonParams T, channel, pullType, Pin
    #define TTimButton template <typename T, timer::TimChannel channel, InputPullUp pullType, typename Pin>
    
    template<typename T, timer::TimChannel channel, InputPullUp pullType, typename Pin> class TimButton {
        static ButtonState btnState;
    
    public:
        using ICC = timer::ICC<T, channel, Pin>;
        
        static void init() {
            ICC::template init<pullType>(1000);
        }
        
        static void changeTriggerPolarity() {
            if constexpr (pullType == InputPullUp::Up) {
                if (isPressedMode()) {
                    ICC::TIM::template setInputPolarity<timer::InpCaptCmpPolarity::Rising>();
                } else {
                    ICC::TIM::template setInputPolarity<timer::InpCaptCmpPolarity::Falling>();
                }
            }
            
            if constexpr (pullType == InputPullUp::Down) {
                if (isPressedMode()) {
                    ICC::TIM::template setInputPolarity<timer::InpCaptCmpPolarity::Falling>();
                } else {
                    ICC::TIM::template setInputPolarity<timer::InpCaptCmpPolarity::Rising>();
                }
            }
        }
        
        static bool isPressedMode() {
            using timer::InpCaptCmpPolarity;
            
            if constexpr (pullType == InputPullUp::Up) {
                if (ICC::TIM::getInputPolarity() == InpCaptCmpPolarity::Falling) {
                    return true;
                }
            }
            
            if constexpr (pullType == InputPullUp::Down) {
                if (ICC::TIM::getInputPolarity() == InpCaptCmpPolarity::Rising) {
                    return true;
                }
            }
            
            return false;
        }
    
        static void callback() {
            if (ICC::isEventTriggered()) {
                if (isPressedMode()) { // pull up button handler
                    ICC::TIM::setCounter(0);
                    btnState.press();
                    changeTriggerPolarity();
                } else { // pull down button handler
                    btnState.click();
                    changeTriggerPolarity();
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
}
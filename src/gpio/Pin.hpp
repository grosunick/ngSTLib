#pragma once

#include <cstdint>
#include <register/RegisterField.hpp>
#include <gpio/Port.hpp>

namespace ng
{
    enum class InputPullUp {
        No,
        Up,
        Down
    };

    enum class OutputType {
        PushPull,
        OpenDrain
    };

    enum class OutputSpeed {
        Low,
        Medium,
        High,
        Max
    };

    enum class AlternateFn {
        AF0 = 0b0000,
        AF1 = 0b0001,
        AF2 = 0b0010,
        AF3 = 0b0011,
        AF4 = 0b0100,
        AF5 = 0b0101,
        AF6 = 0b0110,
        AF7 = 0b0111,
        AF8 = 0b1000,
        AF9 = 0b1001,
        AF10 = 0b1010,
        AF11 = 0b1011,
        AF12 = 0b1100,
        AF13 = 0b1101,
        AF14 = 0b1110,
        AF15 = 0b1111
    };

    template<typename PortReg, uint8_t pinNum, AlternateFn altFn = AlternateFn::AF0>
    class Pin
    {
        template <typename T, typename T::Type val, uint8_t altPin = pinNum> __force_inline void setReg() {
            RegisterField<T, T::FieldValues::Size * altPin, T::FieldValues::Size, Write>::set(val);
        }
    public:
        using TPort = Port<PortReg>;
        static constexpr uint32_t pin = pinNum;
        static constexpr uint32_t pinMask = 1U << pinNum;

        static_assert(pinNum <= 15U, "There are only 16 pins on port");

        __force_inline void set() {
            TPort::template set<pinMask>();
        }

        __force_inline void reset() {
            TPort::template reset<pinMask>();
        }

        __force_inline void write(bool value) {
            if (value) {
                TPort::template set<pinMask>();
            } else {
                TPort::template reset<pinMask>();
            }
        }

        __force_inline void toggle() {
            TPort::template toggle<pinMask>();
        }

        __force_inline bool get() {
            return (TPort::get() & (pinMask)) >> pinNum;
        }

        __force_inline bool isSet() {
            return (TPort::get() & (pinMask)) != 0;
        }
        
        /**
         * The method returns the current pull (up/down) value for pin.
         * @return
         */
        InputPullUp getPullUp() {
            using TReg = typename TPort::Reg::PUPDR;
            
            auto val = RegisterField<
                TReg,
                TReg::FieldValues::Size * pinNum,
                TReg::FieldValues::Size,
                Read
            >::get();
            
            if (val == TReg::PUPDR::FieldValues::PullUp) {
                return InputPullUp::Up;
            } else if (val == TReg::PUPDR::FieldValues::PullDown) {
                return InputPullUp::Down;
            }
            
            return InputPullUp::No;
        }

        template <InputPullUp pullUp = InputPullUp::No> __force_inline void setInput() {
            using PupdrType = typename TPort::Reg::PUPDR::Type;

            // setup pin as input
            setReg<typename TPort::Reg::MODER, TPort::Reg::MODER::FieldValues::Input::Value>();

            // setup the pullUp/pullDown resistor
            if constexpr (pullUp == InputPullUp::No) {
                constexpr PupdrType inputPullUp = TPort::Reg::PUPDR::FieldValues::NoPullUpPullDown::Value;
                setReg<typename TPort::Reg::PUPDR, inputPullUp>();
            } else if constexpr (pullUp == InputPullUp::Up) {
                constexpr PupdrType inputPullUp = TPort::Reg::PUPDR::FieldValues::PullUp::Value;
                setReg<typename TPort::Reg::PUPDR, inputPullUp>();
            } else if constexpr (pullUp == InputPullUp::Down) {
                constexpr PupdrType inputPullUp = TPort::Reg::PUPDR::FieldValues::PullDown::Value;
                setReg<typename TPort::Reg::PUPDR, inputPullUp>();
            }
        }

        template <OutputType outputType = OutputType::PushPull, OutputSpeed outputSpeed = OutputSpeed::Low>
        __force_inline void setOutput() {
            using OtyperType = typename TPort::Reg::PUPDR::Type;
            using OspeederType = typename TPort::Reg::PUPDR::Type;

            // setup pin as output
            setReg<typename TPort::Reg::MODER, TPort::Reg::MODER::FieldValues::Output::Value>();

            // setup pin output type
            if constexpr (outputType == OutputType::PushPull) {
                constexpr OtyperType outPinType = TPort::Reg::OTYPER::FieldValues::PushPull::Value;
                setReg<typename TPort::Reg::OTYPER, outPinType>();
            } else if constexpr (outputType == OutputType::OpenDrain) {
                constexpr OtyperType outPinType = TPort::Reg::OTYPER::FieldValues::OpenDrain::Value;
                setReg<typename TPort::Reg::OTYPER, outPinType>();
            }

            // setup output speed
            if constexpr (outputSpeed == OutputSpeed::Low) {
                constexpr OspeederType outPinSpeed = TPort::Reg::OSPEEDER::FieldValues::Low::Value;
                setReg<typename TPort::Reg::OSPEEDER, outPinSpeed>();
            } else if constexpr (outputSpeed == OutputSpeed::Medium) {
                constexpr OspeederType outPinSpeed = TPort::Reg::OSPEEDER::FieldValues::Medium::Value;
                setReg<typename TPort::Reg::OSPEEDER, outPinSpeed>();
            } else if constexpr (outputSpeed == OutputSpeed::High) {
                constexpr OspeederType outPinSpeed = TPort::Reg::OSPEEDER::FieldValues::High::Value;
                setReg<typename TPort::Reg::OSPEEDER, outPinSpeed>();
            } else if constexpr (outputSpeed == OutputSpeed::Max) {
                constexpr OspeederType outPinSpeed = TPort::Reg::OSPEEDER::FieldValues::Max::Value;
                setReg<typename TPort::Reg::OSPEEDER, outPinSpeed>();
            }
        }

        template <
            OutputType outputType = OutputType::PushPull,
            InputPullUp pullUp = InputPullUp::No,
            OutputSpeed outputSpeed = OutputSpeed::Low
        >
        __force_inline void setAlternate() {
            using AFRLType = typename TPort::Reg::AFRL::Type;
            using OtyperType = typename TPort::Reg::PUPDR::Type;
            using OspeederType = typename TPort::Reg::PUPDR::Type;
            using PupdrType = typename TPort::Reg::PUPDR::Type;

            // setup pin as output
            setReg<typename TPort::Reg::MODER, TPort::Reg::MODER::FieldValues::Alternate::Value>();

            // setup alt function
            if constexpr (pin <= 7) {
                setReg<typename TPort::Reg::AFRL, (AFRLType)altFn>();
            } else {
                setReg<typename TPort::Reg::AFRH, (AFRLType)altFn, pin - 8>();
            }
    
            // setup pin output type
            if constexpr (outputType == OutputType::PushPull) {
                constexpr OtyperType outPinType = TPort::Reg::OTYPER::FieldValues::PushPull::Value;
                setReg<typename TPort::Reg::OTYPER, outPinType>();
            } else if constexpr (outputType == OutputType::OpenDrain) {
                constexpr OtyperType outPinType = TPort::Reg::OTYPER::FieldValues::OpenDrain::Value;
                setReg<typename TPort::Reg::OTYPER, outPinType>();
            }
    
            // setup the pullUp/pullDown resistor
            if constexpr (pullUp == InputPullUp::No) {
                constexpr PupdrType inputPullUp = TPort::Reg::PUPDR::FieldValues::NoPullUpPullDown::Value;
                setReg<typename TPort::Reg::PUPDR, inputPullUp>();
            } else if constexpr (pullUp == InputPullUp::Up) {
                constexpr PupdrType inputPullUp = TPort::Reg::PUPDR::FieldValues::PullUp::Value;
                setReg<typename TPort::Reg::PUPDR, inputPullUp>();
            } else if constexpr (pullUp == InputPullUp::Down) {
                constexpr PupdrType inputPullUp = TPort::Reg::PUPDR::FieldValues::PullDown::Value;
                setReg<typename TPort::Reg::PUPDR, inputPullUp>();
            }
    
            // setup output speed
            if constexpr (outputSpeed == OutputSpeed::Low) {
                constexpr OspeederType outPinSpeed = TPort::Reg::OSPEEDER::FieldValues::Low::Value;
                setReg<typename TPort::Reg::OSPEEDER, outPinSpeed>();
            } else if constexpr (outputSpeed == OutputSpeed::Medium) {
                constexpr OspeederType outPinSpeed = TPort::Reg::OSPEEDER::FieldValues::Medium::Value;
                setReg<typename TPort::Reg::OSPEEDER, outPinSpeed>();
            } else if constexpr (outputSpeed == OutputSpeed::High) {
                constexpr OspeederType outPinSpeed = TPort::Reg::OSPEEDER::FieldValues::High::Value;
                setReg<typename TPort::Reg::OSPEEDER, outPinSpeed>();
            } else if constexpr (outputSpeed == OutputSpeed::Max) {
                constexpr OspeederType outPinSpeed = TPort::Reg::OSPEEDER::FieldValues::Max::Value;
                setReg<typename TPort::Reg::OSPEEDER, outPinSpeed>();
            }
        }

        __force_inline void setAnalog() {
            // setup pin as input
            setReg<typename TPort::Reg::MODER, TPort::Reg::MODER::FieldValues::Analog::Value>();
        }
    };
}
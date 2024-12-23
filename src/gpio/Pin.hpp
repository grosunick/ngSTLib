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

    template<typename PortReg, uint8_t pinNum>
    class Pin
    {
        template <typename T>
        __force_inline void setReg(typename T::Type val) {
            RegisterField<T, T::FieldValues::Size * pin, T::FieldValues::Size, Write>::set(val);
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

        template <InputPullUp pullUp = InputPullUp::No> __force_inline void setInput() {
            using PupdrType = typename TPort::Reg::PUPDR::Type;

            // setup pin as input
            setReg<typename TPort::Reg::MODER>(
                TPort::Reg::MODER::FieldValues::Input::Value
            );

            // setup the pullUp/pullDown resistor
            PupdrType inputPullUp = TPort::Reg::PUPDR::FieldValues::NoPullUpPullDown::Value;
            if (pullUp == InputPullUp::Up) {
                inputPullUp = TPort::Reg::PUPDR::FieldValues::PullUp::Value;
            } else if (pullUp == InputPullUp::Down) {
                inputPullUp = TPort::Reg::PUPDR::FieldValues::PullDown::Value;
            }

            setReg<typename TPort::Reg::PUPDR>(inputPullUp);
        }

        template <OutputType outputType = OutputType::PushPull, OutputSpeed outputSpeed = OutputSpeed::Low>
        __force_inline void setOutput() {
            using OtyperType = typename TPort::Reg::PUPDR::Type;
            using OspeederType = typename TPort::Reg::PUPDR::Type;

            // setup pin as output
            setReg<typename TPort::Reg::MODER>(
                TPort::Reg::MODER::FieldValues::Output::Value
            );

            // setup pin output type
            OtyperType outPinType = TPort::Reg::OTYPER::FieldValues::PushPull::Value;
            if (outputType == OutputType::OpenDrain) {
                outPinType = TPort::Reg::OTYPER::FieldValues::OpenDrain::Value;
            }

            setReg<typename TPort::Reg::OTYPER>(outPinType);

            // setup output speed
            OspeederType outPinSpeed = TPort::Reg::OSPEEDER::FieldValues::Low::Value;
            if (outputSpeed == OutputSpeed::Medium) {
                outPinSpeed = TPort::Reg::OSPEEDER::FieldValues::Medium::Value;
            } else if (outputSpeed == OutputSpeed::High) {
                outPinSpeed = TPort::Reg::OSPEEDER::FieldValues::High::Value;
            } else if (outputSpeed == OutputSpeed::Max) {
                outPinSpeed = TPort::Reg::OSPEEDER::FieldValues::Max::Value;
            }

            setReg<typename TPort::Reg::OSPEEDER>(outPinSpeed);
        }

        __force_inline void setAlternate(
            OutputType outputType = OutputType::PushPull,
            OutputSpeed outputSpeed = OutputSpeed::Low
        ) {
            using OtyperType = typename TPort::Reg::PUPDR::Type;
            using OspeederType = typename TPort::Reg::PUPDR::Type;

            // setup pin as output
            setReg<typename TPort::Reg::MODER>(
                TPort::Reg::MODER::FieldValues::Output::Value
            );

            // setup pin output type
            OtyperType outPinType = TPort::Reg::OTYPER::FieldValues::PushPull::Value;
            if (outputType == OutputType::OpenDrain) {
                outPinType = TPort::Reg::OTYPER::FieldValues::OpenDrain::Value;
            }

            setReg<typename TPort::Reg::OTYPER>(outPinType);

            // setup output speed
            OspeederType outPinSpeed = TPort::Reg::OSPEEDER::FieldValues::Low::Value;
            if (outputSpeed == OutputSpeed::Medium) {
                outPinSpeed = TPort::Reg::OSPEEDER::FieldValues::Medium::Value;
            } else if (outputSpeed == OutputSpeed::High) {
                outPinSpeed = TPort::Reg::OSPEEDER::FieldValues::High::Value;
            } else if (outputSpeed == OutputSpeed::Max) {
                outPinSpeed = TPort::Reg::OSPEEDER::FieldValues::Max::Value;
            }

            setReg<typename TPort::Reg::OSPEEDER>(outPinSpeed);
        }

        __force_inline void setAnalog() {
            // setup pin as input
            setReg<typename TPort::Reg::MODER>(
                    TPort::Reg::MODER::FieldValues::Analog::Value
            );
        }
    };
}
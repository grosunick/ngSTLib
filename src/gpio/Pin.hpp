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

    template<typename Port, uint8_t pinNum>
    class Pin
    {
        template <typename T>
        __force_inline void setReg(typename T::Type val) {
            RegisterField<T, T::FieldValues::Size * pin, T::FieldValues::Size, Write>::set(val);
        }
    public:
        using PortType = Port;
        static constexpr uint32_t pin = pinNum;

        static_assert(pinNum <= 15U, "There are only 16 pins on port");

        __force_inline void set() {
            PortType::set(1U << pinNum);
        }

        __force_inline void reset() {
            PortType::reset(1U << pinNum);
        }

        __force_inline void write(bool value) {
            if (value) {
                set();
            } else {
                reset();
            }
        }

        __force_inline void toggle() {
            PortType::toggle(1U << pinNum);
        }

        __force_inline bool get() {
            return (PortType::get() & (1U << pinNum)) >> pinNum;
        }

        __force_inline bool isSet() {
            return (PortType::get() & (1U << pinNum)) != 0;
        }

        __force_inline void setInput(InputPullUp pullUp = InputPullUp::No) {
            using PupdrType = typename Port::Reg::PUPDR::Type;

            // setup pin as input
            setReg<typename Port::Reg::MODER>(
                Port::Reg::MODER::FieldValues::Input::Value
            );

            // setup the pullUp/pullDown resistor
            PupdrType inputPullUp = Port::Reg::PUPDR::FieldValues::NoPullUpPullDown::Value;
            if (pullUp == InputPullUp::Up) {
                inputPullUp = Port::Reg::PUPDR::FieldValues::PullUp::Value;
            } else if (pullUp == InputPullUp::Down) {
                inputPullUp = Port::Reg::PUPDR::FieldValues::PullDown::Value;
            }

            setReg<typename Port::Reg::PUPDR>(inputPullUp);
        }

        __force_inline void setOutput(
            OutputType outputType = OutputType::PushPull,
                OutputSpeed outputSpeed = OutputSpeed::Low
        ) {
            using OtyperType = typename Port::Reg::PUPDR::Type;
            using OspeederType = typename Port::Reg::PUPDR::Type;

            // setup pin as output
            setReg<typename Port::Reg::MODER>(
            Port::Reg::MODER::FieldValues::Output::Value
            );

            // setup pin output type
            OtyperType outPinType = Port::Reg::OTYPER::FieldValues::PushPull::Value;
            if (outputType == OutputType::OpenDrain) {
                outPinType = Port::Reg::OTYPER::FieldValues::OpenDrain::Value;
            }

            setReg<typename Port::Reg::OTYPER>(outPinType);

            // setup output speed
            OspeederType outPinSpeed = Port::Reg::OSPEEDER::FieldValues::Low::Value;
            if (outputSpeed == OutputSpeed::Medium) {
                outPinSpeed = Port::Reg::OSPEEDER::FieldValues::Medium::Value;
            } else if (outputSpeed == OutputSpeed::High) {
                outPinSpeed = Port::Reg::OSPEEDER::FieldValues::High::Value;
            } else if (outputSpeed == OutputSpeed::Max) {
                outPinSpeed = Port::Reg::OSPEEDER::FieldValues::Max::Value;
            }

            setReg<typename Port::Reg::OSPEEDER>(outPinSpeed);
        }

        __force_inline void setAnalog() {
            // setup pin as input
            setReg<typename Port::Reg::MODER>(
                Port::Reg::MODER::FieldValues::Analog::Value
            );
        }
    };
}
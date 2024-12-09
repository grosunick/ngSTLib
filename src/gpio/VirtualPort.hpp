#pragma once

#include <common/Template.hpp>
#include <gpio/Pin.hpp>

namespace ng
{
    template <typename ...Ts>
    class VirtualPort
    {
        using TPins = Unique<Collection<Ts...>>;
        using Ports = Unique<Collection<typename Ts::PortType...>>;

        static_assert(
            std::is_same<TPins, Collection<Ts...>>::value, "Error: pins list must be uniq"
        );

        template<typename Q>
        __force_inline auto GetPortValue(uint32_t mask) {
            using namespace std;

            uint32_t result = 0;

            ((result |= ((is_same<Q, typename Ts::PortType>::value ? 1 : 0) & mask) * (1 << Ts::pin)), ...);
            return result;
        }

        template<typename ...Ports>
        __force_inline void setPorts(Collection<Ports...>, uint32_t value) {
            (Ports::set(GetPortValue<Ports>(value)), ...);
        }

        template<typename ...Ports>
        __force_inline void resetPorts(Collection<Ports...>, uint32_t value) {
            (Ports::reset(GetPortValue<Ports>(value)), ...);
        }

        template<typename ...Ports>
        __force_inline void togglePorts(Collection<Ports...>, uint32_t value) {
            (Ports::toggle(GetPortValue<Ports>(value)), ...);
        }
    public:
        static constexpr uint32_t size = sizeof ...(Ts);

        __force_inline void set(uint32_t value) {
            setPorts(Ports(), value);
        }

        __force_inline void reset(uint32_t value) {
            resetPorts(Ports(), value);
        }

        __force_inline void toggle(uint32_t value) {
            togglePorts(Ports(), value);
        }

        __force_inline uint32_t get() {
            uint32_t result = 0, pinNum = size - 1;

            ((result |= (Ts::get() << pinNum), pinNum--), ...);
            return result;
        }
    };
}
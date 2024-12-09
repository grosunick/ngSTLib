#pragma once

#if (TEST_MODE == 1)
    #include <vector>
    #include <unordered_map>
    #include <cstdint>

    using namespace std;

    namespace ng
    {
        extern vector<tuple<uint32_t, uint32_t>> eventLog;

        enum class RegName {
            IDR,
            ODR,
            BSRR,
            BRR
        };

        class TRegister
        {
            uint32_t RegAddress;
            uint32_t value;
        public:
            TRegister() = default;
            explicit TRegister(uint32_t RegAddress): RegAddress(RegAddress) {
                value = 0;
            }

            TRegister& operator=(const uint32_t val) {
                value = val;
                eventLog.emplace_back(RegAddress, value);
                return *this;
            }

            inline TRegister& operator^=(const uint32_t val) {
                value ^= val;
                eventLog.emplace_back(RegAddress, value);
                return *this;
            }

            [[nodiscard]] inline uint32_t getValue() const {
                return value;
            }
        };

        extern unordered_map<uint32_t, TRegister> registers;
        TRegister& getRegister(uint32_t address);

        struct TestPort {
            TRegister IDR;
            TRegister ODR;
            TRegister BSRR;
            TRegister BRR;

            TestPort():
                IDR((uint32_t)RegName::IDR),
                ODR((uint32_t)RegName::ODR),
                BSRR((uint32_t)RegName::BSRR),
                BRR((uint32_t)RegName::BRR) {}
        };

        extern TestPort testPort1;
        extern TestPort testPort2;
    }

    #define GET_PORT(port) (port == 1U)? &ng::testPort1: (port == 2U)? &ng::testPort2: &ng::testPort1
    #define GET_IDR_REGISTER(port) (uint32_t)port->IDR.getValue()
    #define GET_REGISTER(address) (ng::getRegister(address))
    #define GET_REGISTER_VAL(address) ng::getRegister(address).getValue()
#else
    #define GET_PORT(port) reinterpret_cast<GPIO_TypeDef*>(port)
    #define GET_IDR_REGISTER(port) (uint32_t)port->IDR
    #define GET_REGISTER(address) *reinterpret_cast<volatile Type*>(address)
    #define GET_REGISTER_VAL(address) *reinterpret_cast<volatile Type*>(address)
#endif

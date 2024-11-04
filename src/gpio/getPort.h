#pragma once

#if (TEST_MODE == 1)
    #include <vector>

    using namespace std;

    namespace ng
    {
        enum class RegName {
            IDR,
            ODR,
            BSRR,
            BRR
        };

        class Register
        {
            RegName id;
            vector<tuple<RegName, uint32_t>>& eventLog;
            uint32_t value = 0;
        public:
            Register(RegName id, vector<tuple<RegName, uint32_t>>& eventLog) : id(id), eventLog(eventLog) {}

            inline void operator=(const uint32_t val) {
                value = val;
                eventLog.push_back({id, value});
            }

            inline void operator^=(const uint32_t val) {
                value ^= val;
                eventLog.push_back({id, value});
            }

            [[nodiscard]] inline uint32_t getValue() const {
                return value;
            }
        };

        struct TestPort {
            vector<tuple<RegName, uint32_t>> eventLog{};

            Register IDR;
            Register ODR;
            Register BSRR;
            Register BRR;

            TestPort():
                IDR(RegName::IDR, eventLog),
                ODR(RegName::ODR, eventLog),
                BSRR(RegName::BSRR, eventLog),
                BRR(RegName::BRR, eventLog) {}
        };

        extern TestPort testPort1;
        extern TestPort testPort2;
    }

    #define GET_PORT(port) (port == 1U)? &ng::testPort1: (port == 2U)? &ng::testPort2: &ng::testPort1
    #define GET_IDR_REGISTER(port) (uint32_t)port->IDR.getValue()
#else

#include <device.h>
#define GET_PORT(port) reinterpret_cast<GPIO_TypeDef*>(port)
#define GET_IDR_REGISTER(port) (uint32_t)port->IDR

#endif

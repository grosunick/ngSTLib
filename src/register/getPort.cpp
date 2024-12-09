#include "getPort.h"

#if (TEST_MODE == 1)
    namespace ng {
        vector<tuple<uint32_t , uint32_t>> eventLog;
        unordered_map<uint32_t, TRegister> registers;

        TestPort testPort1;
        TestPort testPort2;

        TRegister& getRegister(uint32_t address) {
            if (registers.count(address) == 0) {
                auto reg = TRegister(address);
                registers.insert(make_tuple(address, reg));
            }

            return registers[address];
        }
    }
#endif
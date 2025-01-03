#pragma once

#include <cstdint>

namespace ng
{
    class SegmentUtils
    {
        static constexpr uint8_t charMap[] = {
            0,     //   0x20 32
            0x02,  // ! 0x21 33
            0x22,  // " 0x22 34
            0x36,  // # 0x23 35
            0x69,  // $ 0x24 36
            0x2D,  // % 0x25 37
            0x7B,  // & 0x26 38
            0x20,  // ' 0x27 39
            0x39,  // ( 0x28 40
            0x0F,  // ) 0x29 41
            0x63,  // * 0x2a 42
            0x70,  // + 0x2b 43
            0x0C,  // , 0x2c 44
            0x40,  // - 0x2d 45
            0,     // . 0x2e 46 !
            0x42,  // / 0x2f 47

            0x3F,  // 0 0x30 48
            0x06,  // 1 0x31 49
            0x5B,  // 2 0x32 50
            0x4F,  // 3 0x33 51
            0x66,  // 4 0x34 52
            0x6D,  // 5 0x35 53
            0x7D,  // 6 0x36 54
            0x07,  // 7 0x37 55
            0x7F,  // 8 0x38 56
            0x6F,  // 9 0x39 57

            0x09,  // : 0x3a 58
            0x0D,  // ; 0x3b 59
            0x58,  // < 0x3c 60
            0x48,  // = 0x3d 61
            0x4C,  // > 0x3e 62
            0x53,  // ? 0x3f 63
            0x5F,  // @ 0x40 64

            0x77,  // A 0x41 65
            0x7C,  // B 0x42 66
            0x39,  // C 0x43 67
            0x5E,  // D 0x44 68
            0x79,  // E 0x45 69
            0x71,  // F 0x46 70
            0x3D,  // G 0x47 71
            0x74,  // H 0x48 72
            0x30,  // I 0x49 73
            0x1E,  // J 0x4a 74
            0x75,  // K 0x4b 75
            0x38,  // L 0x4c 76
            0x15,  // M 0x4d 77
            0x37,  // N 0x4e 78
            0x3F,  // O 0x4f 79
            0x73,  // P 0x50 80
            0x67,  // Q 0x51 81
            0x33,  // R 0x52 82
            0x6D,  // S 0x53 83
            0x78,  // T 0x54 84
            0x3E,  // U 0x55 85
            0x2E,  // V 0x56 86
            0x2A,  // W 0x57 87
            0x76,  // X 0x58 88
            0x6E,  // Y 0x59 89
            0x4B,  // Z 0x5a 90

            0x39,  // [ 0x5b 91
            0x60,  // \ 0x5c 92
            0x0F,  // ] 0x5d 93
            0x23,  // ^ 0x5e 94
            0x08,  // _ 0x5f 95
            0x02,  // ` 0x60 96

            // 97..122 lowercase

            0x39,  // { 0x7b 123
            0x06,  // | 0x7c 124
            0x0F,  // } 0x7d 125
            0x40,  // ~ 0x7e 126
        };

    public:
        static inline uint8_t getCharCode(char letter) {
            if (letter < 32 || letter > 126) return 0;
            if (letter >= 97) {
                if (letter <= 122) letter -= 32;  // to lowercase
                else letter -= 26;              // 123..126
            }
            return charMap[letter - 32];
        }

        static inline uint8_t intLen(uint32_t val) {
            if (!val) return 1;
            uint8_t len = 0;
            while (val) {
                len++;
                val /= 10;
            }
            return len;
        }

        static inline uint8_t floatLen(double val, uint8_t dec) {
            return intLen(val) + dec;
        }
    };
}
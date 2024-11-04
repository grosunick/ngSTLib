#pragma once

#include <stdio.h>
#include <math.h>
#include <cstring>
#include <type_traits>
#include <segment/SegmentUtils.hpp>
#include <common/StringUtils.hpp>

namespace ng
{
    template<typename Driver>
    class SegmentDisplay
    {
        static uint8_t cursor;
        static char buffer[Driver::width + 1];

        static inline bool isValidPos(uint8_t pos) {
            return (pos >= 0 && pos < size);
        }

    public:
        static constexpr uint8_t size = Driver::width;

        static inline void setCursor(uint8_t pos) {
            if (pos >= Driver::cnt) {
                pos = Driver::cnt - 1;
            }

            cursor = pos;
        }

        static inline int8_t getCursor() {
            return cursor;
        }

        static inline void home() {
            setCursor(0);
        }

        static inline void fill(uint8_t data) {
            memset((void*)buffer, data, size);
        }

        static inline void fillChar(char ch) {
            fill(SegmentUtils::getCharCode(ch));
        }

        static inline void clear() {
            fill(0);
        }

        static inline bool setPoint(uint8_t pos, uint8_t state = 1) {
            if (isValidPos(pos)) {
                if (state) {
                    buffer[pos] |= 1 << 7;
                } else {
                    buffer[pos] &= ~(1 << 7);
                }

                return true;
            }

            return false;
        }

        static inline bool setByte(uint8_t data, uint8_t pos, bool show = false) {
            if (isValidPos(pos)) {
                buffer[pos] = data;

                if (show) {
                    print();
                }

                return true;
            }

            return false;
        }

        static inline void setChar(char ch, uint8_t pos, bool show = false) {
            if (ch == '.') {
                setPoint(pos, ch);
            } else {
                setByte(SegmentUtils::getCharCode(ch), pos);
            }

            if (show) {
                print();
            }
        }

//        template <typename T>
//        static inline bool setFloat(T num, uint8_t fractionSize = 1, uint8_t pos = 0, bool show = false) {
//            static_assert(std::is_floating_point_v<T>);
//
//            int32_t intNum = (std::int32_t)num;
//            uint32_t fraction = (num - intNum) * pow(10, fractionSize);
//
//        }


        template <typename T>
        static inline bool setNumber(T num, uint8_t pos = 0, bool show = false) {
            static_assert(std::is_integral_v<T> && sizeof(num) <= 4);

            auto length = SegmentUtils::intLen(num);
            if (num < 0) {
                length++; // for negative values add one more digit for sign '-'
            }

            if (!isValidPos(pos)) {
                return false;
            }

            if (length + pos > size) {
                return false;
            }

            // TODO: check buffer indexes when pos greater than 0
            StringUtils::itoa(num, buffer, size + 1);

            if (show) {
                print();
            }

            return true;
        }

        static inline void print() {
            Driver::write(buffer);
        }

        static inline const char* getBuffer() {
            return buffer;
        }
    };

    template<typename Driver> uint8_t SegmentDisplay<Driver>::cursor = 0;
    template<typename Driver> char SegmentDisplay<Driver>::buffer[Driver::width + 1] = "";
}
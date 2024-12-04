#pragma once

#include <stdint.h>

namespace ng
{
    #define TRingBuffer template <typename T, uint16_t size>
    enum class BufferError {ok, full, empty};

    template<typename T, uint16_t size = 128>
    class RingBuffer {
        static T buf[size];
        static uint16_t head;
        static uint16_t tail;
        static bool fullSign;

        /**
         * A sign of an error working with the circular buffer. The default value is BufferError::ok.
         */
        static BufferError error;
    public:
        inline static BufferError lastError() {
            auto tmp = error;
            error = BufferError::ok;

            return tmp;
        }

        /**
         * Insert the value into the circular buffer.
         *
         * @param val
         * @return If the buffer is full, it returns false. Otherwise, it returns true.
         */
        static BufferError add(const T val);

        /**
         * Remove the value from the circular buffer.
         * @return
         */
        static T remove();

        inline static bool isFull() { return fullSign; }

        inline static bool isEmpty() { return head == tail; }

        inline static uint16_t getSize() {
            return (tail >= head) ? head - tail : size - head + tail;
        }
    };

    TRingBuffer uint16_t RingBuffer<T, size>::head = 0;
    TRingBuffer uint16_t RingBuffer<T, size>::tail = 0;
    TRingBuffer bool RingBuffer<T, size>::fullSign = false;
    TRingBuffer BufferError RingBuffer<T, size>::error = BufferError::ok;
}
#pragma once

#include <cstdint>

namespace ng
{
    enum class BufferError {ok, full, maxSize, maxRemoveLength, empty};

    #define TRingBufferParams T, size, maxRemoveLength
    #define TRingBuffer template <typename T, uint16_t size, uint8_t maxRemoveLength>

    template<typename T, uint16_t size = 256, uint8_t maxRemoveLength = 30>
    class RingBuffer {
        static T buf[size];
        static T removeBuf[maxRemoveLength];

        static uint16_t head;
        static uint16_t tail;
        static bool fullSign;

        /**
         * A sign of an error working with the circular buffer. The default value is BufferError::ok.
         */
        static BufferError error;
    public:

        /**
         * Insert the value into the circular buffer.
         *
         * @param val added value
         * @return If the buffer is full, it returns BufferError::full. Otherwise, it returns BufferError::ok.
         */
        static BufferError add(const T val) {
            if (isFull()) {
                error = BufferError::full;
                return error;
            }

            buf[tail++] = val;
            tail %= size;

            if (head == tail) {
                fullSign = true;
            }

            error = BufferError::ok;
            return error;
        }

        /**
         * Insert the list of values into the circular buffer.
         *
         * @param p pointer to added array
         * @return If the remaining buffer space is less than the size of the array being added,
         *         a BufferError::maxSize value is returned. Otherwise, a BufferError::ok value is returned.
         */
        static BufferError add(const T* p, uint16_t len) {
            if (len + length() > maxLength()) {
                error = BufferError::maxSize;
                return BufferError::maxSize;
            }

            while(len--) {
                add(*p++);
            }

            return BufferError::ok;
        }

        /**
         * Removes a value from the circular buffer. If buffer is empty
         * @return
         */
        static T remove() {
            if (isEmpty()) {
                error = BufferError::full;
                return 0;
            }

            auto res = buf[head++];
            head %= size;

            fullSign = false;
            error = BufferError::ok;
            return res;
        }

        /**
         * Removes a list of len-sized values from the circular buffer.
         * @param len number of values
         * @return
         */
        static T* remove(uint16_t len) {
            if (len > maxRemoveLength) {
                error = BufferError::maxRemoveLength;
                return nullptr;
            }

            memcpy(removeBuf, buf + head, len * sizeof(T));
            while (len--) {
                remove();
            }

            return removeBuf;
        }

        /**
         * If the buffer is fully filled, the function returns true. Otherwise, it returns false.
         * @return
         */
        static bool isFull() {
            return fullSign;
        }

        /**
         * If the buffer is empty, the function will return true. Otherwise, it will return false.
         * @return
         */
        static bool isEmpty() {
            return (!fullSign && head == tail);
        }

        /**
         * Returns the current buffer size
         * @return
         */
        static uint16_t length() {
            if (fullSign) {
                return size;
            }

            return (tail >= head) ? tail - head : size - head + tail;
        }

        /**
         * Returns the maximum available buffer size
         * @return
         */
        static uint16_t maxLength() {
            return size;
        }

        /**
         * Clears the buffer
         */
        static void clear() {
            tail = head = 0;
            fullSign = false;
        }

        /**
         * Returns last buffer error
         * @return
         */
        static BufferError lastError() {
            auto tmp = error;
            error = BufferError::ok;

            return tmp;
        }

        static uint16_t getHead() {
            return head;
        }

        static uint16_t getTail() {
            return tail;
        }
    };

    TRingBuffer T RingBuffer<TRingBufferParams>::buf[size] = {};
    TRingBuffer T RingBuffer<TRingBufferParams>::removeBuf[maxRemoveLength] = {};
    TRingBuffer uint16_t RingBuffer<TRingBufferParams>::head = 0;
    TRingBuffer uint16_t RingBuffer<TRingBufferParams>::tail = 0;
    TRingBuffer bool RingBuffer<TRingBufferParams>::fullSign = false;
    TRingBuffer BufferError RingBuffer<TRingBufferParams>::error = BufferError::ok;
}
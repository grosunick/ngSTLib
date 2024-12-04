#include "common/RingBuffer.h"

namespace ng
{
    TRingBuffer BufferError RingBuffer<T, size>::add(const T val) {
        if (isFull()) {
            error = BufferError::full;
            return error;
        }

        buf[head++] = val;
        head %= size;

        if (head == tail) {
            fullSign = true;
        }

        error = BufferError::ok;
    }

    TRingBuffer T RingBuffer<T, size>::remove() {
        if (isEmpty()) {
            error = BufferError::full;
            return 0;
        }

        auto res = buf[tail++];
        tail %= size;

        fullSign = false;
        error = BufferError::ok;
        return res;
    }
}










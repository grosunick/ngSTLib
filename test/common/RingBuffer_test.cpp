#include <gtest/gtest.h>
#include <common/RingBuffer.hpp>

using namespace std;
using namespace ng;

typedef uint8_t Type;
using b = RingBuffer<Type, 2, 1>;

void fillBuffer(Type val = 0) {
    b::clear();
    for (uint16_t i = 0; i < b::maxLength(); i++)
        b::add(val);
}

void fillAscending() {
    b::clear();
    for (uint16_t i = 0; i < b::maxLength(); i++)
        b::add(i);
}

TEST(RingBuffer, isEmpty) {
    b::clear();

    ASSERT_TRUE(b::isEmpty());
    ASSERT_EQ(b::length(), 0);
}

TEST(RingBuffer, isFull) {
    fillBuffer();

    ASSERT_TRUE(b::isFull());
}

TEST(RingBuffer, clear) {
    fillBuffer();
    ASSERT_TRUE(b::isFull());

    b::clear();
    ASSERT_TRUE(b::isEmpty());
    ASSERT_FALSE(b::isFull());
}

TEST(RingBuffer, add) {
    b::clear();

    b::add(1);
    ASSERT_EQ(b::length(), 1);

    b::add(1);
    ASSERT_EQ(b::length(), 2);

    auto err = b::add(1);
    ASSERT_EQ(err, BufferError::full);
    ASSERT_EQ(b::lastError(), BufferError::full);
}

TEST(RingBuffer, addArray) {
    using buf = RingBuffer<Type, 15, 1>;
    buf::add(1);

    Type arr[5] = {1, 2, 3, 4, 5};
    buf::add(arr, 5);
    buf::add(arr, 5);
    ASSERT_EQ(buf::length(), 11);

    auto err = buf::add(arr, 5);
    ASSERT_EQ(buf::length(), 11);
    ASSERT_EQ(err, BufferError::maxSize);
    ASSERT_EQ(buf::lastError(), BufferError::maxSize);
}

TEST(RingBuffer, remove) {
    fillBuffer(5);
    ASSERT_TRUE(b::isFull());

    auto el = b::remove();
    ASSERT_EQ(el, 5);
    ASSERT_EQ(b::length(), 1);

    el = b::remove();
    ASSERT_EQ(el, 5);
    ASSERT_EQ(b::length(), 0);
    ASSERT_TRUE(b::isEmpty());
}

TEST(RingBuffer, removeArray) {
    using buf = RingBuffer<Type, 10, 5>;

    Type arr[5] = {1, 2, 3, 4, 5};
    buf::add(arr, 5);
    ASSERT_EQ(buf::length(), 5);

    buf::remove(6);
    ASSERT_EQ(buf::lastError(), BufferError::maxRemoveLength);

    auto ptr = buf::remove(5);
    for (int i = 0; i < 5; i++) {
        ASSERT_EQ(arr[i], ptr[i]);
    }
    ASSERT_TRUE(buf::isEmpty());
}

// The test is at the moment when the tail is at the beginning of the array, and the head is at the end
TEST(RingBuffer, cycle) {
    fillAscending();
    ASSERT_TRUE(b::isFull());

    auto el = b::remove();
    ASSERT_EQ(el, 0);
    ASSERT_EQ(b::length(), 1);

    b::add(2);
    ASSERT_EQ(b::length(), 2);
}


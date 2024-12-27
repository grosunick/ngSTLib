#pragma once

#include <gtest/gtest.h>
#include <register/getPort.h>
#include <stdint.h>

using namespace ng;

void testRegisterEqual(const uint32_t address, uint32_t val);
void testBitsEqual(const uint32_t address, uint32_t val, bool equal = true);
void init();

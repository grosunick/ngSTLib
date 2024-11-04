#pragma once

namespace ng {
    struct Read {};
    struct Write {};
    struct ReadWrite: public Read, public Write {};
}
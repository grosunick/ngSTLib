#pragma once

#include <common/defines.h>
#include <type_traits>

namespace ng
{
    struct NoAccess {};
    struct Read {};
    struct Write {};
    struct ReadWrite: public Read, public Write {};

    template <typename T> concept writable = std::is_base_of_v<Write, T>;
    template <typename T> concept readable = std::is_base_of_v<Read, T>;
}
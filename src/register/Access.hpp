#pragma once

#include <common/defines.h>
#include <type_traits>

namespace ng
{
    struct NoAccess {};
    struct Read {};
    struct Write {};
    struct ReadWrite: public Read, public Write {};

    template <typename T, typename ...U> concept writable = std::is_base_of_v<Write, T>;
    template <typename T, typename ...U> concept readable = std::is_base_of_v<Read, T>;
}
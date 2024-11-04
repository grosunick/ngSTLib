#pragma once

#include <cstdint>

namespace ng
{
    template<typename ... Types> struct Collection {
        static constexpr int size  =  (sizeof...(Types));
    };

    template<class X, class Y> struct Glue;
    template<class T, class... Ts>
    struct Glue<T, Collection<Ts...>> {
        using Result = Collection<T, Ts...>;
    };

    template<class Q, class X> struct Erase;

    template<class Q>
    struct Erase<Q, Collection<>> {
        using Result = Collection<>;};

    template<class Q, class... Tail>
    struct Erase<Q, Collection<Q, Tail...>> {
        using Result = Collection<Tail...>;};

    template<class Q, class T, class... Tail>
    struct Erase<Q, Collection<T, Tail...>> {
        using Result = typename Glue<T, typename Erase<Q, Collection<Tail...>>::Result>::Result;};

    template <class X> struct NoDuplicates;
    template <> struct NoDuplicates<Collection<>> {
        using Result = Collection<>;
    };

    template <class T, class... Tail>
    struct NoDuplicates< Collection<T, Tail...> >
    {
    private:
        using L1 = typename NoDuplicates<Collection<Tail...>>::Result;
        using L2 = typename Erase<T,L1>::Result;
    public:
        using Result = typename Glue<T, L2>::Result;
    };

    template <typename L>
    using Unique = typename NoDuplicates<L>::Result;
}
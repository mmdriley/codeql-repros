# https://godbolt.org/z/1Ed7bo16j

#include <cstddef>
#include <type_traits>

template <class _Tp, size_t = 0>
struct __has_specialization : std::false_type {};

template <class _Tp>
struct __has_specialization<_Tp, sizeof(_Tp) * 0> : std::true_type {};

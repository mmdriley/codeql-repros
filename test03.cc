template <class _Tp, size_t = 0>
struct __has_specialization : false_type {};

template <class _Tp>
struct __has_specialization<_Tp, sizeof(_Tp) * 0> : true_type {};

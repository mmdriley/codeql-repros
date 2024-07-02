// compiler: clang-15

#include <stdio.h>
#include <optional>

template <typename T>
constexpr bool kHasUniqueMapOfInstanceType = true;

int main() {
  constexpr int foo = kHasUniqueMapOfInstanceType<int>? 15: 0;
  printf("hi\n");
  return 0;
}

#include <stdio.h>

int main() {
  long double i = 2.34;
  size_t size_of_int = sizeof(int);
  size_t size_of_variable = sizeof i;
  printf("%zu %zu", size_of_int, size_of_variable);
  return 0;
}

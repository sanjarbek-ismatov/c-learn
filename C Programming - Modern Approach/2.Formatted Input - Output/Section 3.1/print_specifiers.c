#include <stdio.h>

int main() {
  int x = 10;
  float f = 199.234f;
  printf("%-10.3d", x);
  printf("%.3d\n", x);
  printf("%g\n", f);
  return 0;
}
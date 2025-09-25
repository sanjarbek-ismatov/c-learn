#include <stdio.h>

int main(void) {
  int i = 5, j = 3;
  printf("%d %d\n", i / j, i % j); // 1 2
  i = 2, j = 3;
  printf("%d\n", (i + 10) % j); // 0
  i = 7, j = 8;
  int k = 9;
  printf("%d\n", (i + 10) % k / j); // 1
  i = 1, j = 2, k = 3;
  printf("%d\n", (i + 5) % (j + 2) / k); //
  int a = 7, b = 9;
  printf("%d, %d\n", -(b) / a, -(b / a));
  return 0;
}

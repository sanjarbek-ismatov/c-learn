#include <stdio.h>

int main(void) {
  int i = 2, j = 1, k = 0;
  i *= j *= k;
  printf("%d %d %d\n", i, j, k); // 0 0 0

  i = 5;
  j = (i -= 2) + 1;
  printf("%d %d\n", i, j); // 3 4

  i = 7;
  j = 6 + (i = 2.5);
  printf("%d %d\n", i, j); // 2  8

  i = 2, j = 8;
  j = (i = 6) + (j = 3); // 9
  printf("%d %d\n", i, j);
  return 0;
}

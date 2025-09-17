#include <stdio.h>

int main() {
  /*
    int i = 1;
    printf("%d ", i++ - 1); // 0
    printf("%d", i);        // 2
  */

  /*
    int i = 10, j = 5;
    printf("%d ", i++ - ++j); // 4
    printf("%d %d", i, j);    // 11 6
    return 0;
  */

  int i = 7, j = 8;
  printf("%d ", i++ - --j);
  printf("%d %d", i, j);
}
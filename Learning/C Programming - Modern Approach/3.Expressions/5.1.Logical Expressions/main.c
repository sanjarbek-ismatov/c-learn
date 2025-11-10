#include <stdio.h>

int main() {
  int j = 4, i = 4;
  int expression = i < 0 && ++j < 10;
  printf("%d %d\n", expression,
         j); // J won't be incremented as a result of short-circuit evaluation
  return 0;
}
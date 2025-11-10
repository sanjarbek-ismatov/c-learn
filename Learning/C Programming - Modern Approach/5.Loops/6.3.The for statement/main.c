#include <stdio.h>

int main() {
  for (int i = 0; i < 10;
       i++) { // variable declaration in C89 is not allowed, only after C99
    printf("%d\n", i);
  }
  return 0;
}
#include <stdio.h>

int main() {
  int a, g;
  a = g = 5;
  int b = (a += 1) + 4;
  int c = g++ + 4;
  int d = ++a + 4;
  printf("%d %d %d", b, c, d);
  return 0;
}
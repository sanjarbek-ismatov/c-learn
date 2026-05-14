#include <stdio.h>
int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
int main(void) {
  int a = 10, b = 5;
  int r = gcd(a, b);
  printf("%d\n", r);
  return 0;
}

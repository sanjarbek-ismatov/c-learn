#include <stdio.h>
void pb(int n) {
  if (n > 0) {
    pb(n - 1);
    putchar('0' + n);
  }
}
int main(void) {
  pb(5);
  return 0;
}

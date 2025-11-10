#include <stdio.h>

int main() {
  int a, d;
  /*
  float b, c;
  scanf("%d%f%f", &a, &b, &c); *1-20.3-4.0e3
  printf("%d %g %g", a, b, c); *1 -20.3 -4000
  */

  /*
  scanf("%d :%d", &a,
        &d); // it accepts 2:2 2  :2 or any variant with white spaces.
  printf("%d:%d\n", a, d);
  return 0;
  */
  scanf("%d %d", &a, &d); // a, b doesn't work, but a        b works as scanf
                          // skips whitespaces.
  printf("%d %d", a, d);
}
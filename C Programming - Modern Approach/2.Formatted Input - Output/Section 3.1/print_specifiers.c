#include <stdio.h>

int main()
{
  int x = 10;
  float f = 199.234f;
  printf("%-10.3d", x);
  printf("%.3d\n", x);
  printf("%.3g %e\n", f, f); // g prints the shortest way, either f or e. It also rounds instead of removing the numbers
  return 0;
}
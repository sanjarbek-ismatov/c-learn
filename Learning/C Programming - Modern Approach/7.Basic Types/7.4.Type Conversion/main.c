#include <stdio.h>
int main() {
  int i = -5;
  unsigned int u = 1;
  printf("%d %d\n", i < u, i + u); // this produces a wrong result, i is not
                                   // converted properly here, but adding works
  float pi;
  pi = 3.14f;
  printf("%f", pi);

  float result;
  int a = 11, b = 2;
  // Only one has to be converted to float, the latter is forced to be converted
  // by the compiler
  result = (float)a / b; // If not used cast operator, there is a possibility of
                         // loss of precision
  printf("%f\n", result);

  long sum;
  int k = 1000000000, l = 1000000000;
  sum = (long)k * l;    // fix
  printf("%ld\n", sum); // this produces a weird result: as k and l cannot hold
                        // longer than 1000000000, they fail to produce the
                        // result for long, so the fix is type casting as above

  sum = (long)(k * l); // the same error
  printf("%ld\n", sum);
  return 0;
}

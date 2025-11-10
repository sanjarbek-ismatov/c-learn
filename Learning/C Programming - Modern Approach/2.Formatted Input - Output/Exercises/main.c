#include <stdio.h>

int main() {
  printf("%12.5e\n", 30.253);
  printf("%.1e %.2g", 0.0000009979, 0.0000001888);
  float example_f = 123.00000123f;
  printf("%8.1e\n %-10.6e\n %8.3f\n %-6.f\n", example_f, example_f, example_f,
         example_f);
  // float a, b;
  // scanf("%f, %f", &a, &b);
  // printf("%f, %f\n", a, b);
  int i, j;
  float x;
  scanf("%d%f%d", &i, &x, &j);
  printf("%d %f %d", i, x, j);
  return 0;
}
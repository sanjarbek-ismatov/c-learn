#include <stdio.h>
#define PI 3.14
int main() {
  int r, v; /*I declared v here to be compatible with C89 standard, But C99
               allows mixing*/
  printf("Enter the radius: ");
  scanf("%d", &r);
  v = (4.0f / 3.0f) * PI * r * r * r;
  printf("%d\n", v);
  return 0;
}
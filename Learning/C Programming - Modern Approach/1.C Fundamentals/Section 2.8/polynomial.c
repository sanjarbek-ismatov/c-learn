/* C99 */
#include <stdio.h>

int main() {
  int x;
  printf("Enter the X: ");
  scanf("%d", &x);
  // 3x5 + 2x4 – 5x3 – x2 + 7x – 6
  int result = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) -
               (x * x) + 7 * x - 6;
  printf("%d\n", result);
  //    ((((3x + 2)x – 5)x – 1)x + 7)x – 6
  result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("%d\n", result);
  return 0;
}
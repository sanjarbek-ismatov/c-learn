#include <stdio.h>

int main() {
  int denom1, denom2, result_denom, num1, num2, result_num;
  printf("Enter the first fraction: ");
  scanf("%d /%d", &num1, &denom1);
  printf("Enter the second fraction: ");
  scanf("%d /%d", &num2, &denom2);
  result_num = num1 * denom2 + num2 * denom1;
  result_denom = denom1 * denom2;
  printf("The sum is: %d/%d", result_num, result_denom);
  return 0;
}
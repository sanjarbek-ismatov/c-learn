/* C89 */
#include <stdio.h>

int main() {
  int dollar;
  printf("Enter an amount of dollar: ");
  scanf("%d", &dollar);
  printf("$20 bills: %d\n", dollar / 20);
  dollar -= (dollar / 20) * 20;
  printf("$10 bills: %d\n", dollar / 10);
  dollar -= (dollar / 10) * 10;
  printf("$5 bills: %d\n", dollar / 5);
  dollar -= (dollar / 5) * 5;
  printf("$1 bills: %d\n", dollar);
  return 0;
}
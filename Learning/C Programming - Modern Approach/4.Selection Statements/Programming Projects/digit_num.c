#include <stdio.h>
int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  if (n <= 9999 && n >= 1000)
    printf("It has 4 digits\n");
  else if (n <= 999 && n >= 100)
    printf("It has 3 digits\n");
  else if (n <= 99 && n >= 10)
    printf("It has 2 digits\n");
  else
    printf("It has one digit\n");
  return 0;
}
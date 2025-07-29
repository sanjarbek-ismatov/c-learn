#include <stdio.h>

int main() {
  printf("Enter an amount: ");
  float amount; // This comment style was added in C99, also it allows mixed
                // declaration
  scanf("%f", &amount);
  printf("With tax added: %.2f", amount * 1.05f);
  return 0;
}
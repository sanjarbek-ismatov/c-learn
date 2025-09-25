#include <stdbool.h>
#include <stdio.h>

int main() {
  _Bool is_god = 5;      //  it's converted to 1
  bool are_you_sure = 5; // this is also converted to 1
  int number = 5;
  switch (number) {
  case 1:
    printf("1\n");
    break;
  case 2 + 3:
    printf("2\n");
    break;
  default:
    printf("Error: sorry\n");
  }
  printf("%d %d\n", is_god, are_you_sure);
  return 0;
}

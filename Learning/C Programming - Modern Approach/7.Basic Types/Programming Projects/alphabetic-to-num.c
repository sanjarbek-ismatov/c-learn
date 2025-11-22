#include <stdio.h>
/*
 * 1-934-HGH-AGH-YUEE
 * 65, 66, 67 = 2
 * 68, 69, 70 = 3
 * 71, 72, 73 = 4
 */
int main() {
  char input_c;
  while ((input_c = getchar()) != '\n') {
    if (input_c >= 'A' && 'Y' >= input_c)
      putchar('0' + (((input_c - 'A') / 3) + 2));
    else
      putchar(input_c);
  }
  return 0;
}

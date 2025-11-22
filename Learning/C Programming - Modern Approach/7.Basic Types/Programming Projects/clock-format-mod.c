#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  short hour, min;
  char c;
  printf("Enter a 12-hour time: ");
  scanf("%hd:%hd %c", &hour, &min, &c);
  if (tolower(c) == 'p')
    hour = (hour + 12) % 24;
  printf("Equivalent 24-hour time: %-.2hd:%-.2hd\n", hour, min);
  return 0;
}

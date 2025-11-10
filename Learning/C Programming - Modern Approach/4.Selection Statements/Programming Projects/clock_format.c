#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int hour, min;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &min);
  bool is_morning = true;
  if (hour > 12) {
    is_morning = false;
    hour = hour - 12;
  }
  printf("Equivalent 12-hour time: %-.2d:%-.2d %s\n", hour, min,
         is_morning ? "AM" : "PM");
  return 0;
}
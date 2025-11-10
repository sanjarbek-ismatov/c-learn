#include <stdio.h>

int main() {
  int a, b, c, d, smallest_1, smallest_2, largest_1, largest_2;
  printf("Enter four numbers: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  if (a > b) {
    smallest_1 = b;
    largest_1 = a;
  } else {
    smallest_1 = a;
    largest_1 = b;
  }
  if (c > d) {
    largest_2 = c;
    smallest_2 = d;
  } else {
    smallest_2 = c;
    largest_2 = d;
  }
  printf("Smallest: %d\n", smallest_1 < smallest_2 ? smallest_1 : smallest_2);
  printf("Largest: %d\n", largest_1 > largest_2 ? largest_1 : largest_2);
  return 0;
}

// a = 3 b = 2 c = 1 d = 4
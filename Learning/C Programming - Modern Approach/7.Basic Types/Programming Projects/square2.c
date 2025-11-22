/* Prints a table of squares using a for statement */
#include <stdio.h>
int main(void) {
  short i, n, c = 1;
  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%hd", &n);
  getchar();
  for (i = 1; i <= n; i++, c++) {
    printf("%10hd%10hd\n", i, i * i);
    if (c == 24) {
      printf("Please press enter to continue...");
      getchar();
      c = 0;
    }
  }
  return 0;
}

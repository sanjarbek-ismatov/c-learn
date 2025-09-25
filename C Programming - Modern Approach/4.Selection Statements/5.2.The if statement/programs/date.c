#include <stdio.h>

/*
 * Dated this 19th day of July, 2014
 */
int main() {
  unsigned int mm, dd, yy;
  printf("Enter date (mm/dd/yy): ");
  scanf("%u /%u /%u", &mm, &dd, &yy);
  printf("Dated this %u", dd);
  switch (dd) {
  case 1:
  case 21:
  case 31:
    printf("st");
    break;
  case 2:
  case 22:
    printf("nd");
    break;
  case 3:
  case 23:
    printf("rd");
    break;
  default:
    printf("th");
  }
  printf(" day of ");
  switch (mm) {
  case 1:
    printf("July");
    break;
  case 2:
    printf("February");
    break;
  case 9:
    printf("September");
    break;
  case 12:
    printf("December");
    break;
  default:
    printf("December");
  }
  printf(", 20%u", yy);
  return 0;
}

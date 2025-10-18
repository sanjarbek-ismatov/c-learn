/* Calculates a broker's commission */
#include <stdio.h>
int main(void) {
  int shares;
  float commission, price_per_share;
  printf("Enter number of shares: ");
  scanf("%d", &shares);
  printf("Enter price per share: ");
  scanf("%f", &price_per_share);
  if (shares < 2000)
    commission = 33.00f + .03f * shares;
  else
    commission = 33.00f + .02f * shares;
  if (commission < 39.00f)
    commission = 39.00f;
  printf("Commission: $%.2f\n", commission);
  return 0;
}
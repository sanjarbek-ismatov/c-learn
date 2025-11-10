/*C99*/
#include <stdio.h>

int main() {
  float loan, interest, payment, monthly_interest;
  printf("Enter an amount of a loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &interest);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);
  monthly_interest = interest / 1200 + 1;
  float first_month, second_month, third_month;
  first_month = (loan - payment) * monthly_interest;
  second_month = (first_month - payment) * monthly_interest;
  third_month = (second_month - payment) * monthly_interest;
  printf("Balance after first month's payment: %.2f\n", first_month);
  printf("Balance after second month's payment: %.2f\n", second_month);
  printf("Balance after third month's payment: %.2f\n", third_month);
  return 0;
}
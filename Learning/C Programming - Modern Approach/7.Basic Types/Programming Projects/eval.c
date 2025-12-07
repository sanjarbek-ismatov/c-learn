#include <stdbool.h>
#include <stdio.h>

float power(int base, short degree) {
  float calculated = 0.0f;
  for (int i = 1; i <= degree; i++)
    calculated *= base;
  return calculated;
}

void calculate_expression(float *operand1, float operand2, char operator) {
  switch (operator) {
  case '+':
    *operand1 += operand2;
    break;
  case '-':
    *operand1 -= operand2;
    break;
  case '*':
    *operand1 *= operand2;
    break;
  case '/':
    *operand1 /= operand2;
    break;
  }
}
int main() {
  char c, operator;
  float first_operand = 0.0f, second_operand = 0.0f, current_number = 0.0f;
  short point_count = 0;
  bool is_float = false, is_first_operand = true;
  printf("Enter an expression: ");
  while ((c = getchar()) != '\n') {
    if (c >= '0' && '9' >= c) {
      short number = c - '0';
      if (is_float)
        current_number += number / power(10, ++point_count);
      else {
        current_number *= 10.0f;
        current_number += number;
      }
    } else if (c == '.') {
      is_float = true;
    } else if (c == '+' || c == '-' || c == '*' || c == '/') {
      operator = c;
      if (is_first_operand) {
        is_first_operand = false;
        first_operand = current_number;
      } else {
        printf("%f\n", current_number);
        second_operand = current_number;
        calculate_expression(&first_operand, second_operand, operator);
      }
      current_number = 0.0f;
      point_count = 0;
      is_float = false;
    } else {
      fprintf(stderr, "Invalid expression!");
    }
  }
  printf("Value of expression: %f\n", first_operand);
  return 0;
}

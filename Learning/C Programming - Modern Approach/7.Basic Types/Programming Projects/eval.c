#include <stdbool.h>
#include <stdio.h>

float power(int base, short degree) {
  float calculated = 0.0f;
  for (int i = 1; i <= degree; i++)
    calculated *= base;
  return calculated;
}

int main() {
  char c;
  float current_num = 0.0f, result = 0.0f;
  short point_count = 0;
  bool is_float = false;
  printf("Enter an expression: ");
  while ((c = getchar()) != '\n') {
    if (c >= '0' && '9' >= c) {
      short number = c - '0';
      if (is_float)
        current_num += number / power(10, ++point_count);
      else {
        current_num *= 10.0f;
        current_num += number;
      }
    } else if (c == '.') {
      is_float = true;
    } else {
      switch (c) {
      case '+':
        result += current_num;
        break;
      case '-':
        result -= current_num;
        break;
      case '*':
        result *= current_num;
        break;
      case '/':
        result /= current_num;
        break;
      default:
        fprintf(stderr, "Invalid operator!");
        return 1;
      }
      point_count = 0;
      is_float = false;
      current_num = 0.0f;
    }
  }
  printf("Value of expression: %f\n", result);
  return 0;
}

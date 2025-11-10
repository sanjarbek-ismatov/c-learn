#include "examples.h"
#include <stdio.h>

void fahrenheit_to_celsius() {
  float farh, celsius;
  printf("Enter Fahrenheit: ");
  scanf("%f", &farh);
  celsius = (5.0 / 9.0) * (farh - 32);
  printf("%.1f fahrenheit is %.1f Celsius gradus!", farh, celsius);
}

void putchar_examples() {
  int c, nc = 0;
  while ((c = getchar()) != EOF) {
    if (c != '\n') {
      putchar(c);
    } else {
      printf("\n%d\n", ++nc);
    }
  }

  for (nc = 1; (c = getchar()) != EOF; ++nc) {
    putchar(c);
    printf("%d\n", nc);
  }
  printf("%d\n", nc);
}

void word_count() {
  int ndigit[10], nwhite = 0, nother = 0;
  int c;
  for (int i = 0; i < 10; i++)
    ndigit[i] = 0;
  while ((c = getchar()) != EOF) {
    printf("%d", c);
    if (c == '\n') {
      for (int i = 0; i < 10; i++) {
        printf("%d: %d; ", i, ndigit[i]);
      }
      printf(" white: %d other: %d\n", nwhite, nother);
    } else if (c == ' ' || c == '\t')
      nwhite++;
    else if (c >= '0' && c <= '9')
      ndigit[c - '0']++;
    else
      nother++;
  }
}

double power(double num, int exponential) {
  double result = 0;
  result += num;
  for (int i = 1; i < exponential; i++) {
    result *= num;
  }
  return result;
}

int get_line(char dest[], int limit) {
  int i = 0, c;
  while (limit - i + 1 && (c = getchar()) != EOF) {
    if (c == '\n')
      break;
    dest[i] = c;
    i++;
  }
  dest[i] = '\0';
  return i;
}

void copy_string(char dest[], char src[]) {
  int i = 0;
  do {
    dest[i] = src[i];
  } while (src[i++] != '\0');
}

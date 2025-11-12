#include <stdint.h>
#include <stdio.h>
#include <sys/types.h>
int main(void) {
  /*
   * Exercise 1
  int a = 077,   // 63
      b = 0x77,  // 119
      c = 0XABC; // 2748
  printf("%d %d %d\n", a, b, c); // to print those numbers as decimals,
  otherwise I use %x or %o
  */

  /*
   * Exercise 2
  int num1 = 010E2, num2 = 01000; // one is e notation, the latter is octal
  printf("%d %d\n", num1, num2);
  return 0;
  */

  /*
   * Exercise 5
  int num1 = 'A', num2 = 0b1000001, num3 = 0101, num4 = 0x41; // all of them
  present 65
  */

  /*
   * Exercise 6
  char days_in_month = 31;
  short days_in_year = 365;
  short minutes_in_day = 24 * 60;
  short seconds_in_day = minutes_in_day * 60;
  printf("%hd\n", seconds_in_day);
   */

  /*
   * Exercise 7
  if ('\b' == '\010' && '\b' == '\x08')
    printf("They are equal!\n");
   */

  /*
   * Exercise 13
   */
  char c = '\1';
  short s = 2;
  int i = -3;
  long m = 5;
  float f = 6.5f;
  double d = 7.5;
  /* Give the value and the type of each expression listed below.
   (a) c * i
   (c) f / c
   (e) f - d
   (b) s + m
   (d) d / s
   (f) (int) f */
  printf("a: %i; b: %f; e: %f; b: %li; d: %f, f: %i\n", c * i, f / c, f - d,
         s + m, d / s,
         (int)f); // a(int): -3; c(float): 6.500000; e(double): -1.0;
                  // b(long): 7; d(double): 3.750000; f(int): 6;

  /*
   * Exercise 15
   */
  int32_t num1 = 10;   // int
  u_int32_t num2 = 10; // unsigned int
  u_int64_t num3 = 10; // unsigned long
  // there is no typedef for long long int and unsigned long long int, so let's
  // make them
  typedef long long int128_int;
  typedef unsigned long long u_int128_int;
  int128_int num4 = 10;
}

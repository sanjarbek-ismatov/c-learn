#include <stdio.h>

int main(void) {
  unsigned short decimal = 10u;            // u or U indicates unsigned
  unsigned short octal = 077U;             // 0 indicates octal
  unsigned long long hexadecimal = 0xF1CU; // 0x or 0X indicates hexadecimal
  printf("%hu %ho %llx\n", decimal, octal,
         hexadecimal); // %u format specifier means unsigned int

  short short_num = 5;
  long long_num = 232323232L;                       // or l
  long long longer_num = 324324324324ll;            // or LL
  unsigned long long god_number = 2323232423423uLL; // ull ULL
  printf("%hd %ld %lld %llu\n", short_num, long_num, longer_num, god_number);

  return 0;
}

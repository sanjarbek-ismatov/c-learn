#include <stdio.h>
void func(const int arr[static 5]) { printf("%d\n", arr[0]); }
int main(void) {
  func((const int[5]){1, 2, 3, 4, 5});
  return 0;
}

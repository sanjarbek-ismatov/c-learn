#include <stdio.h>

int binary_search(int arr[], int arr_len, int target) {
  int low = 0, high = arr_len - 1, mid;
  while (low <= high) {
    mid = (low + high) / 2;
    if (arr[mid] == target)
      return mid;
    else if (arr[mid] > target)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return -1;
}

int main(void) {
  int arr[] = {1, 2, 3, 4, 5};
  printf("%d\n", binary_search(arr, 5, 4));
  return 0;
}

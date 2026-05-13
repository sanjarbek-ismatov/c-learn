#include <stdio.h>
#include <stdlib.h>
#define LENGTH 7
int *quick_sort(int size, int arr[size]) {
  if (size <= 1)
    return arr;
  int *merged = (int *)malloc(sizeof(int) * (size_t)size);
  int left[size - 1], right[size - 1], left_index = 0, right_index = 0;
  int pivot = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] < pivot)
      left[left_index++] = arr[i];
    else
      right[right_index++] = arr[i];
  }
  int *left_sorted = quick_sort(left_index, left),
      *right_sorted = quick_sort(right_index, right);
  for (int i = 0; i < left_index; i++) {
    merged[i] = left_sorted[i];
  }
  merged[left_index++] = pivot;
  for (int i = 0; i < right_index; i++) {
    merged[i + left_index] = right_sorted[i];
  }
  return merged;
}
int main(void) {
  int unsorted[LENGTH] = {2, 3, 1, 5, 2, 8, 1};
  int *sorted = quick_sort(LENGTH, unsorted);
  for (int i = 0; i < LENGTH; i++)
    printf("%d ", sorted[i]);
  return 0;
}

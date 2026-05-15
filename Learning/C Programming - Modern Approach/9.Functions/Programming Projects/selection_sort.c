#include <stdio.h>
void selection_sort(int[], int);
int main(void) {
  int arr[5] = {3, 4, 2, 1, 5};
  selection_sort(arr, 5);
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
void selection_sort(int arr[], int n) {
  if (n > 1) {
    int largest = n - 1;
    for (int i = largest - 1; i >= 0; i--) {
      if (arr[i] > arr[largest])
        largest = i;
    }
    int current = arr[largest];
    arr[largest] = arr[n - 1];
    arr[n - 1] = current;
    selection_sort(arr, n - 1);
  }
}

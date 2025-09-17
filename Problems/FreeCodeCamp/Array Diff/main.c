#include <stdio.h>
#include <string.h>

void arr_remove(char *arr[], int len, int index) {
  for (int i = index + 1; i < len; i++) {
    arr[i - 1] = arr[i];
  }
}

char **arr_diff(char *arr1[], int len1, char *arr2[], int len2) {
  for (int i = 0; i < len1; i++) {
    for (int j = 0; j < len2; j++) {

      if (strcmp(arr1[i], arr2[j]) == 1) {
        printf("Array item: %s %s\n", arr1[i], arr2[j]);
        arr_remove(arr1, len1, i);
      }
    }
  }
  return arr1;
}

int main(void) {
  char *arr1[] = {"Apple", "Banana", "Cherry"};
  char *arr2[] = {"Orange", "Cucumber", "Banana"};
  char **result = arr_diff(arr1, 3, arr2, 3);
  printf("%s\n", result[1]);
  return 0;
}
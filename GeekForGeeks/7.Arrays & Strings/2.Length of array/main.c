#include<stdio.h>

void simple(int* arr){
  int size = *(&arr + 1) - arr;
   printf("%d\n", size);
}
int main(){
  int arr[] = {1, 2, 3, 4};
  int size = *(&arr + 1) - arr;
  printf("%d\n", size);
  simple(arr);
  return 0;
}

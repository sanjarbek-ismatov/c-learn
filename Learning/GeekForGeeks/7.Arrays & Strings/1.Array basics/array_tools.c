#include<stdio.h>
int size_of_array(int* ptr){
  int c = 0;
  while(ptr != NULL){
    ptr++;
    c++;
  }
  return c;
}
int main(void){
  int arr[] = {1, 2, 3, 4, 5};
  int size = size_of_array(arr);
  printf("%d\n", size);
  return 0;
}

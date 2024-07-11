#include<stdio.h>
int array(int index){
    static int arr[] = {1, 2, 3, 4, 5};
    int* ptr = &arr[0];
    return *(ptr + index);
}
int main(){
  printf("%d\n", array(5));
  int* arr = array();
  arr.size;
  arr.push(10);
  arr.pop(5);
  return 0;
}

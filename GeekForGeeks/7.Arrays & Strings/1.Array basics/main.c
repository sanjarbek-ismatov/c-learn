#include<stdio.h>
int main(){
	double simple_arr[] = {1.1, 1.2, 1.3, 1.4, 1.5};
  printf("Memory adress of the array %p\n", simple_arr);
  for(int i = 0; i < 5; i++){
    printf("Memory address of %dth element is %p\n", simple_arr[i], &simple_arr[i]);
  }
  double* ptr = &simple_arr[0];
  printf("%f\n", *ptr);
  printf("%f\n", *(ptr + 4));
  return 0;
}

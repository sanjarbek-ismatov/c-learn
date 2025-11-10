#include<stdio.h>
int main(){
	int a = 10;
	int* ptr1 = &a;
	int** ptr2 = &ptr1;
	int*** ptr3 = &ptr2;
	***ptr3 = 15;
	printf("%d\n", a);
	return 0;
}

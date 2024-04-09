#include<stdio.h>
int main(){
	// char a = 'a';
	// printf("Enter your favorite character: ");
	// scanf("%c", &a);
	// printf("%c\n", a);
	// float fl1 = 10.5232;
	// printf("%f %.5e %E\n", fl1, fl1, fl1);
	// int a;
	// scanf("%o", &a);
	// printf("%o %d %x %X\n", a, a, a, a);

	char first[50];
	char last[50];
	scanf("%s %s", &first, &last);
	printf("%s %s\n",first, last);
	return 0;
}
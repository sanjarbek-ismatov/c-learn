#include<stdio.h>
int main(){
	printf("Hey I'm working here!\n");
	for(
		int i = 0;
		i < 10;
		i++
		)
	{
		int example_num = rand() % 3;
		printf("%d\n", example_num);
		example_num = NULL;
	}
	return 0;
}
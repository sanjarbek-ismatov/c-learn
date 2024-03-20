#include <stdio.h>
#define pi 3.14
int main(){
    const int i = 10;
    int* ptr = &i;
    *ptr = 15;
    printf("%d\n", i);
    char a[] = "Hello";
    // printf("%d", &a);
    printf("%.2f", pi);
}
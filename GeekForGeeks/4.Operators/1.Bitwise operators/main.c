#include<stdio.h>
 int main(){
    int a = 6 /*00000110*/, b = 5; /*00000101*/
    printf("a & b =  %d # 4 \n", a & b);
    printf("a | b = %d # 7\n", a | b);
    printf("a ^ b = %d # 3 \n", a ^ b);
    printf("a << b = %d # 24\n", a << 2);
    printf("a >> b = %d # 1\n", a >> 2);
    return 0;
 }
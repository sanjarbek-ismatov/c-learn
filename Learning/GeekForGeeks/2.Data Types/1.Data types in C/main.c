#include<stdio.h>
int main(){
    unsigned int unsigned_a = 10;
    int unsigned_b = 10u;
    long long_a = 1000000000;
    int long_b = 1000000000l;
    printf("%d\n", long_a == long_b);
    // short int a = 97;
    short int b = 98;
    short int c = 99;
    char a = 'a';
    a++;
    printf("%c %c %c\n", a, b, c);

    float num1 = 10.5;
    long num2 = 10.5f;
    printf("%d\n", num1 == num2);
    printf("%.1f %.1lf\n", num1, num2);
    return 0;
}
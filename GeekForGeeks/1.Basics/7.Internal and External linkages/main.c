#include <stdio.h>
// #include "sec.c"
// int a = 1;
int b = 2;
int main(){
    // some();
    // printer();
    // a = 5;
    // b = 6;
    // printer();
    extern int a;
    extern int c;
    printf("%d %d %d\n", a, b, c);
    return 0;
}
a = 0;
c = 3;
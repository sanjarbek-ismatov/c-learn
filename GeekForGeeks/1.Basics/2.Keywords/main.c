#include <stdio.h>
void label_function();
int main(){
    enum nums{One, Two, Three};
    float fl = 1;
    double db = 1;
    enum nums num;
    num = Three;
    printf("%d %d\n", num, Two);
    printf("Float is %.1f and double is %.1f\n", fl, db);
    printf("%d and %d\n", (int)sizeof(fl), (int)sizeof(db));
    label_function();
    // typedef unsigned long long int longer;
    // longer num = 10000;
    // printf("%llu\n", num);
    return 0;
}

void label_function(){
    int i = 1;
hello:
    printf("%d\n", i);
    if(i++ != 10) goto hello;
}
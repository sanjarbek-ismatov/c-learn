#include<stdio.h>

int main(){
    void* something = NULL;
    int a = 10;
    something = &a;
    int const * const ptr = &a;
    const int * const ptr2 = &a;
    // *ptr2 = 10;
    printf("%d\n", a);
    return 0;
}
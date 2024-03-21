#include <stdio.h>
int main(void){
    int const num1 = 18;
    const int num2 = 19;
    // int const* const ptr = &num2;
    int* const ptr = &num2;
    *ptr = 10;
    // ptr = & num2;
    printf("%d\n", *ptr);
    return 0;
}
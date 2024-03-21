#include <stdio.h>
#define num0 10
int main(){
    const int num1 = 10;
    int const num2 = 10;
    enum nums{
        num3 = 10,
        num4 = 10,
        name = 'C'
    };
#ifdef num0
#undef num0
#define num0 5
#endif
    printf("%d\n", num3);
    printf("%c\n", name);
    return 0;
}
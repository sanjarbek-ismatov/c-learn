#include <stdio.h>
int get_fibonacci(int pos);
int main()
{
    int res = get_fibonacci(4);
    printf("%d\n", res);
    return 0;
}

int get_fibonacci(int pos)
{
    int a = 0;
    int b = 1;
    int i = 1;
    while(pos > i){
        int c = b;
        b += a;
        a = c;
        i++;
    }
    return a;
}
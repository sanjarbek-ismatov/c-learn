#include <stdio.h>
int main()
{
    for (int i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
        printf("%d ", i); /// 5 4 3 2
    for (int i = 10; i >= 1; i /= 2)
        printf("%d ", i++);
    return 0;
}
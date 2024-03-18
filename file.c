#include <stdio.h>
int main()
{
    FILE* fs = fopen("text.txt", "rw");
    fputs("Test put\n", fs);
    fclose(fs);
    printf("Hello World from now, it was past!\n");
    return 0;
}

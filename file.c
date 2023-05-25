#include <stdio.h>
int main()
{
    FILE* fs = fopen("text.txt", "rw");
    fputs("Test put\n", fs);
    fclose(fs);
    return 0;
}
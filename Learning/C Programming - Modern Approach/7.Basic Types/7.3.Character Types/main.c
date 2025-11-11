#include <stdio.h>

int main()
{
    char qm1 = '?';                              // question mark
    int qm2 = 63;                                // int format
    char qm3 = '\077';                           // octal, 0 is not necessary to put
    char qm4 = '\x3f';                           // hexadecimal, x3F is also correct
    printf("%c %c %c %c\n", qm1, qm2, qm3, qm4); // Output: ? ? ? ?
    printf("a: %d A: %d b: %d B: %d\n", 'a', 'A', 'b', 'B');

    char ch;
    scanf(" %c", &ch); // if white-space is put before %c, scanf skips white-spaces

    while((ch = getchar()) != '\n')
        putchar(ch); // this prints leftover characters from scanf instead of reading the input as scanf leaves unread characters
    return 0;
}

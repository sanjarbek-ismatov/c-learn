// importing a header file
#include <stdio.h> // Standard Input Output library

// main functions is where the beginning of code executions is started
int main()
{
    // int is used for decimal numbers, its size is 4 bytes
    int result = printf("Hello World!\n"); // printf doesn't provide newline automatically
    // the first argument of printf is format of output, it also include format specifiers (e.g %s, %c, %d)
    printf("%d\n", result); // printf returns the length of printed string

    int a = 1, b = 2;
    printf("%3d%3d", a, b);
    // main return int: status code of exit, 0 means success
    return 0;
}
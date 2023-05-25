#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
int main()
{
    int randomNumber = rand() % 100 + 1;
    int check = strcmp("Helloo", "Hello");
    printf("%d\n", check);
    printf("%c %d\n", toupper('s'), isupper('S'));
    printf("%c %d\n", tolower('S'), islower('s'));

    //    char* time = time();
    printf("%d\n", randomNumber);
    return 0;
}
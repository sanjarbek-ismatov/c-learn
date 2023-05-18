#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    int randomNumber = rand() % 100 + 1;
    int check = strcmp("Helloo", "Hello");
    printf("%d\n", check);
//    char* time = time();
    printf("%d\n", randomNumber);
    return 0;
}
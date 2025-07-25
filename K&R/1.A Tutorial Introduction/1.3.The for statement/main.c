#include <stdio.h>

void exercise1_5()
{
    int fahr;
    for (fahr = 300; fahr >= 0; fahr -= 20)
        printf("Fahrenheit: %d, Celsius: %.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}

int main()
{
    exercise1_5();
    return 0;
}
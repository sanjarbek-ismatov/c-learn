#include <stdio.h>

void exercise1_3()
{
    float lower, upper, step;
    float fahr, celsius;
    lower = 0;
    upper = 300;
    step = 10;
    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3d\t\t%.1f\n", (int)fahr, celsius);
        fahr += step;
    }
}

void exercise1_4()
{
    float lower, upper, step;
    float fahr, celsius;
    lower = 0;
    upper = 300;
    step = 10;
    celsius = lower;
    printf("Celsius\tFahrenheit\n");
    while (celsius <= upper)
    {
        fahr = celsius / (5.0 / 9.0) + 32.0;
        printf("%3d\t\t%.1f\n", (int)celsius, fahr);
        celsius += step;
    }
}
int main()
{
    exercise1_3();
    exercise1_4();
    return 0;
}
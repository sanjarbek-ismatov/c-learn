#include <stdio.h>
int main()
{
    float farh, celsius;
    printf("Enter Fahrenheit: ");
    scanf("%f", &farh);
    celsius = (5.0/9.0) * (farh - 32);
    printf("%.1f fahrenheit is %.1f Celsius gradus!", farh, celsius);
    return 0;
}
#include <stdio.h>
int main()
{
    // float farh, celsius;
    // printf("Enter Fahrenheit: ");
    // scanf("%f", &farh);
    // celsius = (5.0/9.0) * (farh - 32);
    // printf("%.1f fahrenheit is %.1f Celsius gradus!", farh, celsius);

    // char thechar = getchar();
    // putchar(thechar);

    int c, nc;
    while ((c = getchar()) != EOF)
    {
        if (c != '\n')
        {
            putchar(c);
        }
        else
        {
            printf("\n%d\n", ++nc);
        }
    }
    // for (nc = 1; (c = getchar()) != EOF; ++nc)
    // {
    //     putchar(c);
    //     printf("%d\n", nc);
    // }
    // printf("%d\n", nc);
    return 0;
}
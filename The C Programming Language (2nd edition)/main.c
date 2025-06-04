#include <stdio.h>
int main()
{
    /*
    float farh, celsius;
    printf("Enter Fahrenheit: ");
    scanf("%f", &farh);
    celsius = (5.0/9.0) * (farh - 32);
    printf("%.1f fahrenheit is %.1f Celsius gradus!", farh, celsius);

    char thechar = getchar();
    putchar(thechar);
    */

    /*
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
    */

    /*
    for (nc = 1; (c = getchar()) != EOF; ++nc)
    {
        putchar(c);
        printf("%d\n", nc);
    }
    printf("%d\n", nc);
    */

    int ndigit[10], nwhite = 0, nother = 0;
    int c;
    for (int i = 0; i < 10; i++)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF)
    {
        printf("%d", c);
        if (c == '\n')
        {
            for (int i = 0; i < 10; i++)
            {
                printf("%d: %d; ", i, ndigit[i]);
            }
            printf(" white: %d other: %d\n", nwhite, nother);
        }
        else if (c == ' ' || c == '\t')
            nwhite++;
        else if (c >= '0' && c <= '9')
            ndigit[c - '0']++;
        else
            nother++;
    }

    return 0;
}
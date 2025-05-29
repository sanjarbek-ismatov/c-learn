#include <stdio.h>

void Exercise1_8()
{
    /*
           Exercise 1-8
           Write a program to count blanks, tabs, and newlines.
       */
    int nb = 0, nt = 0, nn = 0;
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
            ++nt;
        else if (c == ' ')
            ++nb;
        else if (c == '\n')
        {
            printf("newlines are %d new tabs are %d blanks are %d\n", ++nn, nt, nb);
            nb = 0, nt = 0;
        }
    }
}

void Exercise1_9_1()
{
    int c, b = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && b == 0)
            b++;
        else if (c != ' ' && b == 1)
            b = 0;
        else if (c == ' ' && b > 0)
            continue;
        putchar(c);
    }
}

void Exercise1_9_2()
{
    int c, b = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            b++;
            if (b < 2)
            {
                putchar(' ');
            }
        }
        else
        {
            putchar(c);
            b = 0;
        }
    }
}

void Exercise1_9_3()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            putchar(' ');
            while ((c = getchar()) != EOF)
                if (c != ' ')
                    break;
        }
        putchar(c);
    }
}

void Exercise1_9_4()
{
    int c, p;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && p == ' ')
        {
            p = c;
            continue;
        }
        else
        {
            putchar(c);
            p = c;
        }
    }
}
int main()
{
    Exercise1_9_4();
}

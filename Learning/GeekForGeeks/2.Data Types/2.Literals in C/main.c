#include<stdio.h>
int main(void){
    const int hexa_decimal = 0x15;
    const int octal = 015;
    const int binary = 0b11;
    int a = 10UL;
    float b = 3e-3;
    // printf("%.3f\n", b);
    const char my_name1[] = "Sanjarbek";
    const char my_name2[] = {'S', 'a', 'n', 'j', 'a', 'r', 'b', 'e', 'k', '\0'};
    const char* my_name3 = "Sanjarbek";
    // printf("%s\n", my_name1);
    // printf("My mobile number \v");
    // printf("is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a");
    // printf("Hello   Geeks \rGeeksfor");
    printf("10 is \020\n");
    return (0);
}
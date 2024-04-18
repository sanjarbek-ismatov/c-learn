#include<stdio.h>
int main(){
   /*
    printf("%.*s\n",5, "Hello World!");
    short int ten = 10;
    long double bro = 1023283283278.343;
    long double one = 1.1;
    float two = 1.1;
    printf("%d %d\n", sizeof(one), sizeof(two));
    printf("%hd %Lf\n", ten, bro);
    */
    int count = 123456789;
    int length_of_count_printed_first = printf("%*d\n", 20, count);
    int length_of_count_printed_second = printf("%.*d\n", 20, count);
    printf("%d %d\n", length_of_count_printed_first, length_of_count_printed_second);
    return 0;
}
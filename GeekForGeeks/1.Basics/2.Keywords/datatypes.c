#include <stdio.h>
int main(){
    int d = 10;
    unsigned int u = 4294967286;
    short int hd = -10;
    unsigned short int hu = 10;
    long int ld = 10;
    unsigned long int lu = 10;
    long long int lld = 10;
    register const unsigned long long int llu = 10;
    register int exam = 10;
    printf("%d, %d\n", d,  (int)sizeof(int));
    printf("%hd, %llu\n", hd, sizeof(short int));
    printf("%hu, %llu\n", hu, sizeof(unsigned short int));
    printf("%u, %llu\n", u, sizeof(unsigned int));
    printf("%ld, %llu\n", ld, sizeof(long int));
    printf("%lu, %llu\n", lu, sizeof(unsigned long int));
    printf("%lld, %llu\n", lld, sizeof(long long int));
    printf("%llu, %llu\n", llu, sizeof(unsigned long long int));
    printf("%d\n", exam);
    return 0;
}
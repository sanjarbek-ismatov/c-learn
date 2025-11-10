#include<stdio.h>
int main(){
    unsigned my_age = 0;
    int res = scanf("%u", &my_age);
    if(res > 0) printf("Input has been received successfully!\n");
    else if(res < 0) printf("An error encountered!\n");
    else printf("Formats were not applied!\n");
    printf("your age is %u\n", my_age);
    return 0;
}
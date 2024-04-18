#include<stdio.h>
int main(void){
    char corrent_name[128];
    scanf("%[^\n]s", corrent_name);
    printf("%s\n", corrent_name);
    return 0;
}
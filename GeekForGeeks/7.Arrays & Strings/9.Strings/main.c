#include<stdio.h>
int main(){
    char name[50];
    // fgets(name, 50, stdin);
    scanf("%[^\n]s", name);
    printf("%s", name);
    return 0;
}
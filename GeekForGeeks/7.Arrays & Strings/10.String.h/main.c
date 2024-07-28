#include<stdio.h>
#include<string.h>
#include"string.h"
int main(){
    char name[] = "Sanjarbek";
    printf("%d\n", strlen_clone(name));
    strcpy_clone(name, "Nothing!");
    strncpy_clone(name, "Sanjarbek",6);
    printf("%s\n", name);
    return 0;
}

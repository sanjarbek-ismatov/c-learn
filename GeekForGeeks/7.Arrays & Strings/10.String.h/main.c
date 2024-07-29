#include<stdio.h>
#include<string.h>
#include"string.h"
int main(){
    char name[] = "Sanjarbek";
    char name2[] = "Sardorbek";
    // printf("%d\n", strlen_clone(name));
    // strcpy_clone(name, "Nothing!");
    // strncpy_clone(name, "Sanjarbek",6);
    // strncat(name, " Ismatov", 9);
    // printf("%d\n", strncmp(name, name2, 2));
    // printf("%p\n", strchr(name, 'a'));
    // printf("%p\n", strrchr(name, 'a'));
    // printf("%d\n", strcspn(name, "zk"));
    printf("%d\n", strspn(name, "aSK"));
     printf("%c\n", *strpbrk(name, "bek"));
    printf("%s\n", name);
    return 0;
}

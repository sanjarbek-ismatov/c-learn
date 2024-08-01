#include<stdio.h>
#include<string.h>
#include<locale.h>
#include"string.h"
int main(){
    setlocale(LC_COLLATE, "en_US.UTF-8");
    char name[] = "Sanjarbek";
    char name2[] = "Sanjarbek";
    // printf("%d\n", strlen_clone(name));
    // strcpy_clone(name, "Nothing!");
    // strncpy_clone(name, "Sanjarbek",6);
    // strncat(name, " Ismatov", 9);
    // printf("%d\n", strncmp(name, name2, 2));
    // printf("%p\n", strchr(name, 'a'));
    // printf("%p\n", strrchr(name, 'a'));
    // printf("%d\n", strcspn(name, "zk"));
    // printf("%d\n", strspn(name, "aSK"));
    //  printf("%c\n", *strpbrk(name, "bek"));

    // char* token = strtok(name, "-");
    // while(token != NULL){
    //     printf("%s\n", token);
    //     token = strtok(NULL, "-");
    // }

    // char* token2;
    // char* temp = name;
    // while(token2 = strtok_r(temp, "-", &temp)){
    //     printf("%s\n", token2);
    // }

    // printf("%d\n",strcoll("sA", "Saa"));
    // printf("%d %d\n", 'a', 'A');

    // char example[50] = "I knew that. But";
    // memset(example + 11, '.', 4);
    // printf("%s\n", example);
    // printf("%d\n", memcmp(name, name2, sizeof(name)));
    // printf("%s\n", name);
    return 0;
}

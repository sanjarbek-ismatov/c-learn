#include<string.h>
#include<stdio.h>
int main(){
    char name[50] = "Sanjarbek";
    // fgets(name, 50, stdin);
    // scanf("%[^\n]s", name);
    // gets();

    char last[] = "Ismatov";
    strcat(name, " ");
    strcat(name, last);
    // printf("%s", strupr(name));

    char word_to_be_removed[] = "bek";
    char* ptr = strstr(name, word_to_be_removed);
    char* ptr2 = ptr + strlen(word_to_be_removed);
    for(int i = 0; i < strlen(ptr2); i++){
        ptr = ptr2++;
        ptr++;
    }

    printf("%s", name);
    return 0;
}
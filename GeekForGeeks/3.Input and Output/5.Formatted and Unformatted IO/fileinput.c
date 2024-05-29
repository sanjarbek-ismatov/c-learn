#include<stdio.h>

int main(){
    FILE* simple = fopen("./output.txt", "w");
    if(simple == NULL) {
        printf("Error occurred!\n");
        return 1;
    }
    char name[10];
    scanf("%s", name);
    fprintf(simple, "Hello, %s!", name);
    return 0;
}
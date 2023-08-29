#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
int main();
int main(){
    struct Person{
        char name[10];
        char isLove[3];
        char herName[10];
    };
    struct Person person;
    printf("Ismingiz nima: ");
    scanf("%s", person.name);
    printf("Salom \033[1;33m%s\033[0m, siz biror kishini sevasizmi? ", person.name);
    scanf("%s", person.isLove);

    person.isLove[0] = tolower(person.isLove[0]);
    while(strcmp(person.isLove, "ha") != 0){
        printf("Meni alday olmaysiz!\nSevasizmi yo'qmi?  ");
        scanf("%s", person.isLove);
    }

        printf("Ajoyib, uning ismi nima? ");
        scanf("%s", person.herName);
        printf("Sevgingizning dajasi aniqlanmoqda...\n");
        sleep(1);
        printf("Aniqlandi!\n");
         sleep(1);
        if(strcmp(person.name, "Sanjarbek") == 0 || strcmp(person.name, "Jinnivoy") == 0)
        printf("Siz har doim \033[1;36m%s\033[0mni kuchliroq sevasiz!!\n", person.herName);
        else printf("Baribir ham \033[1;33m%s\033[0m sizni qattiqroq sevadi\n", person.herName);
        printf("\033[1;33m%s\033[0m + \033[1;36m%s\033[0m = \033[1;32mLove!\033[0m, baxtli bo'linglar!!!!\n", person.name, person.herName);
    return 0;
}

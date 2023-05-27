#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
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
    printf("Salom %s, siz biror kishini sevasizmi? ", person.name);
    scanf("%s", person.isLove);

    person.isLove[0] = tolower(person.isLove[0]);
    while(strcmp(person.isLove, "ha") != 0){
        printf("Meni alday olmaysiz!\nSevasizmi yo'qmi?  ");
        scanf("%s", person.isLove);
    }

        printf("Ajoyib, uning ismi nima? ");
        scanf("%s", person.herName);
        printf("Siz har doim %sni kuchliroq sevasiz!!\n", person.herName);

    return 0;
}

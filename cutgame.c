#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

#include <string.h>

#include <time.h>

#include <ctype.h>

// this was my code, wow, But I can't remember it, howwwww???

char getRandomCharacter() {


    int randomIndex = rand() % 3;
    char sym[3] = {
            'm',
            'b',
            'q'
    };
    printf("%d\n", randomIndex);
    return sym[randomIndex];
}
bool checkWhichWon(char * string) {
    if (isupper(string[0])) string[0] = tolower(string[0]);
    char * toString = malloc(10);
    char randomResult = getRandomCharacter();
    switch (randomResult) {
        case 'm':
            strcpy(toString, "musht");
            break;
        case 'b':
            strcpy(toString, "bulut");
            break;
        case 'q':
            strcpy(toString, "qaychi");
            break;
        default:
            strcpy(toString, "");
    }

    return strcmp(toString, string) == 0;
}
char * converter(int num) {

    return num == 1 ? "Tabriklayman Yutdingiz!!" : "Afsuski xato";
}
int main() {
    int score[2] = {
            0,
            0
    };
    char * input = malloc(10);
    char * name = malloc(50);
    char buffer[100];

    FILE* file = fopen("data.txt", "rw");
    char* local_name = fgets(buffer,30, file);
    if(!local_name){
            printf("Salom ismingiz: ");
            scanf("%s", name);
        fprintf(file, name);
        local_name = fgets(buffer, 30, file);
    }
    printf("Salom %s!\n", local_name);
    fclose(file);
    srand(time(NULL));
    while (score[0] < 10 && score[1] < 10) {
        scanf("%s", input);
        int result = checkWhichWon(input);
        if (result == 1) score[0]++;
        else score[1]++;
        printf("%s\n", converter(result));
        printf("Natija: %d - %d\n", score[0], score[1]);

    }
    free(input);
    return 0;
}

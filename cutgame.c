// This library for input and output
#include <stdio.h>

// This library includes functions such as memory allocating ones

#include <stdlib.h>

// To declare boolean

#include <stdbool.h>

// For string

#include <string.h>

// This's been used for sleep function

#include <time.h>

// To analyze type of values

#include <ctype.h>

// this was my code, wow, But I can't remember it, howwwww???

/**
 * get_random_character function returns either m or b or q
*/

char get_random_character() {
    // in every calls, random_index is defined as a number from 0 to 2 

    int random_index = rand() % 3;

    // An array to store f - fist, c - cloud, s - a pair of scissors
    char sym[3] = {
            'f',
            'c',
            's'
    };
    // printf("%d\n", random_index);
 
    // Returns a random item of the array
    return sym[random_index];
}


bool checkWhichWon(char * string) {
    if (isupper(string[0])) string[0] = tolower(string[0]);
    char * toString = malloc(10);
    char randomResult = get_random_character();
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

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

// this was my code, wow, But I can't remember it, howwwww???

char get_random_character() {
    short unsigned int random_index = rand() % 3;
    char sym[] = {
            'p',
            'c',
            's'
    };
    return sym[random_index];
}

bool random_character(char * string) {
    if (isupper(string[0])) string[0] = tolower(string[0]);
    char * toString = malloc(10);
    char randomResult = get_random_character();
    switch (randomResult) {
        case 'p':
            strcpy(toString, "paper");
            break;
        case 'c':
            strcpy(toString, "stone");
            break;
        case 's':
            strcpy(toString, "scissors");
            break;
        default:
            strcpy(toString, "");
    }
    // return strcmp(toString, string) == 0;
}

char* converter(int num) {
    return num == 1 ? "Tabriklayman Yutdingiz!!" : "Afsuski xato";
}

int main() {
    int score[2] = {0,0};
    char * input = malloc(10);
    char * name = malloc(50);
    char buffer[100];
    printf("Salom ismingiz: ");
    scanf("%s", name);
    srand(time(NULL));
    while (score[0] < 10 && score[1] < 10) {
        scanf("%s", input);
        int result = check_winner(input);
        if (result == 1) score[0]++;
        else score[1]++;
        printf("%s\n", converter(result));
        printf("Natija: %d - %d\n", score[0], score[1]);

    }
    free(input);
    return 0;
}

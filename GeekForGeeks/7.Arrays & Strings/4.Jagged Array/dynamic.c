#include<stdio.h>
#include<stdlib.h>

int main(void){
    int** jagged = malloc(sizeof(int) * 3);
    *jagged++ = malloc(sizeof(int) * 3);
    *jagged++ = malloc(sizeof(int) * 2);
    *jagged = malloc(sizeof(int) * 4);
    int sizes[] = {3, 2, 4};
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, num_i = 0;
    for(int i = 0; i < 3; i++){
        int* ptr = jagged[i];
        for(int j = 0; j < sizes[i]; j++){
            *ptr++ = numbers[num_i++];
        }
    }
     for(int i = 0; i < 3; i++){
        int* row = jagged[i];
        for(int j = 0; j < sizes[i]; j++){
            printf("%d ", row[j] /* *row++ */);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
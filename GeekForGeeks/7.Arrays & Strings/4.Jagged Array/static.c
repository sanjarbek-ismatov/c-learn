#include<stdio.h>

int main(void){
    int row0[] = {1, 2, 3};
    int row1[] = {4, 5};
    int row2[] = {6, 7, 8, 9};
    int* jagged_one[] = {row0, row1, row2};
    int sizes[] = {3, 2, 4};
    for(int i = 0; i < 3; i++){
        int* row = jagged_one[i];
        for(int j = 0; j < sizes[i]; j++){
            printf("%d ", row[j] /* *row++ */);
        }
        printf("\n");
    }
    return 0;
}
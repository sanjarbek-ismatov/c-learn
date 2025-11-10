#include<stdio.h>
int main(){
    int two_dimensional[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };
    int three_dimensional[][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}, 
            {7, 8, 9}
        }, 
        {
            {10, 11, 12}, 
            {13, 14, 15}, 
            {16, 17, 18}
        }, 
        {
            {19, 20, 21}, 
            {22, 23, 24}, 
            {25, 26, 27}
        }
    };
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                printf("%d ", three_dimensional[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    return 0;
}
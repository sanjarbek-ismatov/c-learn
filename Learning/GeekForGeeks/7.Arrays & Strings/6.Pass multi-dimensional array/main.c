#include<stdio.h>
#define n 3
#define m 3

void print_1(int* arr){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", *((arr + i * n) + j));
        }
        printf("\n");
    }
}
void print_2(int (*arr)[m]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void print_flat(int* arr){
    for(int i = 0; i < n * m; i++){
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main(){
    int arr[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    print_1(arr);
    print_2(arr);
    print_flat(arr);
    print(arr);
    return 0;
}
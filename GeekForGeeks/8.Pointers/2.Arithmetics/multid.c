#include<stdio.h>
int main(){
    int N = 3, M = 2;
    int arr[][2] = {{1, 2}, {3, 4}, {5, 6}};
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
    return 0;
}
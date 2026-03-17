#include <stdio.h>
int* divide_and_conquer(int arr[], int start, int end){
    if(start == end) return arr;
    int middle = (start + end) / 2;
    int* left = divide_and_conquer(arr, start, middle);
    int* right = divide_and_conquer(arr, middle + 1, end);
}
int main(void){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Hello World");
    return 0;
}

#include<stdio.h>
int main(){
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* ptr = arr;
    int odd_count = 0, even_count = 0;
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
        if(*ptr % 2 == 0) even_count++;
        else odd_count++;
        ptr++;
    }
    printf("Even numbers: %d, odd numbers: %d\n", even_count, odd_count);
    return 0;
}
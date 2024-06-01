#include<stdio.h>

int find_odd(const int arr[], int size){
    int res = 0;
    for(int i = 0; i < size; i++){
        res ^= arr[i];
        printf("%d %d\n", res, arr[i]);
    }
    return res;
}

int main(){
    const int arr[] = {34, 88, 24, 40, 23, 54, 78, 50, 38, 20, 94};
    const int res = find_odd(arr, sizeof(arr) / sizeof(arr[0]));
    printf("%d\n", res);
    return 0;
}
#include<stdio.h>
int binary_search(int length, int arr[], int tar);
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(length, arr, 5);
    printf("%d\n", result);
    return 0;
}


int binary_search(int length, int arr[], int tar){
    int low = 0;
    int high = length - 1;
    while(low < high){
        int midd = (low + high) / 2;
        if(arr[midd] == tar) return midd;
        else if(arr[midd] < tar) low = midd + 1;
        else high = midd - 1;
    }
    return (arr[low] == tar) ? low : -1;    
}
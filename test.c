#include<stdio.h>
int binary_search(int length,  int arr[], int tar);
int linear_search(int length,  int arr[], int tar);
int main() {

    int arr[100000];
    for(int i = 0; i < 100000; i++) {
        arr[i] = i + 1;
    } 
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", length);
    int result1 = linear_search(length, arr, 1);
    int result2 = binary_search(length, arr, 1);
    // printf("%d\n", result);
    return 0;
}


int binary_search(int length,  int arr[], int tar){
    int low = 0;
    int high = length - 1;
    int c = 0;
    while(low < high){
        c++;
        int midd = (low + high) / 2;
        if(arr[midd] == tar) {
            printf("found in %d steps\n", c);
            return midd;
        } else if(arr[midd] < tar) low = midd + 1;
        else high = midd - 1;
    }
    return (arr[low] == tar) ? low : -1;    
}
 int linear_search(int length, int arr[], int tar){
    int c = 0;
    for(int i = 0; i < length; i++){
        c++;
        if(arr[i] == tar) {
            printf("found in %d steps\n", c);
            return i;

        }
    }
    return -1;
 }
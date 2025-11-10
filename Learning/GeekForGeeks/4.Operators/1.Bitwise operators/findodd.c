#include<stdio.h>
#include<stdbool.h>
int find_odd(const int arr[], int size){
    int res = 0;
    for(int i = 0; i < size; i++){
        res ^= arr[i];
    }
    return res;
}

bool is_even(int number){
    return (number & 1) ? false : true; 
}


int main(){
    // const int arr[] = {40, 88, 88, 24, 40, 38, 23, 54, 24, 40, 38, 20, 20, 54, 54};
    // const int res = find_odd(arr, sizeof(arr) / sizeof(arr[0]));
    printf("%d\n", is_even(26));
    printf("%d", ~-25);
    return 0;
}
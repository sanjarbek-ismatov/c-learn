#include<stdio.h>
 void print_arr(int arr[], int size){
    printf("{");
    for (int i = 0; i < size - 1; i++){
        printf("%d, ",arr[i]);
    }
    printf("%d", arr[size - 1]);
    printf("}\n");
 }
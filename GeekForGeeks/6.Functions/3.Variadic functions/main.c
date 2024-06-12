#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>

int* arguments(va_list ptr, int n){
    int* arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        fprintf(stderr, "Memory Allocation Failed!\n");
        return NULL;
    }
     for(int i = 0; i < n; i++){
        arr[i] = va_arg(ptr, int);
    }
    return arr;
}
int sum(int n, ...){
    va_list ptr;
    va_start(ptr, n);
    int* args = arguments(ptr, n);
    va_end(ptr);
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += args[i];
    }
    free(args);
    return sum;
}



int main(){
    const int res = sum(3, 2, 3, 4);
    printf("%d\n", res);
}
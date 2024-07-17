#include<stdio.h>

#define n 10

struct ArrayWrapper{
    int arr[n];
};

void modify(struct ArrayWrapper wrp){
    int* ptr = wrp.arr;
    for(int i = 0; i < 10; i++){
        ptr[i] = 20;
    }
}
int main(){
    struct ArrayWrapper wrp;
    for(int i = 0; i < 10; i++){
        wrp.arr[i] = 0;
    }
    for(int i = 0; i < 10; i++){
        printf("%d ", wrp.arr[i]);
    }
    printf("\n");
    modify(wrp);
    for(int i = 0; i < 10; i++){
         printf("%d ", wrp.arr[i]);
    }
    printf("\n");
    return 0;
}
#include<stdio.h>
void init_arr(int size){
    void* arr[size];
    for(int i = 0; i < size / 2; i++){
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    for(int i = size / 2; i < size; i++){
        arr[i] = 'a';
        printf("%c ", arr[i]);
    }
}
int main(){
    init_arr(3);
    return 0;
}
#include<stdio.h>
typedef struct Obj{
    int age;
    void (*function)(int);
} object;

void function(int age){
    printf("Hello %d\n", age);
}
int main(){
    object something;
    something.function = function;
    something.age = 18;
    something.function(something.age);
    return 0;
}
#include<stdio.h>
int callback_add(int a, int b){
    return a + b;
}
int callback_subtract(int a, int b){
    return a - b;
}

int calculator(int a, int b, int (*cb)()){
    return cb(a, b);
}

int main(int argc, char* argv[]){
    printf("%d\n", argc);
    for(int i = 0; i < argc; i++){
        printf("%s\n", argv[i]);
    }
    const int result = calculator(5, 10, &callback_subtract);
    printf("%d\n", result);
    return 0;
}
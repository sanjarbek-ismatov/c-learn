#include <stdio.h>
#include "main.h"
char global_name[] = "Sanjarbek";

void printer();
int age_incrementer();
int main(){
    register int hello;
    // printf("Hello, %s\n", global_name);
    printer();
    age_incrementer();
    printf("%s\n", secret);
    printf("%d\n", hello);
    printf("%d\n", age_incrementer());
    return 0;
}
void printer(){
    // char global_name[] = "Nobody";
    printf("Hello, %s\n", global_name);
}

int age_incrementer(){
    static  int my_age = 18;
    auto int custom_age = 18;
    printf("%d\n", custom_age);
    return ++my_age;
}
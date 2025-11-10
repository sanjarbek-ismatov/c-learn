#include<stdnoreturn.h>
#include<stdio.h>
#include<stdlib.h>
_Noreturn void error(const char* error){
    fprintf(stderr, "Error occurred: %s", error);
    exit(1);
}
int main(){
    error("I just wanted this program not to work");
    printf("I'm going to work after error!");
    return 0;
}
#include<stdio.h>
void printer(){
    printf("%s\n", __func__);
}
int main(int argc, char* argv[]){
    printf("You're calling a function called \"%s\" within %s and in %d th line. The full path is %s\n", __func__, __FILE__, __LINE__, argv[0]);
    // printer();
    return 0;
}
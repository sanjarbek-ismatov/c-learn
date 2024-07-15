#include<stdio.h>
#include<string.h>
int string_len(char* string){
    int c = 0;
    while(string[c] != '\0') c++;
    return c;
}
void pass_arr(char* arr){
    unsigned int n = strlen(arr);
    printf("%d\n", n);
}
int main(){
    char arr[] = {'L', 'o', 'v', 'e', '\0'};
    pass_arr(arr);
    return 0;
}
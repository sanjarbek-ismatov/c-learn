#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
bool dedicated_cmp(char* str, int from, int end, char* target){
    char tmp[end - from];
    int n = 0;
    for(int i = from; i < end; i++){
        tmp[n++] = str[i];
    }
    return strcmp(tmp, target) == 0;
}
char* split(char* string, char* pattern){
    int str_size = strlen(string), pattern_size = strlen(pattern);
    char* arr = (char*)malloc(sizeof(char) * str_size);
    for(int i = 0; i < str_size - pattern_size; i++){
        // dedicated_cmp();
    }
}

int main(){
    return 0;
}
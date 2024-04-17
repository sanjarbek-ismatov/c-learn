#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void shift(char str[], int position, char shifting_c){
    char current = shifting_c;
    char next;
    for(int i = position; i < strlen(str); i++){
        next = str[i + 1];
        str[i + 1] = current;
        current = next;
    }
}

void insert(char str[], int position, char c){
    shift(str, position, str[position]);
    str[position] = c;
}
char * defangIPaddr(char * address){
    char addr[strlen(address) * 2];
    strcpy(addr, address);
    for(int i = 0; i < strlen(addr); i++){
        if(addr[i] == '.'){
            insert(addr, i, '[');
            insert(addr, i + 2, ']');
           
            i += 2;
        }
    }
    char* res = malloc(sizeof(addr) + 1);
    strcpy(res, addr);
    return res;
}
int main(){
    printf("%s\n", defangIPaddr("1.1.1.1")); // it should print: 255[.]100[.]50[.]0
    return 0;
}
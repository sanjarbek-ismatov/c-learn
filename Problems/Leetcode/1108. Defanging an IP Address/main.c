#include<stdio.h>
void insert(char string[], int position, char c){
    printf('%s\n', string);
    for(int i = 0; i <= position; i++){
        string[i] = c;
    }
}
int main(){
    char name[] = "Sanjarbek";
    insert(name, 0, 'C');
    printf("%s\n", name);
    return 0;
}
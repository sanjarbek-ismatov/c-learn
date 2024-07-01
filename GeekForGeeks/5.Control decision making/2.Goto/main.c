#include<stdio.h>
#include<conio.h>
void iterator(int start, int end);
int main(){
    iterator(1, 10);
    return 0;
}

void love_or_hate(){
    printf("Do you love me?:\t");
    char result = getche();
    if(result == 'y') goto love;
    else goto hate;
love:
    printf("\nI love you too!\n");
    return;
hate:
    printf("\nI hate you too!\n");
    return;
}
void iterator(int start, int end){
    int i = start;
label:
    printf("%d\n", i++);
    if(i <= end)
        goto label;
}
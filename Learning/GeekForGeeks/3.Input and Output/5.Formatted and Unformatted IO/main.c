#include<stdio.h>
int main(void){
    char fullInfo[128] = "Sanjarbek Ismatov 2005";
    // sprintf(fullInfo, "Your name is %s", "Sanjarbek");
    char firstName[10];
    char lastName[10];
    int age;
    sscanf(fullInfo, "%s %s %d", firstName, lastName, &age);
    printf("Your first name is %s, the last one is %s and %d\n", firstName, lastName, age);
    return 0;
}
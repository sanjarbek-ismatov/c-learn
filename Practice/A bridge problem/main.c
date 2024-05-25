#include<stdio.h>
#include<string.h>

typedef struct{
    char name[20];
    int speed;
} Member;

void members_creator(Member family[], int count);

int main(){
    int number_of_family;
    scanf("%d", &number_of_family);
    Member family[number_of_family];
    members_creator(family, number_of_family);
    return 0;
}

void members_creator(Member family[], int count){
    for(int i = 0; i < count; i++){
        strcpy(family[i].name, "Sanjarbek");
        family[i].speed = 10;
    }
}

/*
time = 17
members = 4
{
    name: string
    speed: int
}

[{}, {}, {}, {}]

*/



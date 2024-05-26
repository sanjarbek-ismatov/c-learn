#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
    char name[20];
    int speed;
} Member;

Member* merge_sort(Member family[], int size);
void members_creator(Member family[]);

int main(){
    // int number_of_family;
    // scanf("%d", &number_of_family);
    Member family[4];
    members_creator(family);
    return 0;
}

void members_creator(Member family[]){
    for(int i = 0; i < 4; i++){
        printf("Enter the name of the member: ");
        scanf("%s", family[i].name);
        printf("Enter his/her speed: ");
        scanf("%d", &family[i].speed);
    }
}

int combination_checker(Member family[], int time){

}

Member* find_the_fastest_two(Member family[]){
}

Member* merge(Member left[], int left_length, Member right[], int right_length){
    Member* merged = (Member*)malloc(sizeof(Member) * (left_length + right_length));
    int current_merged_index = 0,
    current_left_index = 0, 
    current_right_index = 0;
    while(current_left_index < left_length && current_right_index < right_length){
        if(left[current_left_index].speed > right[current_right_index].speed){
            merged[current_merged_index++] = right[current_right_index++];
        }else merged[current_merged_index++] = left[current_left_index++];
    }
    return merged;
}

Member* merge_sort(Member family[], int size){
    if(size <= 1) return family;
    
    // return merge();
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



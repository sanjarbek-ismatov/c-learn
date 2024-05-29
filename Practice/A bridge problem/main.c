#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct{
    char name[20];
    int speed;
} Member;

Member* merge_sort(Member family[], int size);
Member* find_the_fastest_and_slowest(Member family[], int size);
int combination_checker(Member family[], int size, int time);
void members_creator(Member family[]);

int main(){
    // int number_of_family;
    // scanf("%d", &number_of_family);
    Member family[4];
    members_creator(family);
    int size = sizeof(family) / sizeof(family[0]);
    bool result = combination_checker(family, size, 17);
    printf("%d\n", result);
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

int combination_checker(Member family[], int size, int time){
    Member* fastest_ones = find_the_fastest_and_slowest(family, size);
    const int result = fastest_ones[0].speed + fastest_ones[1].speed * 3 + fastest_ones[2].speed;
    return result <= time ? true : false;
}

Member* find_the_fastest_and_slowest(Member family[], int size){
    Member* sorted = merge_sort(family, size);
    Member* the_fastest_ones = (Member *)malloc(sizeof(Member) * 2);
    the_fastest_ones[0] = sorted[0];
    the_fastest_ones[1] = sorted[1];
    the_fastest_ones[2] = sorted[size - 1];
    return the_fastest_ones;
}


void copy_array(Member source[], Member destination[], int start, int end){
    for(int i = start; i < end; i++){
        destination[i - start] = source[i];
    }
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

    while(current_left_index < left_length){
        merged[current_merged_index++] = left[current_left_index++];
    }
    while(current_right_index < right_length){
        merged[current_merged_index++] = right[current_right_index++];
    }
    return merged;
}

Member* merge_sort(Member family[], int size){
    if(size <= 1) return family;
    int midd = size / 2;
    int left_size = midd;
    int right_size = size - midd;
    
    Member* left = (Member *)malloc(sizeof(Member) * left_size);
    Member* right = (Member *)malloc(sizeof(Member) * right_size);
    copy_array(family, left, 0, left_size);
    copy_array(family, right, midd, size);
    left = merge_sort(left, left_size);
    right = merge_sort(right, right_size);

    Member* merged = merge(left, left_size, right, right_size);

    copy_array(merged, family, 0, left_size + right_size);
    free(left);
    free(right);
    free(merged);
    return family;
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



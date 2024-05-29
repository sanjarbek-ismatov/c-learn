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
    // Member family[4];
    // members_creator(family);
    Member family[] = {
        {"Alice", 5}, 
        {"Bob", 2}, 
        {"Charlie", 9}, 
        {"David", 1}, 
        {"Eve", 5}, 
        {"Frank", 6}
    };
    int size = sizeof(family) / sizeof(family[0]);

    Member* result = merge_sort(family, size);

    printf("Sorted family members by speed:\n");
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Speed: %d\n", result[i].name, result[i].speed);
    }
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



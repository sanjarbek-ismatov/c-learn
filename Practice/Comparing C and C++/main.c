#include<stdlib.h>
#include"utils.h"

int* simple_arr_return();

int main(){
    // Static array

    int static_arr[] = {1, 2, 3, 4, 5};
    print_arr(static_arr, 5);
    
    // Dynamic array

    int* dynamic_arr = (int*)malloc(5 * sizeof(int));
    // Or {1, 2, 3, 4, 5}

    for(int i = 0; i < 5; i++){
        dynamic_arr[i] = i + 1;
    }

    print_arr(dynamic_arr, 5);

    // Returning an array

    int* simple_arr = simple_arr_return();
    print_arr(simple_arr, 5);
    return 0;
}

int* simple_arr_return(){
    int* dynamic_arr = (int*)malloc(5 * sizeof(int));

    for(int i = 0; i < 5; i++){
        dynamic_arr[i] = i + 1;
    }
    return dynamic_arr;
}
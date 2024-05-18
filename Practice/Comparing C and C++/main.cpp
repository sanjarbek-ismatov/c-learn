#include<array>
#include<vector>
#include"utils.h"

int* simple_arr_return();
int* simple_arr_return_2();

int main(){
    int* simple_arr = simple_arr_return();

    std::array<int, 5>arr = {1, 2, 3, 4, 5};
    std::vector<int>  vector = {1, 2, 3, 4, 5};

    print_arr(simple_arr, 5);
    return 0;
}

int* simple_arr_return(){
    int* dynamic_arr = new int[5];
    for(int i = 0; i < 5; i++){
        dynamic_arr[i] = i + 1;
    }
    return dynamic_arr;
}

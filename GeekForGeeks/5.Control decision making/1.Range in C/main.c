#include<stdio.h>
int main(){
    const int arr[] = {1, 2, 3, 4, 5};
    switch(arr[2]){
        case 0 ... 2:
            printf("Between 0 and 2\n");
            break;
        case 3 ... 5:
            printf("Between 3 and 5\n");
            break;
        default:
            printf("Out of the range between 0 and 5");
    }
    for(;;){
        //
    }
    return 0;
}
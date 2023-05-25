#include <stdio.h>
#include <stdlib.h>

///*
// * Write prototype to check errors
// */
//void changer(int* num);
////int* slice(int arr[], int start, int end)
////{
////    int len = sizeof(arr) / sizeof(int);
////    printf("%d\n", len);
////    return arr;
////}
//void changer(int* num){
//    *num += 2;
//    printf("%d\n", *num);
//}
//int main()
//{
//    /*
//    int n = 18;
//    int *k = &n;
//    printf("n is %d k is %d\n", n, *k);
//    n = 10;
//    printf("n is %d k is %d\n", n, *k);
//    *k = 100;
//    printf("n is %d k is %d\n", n, *k);
//*/
//    /*
//    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
//    int* arrPtr = &arr[0];
//    for(int i = 0; i < 10; i++)
//    {
//        *arrPtr = 0;
//        printf("%i\n", arr[i]);
//        arrPtr++;
//    }
//     */
////    int someArr[5] = {1, 2, 3, 4, 5};
////    slice(someArr, 1, 1);
////    printf("%s\n", slice(someArr, 1, 2));
//    int num = 10;
//    changer(&num);
//    printf("%d\n", num);
//    changer(&num);
//    return 0;
//}]

// global scope
int g = 7;
int main();
int main(){
    int a = 10;
    int b = 5;
    if(a == 10){
        int b = 10;
    }
    printf("%d %d\n", b, g);
    return 0;
}
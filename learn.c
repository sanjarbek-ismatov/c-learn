#include <stdio.h>
#include <stdlib.h>
int* slice(int arr[], int start, int end)
{
    int len = sizeof(arr) / sizeof(int);
    printf("%d\n", len);
    return arr;
}
int main()
{
    /*
    int n = 18;
    int *k = &n;
    printf("n is %d k is %d\n", n, *k);
    n = 10;
    printf("n is %d k is %d\n", n, *k);
    *k = 100;
    printf("n is %d k is %d\n", n, *k);
*/
    /*
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    int* arrPtr = &arr[0];
    for(int i = 0; i < 10; i++)
    {
        *arrPtr = 0;
        printf("%i\n", arr[i]);
        arrPtr++;
    }
     */
    int someArr[5] = {1, 2, 3, 4, 5};
    slice(someArr, 1, 1);
//    printf("%s\n", slice(someArr, 1, 2));
    return 0;
}
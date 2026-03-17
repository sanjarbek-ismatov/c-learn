#include <stdio.h>
#define LEN 20
int *quick_sort(int arr[], int length)
{
}

int main(void)
{
    int arr[LEN] = {
        73, 14, 92, 5, 41,
        67, 28, 89, 36, 11,
        54, 99, 2, 76, 33,
        48, 21, 64, 87, 10};
    int result[] = quick_sort(arr, LEN);
    for (int i = 0; i < LEN; i++)
    {
        printf("%d ", result[i]);
    }
    return 0;
}
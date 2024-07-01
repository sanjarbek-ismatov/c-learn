#include<stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
short int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    short int* ans = (short int *)malloc(numsSize * 2 * sizeof(short int));
    for(short int i = 0; i < numsSize * 2;  i++)
    {
        ans[i] = nums[i >= numsSize ? i - numsSize : i];
    }
    *returnSize = numsSize * 2;
    return ans;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    int l=numsSize;
    int *ans=(int*)malloc(l*sizeof(int));
    for(int i=0;i<l;i++)
    {
        ans[i]=nums[nums[i]];

    }
    *returnSize = l;
    return ans;
}
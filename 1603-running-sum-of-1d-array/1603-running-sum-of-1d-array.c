/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int n=numsSize;
    int sum=0;
    int* ans = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        sum+=nums[i];
        ans[i]=sum;
    }
    *returnSize=n;
    return ans;
}

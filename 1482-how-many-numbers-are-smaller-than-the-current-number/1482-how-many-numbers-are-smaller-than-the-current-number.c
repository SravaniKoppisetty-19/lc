/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int l=numsSize;
    int* ans=(int*)malloc(l*sizeof(int));
    int c=0;
    int i=0;
    while(i<l)
    {
        int k=nums[i];
        c=0;
        for(int j=0;j<l;j++)
        {
            if(nums[j]<k)
            {
                c++;
            }
            ans[i]=c;
        }
        i++;
    }
    *returnSize=l;
    return ans;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberGame(int* nums, int numsSize, int* returnSize) {
    int n=numsSize;
    int* ans=(int*)malloc(n*sizeof(int));
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(nums[j]>nums[j+1])
            {
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        ans[k++]=nums[i];
    }
    for(int i=0;i<n;i+=2)
    {
        int temp=ans[i];
       ans[i]=ans[i+1];
        ans[i+1]=temp;
    }
    *returnSize=k;
    return ans;
}
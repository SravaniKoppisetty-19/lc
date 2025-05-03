/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {
    int n=numsSize;
    int* a= (int*)malloc(n*sizeof(int));
    int e=0,o=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]%2==0)
        {
           e++;
        }
        if(nums[i]%2!=0)
        {
           o++;
        }
    }int k=0;
    while(e>0)
    {
        a[k++]=0;
        e--;
    }
    while(o>0)
    {
        a[k++]=1;
        o--;
    }
    *returnSize=k;
    return a;
}
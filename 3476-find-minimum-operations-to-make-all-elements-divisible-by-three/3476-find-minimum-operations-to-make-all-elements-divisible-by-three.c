int minimumOperations(int* nums, int numsSize) {
    int n = numsSize;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]%3!=0)
        {
            count++;
        }
    }
    return count;
}
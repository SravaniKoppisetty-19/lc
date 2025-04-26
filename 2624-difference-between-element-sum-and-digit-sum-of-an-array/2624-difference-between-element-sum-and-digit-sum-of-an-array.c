int differenceOfSum(int* nums, int numsSize) {
    int n=numsSize;
    int sum=0,p=0;
    for(int i=0;i<n;i++)
    {
        sum+=nums[i];
        while(nums[i])
        {
            int r=nums[i]%10;
            p+=r;
            nums[i]=nums[i]/10;
        }
    }
    return abs(sum-p);
}
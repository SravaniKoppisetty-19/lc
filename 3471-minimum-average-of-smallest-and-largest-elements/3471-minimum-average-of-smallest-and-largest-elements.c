double minimumAverage(int* nums, int numsSize) {
    int n=numsSize;
    for(int i=0;i<n;i++)
{
    for(int j=0;j<n-1;j++)
    {
        if(nums[j]>nums[j+1])
        {
            int  temp=nums[j];
            nums[j]=nums[j+1];
            nums[j+1]=temp;
        }
    }
}
    double min=(nums[0]+nums[n-1])/2.0;
    int j=n-1,i=0;
    while(i<=j)
    {
        double r=(nums[i]+nums[j])/2.0;
        if(r<min)
        {
            min=r;
        }
        i++;
        j--;
    }
    return min;
}
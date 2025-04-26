int minOperations(int* nums, int numsSize, int k) {
    int l= numsSize;
    int sum=0;
    for(int i=0;i<l;i++)
    {
        sum+=nums[i];
    }
    if(sum%k==0)
    {
        return 0;
    }
    int c=0;
    while(1)
    {
        c++;
       sum-=1;
       if(sum%k==0)
       {
        return c;
       }
      
    }
}
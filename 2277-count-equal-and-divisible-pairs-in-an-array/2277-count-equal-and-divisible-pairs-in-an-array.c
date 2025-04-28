int countPairs(int* nums, int numsSize, int k) {
    int l=numsSize;
    int c=0;
    int i=0;
   while(i<l)
    {
        for(int j=i+1;j<l;j++)
        {
           if(i!=j)
           {
            if((nums[i] == nums[j]) && ((i*j)%k)==0)
            {
                c++;
            }
           }
        }
        i++;
    }
    return c;
}
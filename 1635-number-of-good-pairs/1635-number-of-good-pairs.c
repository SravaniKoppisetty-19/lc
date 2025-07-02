int numIdenticalPairs(int* nums, int numsSize) {
    int n=numsSize;
    int good_pairs=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]==nums[j])
            {
                good_pairs++;
            }
        }
    }
    return good_pairs;
}
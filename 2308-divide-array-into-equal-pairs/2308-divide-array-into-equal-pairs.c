bool divideArray(int* nums, int numsSize) {
    int frequency[501] = {0};
    for(int i=0;i<numsSize;i++)
    {
        frequency[nums[i]]++;
    }
    for(int i=0;i<501;i++)
    {
        if(frequency[i] % 2 != 0)
        {
            return 0;
        }
    }
    return 1;
}
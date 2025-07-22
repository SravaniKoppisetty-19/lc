int maximumUniqueSubarray(int* nums, int numsSize) {
    int seen[100001] = {0};
    int left =0,right=0;
    int cur_sum =0,max_sum =0;
    while(right<numsSize)
    {
        if(!seen[nums[right]])
        {
            seen[nums[right]] = 1;
            cur_sum += nums[right];
            if(cur_sum>max_sum)
            {
                max_sum = cur_sum;
            }
            right++;
        }
        else {
            seen[nums[left]] = 0;
            cur_sum -= nums[left];
            left++;
        }
    }
    return max_sum;
}
int minimumRightShifts(int* nums, int numsSize) {
    int n = numsSize;
    int count ;
    int ind =0;
    for(int i =0;i<n-1;i++)
    {    
            if(nums[i] > nums[i+1])
            {
                count++;
                ind = i;
            }
    }
    if(count ==0) return 0;
    else if(count == 1 && nums[n-1] <= nums[0]) return n-ind-1;
    return -1;
}
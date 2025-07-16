class Solution {
    public int smallestIndex(int[] nums) {
        int len = nums.length;
        for(int i =0;i<len ;i++)
        {
            int sum =0;
            while(nums[i]>0)
            {
                int r = nums[i]%10;
                sum+=r;
                nums[i] = nums[i]/10;
            }
            if(sum == i)
            {
                return i;
            }
        }
        return -1;
    }
}
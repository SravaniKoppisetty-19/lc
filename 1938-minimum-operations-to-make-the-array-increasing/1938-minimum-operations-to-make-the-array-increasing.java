class Solution {
    public int minOperations(int[] nums) {
        int len = nums.length;
        int count =0;
        for(int i =0;i<len - 1;i++)
        {
            int sum =0;
            if(nums[i] >= nums[i+1])
            {
                int diff = nums[i]-nums[i+1];
                sum = diff+1;
                count += sum;
            }
            nums[i+1] += sum;
        }
        return count;
    }
}
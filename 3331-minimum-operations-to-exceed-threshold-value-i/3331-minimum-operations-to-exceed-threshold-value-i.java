class Solution {
    public int minOperations(int[] nums, int k) {
        int length = nums.length;
        int count = 0;
        for(int i =0;i<length ;i++)
        {
            if(k > nums[i])
            {
                count++;
            }
        }
        return count;
    }
}
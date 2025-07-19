class Solution {
    public int countKDifference(int[] nums, int k) {
        int length = nums.length;
        int number_of_pairs = 0;
        for(int i =0;i<length;i++)
        {
            for(int j = i+1;j<length;j++)
            {
                if(Math.abs(nums[i]-nums[j]) == k)
                {
                    number_of_pairs++;
                }
            }
        }
        return number_of_pairs;
    }
}
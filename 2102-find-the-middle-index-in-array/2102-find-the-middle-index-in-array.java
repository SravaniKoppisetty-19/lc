class Solution {
    public int findMiddleIndex(int[] nums) {
        int l = nums.length;
        for(int i =0;i<l;i++)
        {
            int left_sum =0;
            int right_sum =0;
            for(int j =0;j<i;j++)
            {
                left_sum+=nums[j];
            }
            for(int j =i+1;j<l;j++)
            {
                right_sum+=nums[j];
            }
            if(left_sum==right_sum){
                return i;
            }

        }
        return -1;
    }
}
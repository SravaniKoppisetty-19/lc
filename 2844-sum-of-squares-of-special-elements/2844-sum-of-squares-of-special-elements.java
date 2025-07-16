class Solution {
    public int sumOfSquares(int[] nums) {
        int len = nums.length;
        int result =0;
        for(int i =1 ;i<=len;i++)
        {
            if(len % i == 0)
            {
                result += nums[i-1]*nums[i-1];
            }
        }
        return result;
    }
}
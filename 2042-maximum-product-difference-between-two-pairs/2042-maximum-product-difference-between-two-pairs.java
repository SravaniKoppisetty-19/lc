class Solution {
    public int maxProductDifference(int[] nums) {
        int length = nums.length;
        for(int i =0;i<length;i++)
        {
            for(int j =0;j<length-1;j++)
            {
                if(nums[j] > nums[j+1])
                {
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
        int first_minimum = nums[0];
        int second_minimum = nums[1];
        int first_maximum = nums[length-1];
        int second_maximum = nums[length-2];
        int max_product_difference = Math.abs((first_minimum * second_minimum) - (first_maximum * second_maximum));
        return max_product_difference; 
    }
}
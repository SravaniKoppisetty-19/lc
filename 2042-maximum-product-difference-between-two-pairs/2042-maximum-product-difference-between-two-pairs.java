class Solution {
    public int maxProductDifference(int[] nums) {
        int length = nums.length;
        Arrays.sort(nums);
        int first_minimum = nums[0];
        int second_minimum = nums[1];
        int first_maximum = nums[length-1];
        int second_maximum = nums[length-2];
        int max_product_difference = Math.abs((first_minimum * second_minimum) - (first_maximum * second_maximum));
        return max_product_difference; 
    }
}
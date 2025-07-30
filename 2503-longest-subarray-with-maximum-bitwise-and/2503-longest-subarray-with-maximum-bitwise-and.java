class Solution {
    public int longestSubarray(int[] nums) {
        int max = 0;
        for (int num : nums) {
            if (num > max) {
                max = num;
            }
        }

        int longest = 0, current = 0;
        for (int num : nums) {
            if (num == max) {
                current++;
                longest = Math.max(longest, current);
            } else {
                current = 0;
            }
        }

        return longest;
    }
}

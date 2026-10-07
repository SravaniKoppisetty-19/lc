class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int bitwiseOr = 0;
        for (int num : nums) {
            bitwiseOr |= num;
        }
        return bitwiseOr << (nums.size() - 1);
    }
};
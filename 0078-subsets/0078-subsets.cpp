class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int totalSubsets = 1 << n; // 2^n
        vector<vector<int>> result;

        for (int i = 0; i < totalSubsets; ++i) {
            vector<int> currentSubset;
            for (int j = 0; j < n; ++j) {
                // Check if the j-th bit is set in mask 'i'
                if (i & (1 << j)) {
                    currentSubset.push_back(nums[j]);
                }
            }
            result.push_back(currentSubset);
        }

        return result;
    }
};
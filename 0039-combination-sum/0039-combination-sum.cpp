#include <vector>

class Solution {
public:
    void backtrack(int index, int target, std::vector<int>& candidates, std::vector<int>& current, std::vector<std::vector<int>>& result) {
        // Base Case: If target is reached, add current combination to results
        if (target == 0) {
            result.push_back(current);
            return;
        }

        for (int i = index; i < candidates.size(); ++i) {
            // If current element exceeds target, skip it
            if (candidates[i] <= target) {
                // Choose the candidate
                current.push_back(candidates[i]);
                
                // Recurse with same index 'i' because we can reuse elements
                backtrack(i, target - candidates[i], candidates, current, result);
                
                // Backtrack (remove the element)
                current.pop_back();
            }
        }
    }

    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
        std::vector<std::vector<int>> result;
        std::vector<int> current;
        backtrack(0, target, candidates, current, result);
        return result;
    }
};
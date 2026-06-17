class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[i]);
        }
        int n = nums.size();
        for(int i=n-1;i>=0;i--)
        {
            ans.push_back(nums[i]);
        }
        return ans;
    }
};
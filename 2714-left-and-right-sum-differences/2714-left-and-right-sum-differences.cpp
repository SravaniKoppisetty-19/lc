class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int len = nums.size();
        vector<int>A;
        int left_sum = 0;
        int right_sum = 0;
        for(int i =0;i<len;i++)
        {
            right_sum += nums[i];
        }
        for(int i =0;i<len;i++)
        {
            right_sum -= nums[i];
            A.push_back(abs(left_sum - right_sum));
            left_sum += nums[i];
        }
        return A;
    }
};
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int len = nums.size();
        vector<int>A;
        int sum = 0;
        for(int i =0;i<len ;i++)
        {
            if(nums[i] >= 0 && nums[i] <= 9)
            {
                A.push_back(nums[i]);
                nums[i] = 0;
            }
        }
        for(int i =0;i<len ;i++)
        {
            sum += nums[i];
        }
        int digit_sum = 0;
        for(int i =0;i<A.size() ;i++)
        {
            digit_sum += A[i];
        }
        if(digit_sum > sum || sum > digit_sum)
        {
            return true;
        }
        return false;
    }
};
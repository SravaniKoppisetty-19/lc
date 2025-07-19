class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int len = nums.size();
        vector<int>A(len);
        for(int i =0;i<len;i++)
        {
            int left_sum =0;
            int right_sum = 0;
            for(int j =0;j<len;j++)
            {
                if(j<i)
                {
                    left_sum += nums[j];
                }
                else if(j>i)
                {
                     right_sum += nums[j];
                }  
            }
            A[i] = abs(left_sum - right_sum);
        }
        return A;
    }
};
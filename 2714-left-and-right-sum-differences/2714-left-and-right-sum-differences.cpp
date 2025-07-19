class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int len = nums.size();
        vector<int>A(len);
        for(int i =0;i<len;i++)
        {
            int left_sum =0;
            int right_sum = 0;
                for(int j =0; j<i;j++)
                {
                    left_sum += nums[j];
                }
                for(int j =i+1;j<len ;j++)
                {
                     right_sum += nums[j];
                }  
            A[i] = abs(left_sum - right_sum);
        }
        return A;
    }
};
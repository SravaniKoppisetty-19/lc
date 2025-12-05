class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count =0;
        int sum1 = 0;
        int sum2 =0;
        for(int i=0;i<nums.size()-1;i++)
        {
            sum1+=nums[i];
            sum2 =0;
            for(int j=i+1;j<nums.size();j++){
                sum2 += nums[j];
            }
            int res = abs(sum1 - sum2);
            if(res%2 ==0)
            {
                count++;
            }
        }
        return count;
    }
};
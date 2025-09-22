class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mpp;
        int max = 0;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
            if(mpp[nums[i]] >= max)
            {
                max = mpp[nums[i]];
            }
        }
        int count =0;
        for(auto &pair : mpp)
        {
            if(max == pair.second)
            {
                count += pair.second;
            }
        }
        return count;
    }
};
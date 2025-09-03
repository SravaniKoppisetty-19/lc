class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(auto &pair : mpp)
        {
            if(pair.second>1)
            {
                return true;
            }
        }
        return false;
    }
};
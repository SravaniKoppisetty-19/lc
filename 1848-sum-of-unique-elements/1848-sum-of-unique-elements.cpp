class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
       map<int,int>mpp;
        for(int i =0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(auto &pair :mpp)
        {
            if(pair.second == 1)
            {
                sum+=pair.first;
            }
        }
        return sum;
    }
};
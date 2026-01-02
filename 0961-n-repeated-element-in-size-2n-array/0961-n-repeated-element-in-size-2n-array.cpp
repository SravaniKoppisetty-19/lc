class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        int max =0;
        for(int i =0;i<n;i++)
        {
            if(max<nums[i])
            {
                max=nums[i];
            }
        }
        vector<int> freq(max+1,0);
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        for(int i=0;i<max+1;i++)
        {
            if(freq[i]>1)
            {
                return i;
            }
        }
        return 0;
    }
};
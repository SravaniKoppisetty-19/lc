class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int small =nums[0];
        int high =nums[0];
        vector<int>arr;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>high)
            {
                high = nums[i];
            }
            if(nums[i]<small)
            {
                small = nums[i];
            }
        }
        for(int i =small;i<=high;i++)
        {
            bool val = false;
            for(int j =0;j<nums.size();j++)
            {
                if(i==nums[j])
                {
                   val = true;
                   break;
                }
            }
            if(!val)
            {
                arr.push_back(i);
            }
        }
        return arr;
    }
};
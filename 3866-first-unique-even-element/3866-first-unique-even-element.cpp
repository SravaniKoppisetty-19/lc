class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            if(nums[i] % 2 != 0)
                continue;

            int k = 0;

            for(int j = 0; j < n; j++)
            {
                if(i != j && nums[i] == nums[j])
                {
                    k = 1;
                    break;
                }
            }

            if(k == 0)
                return nums[i];
        }

        return -1;
    }
};
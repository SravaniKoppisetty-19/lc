class Solution {
public:
int count_bit(int num)
{
    int count =0;
    while(num>0)
    {
        num &= (num-1);
        count++;
    }
    return count;
}
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(count_bit(i) == k)
            {
                sum+=nums[i];
            }
        }
        return sum;
    }
};
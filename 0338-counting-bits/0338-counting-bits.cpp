class Solution {
public:
    int count_bit(int num)
    {
        int count = 0;
        while(num>0)
        {
            num &= (num-1);
            count++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>arr;
        for(int i=0;i<=n;i++)
        {
             arr.push_back(count_bit(i));
        }
        return arr;
    }
};
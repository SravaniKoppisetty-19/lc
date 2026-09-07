class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        int l =n;
        long long count =0;
        long long pre =0;
        long long suf =0;
        for(int i=0;i<l/2;i++)
        {
            pre += nums[i];
        }
        for(int i =l/2;i<l;i++)
        {
            suf += nums[i];
        }
        if(pre > suf) count++;
        for(int i=0;i<l-1;i++)
        {
            pre -= nums[i];
            if(i+l/2 < l)
            {
                pre += nums[i+(l/2)];
                suf -= nums[i+(l/2)];
            }
            else if(i+l/2>=n){
                int j = i+(l/2)-n;
                    pre += nums[j];
                    suf -= nums[j];
            }
            suf += nums[i];
            if(pre > suf) count++;
        }
        return count;
    }
};
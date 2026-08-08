class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        vector<vector<int>>ans(2);
        for(int i=0;i<nums1.size();i++)
        {
            m1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            m2[nums2[i]]++;
        }
        for(auto i :m1)
        {
            int k =0;
            for(auto j :m2)
            {
                if(i.first==j.first)
                {
                    k=1;
                    break;
                }
            }
            if(k==0)
            {
                ans[0].push_back(i.first);
            }
        }
         for(auto i :m2)
        {
            int k =0;
            for(auto j :m1)
            {
                if(i.first==j.first)
                {
                    k=1;
                    break;
                }
            }
            if(k==0)
            {
                ans[1].push_back(i.first);
            }
        }
        return ans;
    }
};
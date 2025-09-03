class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n= changed.size();
        vector<int>arr;
        if(n%2!=0)
        {
            return arr;
        }
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[changed[i]]++;
        }
        sort(changed.begin(),changed.end());
        for(int i=0;i<n;i++)
        {
            if(mpp[changed[i]]==0) continue;
            if(mpp[2*changed[i]] ==0) return {};
            arr.push_back(changed[i]);
            mpp[changed[i]]--;
            mpp[changed[i]*2]--;
        }
        return arr;
        
    }
};
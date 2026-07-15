class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int i=1;
        int ans = INT_MIN;
        while(i<n-1)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                int l = i-1;
                int r= i+1;
                while(l-1>=0 && l>=0 && arr[l]>arr[l-1])
                {
                    l--;
                }
                while(r<n && r+1<n && arr[r]>arr[r+1])
                {
                    r++;
                }
                ans = max(ans,r-l+1);
                i=r;
            }
            else{
                i++;
            }
        }
        if(ans == INT_MIN)
        {
            return 0;
        }
        return ans;
    }
};
class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int l=0;
        int r = n-1;
        int maxArea = 0;
        while(l<r)
        {
            maxArea = max(maxArea, min(h[l] , h[r]) * (r-l));
            if(h[r] < h[l]) {
                r--;
            }
            else l++;
        }
        return maxArea;
    }
};
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       
        int n = matrix.size();
        int m = matrix[0].size();
         vector<vector<int>>ans(m,vector<int>(n,0));
        int k=0;
        for(int i=0;i<n;i++)
        {
            vector<int>d;
            for(int j=0;j<m;j++)
            {
                d.push_back(matrix[i][j]);
            }
            for(int l = 0;l<m;l++)
            {
                ans[l][k] = d[l];
            }
            k+=1;
        }
        return ans;
    }
};
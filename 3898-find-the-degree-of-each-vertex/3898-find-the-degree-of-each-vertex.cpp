class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& mat) {
        vector<int>ans;
        for(int i=0;i<mat.size();i++)
        {
            int sum =0;
            for(int j =0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                {
                    sum += mat[i][j];
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
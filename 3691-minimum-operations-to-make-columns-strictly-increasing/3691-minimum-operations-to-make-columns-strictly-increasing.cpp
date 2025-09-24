class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int n = grid.size();
        int sum;
        int count =0;
        for(int i=0;i<n-1;i++)
        {
            for(int j =0;j<grid[0].size();j++)
            {
                sum =0;
                if(grid[i][j] >= grid[i+1][j])
                {
                     int diff = grid[i][j] - grid[i+1][j];
                     sum += diff+1;
                     count += sum;
                }
                grid[i+1][j] += sum;
            }
        }
        return count;
    }
};
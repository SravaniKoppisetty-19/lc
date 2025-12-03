class Solution {
public:
    vector<vector<string>>ans;
    vector<string>board;
    bool isSafe(int row,int col,int n)
    {
        for(int i=0;i<col;i++)
        {
            if(board[row][i] == 'Q')
            {
                return false;
            }
        }
        for(int i=row,j=col;i>=0 && j>=0;i--,j--)
        {
            if(board[i][j] == 'Q')
            {
                return false;
            }
        }
        for(int i=row,j=col;i<n && j>=0 ;i++,j--)
        {
            if(board[i][j] == 'Q')
            {
                return false;
            }
        }
        return true;
    }
    void solve(int col,int n)
    {
        if(col == n)
        {
            ans.push_back(board);
            return;
        }

        for(int i =0;i<n;i++)
        {
            if(isSafe(i,col,n))
            {
                board[i][col] = 'Q';
                solve(col+1,n);
                board[i][col] ='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        ans.clear();
        board = vector<string>(n, string(n, '.'));
        solve(0,n);
        return ans;
    }
};
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows>= s.size())
        {
            return s;
        }
        vector<vector<char>>ans(numRows);
        int idx=0,d =1;
        for(int i = 0;i<s.size();i++)
        {
            ans[idx].push_back(s[i]);
            if(idx==0)
            {
                d=1;
            }
            else if(idx == numRows-1)
            {
                d =-1;
            }
            idx+=d;
        }
        string result;
        for(int i=0;i<ans.size();i++)
        {
            for(int j =0;j<ans[i].size();j++)
            {
                result+=ans[i][j];
            }
        }
        return result;
    }
};
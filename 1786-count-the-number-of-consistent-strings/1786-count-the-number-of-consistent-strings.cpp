class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt =0;
        for(auto e : words)
        {
            int tr = 1;
            for(int i=0;i<e.size();i++)
            {
                bool found = false;
                for(int j =0;j<allowed.size();j++)
                {
                    if(e[i] == allowed[j])
                    {
                        found = true;
                        break;
                    }
                }
                if(!found)
                {
                    tr =0;
                    break;
                }
            }
             if(tr ==1)
                    {
                        cnt++;
                    }
        }
        return cnt;
    }
};
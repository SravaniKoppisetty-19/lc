class Solution {
public:
    string truncateSentence(string s, int k) {
        int count =0;
        string s1;
        for(int i =0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                count++;
            }
            if(count == k)
            {
                break;
            }
            s1+=s[i];
        }
        return s1;
    }
};
class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size()==1)
        {
            return s;
        }
        int n = s.size();
        string l="";
        for(int i=0;i<n/2;i++)
        {
            l+=s[i];
        }
        sort(l.begin(),l.end());
        string k=l;
        if(n%2!=0)
        {
            k+=s[n/2];
        }
        for(int i=l.size()-1;i>=0;i--)
        {
            k+=l[i];
        }
        return k;
    }
};
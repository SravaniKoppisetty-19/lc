class Solution {
public:
    string reverseVowels(string s) {
        string str = "";
        vector<int>ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='U' || s[i]=='O' || s[i]=='I' || s[i]=='E' || s[i]=='A' || s[i]=='u' ||s[i]=='o' ||s[i]=='i' ||s[i]=='a' ||s[i]=='e')
            {
                str+= s[i];
                ans.push_back(i);
            }
        }
        reverse(str.begin(),str.end());
        int l = ans.size();
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if(l>0){
                if(i==ans[k])
                {
                    s[i]=str[k];
                    k++;
                    l--;
                }
            }
        }
        return s;
    }
};
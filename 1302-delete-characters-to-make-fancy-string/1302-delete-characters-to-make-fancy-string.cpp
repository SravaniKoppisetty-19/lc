class Solution {
public:
    string makeFancyString(string s) {
        
        int len = s.size();
       int count = 1;
       string result = "";
       for(int i =1;i<len;i++)
       {
        if(s[i] == s[i-1])
        {
            count++;
        }
        else count = 1;
        if(count <= 2)
        {
            result+= s[i];
        }
       }
       result = s[0] + result;
       return result;  

    }
};
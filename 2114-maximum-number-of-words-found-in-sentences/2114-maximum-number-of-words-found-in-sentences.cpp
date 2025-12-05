class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi =1;
        int current =1;
        for(auto each : sentences)
        {
            current =1;
            for(int i =0;i<each.size();i++)
            {
                if(each[i] == ' '){
                    current++;
                }
            }
            maxi = max(maxi,current);
        }
        return maxi;
    }
};
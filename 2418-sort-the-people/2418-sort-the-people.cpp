class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>arr;
        for(int j=0;j<names.size();j++)
        {
            int max_val = -1;
            int max_ind =0;
            for(int i=0;i<heights.size();i++)
            {
                if(heights[i] > max_val)
                {
                    max_val = heights[i];
                    max_ind =i;
                }
            }
            arr.push_back(names[max_ind]);
            heights[max_ind] = -1;
        }
        return arr;
    }
};
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int i =0;i<arr.size();i++)
        {
            freq[arr[i]]++;
        }
        unordered_set<int>same_occurence;
        for(auto& num:freq)
        {
            if(same_occurence.count(num.second))
            {
                return false;
            }
            same_occurence.insert(num.second);
        }
        return true;

    }
};
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>arr;
        if(n%2 !=0)
        {
            arr.push_back(0);
            int k = n/2;
            for(int i=1;i<=k;i++)
            {
                arr.push_back(n-i);
                arr.push_back(-(n-i));
            }
            return arr;
        }
        else if(n%2 == 0 )
        {
            int k = n/2;
            for(int i=1;i<=k;i++)
            {
                arr.push_back(n-i);
                arr.push_back(-(n-i));
            } 
            return arr;
        }
        return arr;
    }
};
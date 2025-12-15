class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>arr;
        for(int i=0;i<prices.size();i++)
        {
            int k =0;
            for(int j = i+1;j<prices.size();j++)
            {
                if(prices[i]>=prices[j])
                {
                    arr.push_back(prices[i]-prices[j]);
                    k =1;
                    break;
                }
            }
            if(k==0)
            {
                arr.push_back(prices[i]);
            }
        }
        return arr;
    }
};
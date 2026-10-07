class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>fr;
        for(int i =1;i<=n;i++)
        {
            fr.push_back(i);
        }
        int c =0;
        while(fr.size()>1){
            int re = (c+k-1)%fr.size();
            fr.erase(fr.begin() + re);
            c = re;
        }
        return fr[0];
    }
};
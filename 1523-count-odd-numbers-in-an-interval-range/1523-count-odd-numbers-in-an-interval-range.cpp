class Solution {
public:
    int countOdds(long long low, long long high) {
        int count =0;
        for(long long i = low;i<= high;i++){
            if(i%2 != 0)
            {
                count++;
            }
        }
        return count;
    }
};
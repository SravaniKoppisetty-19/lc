class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int n = numBottles;
        int exchange = numExchange;
        int count =0;
        while(n>=exchange)
        {
            count+=exchange;
            n-=exchange;
            n++;
        }
        return n+count;
    }
};
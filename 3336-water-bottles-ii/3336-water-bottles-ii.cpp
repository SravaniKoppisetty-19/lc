class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int n = numBottles;
        int count = numBottles;
        int change = numExchange;
        int empty = numBottles;
        while(empty>= change)
        {
            empty-= change;
            change++;
            count++;
            empty++;
        }
        return count;
        
    }
};
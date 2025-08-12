class Solution {
public:
    int hammingWeight(int n) {
        int count =0;
        while(n>1)
        {
            if(n%2 !=0)
            {
                n = n-1;
                count++;
            }
            if(n%2 == 0)
            {
                n = n/2;
            }
        }
        return count+n;
    }
};
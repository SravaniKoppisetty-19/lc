class Solution {
public:
    int countTriples(int n) {
        vector<bool>square(n*n+1,false);
        for(int i =1;i<=n;i++)
        {
            square[i*i] = true;
        }
        int count =0;
        for(int a =1;a<=n;a++)
        {
            for(int b =1;b<=n;b++)
            {
                int sum = a*a + b*b;
                if(sum <= n*n && square[sum])
                {
                   count++;
                }
            }
        }
        return count;
    }
};
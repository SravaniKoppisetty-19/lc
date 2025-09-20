class Solution {
public:
int dp[1000];
int fib(int n)
{
	//base case
	if(n<=3)
	{
		return n;
	}
    if(dp[n]!= -1)
    {
        return dp[n];
    }
	//sub_problem
	int sub= fib(n-1);
	int subb=fib(n-2);
	//current solution
	int cur=sub+subb;
    return dp[n] = cur;
}
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        return fib(n);
    }
};
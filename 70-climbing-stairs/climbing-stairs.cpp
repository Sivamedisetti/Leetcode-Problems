class Solution {
public:
    int fib(int n,vector<int>&dp)
    {
        if(n<=1) return 1;
        if(dp[n]!=-1) return dp[n];
        int last=fib(n-1,dp);
        int slast=fib(n-2,dp);
        return dp[n]=last+slast;

    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return fib(n,dp);
    }
};
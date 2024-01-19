class Solution {
public:
    int rec(int i,int j,int n,vector<vector<int>>&matrix,vector<vector<int>>&dp)
    {
        if(i==n)return 0;
        if(dp[i][j]!=INT_MAX)return dp[i][j];
        int l=INT_MAX;
        int r=INT_MAX;
        int d=INT_MAX;
        if(j>0)
        {
            l=rec(i+1,j-1,n,matrix,dp);
        }
        if(j<n-1)
        {
            r=rec(i+1,j+1,n,matrix,dp);
        }
        d=rec(i+1,j,n,matrix,dp);
        return dp[i][j]=matrix[i][j]+min(l,min(r,d));
        

    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        int sum=INT_MAX;
        for(int i=0;i<n;i++)
        {
            sum=min(sum,rec(0,i,n,matrix,dp));
        }
        return sum;   
    }
};
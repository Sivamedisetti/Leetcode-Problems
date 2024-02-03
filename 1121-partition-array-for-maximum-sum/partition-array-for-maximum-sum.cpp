class Solution {
public:
    int fun(int i,int k,vector<int>&A,int n,vector<int>&DP)
    {
        if(i==n)return 0;
        int m=INT_MIN,j;
        int ans=INT_MIN;
        if(DP[i]!=-1)return DP[i];
        for(j=i;j<i+k and j<n;j++)
        {
            m=max(m,A[j]);
            int l=j-i+1;
            ans=max(ans,m*l+fun(j+1,k,A,n,DP));
        }return DP[i]=ans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>DP(n,-1);
        return fun(0,k,arr,n,DP);

    }
};
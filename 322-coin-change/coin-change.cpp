class Solution {
public:
    int DP[100001];
    long long CoinChange(int n,int k,vector<int>A){
	if(k==0)return 0;
	if(k<0)return -1;
	 if(DP[k]!=-1)return DP[k];
	long long ans=INT_MAX;
	long long res=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(A[i]<=k)
		{
			ans=1+CoinChange(n,k-A[i],A);
			res=min(ans,res);
		}
		res=min(ans,res);
	}
	return DP[k]=res;

}
    int coinChange(vector<int>& arr, int k) {

        int n=arr.size();
        memset(DP,-1,sizeof(DP));
        if(CoinChange(n,k,arr)==INT_MAX) return -1;
        else
            return CoinChange(n,k,arr);
        }
};
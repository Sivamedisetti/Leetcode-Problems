class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n=rowSum.size(),m=colSum.size();
        vector<vector<int>>result(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int ans=min(rowSum[i],colSum[j]);
                result[i][j]=ans;
                rowSum[i]-=ans;
                colSum[j]-=ans;
            }
        }
        return result;
    }
};
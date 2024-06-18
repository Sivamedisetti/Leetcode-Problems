class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        map<int,int>mp;
        int n=profit.size(),m=worker.size();

        for(int i=0;i<n;i++){
            mp[difficulty[i]]=max(mp[difficulty[i]],profit[i]);
        }
        sort(worker.begin(),worker.end());
        sort(difficulty.begin(),difficulty.end());
        int j=0,ans=0,sum=0,f,k=0;
        for(int i=0;i<m;i++){
           while(j<n and difficulty[j]<=worker[i]){
            sum=max(sum,mp[difficulty[j]]);
            j++;
           }
           ans+=sum;
        }
        return ans;
        
    }
};
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        vector<pair<int,int>>vecpair;
        vector<int>ans;
        for(int it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            vecpair.push_back({it.second,it.first});
        }
        sort(vecpair.begin(),vecpair.end());
        priority_queue<int>pQ;
        int n=vecpair.size();
        for(int i=0;i<n;i++){
            int m=vecpair[i].first;
            while(i+1<n && vecpair[i+1].first==m){
                pQ.push(vecpair[i].second);
                i++;
            }
            pQ.push(vecpair[i].second);

            while(!pQ.empty())
            {
                for(int j=0;j<m;j++){
                    ans.push_back(pQ.top());

                }
                pQ.pop();
            }
        }

        
        return ans;
    }
};
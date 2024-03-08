class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        int m=INT_MIN,s=0;
        for(auto it:mp){
            m=max(it.second,m);
        }
        for(auto it:mp){
            if(it.second==m){
                s+=it.second;
            }

        }
        return s;
        
    }
};
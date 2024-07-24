class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
       map<int,vector<int>>mp;
       vector<int>ans;
        for(int it:nums){
            string s=to_string(it);
            int key=0;
            for(int i=0;i<s.size();i++){
                key=key*10+mapping[s[i]-'0'];
            }
            mp[key].push_back(it);
        }
        for(auto it:mp){
            for(auto j: it.second)ans.push_back(j);
        }
        return ans;
    }
};
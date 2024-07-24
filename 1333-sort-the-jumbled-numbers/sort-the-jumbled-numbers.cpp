class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
       vector<pair<int,int>>mp;
       vector<int>ans;
        for(int i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            int key=0;
            for(int i=0;i<s.size();i++){
                key=key*10+mapping[s[i]-'0'];
            }
            mp.push_back({key,i});
        }
        sort(mp.begin(),mp.end());
        for(auto it:mp){
            ans.push_back(nums[it.second]);
        }
        return ans;
    }
};
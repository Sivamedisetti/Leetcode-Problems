class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string>mp;
        vector<string>ans;
        int n=names.size();
        for(int i=0;i<n;i++){
            mp[heights[i]]=names[i];
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        reverse(ans.rbegin(),ans.rend());
        return ans;
    }
};
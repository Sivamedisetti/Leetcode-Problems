class Solution {
public:
    void check(string s,map<string,vector<string>>&m)
    {
        string temp=s;
        sort(temp.begin(),temp.end());
        m[temp].push_back(s);

    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<string>>m;
        for(auto it:strs){
            check(it,m);
        }
        for(auto it:m)
        {
            ans.push_back(it.second);
        }return ans;
     }
};
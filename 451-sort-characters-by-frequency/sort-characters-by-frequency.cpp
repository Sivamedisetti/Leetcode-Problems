class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        string ans="";
        vector<pair<int,char>>vp;
        for(auto it:s)
        {
            mp[it]++;
        }
        for(auto it:mp){
            vp.push_back(make_pair(it.second,it.first));
        }
        sort(vp.rbegin(),vp.rend());
        for(auto it:vp)
        {
            for(int j=0;j<it.first;j++)
            {
                ans+=it.second;
            }
        }


        return ans;

    }
};
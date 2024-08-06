class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mp;
        vector<int>ds;
        int ans=0;

        for(auto it:word)mp[it]++;

        for(auto it:mp){
            ds.push_back(it.second);
        }
        sort(ds.rbegin(),ds.rend());
        int push=1;
        for(int i=0; i<ds.size(); i++) {
            if(i>7)push=2;
            if(i>15)push=3;
            if(i>23)push=4;
            ans+=ds[i]*push;
        }
        return ans;

    }
};
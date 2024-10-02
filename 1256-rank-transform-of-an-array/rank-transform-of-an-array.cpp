class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        vector<int>dummy=arr;
        vector<int>result;
        sort(dummy.begin(),dummy.end());
        map<int,int>mp;
        int rank = 1;
        for(auto it: dummy)
        {
            if(mp[it] == 0)
            {
                mp[it]=rank;
                rank++;
            }
        }
        for(auto it:arr)
        {
            result.push_back(mp[it]);
        }
        return result;


    }
};
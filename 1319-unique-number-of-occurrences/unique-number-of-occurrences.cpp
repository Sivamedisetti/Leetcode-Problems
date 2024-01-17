class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        vector<int>vec;
        for(auto it:arr)
        {
            mp[it]++;
        }
        for(auto it:mp)
        {
            vec.push_back(it.second);
        }
        sort(vec.begin(),vec.end());
        int n=vec.size();
        for(int i=0;i<n-1;i++)
        {
            if(vec[i]==vec[i+1])
            {
                 return false;
            }
        }
        return true;
    }
};
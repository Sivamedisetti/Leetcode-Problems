class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if(target.size()!=arr.size())return false;

        map<int,int>mp;
        for(auto it:target)mp[it]++;
        for(auto it:arr){
            if(mp[it]){
                mp[it]-=1;
            }
            else return false;
        }
        return true;
    }
};
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        vector<int>hash;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            hash.push_back(it.second);
        }
        sort(hash.begin(),hash.end());
        int cnt=0;
        for(auto it:hash){
            k=k-it;
            if(k<0) cnt++;
        }
        return cnt;
    }
};
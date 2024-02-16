class Solution {
public:
    //long long hash[1000000009]={0};
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
      //  int m=*max_element(arr.begin(),arr.end());
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
            if(it!=0 and k<0) cnt++;
        }
        return cnt;
    }
};
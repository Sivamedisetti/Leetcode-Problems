class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        map<int,int>mp;
        map<int,int>mp2;
        for(auto it:nums1)mp[it]++;
        for(auto it:nums2)mp2[it]++;
        for(auto it:mp2){
            if(mp[it.first]>0)ans.push_back(it.first);
        }
        return ans;
    }
};
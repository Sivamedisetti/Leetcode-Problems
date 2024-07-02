class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp2;
        for(auto it:nums2){
            mp2[it]++;
        }
        vector<int>ans;
        for(auto it:nums1){
            if(mp2[it]!=0){
                ans.push_back(it);
                mp2[it]--;
            }
        }
        return ans;
    }
};
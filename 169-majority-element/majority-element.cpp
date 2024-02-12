class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int max=nums.size()/2;
        for(auto it:nums){
            mp[it]++;
            if(mp[it]>max) {
                return it;
            }

        }
        return -1;
    }
};
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
            if(mp[it]==2)
            {
                ans.push_back(it);
            }
        }
        int x=1;
        while(true){
            if(mp[x]==0)
            {
                ans.push_back(x);
                break;
            }
            x+=1;
        }
        return ans;
    }
};
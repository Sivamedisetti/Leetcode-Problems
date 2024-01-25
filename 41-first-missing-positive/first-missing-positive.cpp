class Solution {

public:
    
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k = 1;
        for(auto i:nums)
        {
            if(i==k) k++;
            else if(i<0) continue;
            else if(i>k)
            {
                return k;
            }
        }
        return k;
    }
};
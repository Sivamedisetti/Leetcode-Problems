class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int k=nums[0];
        for(int i=1;i<n;i++)
        {
            if(k==0 and i<n)return false;
            k--;
            k=max(k,nums[i]);
        }
        return true;
    }
};
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
            int n=nums.size();
            sort(nums.begin(),nums.end());
            int f=1;
            for(int i=0;i<n;i++){
                if(nums[i]==f){
                    f+=1;
                }
                // else if(nums[i]>=1 and nums[i]!=f)return f;
            }
            return f;
    }
};
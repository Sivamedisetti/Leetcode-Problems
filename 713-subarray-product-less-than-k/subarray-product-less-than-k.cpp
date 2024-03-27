class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size(),p=1;
        int c=0;
        for(int i=0;i<n;i++)
        {
            p=1;
            for(int j=i;j<n;j++){
                p*=nums[j];
                if(p<k){
                    c+=1;
                }
                else{
                    break;
                }
            }
        }
        return c;
    }
};
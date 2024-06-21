class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i-1]== nums[i] && nums[i]==nums[i+1]){
                nums[i-1]=INT_MAX;
                count++;
            }
        }
        sort(nums.begin(),nums.end());
        return nums.size()-count;
    }
};
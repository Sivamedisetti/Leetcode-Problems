class Solution {
public:
    vector<vector<int>>ans;
    void pickNpick(int ind,vector<int>ds,vector<int>&nums){
        if(ind == nums.size() ){
            ans.push_back(ds);
            return;
        }
        //pick an element from an arr
        ds.push_back(nums[ind]);
        pickNpick(ind+1,ds,nums);
        ds.pop_back();
        //non pick element from an arr
        pickNpick(ind+1,ds,nums);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        pickNpick(0,ds,nums);
        return ans;
    }
};
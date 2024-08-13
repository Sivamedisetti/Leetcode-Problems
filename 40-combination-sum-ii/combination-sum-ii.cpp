class Solution {
private:
    
    void findCombinations(int ind, vector<int>& arr, int target, vector<int>& ds, vector<vector<int>>& ans){
        //base: if target is 0 then add to the ans;
        if(target == 0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<arr.size();i++){

            if(i>ind && arr[i]==arr[i-1])continue;
            if(arr[i]>target) break;

            ds.push_back(arr[i]);
            findCombinations(i+1, arr, target-arr[i], ds, ans);
            ds.pop_back();
        }
        
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(candidates.begin(),candidates.end());
        findCombinations(0, candidates, target, ds, ans);

        return ans;
    }
};
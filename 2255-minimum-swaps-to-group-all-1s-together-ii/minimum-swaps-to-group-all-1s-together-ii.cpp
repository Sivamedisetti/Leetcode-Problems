class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int windowSize=0;
        int ans = 0, cnt = 0;
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            vec.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            vec.push_back(nums[i]);
        }
        for(auto it:nums){
            // nums.push_back(it);
            if(it==1)windowSize++;
        }

        for(int i=0; i<windowSize; i++)
        {
            if(nums[i]==1)cnt++;
        }

        for(int i = windowSize; i<vec.size(); i++){
            cnt+=vec[i]-vec[i-windowSize];
            ans=max(cnt,ans);
        }
        return windowSize-ans;

    }
};
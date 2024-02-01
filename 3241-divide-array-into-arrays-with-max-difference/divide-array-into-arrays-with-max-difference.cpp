class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>vec;
        for(int i=1;i<nums.size();i++)
        {
            
            if(abs(nums[i-1]-nums[i])>k and (i)%3!=0 )return {};
        }
        for(int i=1;i<nums.size();i+=3)
        {
            if(abs(nums[i-1]-nums[i+1])>k)return {};
        }
        vector<int>v;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back(nums[i]);
            if((i+1)%3==0)
            {
                vec.push_back(v);
                v.clear();
            }
        }return vec;
    }
   
};
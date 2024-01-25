class Solution {

public:
    
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>vec;
        for(auto it:nums)
        {
            vec[it]++;
        }
        for(int i=1;i<=pow(2,31);i++)
        {
            if(vec[i]==0)
            {
                return i;
            }
        }
        return 0;
    }
};
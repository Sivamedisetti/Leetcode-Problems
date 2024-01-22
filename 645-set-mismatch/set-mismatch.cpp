class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int OS=(n*(n+1))/2;
        int AS=0,D,M,Diff;
        for(int i=0;i<n-1;i++)
        {
            AS+=nums[i];
            if(nums[i]==nums[i+1])
            {
                D=nums[i];
            }
        }
        AS+=nums[n-1];
        Diff=abs(OS-AS);
        if(AS<OS)
        {
            M=D+Diff;
        }
        else
        {
            M=Diff-D;
        }
        M=abs(M);
        return {D,M};
    }
};
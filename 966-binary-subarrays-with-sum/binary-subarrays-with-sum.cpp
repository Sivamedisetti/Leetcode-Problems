class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count=0,flag=0;
        int n=nums.size();
        // cout<<n<<endl;
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=i;j<n;j++){
                s+=nums[j];
                if(s==goal){
                    count++;
                }
                else if (s>goal)break;
            }
            // if(flag==0)return (n*(n+1))/2;
        }
        return count;
    }
};
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int CountNic=0,flag,oddCo=0;
        map<int,int>mp;
        mp[0]=1;
        for(auto it:nums){
            if(it%2==1){
                oddCo++;
            }
            mp[oddCo]++;
            int f=oddCo-k;
            if(f>=0 and mp[f]!=0){
                CountNic+=mp[f];
            }
        }
        return CountNic;
        
    }
       

};
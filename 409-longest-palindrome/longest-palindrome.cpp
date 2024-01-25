class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        int ans=0;
        int oc=0;
        int oc2=0;
        for(auto it:s)
        {
            mp[it]++;
        }
        if(mp.size()==1)
        {
            return mp[s[0]];
        }
        // for(auto it:mp)
        // {
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        for(auto it:mp)
        {
            if(it.second%2==0)
            {
                ans+=it.second;
            }
            else{
                if(it.second==1)
                {
                    oc+=1;
                }
                else
                {
                    ans+=it.second-1;
                    oc2+=1;
                }
                
            }
        }
       // cout<<ans<<" ";
        if(oc>=1 or oc2>=1)
        {
            return ans+1;
        }
        else
        {
            return ans;
        }


    }
};
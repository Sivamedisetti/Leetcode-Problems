class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int x=0,m=rolls.size(),l=n;
        vector<int>ans;
        int sum=accumulate(rolls.begin(),rolls.end(),0);
        x=(mean*(m+n))-sum;
        
        if(x>n*6)return {};
        else
        {
            while(l!=0)
            {
                int k=x/l;
                if(k<0)return {};
                if(k>=1 and k<=6) ans.push_back(k);
                x-=k;
                l-=1;
            }
        }
        if(ans.size()!=n)return {};
        return ans;
        
        
    }
};
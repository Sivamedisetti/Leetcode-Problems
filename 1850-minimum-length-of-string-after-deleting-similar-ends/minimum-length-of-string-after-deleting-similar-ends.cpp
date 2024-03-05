class Solution {
public:
    int minimumLength(string s) {
        ios_base::sync_with_stdio(0);
        char f;
        int n=s.length();
        int l=0,r=n-1;
        while(l<=r)
        {
            if(s[l]==s[r]){
                if(l+1==r) return 0;
                f=s[l];
                l+=1;
            }
            else{
                if(s[r]==f){
                    r--;
                    // continue;
                }
                else{
                    return r-l+1;
                }
            }
        }
        if(l>r) return 1;
        return 0;
    }
};
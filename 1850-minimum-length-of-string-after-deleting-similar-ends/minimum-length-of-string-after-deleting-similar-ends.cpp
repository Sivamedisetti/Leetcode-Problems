class Solution {
public:
    int minimumLength(string s) {
        ios_base::sync_with_stdio(0);
        char f;
        int n=s.length();
        int l=0,r=n-1;
        while(l<r)
        {
            if(s[l]==s[r]){
                while(l<n-1 and s[l]==s[l+1]) l++;
                while(r>0 and s[r]==s[r-1]) r--;
                l++;
                r--;
            }
            else{
                return r-l+1;
            }
            
        }
        if(l==r) return 1;
        return 0;
    }
};
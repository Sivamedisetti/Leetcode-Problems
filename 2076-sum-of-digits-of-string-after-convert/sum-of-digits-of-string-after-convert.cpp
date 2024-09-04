class Solution {
public:
    int getLucky(string s, int k) {
        int x=0;
        for(auto it:s){
            int a = it-'a'+1;
            if(a <= 9) x += a;
            else {
                x += a % 10;
                a = a / 10;
                x += a;
            }
        }
        while(k>1)
        {
           int rem=0,ans=0;
            while(x!=0)
            {
                rem=x%10;
                ans += rem;
                x=x/10;

            }
            x = ans;
            k--;
        }
        return x;
    }
};
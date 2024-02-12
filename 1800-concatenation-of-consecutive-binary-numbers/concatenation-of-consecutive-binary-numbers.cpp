class Solution {
public:
    long long mod=1e9+7;
    int concatenatedBinary(int n) {
         long long sol=0;
         int f = 0;
         long long d = 1;
        for(int i=n;i>=1;i--)
        {
            int l=(int)log2(i);
            for(int j=0;j<=l;j++)
            {
                if(f==0) d = 1;
                else d = (d * 2) % mod;
                if(i&(1<<j)){
                    sol=(sol%mod) + d;
                }
                f++;
            }
        }
        return sol%mod;
    }
};
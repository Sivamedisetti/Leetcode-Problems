void sieve(vector<int>&Primes,int r){
     Primes[0]=0;
     Primes[1]=0;
    for(int i=2;i*i<=r;i++)
    {
        if(Primes[i]==1)
        {
            for(int j=i*i;j<=r;j+=i)
            {
                Primes[j]=0;
            }
        }
    }
}
class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int>Primes(right+1,1);
        sieve(Primes,right);
        vector<int>pr;
        for(int i=left;i<=right;i++)
        {
            if(Primes[i]==1){
                 pr.push_back(i);
            }
        }
        if(pr.size()<2)return {-1,-1};
        int mini=INT_MAX;
        int a,b;
        for(int i=1;i<pr.size();i++)
        {
            int diff=pr[i]-pr[i-1]; 
            if(diff<mini)
            {
                mini=diff;
                a=pr[i-1];
                b=pr[i];
            }
        }
        return {a,b};
    }
};
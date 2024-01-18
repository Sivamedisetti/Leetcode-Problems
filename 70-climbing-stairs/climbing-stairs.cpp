class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        int a=1,b=1,sum=0;
        n=n-1;
        while(n--)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
        return sum;
    }
};
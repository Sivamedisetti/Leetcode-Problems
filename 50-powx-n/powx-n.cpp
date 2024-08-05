class Solution {
public:
    double findPow(double x, int n){
        if(n==0)return 1;
        double val=findPow(x,n/2);
        if(n%2==0){

            return val*val;
        }
        else{
            return val*val*x;
        }
    }
    double myPow(double x, int n) {
        double ans = findPow(x,n);
        if(n<0)return 1/ans;
        return ans;
    }
};
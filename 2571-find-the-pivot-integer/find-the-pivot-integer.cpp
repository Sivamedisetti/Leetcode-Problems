class Solution {
public:
    int pivotInteger(int n) {
        int ts=(n*(n+1))/2;
        if(n==1)return 1;
        // if(n<4)return -1;
        for(int i=n/2;i<n-1;i++){
            if((i*(i+1))==(ts-i-1)){
                return i+1;
            }
        }
        return -1;
    }
};
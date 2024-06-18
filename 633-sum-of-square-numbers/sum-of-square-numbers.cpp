class Solution {
public:
    bool judgeSquareSum(int c) {
        int i=0,j=sqrt(c);
        while(i<=j){
            long  x=pow(i,2)+pow(j,2);
            if(x==c){
                return true;
            }
            else if(x<c){
                i++;
            }
            else{
                j--;
            }
        }

    return false;
    }
};
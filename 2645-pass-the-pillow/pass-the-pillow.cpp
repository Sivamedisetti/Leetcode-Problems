class Solution {
public:
    int passThePillow(int n, int time) {
        int i=1,flag=0;

        while(time--){
            if(i==n)flag=1;
            if(i==1)flag=0;
            if(flag==0)i++;
            else i--;
        }
        return i;
    }
};
class Solution {
public:
    int minSteps(int n) {
        string s="A",pS=s;
        int iter=0,count=0;
        while(s.length()<n){
            if(n%s.length()==0)
            {
                iter=s.length();
                pS=s;
                count+=1;
            }
            s+=pS;
            count++;
        }
        return count;
    }
};
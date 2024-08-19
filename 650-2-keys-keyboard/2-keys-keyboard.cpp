class Solution {
public:
    int minSteps(int n) {
        string s="A";
        int iter=0,count=0;
        while(s.length()<n){
            if(n%s.length()==0)
            {
                iter=s.length();
                count+=1;
            }
            int k=iter;
            while(k--){
                s+='A';
            }
            count++;
        }
        return count;
    }
};
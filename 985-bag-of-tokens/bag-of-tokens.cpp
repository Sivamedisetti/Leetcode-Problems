class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int s=0,m=0;
        int n=tokens.size();
        sort(tokens.begin(),tokens.end());
        if(n==0 or power<tokens[0])return 0;
        else{
            power-=tokens[0];
            s+=1;
            m=max(m,s);
            power+=tokens[n-1];
            s--;
            int i=1,j=n-2;
            while(i<n and j>0){
                if(tokens[i]>power){
                    s--;
                    // m=max(m,s);
                    if(i<=j){
                        power+=tokens[j--];
                    }
                    else{
                        break;
                    }
                }
                else{
                    s++;
                    m=max(m,s);
                    power-=tokens[i++];

                }
            }
            
            return m;
        }
    }
};
class Solution {
public:
    int maxDepth(string s) {
        int c=0,m=0;
        for(auto it:s){
            if(it=='('){
                c+=1;
            }
            else if(it==')'){
                 m=max(m,c);
                 c--;
            }
        }
        return m;
    }
};
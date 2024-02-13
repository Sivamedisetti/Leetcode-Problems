class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto it:words){
            int n=it.size(),f=0;
            cout<<endl;
            for(int i=0;i<n/2;i++){
               
                if(it[i]!=it[n-1-i]){
                    f=1;
                    break;
                }
            }
                if(f==0)return it;

        }
        return "";
    }
};
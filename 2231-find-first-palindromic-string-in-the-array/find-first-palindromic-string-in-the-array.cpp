class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto it:words){
            if(it == string(it.rbegin(),it.rend())) return it;
        }
        return "";
    }
};
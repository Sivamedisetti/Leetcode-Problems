class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mpp;
        unordered_map<char,char>mp;
        for(int i=0;i<s.size();i++){
            if (mpp[s[i]] && mpp[s[i]] != t[i]) return false;
            if (mp[t[i]] && mp[t[i]] != s[i]) return false;
            mpp[s[i]] = t[i];
            mp[t[i]] = s[i];
        }
        return true;
    }
};
class Solution {
public:
    long long minimumSteps(string s) {
        
        long long ans = 0;
        int addon = 0;
        for(auto it: s)
        {
            if(it == '1')
            {
                addon += 1;
            }
            else
            {
                ans += addon;
            }
        }
        return ans;
    }
};
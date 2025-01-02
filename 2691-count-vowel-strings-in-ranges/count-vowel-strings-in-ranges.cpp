class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
      int len = words.size();
        vector<int>arr(len,0);
        vector<int>ans;
        int point = 0;
        for(int it = 0; it<len; it++)
        {
            int l = words[it].length()-1;
            if((words[it][0]=='a' or words[it][0]=='e' or words[it][0]=='i' or words[it][0]=='o' or words[it][0]=='u') and 
            (words[it][l]=='a' or words[it][l]=='e' or words[it][l]=='i' or words[it][l]=='o' or words[it][l]=='u') )
            {
                point++;
            }
            arr[it] = point;
        }

        int cnt;
        for(auto it:queries)
        {
            cnt = 0;
            if(it[0]-1>=0)
            {
                cnt+=( arr[it[1]]-arr[it[0]-1]);
            }
            else
            {
                cnt+=arr[it[1]];
            }
            ans.push_back(cnt);
        }
        
        return ans;
    }
};
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        int a=1;
        for(int i=1;i<=9;i++)
        {
            int a=i,b=i+1;
            while(a<=high && b<=9)
            {
                a=a*10+b;
                if(a>=low and a<=high)
                {
                    ans.push_back(a);
                }
                else if(a>high)break;
                b++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
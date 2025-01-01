class Solution {
public:
    int maxScore(string s) {
        int left =0,right=1;
        int rightcnt=0,leftcnt=0, score=0, maxiscore=0;

        while(right<s.length())
        {
            leftcnt = 0,rightcnt = 0;
            for(int i = left; i<right;i++)
            {
                if(s[i]=='0')
                {
                    leftcnt++;
                }
            }
            for(int j = right; j<s.length();j++)
            {
                if(s[j]=='1')
                {
                    rightcnt++;
                }
            }
            score = leftcnt+rightcnt;
            maxiscore = max(score,maxiscore);
            score = 0;
            right++;
        }
        return maxiscore;

    }
};
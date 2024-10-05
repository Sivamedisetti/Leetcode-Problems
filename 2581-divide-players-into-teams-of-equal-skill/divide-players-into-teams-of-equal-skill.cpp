class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int i = 0, j = skill.size()-1;

        int k= accumulate(skill.begin(),skill.end(),0);
        cout<<k<<endl;
        k = k/(skill.size()/2);
        cout<<k;
        long long ans=0;
        while(i<j)
        {
            if(skill[i]+skill[j]!=k)return -1;
            else
            {
                ans+=skill[i]*skill[j];
            }
            i++ , j--;
        }
        return ans;
    }
};
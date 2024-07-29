class Solution {
public:
    int numTeams(vector<int>& rating) {
        int cnt=0;
        int n=rating.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if((rating[i]>rating[j]) and (rating[j]>rating[k])) cnt++;
                    else if((rating[i]<rating[j]) and (rating[j]<rating[k])) cnt++;
                }
            }
        }
        return cnt;
    }
};
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int time=customers[0][0];
        double ans=0;
        for(auto it:customers){
            if(time<it[0]){
                time=it[0];
                time+=it[1];
                ans+=time-it[0];
            }
            else{
                time+=it[1];
                ans+=time-it[0];

            }
        }
        int size=customers.size();
        ans=ans/size;
        return ans;
    }
};
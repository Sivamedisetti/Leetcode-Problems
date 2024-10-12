class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        
        int minMumGrp = 0;
        sort(intervals.begin(), intervals.end());
        priority_queue<int, vector<int>, greater<int>>pq;

        pq.push(intervals[0][1]);

        for(int i = 1; i < intervals.size(); i++){

            if(intervals[i][0] > pq.top())
            {
                pq.pop();
                pq.push(intervals[i][1]);
            }
            else
            {
                pq.push(intervals[i][1]);
            }
          
        }
        while(!pq.empty())
        {
            minMumGrp++;
            pq.pop();
        }
        return minMumGrp;
    }
};
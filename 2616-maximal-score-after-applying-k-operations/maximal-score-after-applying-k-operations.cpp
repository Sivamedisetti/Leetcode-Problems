class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        
        long long sum = 0;
        priority_queue<int>pq;

        for(auto it:nums)
        {
            pq.push(it);
        }

        while(k--){
            sum += pq.top();
           int newval = ceil((double)pq.top()/3);
            pq.pop();
            pq.push(newval);
        }

        return sum;
    }
};
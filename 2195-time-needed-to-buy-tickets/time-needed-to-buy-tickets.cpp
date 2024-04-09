class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0,n=tickets.size(),f=tickets[k];  
        for(int i=0;i<n;i++){
            if(i<k){
                if(tickets[i]<=f)
                {
                  ans+=tickets[i]; 
                }
                else
                {
                    ans+=f;
                }
            }
            else if(i==k)
            {
                ans+=f;
            }
            else{

                if(tickets[i]<f)
                {
                  ans+=tickets[i]; 
                }
                else
                {
                    ans+=f-1;
                }
            }
        }
        return ans;
    }
};
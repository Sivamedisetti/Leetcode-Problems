class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP=0;
        int i=1,j=0;
        while(i<prices.size()){
            if(prices[j]<prices[i]){

                int dif=prices[i]-prices[j];
                maxP=max(maxP,dif);
            }
            else{
                 j=i;
            }
            i++;
        }
        return maxP;
    }

};
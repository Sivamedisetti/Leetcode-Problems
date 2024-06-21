class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int k=minutes-1;
        int inSatCus=0;
        int maxSatCus=0,sum=0;
        for(int i=0;i<customers.size();i++){
            if(grumpy[i]==0){
                inSatCus+=customers[i];
            }
        }  
        int j=0;
        for(int i=0;i<customers.size();i++){
            if(grumpy[i]==1){
                sum+=customers[i];
            }
            if(i==k){
                maxSatCus=max(maxSatCus,sum);
                if(grumpy[j++]==1){
                    sum-=customers[j-1];
                }
                k++;

            }
        }
        return inSatCus+maxSatCus;
    }
};
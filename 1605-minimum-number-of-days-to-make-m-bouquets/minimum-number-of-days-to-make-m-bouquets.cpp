class Solution {
public:
    bool isPossible(vector<int>&arr,int day,int m,int k){
        int n=arr.size(),count=0,noB=0;

        for(int i=0;i<n;i++){
            if(day>=arr[i]){
                count++;
            }
            else{
                noB+=(count/k);
                count=0;
            }
        }
        noB+=count/k;
        return noB>=m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long long val = m * 1LL * k * 1LL;
        if(val>n)return -1;

        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++ ){
           mini= min(bloomDay[i],mini);
           maxi= max(bloomDay[i],maxi);
        }        
        int low=mini,high=maxi;
        while(low<=high){

            int mid =(low+high)/2;
            if(isPossible(bloomDay,mid,m,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;




        
    }
};

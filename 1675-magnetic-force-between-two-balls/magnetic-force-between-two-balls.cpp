auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();

class Solution {
public:
      bool isPossiblePlace(vector<int>&arr,int m,int f){
       int last=arr[0];
       int count=1;
       for(int i=0;i<arr.size();i++){
        if(arr[i]-last >=f){
            last= arr[i];
            count++;
            if(count==m)return true;
        }

       }
       return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int optimal=0;
        int low=1;
        int high=position[position.size()-1];
        while(low<=high){
            int mid=(low+high)/2;
            if(isPossiblePlace(position,m,mid)){
                optimal=mid;
                low= mid+1;
            }
            else{
                high =mid-1;
            }
        }
        return optimal;
    }
};
